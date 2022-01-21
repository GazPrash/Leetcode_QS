def removeElement(nums, val):
    
    while val in nums:
        nums.remove(val)

    print(nums)
    return(nums)


nums = [3, 2, 2, 3]
val = 3


removeElement(nums, val)