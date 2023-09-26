
#include <iostream>
#include "AssortedSorter.h"
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "QuickSort.h"
#include "AssortedSorterTest.h"
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

//Main Method
int main() {
    //object of a class derived from BubbleSort, SelectionSort, QuickSort and then assigning it to a pointer variable.
    AssortedSorter &bubbleSort = *(new BubbleSort());
    AssortedSorter &selectionSort = *(new SelectionSort());
    AssortedSorter &quickSort = *(new QuickSort());

    int N = 1000;
    std::vector<int> randomNumbers;

    std::cout << "SORT ALGORITHM EFFICIENCY" << endl;
    std::cout << "ALGORITHM" << "\t\t\t\t" << "LOOP COUNT" << "\t\t\t\t" << "DATA MOVEMENT" << endl;

    //Loop for iterating N where N is: 1000,2000,4000,8000, and 16000
    for (int index = 0; index < 5; index++) {
        //Generating Random Number
        std::srand(std::time(0));
        for (int iValue = 0; iValue < N; iValue++) {
            randomNumbers.push_back(std::rand() % 1000000 + 1);
        }
    //Invoking the sort method and passing randomNumber
        selectionSort.sort(randomNumbers);
        bubbleSort.sort(randomNumbers);
        quickSort.sort(randomNumbers);

    //Printing according to output format
        cout << N << endl;
        cout << bubbleSort.getName() << std::setw(0.25) << bubbleSort <<endl;
        cout << selectionSort.getName() << std::setw(0.25) << selectionSort <<endl;
        cout << quickSort.getName() << std::setw(0.25) << quickSort <<endl<<endl;
        N = N * 2;
    }

    //Test Case
    if (AssortedSorterTest::testSort(bubbleSort)){
        cout<<"BubbleSort Test Result: True"<<endl;
    }
    else{
        cout<<"BubbleSort Test Result: False"<<endl;
        exit(0);
    }
    //cout<<AssortedSorterTest::testSort(bubbleSort);
    if(AssortedSorterTest::testSort(selectionSort))
        cout<<"SelectionSort Test Result: True"<<endl;
    else{
        cout<<"SelectionSort Test Result: False"<<endl;
        exit(0);
    }
    //cout<<AssortedSorterTest::testSort(selectionSort);
    if(AssortedSorterTest::testSort(quickSort))
        cout<<"QuickSort Test Result: True"<<endl;
    else{
        cout<<"QuickSort Test Result: False"<<endl;
        exit(0);
    }

    return 0;
}


