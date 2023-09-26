//
// Created by Kamal Ghimire on 9/12/23.
//
#include <iostream>
#include "SelectionSort.h"
#include <iomanip>

//defining SelectionSort that was inherit and override from base class
//SelectionSort Operations

std::vector<int> SelectionSort::sort(const std::vector<int> &itemsToSort) {

    std::vector<int> sortedItems = itemsToSort;
    int size = sortedItems.size();
    int minIndex;
    int minValue;
    loopCount = 0, swapCount = 0;
    int tempItem;
    for (int start = 0; start < (size - 1); start++) {
        minIndex = start;
        minValue = sortedItems[start];
        for (int index = start + 1; index < size; index++) {
            loopCount++;
            if (sortedItems[index] < minValue) {

                minValue = sortedItems[index];
                minIndex = index;
            }
        }
        swapCount++;
        tempItem = sortedItems[minIndex];
        sortedItems[minIndex] = sortedItems[start];
        sortedItems[start] = tempItem;
        //swap(sortedItems[minIndex],sortedItems[start]);
    }
    return sortedItems;

}
//Constructor defination
SelectionSort::SelectionSort() {

}
//Defining getName function which return the name of the sort we are using for output
std::string SelectionSort::getName() const {
    return "Selection Sort";
}
//Defining getLoopCounter which return the loopcount how many the loop has executed.
int SelectionSort::getLoopCount() const {
    return loopCount;
}
//Defining the swapCount and return how many the swap has performed
int SelectionSort::getSwapCount() const {
    return swapCount;
}

// Operator overLoading for output using printInfo
std::ostream &SelectionSort::printInfo(std::ostream &out) const {
    out << std::setw(17)<< this->getLoopCount() << std::setw(22) << this->getSwapCount();
    return out;
}

