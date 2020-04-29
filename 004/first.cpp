// This problem was asked by Stripe.
//
// Given an array of integers, find the first missing positive integer in linear 
// time and constant space. In other words, find the lowest positive integer that
// does not exist in the array. The array can contain duplicates and negative 
// numbers as well.
//
// For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should 
// give 3.
//
// You can modify the input array in-place.

#include <cassert>
#include <cstddef>
#include <iostream>
#include <vector>

int find_first_positive_missing_int(const std::vector<int>& numbers) {
    std::vector<int> positive ;
    
    // Remove all negative numbers - Don't add them to the new array
    for (const auto& num : numbers) {
        if (num > 0) positive.push_back(num);
    }

    if (!positive.size()) return 1 ;

    // 
    for (std::size_t i = 0; i < positive.size(); i++) {
        auto currVal = positive.at(i);
//         if (currVal == 0) continue;
                
        // Check for less or equal to than array size
        if (abs(currVal) <= static_cast<int>(positive.size())) {
            // Change the value of the currVal location to negative
            positive.at(abs(currVal) - 1) = -abs(positive.at(abs(currVal) - 1));
        }
    }
 
    // The index of the first positive number in the list is the missing integer.
    for (std::size_t i = 0; i < positive.size(); i++) {
        if (positive.at(i) > 0) return i + 1;
    }

    // There was no missing integer, so it'll be the size of the array
    return positive.size() + 1 ;
}

int main() {
    std::cout << "{4, 3, -1, 1}: " << find_first_positive_missing_int({4, 3, -1, 1}) << std::endl ;
    std::cout << "{1, 2, 0}: " << find_first_positive_missing_int({1, 2, 0}) << std::endl ;
    std::cout << "{1, 2, 12, 39, 4, 8, 3, 7}: " << find_first_positive_missing_int({1, 2, 12, 39, 4, 8, 3, 7}) << std::endl ;
    std::cout << "{1, 2, 3}: " << find_first_positive_missing_int({1, 2, 3}) << std::endl ;
    std::cout << "{0, 4, 3, -1, 1}: " << find_first_positive_missing_int({0, 4, 3, -1, 1}) << std::endl ;
    std::cout << "{2, 0, -1, -2}: " << find_first_positive_missing_int({2, 0, -1, -1}) << std::endl ;
    std::cout << "{-1, -2, -3}: " << find_first_positive_missing_int({-1, -2, -3}) << std::endl ;
    
    return 0;
}
