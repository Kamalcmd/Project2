//
// Created by Kamal Ghimire on 9/5/23.
//

#ifndef CS226PROJECT2_BUBBLESORT_H
#define CS226PROJECT2_BUBBLESORT_H

#include "AssortedSorter.h"
//deriving class from base class AssortedSorter
class BubbleSort : public AssortedSorter {
private:
    long loopCount;
    long swapCount;

public:
    //Constructor
    BubbleSort();
    // Overriding the virtual function from base class
    std::vector<int> sort(const std::vector<int> &itemToSort) override;
    //Overriding getName function from base class
    std::string getName() const override;

    //declaring accessor loopCount and SwapCount
    int getLoopCount() const;
    int getSwapCount() const;

    //Overriding printInfo from base class
    std::ostream &printInfo(std::ostream &out) const override;
};


#endif //CS226PROJECT2_BUBBLESORT_H
