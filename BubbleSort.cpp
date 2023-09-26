//
// Created by Kamal Ghimire on 9/5/23.
//

#include <iostream>
#include "BubbleSort.h"
#include <iomanip>

//defining BubbleSort that was inherit and override from base class
//BubbleSort Operations
std::vector<int> BubbleSort::sort(const std::vector<int> &itemsToSort) {

    std::vector<int> sortedItems = itemsToSort;
    int size = sortedItems.size();
    int maxElement;
    int index;
    loopCount = 0, swapCount = 0;
    int tempItem;
    for (maxElement = size - 1; maxElement > 0; maxElement--) {
        for (index = 0; index < maxElement; index++) {
            loopCount++;
            if (sortedItems[index] > sortedItems[index + 1]) {

                tempItem = sortedItems[index];
                swapCount++;
                sortedItems[index] = sortedItems[index + 1];
                sortedItems[index + 1] = tempItem;

            }
        }
    }
    return sortedItems;
}
//Constructor defination
BubbleSort::BubbleSort() {
}

//Defining getName function which return the name of the sort we are using for output
std::string BubbleSort::getName() const {
    return "Bubble Sort";
}

//Defining getLoopCounter which return the loopcount how many the loop has executed.
int BubbleSort::getLoopCount() const {
    return loopCount;
}
//Defining the swapCount and return how many the swap has performed
int BubbleSort::getSwapCount() const {
    return swapCount;


}

// Operator overLoading for output using printInfo
std::ostream &BubbleSort::printInfo(std::ostream &out) const {
    out << std::setw(20) << this->getLoopCount() << std::setw(25) << this->getSwapCount();
    return out;
}





