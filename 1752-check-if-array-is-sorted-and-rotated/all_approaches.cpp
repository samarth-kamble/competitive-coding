/*
    Problem    : Check if Array Is Sorted and Rotated
    LeetCode   : https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

    -------------------------------------------------------
    Approach-1 : Brute Force (Try Every Rotation)
    T.C        : O(n²)
    S.C        : O(1)

    Approach-2 : Optimal (Count Order Breaks)
    T.C        : O(n)
    S.C        : O(1)
    -------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

/*******************************************************
        Approach-1 (Brute Force - Try Every Rotation)
********************************************************/
class BruteForce {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();

        for (int start = 0; start < n; start++) {
            bool sorted = true;

            for (int i = 1; i < n; i++) {
                if (nums[(start + i - 1) % n] > nums[(start + i) % n]) {
                    sorted = false;
                    break;
                }
            }

            if (sorted)
                return true;
        }

        return false;
    }
};


/*******************************************************
        Approach-2 (Optimal - Count Order Breaks)
********************************************************/
class Optimal {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int breaks = 0;

        for (int i = 1; i < n; i++) {
            if (nums[i - 1] > nums[i])
                breaks++;
        }

        if (nums[n - 1] > nums[0])
            breaks++;

        return breaks <= 1;
    }
};
