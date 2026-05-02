#max sub array

def maxsubarray(nums):
    curSum = 0
    maxSum = float("-inf")
    
    for val in nums:
        curSum += val
        maxSum = max(curSum, maxSum)
        
        if curSum < 0:
            curSum = 0
    return maxSum

nums = list(map(int, input("Enter nums elements: ").split()))
print("Output: ",maxsubarray(nums))