# Check for BST

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given the** root** of a binary tree. Check whether it is a BST or not.

A **BST** is defined as follows:

- The left subtree of a node contains only nodes with data less than the node's data.
- The right subtree of a node contains only nodes with data greater than the node's data.
- Both the left and right subtrees must also be binary search trees.

**Examples:**

```
Input: root = [2, 1, 3, N, N, N, 5]

Output: true 
Explanation: The left subtree of every node contains smaller data and right subtree of every node contains greater data. Hence, the tree is a BST.

```

```
Input: root = [2, N, 7, N, 6, N, 9] 

Output: false 
Explanation: Since the node to the right of node with data 7 has lesser value 6, hence it is not a valid BST.
```

```
Input: root = [10, 5, 20, N, N, 9, 25]

Output: false
Explanation: The node with data 9 present in the right subtree has lesser key value than root node 10.
```

**Constraints:
**1 ≤ number of nodes ≤ 105
1 ≤ node->data ≤ 109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-06-19T17:19:42.891Z  

```cpp
class Solution {
  public:
  
    bool check(Node* root, long long minVal, long long maxVal) {
        if (root == NULL)
            return true;

        if (root->data <= minVal || root->data >= maxVal)
            return false;

        return check(root->left, minVal, root->data) &&
               check(root->right, root->data, maxVal);
    }

    bool isBST(Node* root) {
        return check(root, LLONG_MIN, LLONG_MAX);
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/check-for-bst/1)