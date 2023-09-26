//
// Created by Kamal Ghimire on 9/5/23.
//

#include "AssortedSorter.h"

//Declaring sort which as constant reference vector<int>
// &itemsToSort is a function with reference parameter
std::vector<int> sort(const std::vector<int> &itemsToSort);
//declaring member function to get the name what sort we are using
std::string getName();

//Defining a custom output stream insertion operator ("<<") overload
std::ostream &operator<<(std::ostream &out, const AssortedSorter &sorter) {
    return sorter.printInfo(out);
}

std::ostream &printInfo(std::ostream &out);



