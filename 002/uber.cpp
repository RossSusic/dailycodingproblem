// This problem was asked by _Uber_.
//
// Given an array of integers, return a new array such that each element at index i of the new array is the 
// product of all the numbers in the original array except the one at i.
//
// For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our 
// input was [3, 2, 1], the expected output would be [2, 3, 6].
//
// Follow-up: what if you can't use division?

#include <vector>
#include <iostream>

int main (int argc, char** argv) {
    int product = 1 ;
    std::vector<int> a{1, 2, 3, 4, 5} ;

//  Allowed to use division
//  for (std::size_t i = 0 ; i<a.size() ; i++) product *= a.at(i) ;
//  for (std::size_t i = 0 ; i<a.size() ; i++) cout << product / a.at(i) << " " ;

    // Solution not allowing divison - calculate by not including the element
    for (std::size_t i=0; i<a.size(); i++) {
        product = 1 ;
        for (std::size_t j=0 ; j<a.size() ; j++) {
            if (static_cast<int>(i) != static_cast<int>(j)) product *= a.at(j) ;
        }
        std::cout << product << " " ;
    }
    std::cout << std::endl ;

    return 0 ;
}