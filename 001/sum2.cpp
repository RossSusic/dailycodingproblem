// Tests a list to see if any combination of numbers adds up to k.

// This problem was recently asked by Google.

// Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
// For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

// Bonus: Can you do this in one pass?

#include <vector>
#include <iostream>

// Updated to remove 'using' directives

// Updated to more efficiently add the complements to check. Will only work until the answer is found.
bool solution (std::vector<int> a, int k) {
    int i, j ;
    std::vector<int> b ;

    for (std::size_t i = 0 ; i < a.size() ; i++) {
        if (b.size() == 0) b.push_back (k - a.at(i)) ;
        std::size_t arr_size = b.size() ;
        for (std::size_t j = 0; j < arr_size ; j++) {
            if (a.at(i) == b.at(j)) return true ;
            else b.push_back (k - a.at(i)) ;
        }
    }

    return false ;
}

int main (int argc, char **argv) {

    std::vector<int> a{10, 5, 3, 7} ;
    int k = 17 ;
    int i ;

    if (solution (a, k)) {
        std::cout << "Yes, the array does have two elements adding to " << k << std::endl ;
    } else {
        std::cout << "No, the array does not have two elements adding to " << k << std::endl ;
    }

    return 0 ;
}