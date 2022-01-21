def thridMax(nums):
    if len(nums) < 3:
        return max(nums)
        
    setnum = list(set(nums))
    setnum.sort()

    return setnum[2]

