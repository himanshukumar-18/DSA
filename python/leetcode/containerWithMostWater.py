# container with most water

def maxArea(height):
    maxWater = 0
    left_pointer = 0
    right_pointer = len(height) - 1

    while left_pointer < right_pointer:
        w = right_pointer - left_pointer
        h = min(height[left_pointer], height[right_pointer])
        current_water = w * h
        maxWater = max(maxWater, current_water)
        
        if height[left_pointer] < height[right_pointer]:
            left_pointer += 1
        else:
            right_pointer -= 1
    
    return maxWater

height = [1, 8, 6, 2, 5, 4, 8, 3, 7]
print(maxArea(height))
