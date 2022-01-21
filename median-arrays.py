# class Solution:

def findMedianSortedArrays(nums1, nums2):
    nums1.extend(nums2)
    nums1.sort()
    
    size = len(nums1)
    if size%2 == 0:
        median = (nums1[(size-1)//2])/2 + (nums1[((size-1)//2)+1])/2
        return median
    else:
        median = nums1[(size)//2]
        return median


    # return median

a = [1, 2, 5]
ab = [3, 9, 6]
# print(len(a))    

print(findMedianSortedArrays(a, ab))