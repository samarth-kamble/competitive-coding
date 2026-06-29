/*
    Problem    : Two Sum
    LeetCode   : https://leetcode.com/problems/two-sum/

    -------------------------------------------------------
    Approach-1 : Brute Force
    T.C        : O(n²)
    S.C        : O(1)

    Approach-2 : Better (Two-Pass Hash Map)
    T.C        : O(n)
    S.C        : O(n)

    Approach-3 : Optimal (One-Pass Hash Map)
    T.C        : O(n)
    S.C        : O(n)
    -------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

/*******************************************************
                Approach-1 (Brute Force)
********************************************************/
class BruteForce {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target)
                    return {i, j};
            }
        }

        return {};
    }
};


/*******************************************************
          Approach-2 (Better - Two Pass Hash Map)
********************************************************/
class Better {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++)
            mp[nums[i]] = i;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (mp.count(complement) && mp[complement] != i)
                return {i, mp[complement]};
        }

        return {};
    }
};


/*******************************************************
        Approach-3 (Optimal - One Pass Hash Map)
********************************************************/
class Optimal {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (mp.count(complement))
                return {mp[complement], i};

            mp[nums[i]] = i;
        }

        return {};
    }
};
