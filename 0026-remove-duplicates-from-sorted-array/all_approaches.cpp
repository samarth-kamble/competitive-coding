/*
    Problem    : Remove Duplicates from Sorted Array
    LeetCode   : https://leetcode.com/problems/remove-duplicates-from-sorted-array/

    -------------------------------------------------------
    Approach-1 : Brute Force (Using Extra Array)
    T.C        : O(n)
    S.C        : O(n)

    Approach-2 : Optimal (Two Pointers)
    T.C        : O(n)
    S.C        : O(1)
    -------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

/*******************************************************
      Approach-1 (Brute Force - Using Extra Array)
********************************************************/
class BruteForce {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty())
            return 0;

        vector<int> temp;
        temp.push_back(nums[0]);

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != temp.back())
                temp.push_back(nums[i]);
        }

        for (int i = 0; i < temp.size(); i++)
            nums[i] = temp[i];

        return temp.size();
    }
};


/*******************************************************
          Approach-2 (Optimal - Two Pointers)
********************************************************/
class Optimal {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty())
            return 0;

        int i = 1;

        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i - 1]) {
                nums[i] = nums[j];
                i++;
            }
        }

        return i;
    }
};
