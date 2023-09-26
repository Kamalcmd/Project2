//
// Created by Kamal Ghimire on 9/14/23.
//

#include "QuickSort.h"
#include <stack>
#include <iomanip>
//defining QuickSort that was inherit and override from base class
std::vector<int> QuickSort::sort(const std::vector<int> &arr) {
    loopCount=0;
    swapCount=0;
    int low = 0;
    int high = arr.size() - 1;
    std::stack<int> stack;

    // Push initial values of low and high onto the stack
    stack.push(low);
    stack.push(high);

    // Create a copy of the input vector to keep the original unmodified
    std::vector<int> sortedArr = arr;

    // Keep popping from the stack until it's empty
    while (!stack.empty()) {
        loopCount++;
        high = stack.top();
        stack.pop();
        low = stack.top();
        stack.pop();

        int pivotIndex = partition(sortedArr, low, high);

        // If there are elements on the left of the pivot, push them onto the stack
        if (pivotIndex - 1 > low) {
            stack.push(low);
            stack.push(pivotIndex - 1);
        }

        // If there are elements on the right of the pivot, push them onto the stack
        if (pivotIndex + 1 < high) {
            stack.push(pivotIndex + 1);
            stack.push(high);
        }
    }
    return sortedArr;

}
//defining the partition that was declared on header file
int QuickSort::partition( std::vector<int> &arr, int low, int high) {

    int pivot = arr[high]; // Choose the rightmost element as the pivot
    int iValue = (low - 1);     // Initialize the index of the smaller element
//Loop for
    for (int jValue = low; jValue < high; jValue++) {
        // If the current element is smaller than or equal to the pivot
        if (arr[jValue] <= pivot) {
            iValue++; // Increment the index of the smaller element
            std::swap(arr[iValue], arr[jValue]);
            swapCount++;
        }
    }

    // Swap the pivot element with the element at index (i + 1)
    std::swap(arr[iValue + 1], arr[high]);
    swapCount++;
    return (iValue + 1); // Return the index of the pivot element
}

//Constructor
QuickSort::QuickSort() {
}

//Defining getName function which return the name of the sort we are using for output
std::string QuickSort::getName() const {
    return "Quick Sort";
}
//Defining getLoopCounter which return the loopcount how many the loop has executed.
int QuickSort::getLoopCount() const {
    return loopCount;
}
//Defining the swapCount and return how many the swap has performed
int QuickSort::getSwapCount() const {
    return swapCount;


}

// Operator overLoading for output using printInfo
std::ostream &QuickSort::printInfo(std::ostream &out) const {
    out << std::setw(20) << this->getLoopCount() << std::setw(25) << this->getSwapCount();
    return out;
}

