# Two Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** Java  
**Runtime:** 3 ms (beats 55.94%)  
**Memory:** 47.3 MB (beats 23.18%)  
**Submitted:** 2026-06-19T17:26:00.794Z  

```java
class Solution {
    public int[] twoSum(int[] nums, int target) {
        int mn=0;
        HashMap<Integer,Integer>mpp=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            mn=target-nums[i];
            if(mpp.containsKey(mn)){
                return new int[] {mpp.get(mn),i};
            }
            mpp.put(nums[i],i);
        }
        return new int[] {-1,-1};
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/two-sum/)