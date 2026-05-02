#majorityElement -> https://leetcode.com/problems/majority-element/

#Time Complexity: O(n)
#Space Complexity: O(1)

def majorityElements(nums):
    freq = 0
    ans = 0
    
    for i in range(len(nums)):
        if freq == 0:
            ans = nums[i]
            
        if ans == nums[i]:
            freq += 1
        else:
            freq -= 1
    return ans

el = [3, 2, 3]
result = majorityElements(el)
print(result)