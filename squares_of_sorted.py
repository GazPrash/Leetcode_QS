def sortedSquares(nums):
    new_list = [abs(x**2) for x in nums]
    new_list.sort()
    return new_list