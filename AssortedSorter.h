//
// Created by Kamal Ghimire on 9/5/23.
//

#ifndef CS226PROJECT2_ASSORTEDSORTER_H
#define CS226PROJECT2_ASSORTEDSORTER_H


#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

class AssortedSorter {
private:

public:
    //Declaring a pure virtual function
    virtual std::vector<int> sort(const std::vector<int> &itemsToSort) = 0;
    //Declaring a pure virtual function
    virtual std::string getName() const = 0;
    //Declaring friend function to overload operator "<<"
    friend std::ostream &operator<<(std::ostream &out, const AssortedSorter &sorter);
    //Declaring pure virtual function &printInfo(std::ostream & os) is declaring a member function "printInfo",
    // std::ostream &os: A reference to an output stream
    virtual std::ostream &printInfo(std::ostream &out) const = 0;


};


#endif //CS226PROJECT2_ASSORTEDSORTER_H
