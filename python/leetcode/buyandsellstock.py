# Best time to busy and sell stock

def maxProfit(prices):
    minPrice = float("inf")
    maxProfit = 0
    
    for amount in prices:
        minPrice = amount
        
    profit = prices - minPrice
    
    if profit > maxProfit:
        maxProfit = profit
    return maxProfit

result = maxProfit([7, 1, 5, 3, 6, 4])
print("PROFIT:", result)