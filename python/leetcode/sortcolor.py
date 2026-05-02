#Sort color

def SortColor(nums):
    count0 = 0
    count1 = 0
    count2 = 0
    
    for val in nums:
        if val == 0:
            count0 += 1
        elif val == 1:
            count1 += 1
        else:
            count2 += 1
        
    idx = 0
    for i in range(count0):
        nums[idx] = 0
        idx += 1
        
    for i in range(count1):
        nums[idx] = 1
        idx += 1
    
    for i in range(count2):
        nums[idx] = 2
        idx += 1
    
nums = [2, 0, 2, 1, 1, 0]
SortColor(nums)
print(nums)