// Tests a list to see if any combination of numbers adds up to k.

// This problem was recently asked by Google.

// Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
// For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

// Bonus: Can you do this in one pass?

#include <vector>
#include <iostream>

using namespace std ;

bool solution (vector<int> a, int k) {
    int i, j ;
    vector<int> b ;

    for (i=0; i<a.size(); i++) {
        b.push_back (k - a[i]) ;
    }
    for (i=0; i<b.size() ; i++) {
        cout << a[i] << " " << b[i] << endl ;
    }

    for (i = 0 ; i<a.size(); i++) {
        for (j = 0 ; j<a.size() ; j++) {
            if (i != j) {
                if (a[i] == b[j]) {
                    return true ;
                }
            }
        }
    }

    return false ;
}

int main (int argc, char **argv) {

    vector<int> a{10, 5, 3, 7} ;
    int k = 17 ;
    int i ;

    if (solution (a, k)) {
        cout << "Yes, the array does have two elements adding to " << k << endl ;
    } else {
        cout << "No, the array does not have two elements adding to " << k << endl ;
    }

    return 0 ;
}