#Find Missing And Repeated Values -> https://leetcode.com/problems/find-missing-and-repeated-values/

#Time Complexity: O(n)
#Space Complexity: O(1)

def findMissingAndRepeatedValues(grid):
    n = len(grid)
    N = n * n
    
    sum_actual = 0
    sq_actual = 0
    
    for row in grid:
        for val in row:
            sum_actual += val
            sq_actual += val * val
    
    #expected value
    s = N * (N + 1) // 2
    sq = N * ( N + 1) * (2 * N + 1) // 6
    
    #equation
    diff = sum_actual - s
    sq_diff = sq_actual - sq
    
    sum_xy = sq_diff // diff
    
    x = (diff + sum_xy) // 2
    y = x - diff
    
    return [x, y]

grid = [[1, 3], [2, 2]]
print(findMissingAndRepeatedValues(grid))
