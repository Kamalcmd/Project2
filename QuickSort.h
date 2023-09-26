//
// Created by Kamal Ghimire on 9/14/23.
//

#ifndef SEP14_QUICKSORT_H
#define SEP14_QUICKSORT_H
#include <iostream>
#include "AssortedSorter.h"

//QuickSort  inherits from base class AssortedSorter
class QuickSort: public AssortedSorter{
private:
    long loopCount;
    long swapCount;

public:
    //Constructor
    QuickSort();
    // Overriding the virtual function from base class
    std::vector<int> sort(const std::vector<int> &itemToSort) override;
    //Overriding getName function from base class
    std::string getName() const override;

    //declaring accessor loopCount and SwapCount
    int getLoopCount() const;
    int getSwapCount() const;

    //Overriding printInfo from base class
    std::ostream &printInfo(std::ostream &os) const override;

    //Declaring partition function with three argument
    int partition( std::vector<int> &itemToSort,int start, int stop) ;
};


#endif //SEP14_QUICKSORT_H
