# Programming Project #2

**INTRODUCTION**

The goal of this programming project is to give the student practice of writing a C++ class, using Abstract base
classes. How to format output for a class.

PROJECT TASKS
1. Read the problem definition below and write a C++ program that implements your solution. Readability of
   the program will be graded based on;

        a. variable naming,
        b. indentation,
        c. There should be comments at the following points
            i. At the beginning of the main to describe the purpose of the program
            ii. In the header files: before every public method and class to describe task, parameters, return
                values.
            iii. Throughout the code to discuss any complex logic.
        d. spacing,
        e. consistency
        f. If a method overrides a base class method the override key word must be used.
            g styling in general including choice of methods. 

    **[NOTE: the code at the end of this document does
   not completely meet requirements as it uses many single letter variables and has no internal
   documentation. You need to improve it.]**


2. Compile and test your program

3. Run the code and write test code.

4. All classes will be in separate cpp and h files (ie at least 11 files to make up this project)
   GOALS (or why are we doing this project)

         The following are the things to be learned or show you have learned by this project.
         • To learn parameters by reference.
         • Designing for testing.
         • Abstract base classes.
         • Learn how to use a class’s operator<<
   **FYI**
   
   The word list is used through the requirements for this project. List refers to any STL container or an array.

   **PROBLEM**

   Write a C++ program that has the following:

         A) An abstract class called AssortedSorter that has the following pure virtual methods:
             • virtual std::vector<int> sort(const std:: vector<int> &
                 itemsToSort)=0;
             • virtual std::string getName() const=0;
      
      
         B) A derived class BubbleSort derived from class AssortedSorter. Implement the BubbleSort algorithm given
             at the end of this document. The class must overrided the output operator operator<<
             The class must implement the bubble sort in the method sort. BubbleSort must have 2 instance variables of
             type long:
                 a. loopCount
                 b. swapCount
   
              • Put a statement to add one to the loop count just before “if (array[count] > array[count+1])”.
              • Put a statement to add one to the swap count just before “temp = array[index]”.
      
          C) A derived class SelectionSort of class AssortedSorter: Implement the Selection Sort algorithm given given
              at the end of this document. The class must overrided the output operator operator<<. You must implement
              the selection sort in the method sort. SelectionSort must have 2 instance variables of type long:
                  a. loopCount
                  b. swapCount
      
              • Put a statement to add one to the loop count just before the line “if (array[index] < minValue)”.
              • Put a statement to add one to the swap count just before line “array[minIndex] = array[startScan]”.
      
          D) A derived class QuickSort of class AssortedSorter: implement the non-recursive QuickSort algorithm
              given at the end of this document. You must implement the quick sort in the method sort. The class must
              overrided the output operator operator<<. QuickSort will also have a private method called
              partition(). QuickSort must have 2 instance variables of type long:
                  a. loopCount
                  b. swapCount
              • Put two statements to add one to the loop count in the partition() function in the inner while
                loops. The first will be just before up++ and the 2nd just before down--.
              • Put two statements to add one to the swap count in the partition() function next to each of
                the calls to the swap() function.
              • Pass: start is zero.
                stop is the number of elements minus 1.
      
          E) main():
              • In the main function, create 3 variables of type AssortedSorter reference:
                  o AssortedSorter& bubbleSort = *(new BubbleSort());
                  o AssortedSorter& quickSort = *(new QuickSort());
                  o AssortedSorter& selectSort = *(new SelectionSort());
              • Call AssortedSorterTest.testSort() on each variable of type AssortedSorter
                  reference.
                  Report if testSort does not return true and exit the program.
              • In the main() function, declare an list.
              o Fill the list with N random numbers. The numbers may are generated and stored in the list
               using the rand() function found in the cstdlib standard library. You also need the ctime
                 standard library to seed the time or any other way to generate random numbers.
              o The random number generator may look like this:
                    
                      std::srand(std::time(0));
                      for (int i = 0; i < UserNumOfNumbers; i++)
                          array[i] = std::rand()%1000000 + 1;
              • Call each derived class of AssortedSorter (bubbleSort, quickSort,
              selectSort)where N is: 1,000, 2,000, 4,000, 8,000 and 16,000. N is
              the size of the list of random number passed in. (Hint: this is a for loop)
            
Create a report that looks like the following using each derived 
class’s operator<< method:
   #   SORT ALGORITHM RUN EFFICIENCY
   
         ALGORITHM       LOOP COUNT       DATA MOVEMENT
         1,000:
         Bubble xxxxxxxxxx xxxxxxxxxx
         Selection xxxxxxxxxx xxxxxxxxxx
         Shell xxxxxxxxxx xxxxxxxxxx
         Quick xxxxxxxxxx xxxxxxxxxx
   
         2,000
         Bubble xxxxxxxxxx xxxxxxxxxx
         Selection xxxxxxxxxx xxxxxxxxxx
         Shell xxxxxxxxxx xxxxxxxxxx
         Quick xxxxxxxxxx xxxxxxxxxx
   
         4,000
         Bubble xxxxxxxxxx xxxxxxxxxx
         Selection xxxxxxxxxx xxxxxxxxxx
         Shell xxxxxxxxxx xxxxxxxxxx
         Quick xxxxxxxxxx xxxxxxxxxx
   
         8,000
         Bubble xxxxxxxxxx xxxxxxxxxx
         Selection xxxxxxxxxx xxxxxxxxxx
         Shell xxxxxxxxxx xxxxxxxxxx
         Quick xxxxxxxxxx xxxxxxxxxx
   
         16,000
         Bubble xxxxxxxxxx xxxxxxxxxx
         Selection xxxxxxxxxx xxxxxxxxxx
         Shell xxxxxxxxxx xxxxxxxxxx
         Quick xxxxxxxxxx xxxxxxxxxx
   
   
         F) Create a test class called AssortedSorterTest. AssortedSorterTest has one method testSort.
                    o bool testSort(AssortedSorter& assortedSorter);
                    pass it each AssortedSorter reference variable.
            a. AssortedSorterTest .testSort(AssortedSorter&) does the following:
                    o Creates an array of 200 random numbers.
                    Hint: To create a list of random numbers use the rand() function found in the cstdlib
                    standard library. You also need the ctime standard library to seed the time. The random
                    number generator may look like this:
                        std::srand(std::time(0));
                        for (int i = 0; i < UserNumOfNumbers; i++)
                            vector[i] = std::rand()%1000000 + 1;
                    o The method passes the created list to the sorter it is
      testing. When it gets the list back it will check the list to
      insure that:
            1. It contains the same number of elements as what was
            passed in.
            2. Test that the returned list is in order.
            3. Return true if 1 & 2 are true else return false.
 #  TESTING
   Write a test class AssortedSorterTest that will create an unsorted list, call the sort method on a AssortedSorter
   and check that the returned list is sorted.
