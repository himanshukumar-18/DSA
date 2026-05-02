# find single number in array and check ascending order

def single_number(nums):
    ans = 0
    for value in nums:
        ans ^= value
    return ans


def is_ascending(nums):
    for i in range(1, len(nums)):
        if nums[i] < nums[i-1]:
            return False
    return True


result = single_number([2, 2, 1])
print("single number:", result)  # expected 1

arr = [1, 2, 3, 4, 5]
print("is ascending:", is_ascending(arr))  # expected True




