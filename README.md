# Daily Coding Problem
C++ (and probably Python) implementations of problems posed by the Daily Coding Problems site

**[Coding Problem #1 - [easy]](https://github.com/RossSusic/dailycodingproblem/blob/master/001/sum2.cpp "Asked by Google - [easy]")**

This problem was recently asked by _Google_.

Given a list of numbers and a number k, return whether any two numbers from the list add up to ```k```.
For example, given ```[10, 15, 3, 7]``` and ```k = 17```, return true, since ```10 + 7 = 17```.

* [x] Bonus: Can you do this in one pass?

---

**[Coding Problem #2 - [easy]](https://github.com/RossSusic/dailycodingproblem/blob/master/002/uber.cpp "Asked by Uber - [easy]")**

This problem was asked by _Uber_.

Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

For example, if our input was ```[1, 2, 3, 4, 5]```, the expected output would be ```[120, 60, 40, 30, 24]```. If our input was ```[3, 2, 1]```, the expected output would be ```[2, 3, 6]```.

Follow-up: what if you can't use division?

**[Coding Problem #3 - [hard]])**

This problem was asked by Google.

Given the root to a binary tree, implement serialize(root), which serializes the tree into a string, and deserialize(s), which deserializes the string back into the tree.

For example, given the following Node class

class Node:
    def __init__(self, val, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

The following test should pass:

node = Node('root', Node('left', Node('left.left')), Node('right'))
assert deserialize(serialize(node)).left.left.val == 'left.left'

---

**[Coding Problem #4 - [easy]](https://github.com/RossSusic/dailycodingproblem/blob/master/004/first.cpp "Asked by Stripe - [easy]")**

This problem was asked by Stripe.

Given an array of integers, find the first missing positive integer in linear time and constant space. In other words, find the lowest positive integer that does not exist in the array. The array can contain duplicates and negative numbers as well.

For example, the input ```[3, 4, -1, 1]``` should give ```2```. The input ```[1, 2, 0]``` should give ```3```.

You can modify the input array in-place.

---
