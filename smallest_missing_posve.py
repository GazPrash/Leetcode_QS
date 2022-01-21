# Given an unsorted integer array nums, return the smallest missing positive integer.
# You must implement an algorithm that runs in O(n) time and uses constant extra space

# def firstMissingPositive(nums):
#     i = 0
#     j = 1
#     nums.sort()
    
#     while i <= len(nums):
#         if j < nums[-1] and j not in nums:
#             for num in nums:    
#                 if j < num:
#                     print(j)
#                     return 0

#         elif j > nums[-1] and j not in nums:
#             if nums[-1]>=0:
#                 print(nums[-1]+1)
#                 return 0
#             else:
#                 print(1)
#                 return 0

#         print(j)
#         j+= 1
# #         i+= 1


# ALT:

# import sys

# def firstMissingPositive(nums):
#     smallest_positive = sys.maxsize
#     for n in nums:
#         if n <= 0:
#             continue
#         smallest_positive = min(
#             smallest_positive, n
#         )
#     i = 0
#     if smallest_positive >= 2:
#         return 1
#     while i < len(nums):
#         if not nums[i]:
#             i += 1
#             continue
#         target_ind = nums[i] - 1
#         if target_ind == i:
#             i += 1
#         elif target_ind >= len(nums) or target_ind < 0:
#             nums[i] = None
#             i+=1
#         elif nums[target_ind] == nums[i]:
#             nums[i] = None
#             i+=1                
#         else:
#             nums[target_ind], nums[i] = nums[i], nums[target_ind]
#     for i, n in enumerate(nums):
#         if not n:
#             return i + 1
#     return len(nums) + 1



# print(firstMissingPositive([-5]))


#MY_ALT

def firstMissingPositive(nums):
    master = max(nums)
    set_num = set(nums)

    if master <= 0:
        return 1

    for i in range(1, master+2):
        if i not in set_num:
            return i

# BEST METHOD YET, 65% FASTER

