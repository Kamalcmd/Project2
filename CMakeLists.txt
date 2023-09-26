cmake_minimum_required(VERSION 3.26)
project(sep14)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(sep14
        AssortedSorter.cpp
        AssortedSorter.h
        AssortedSorterTest.cpp
        AssortedSorterTest.h
        BubbleSort.cpp
        BubbleSort.h
        main.cpp
        SelectionSort.cpp
        SelectionSort.h
        QuickSort.cpp
)
