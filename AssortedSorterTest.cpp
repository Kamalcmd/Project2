//
// Created by Kamal Ghimire on 9/12/23.
//

#include "AssortedSorterTest.h"
#include "ctime"
#include "cstdlib"

//Defining testSorter function
 bool AssortedSorterTest::testSort(AssortedSorter &assortedSorter) {
    std::vector<int> sorted;
    const int UserNumOfNumbers = 200;
    std::vector<int> numbers(UserNumOfNumbers);
    //generate random number
    std::srand(std::time(0));
    for(int iValue = 0; iValue < UserNumOfNumbers; iValue++){
        numbers[iValue]=(std::rand() % 1000000 + 1);
    }
    //Calling assorted Sorter function and initialize in sorted varaible
    sorted=assortedSorter.sort(numbers);
    //checking the sorted list length with given number of random number
    if(sorted.size()!= UserNumOfNumbers){
        return false;
    }
    //checking the sorted list with the same  provided value
    for(int iValue =1; iValue < UserNumOfNumbers; iValue++){
        if(sorted[iValue] < sorted[iValue -1]){
            return false;
        }
    }
    return true;

}
