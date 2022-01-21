# // Given an array of non-negative integers nums, you are initially positioned at the first index of the array.
# // Each element in the array represents your maximum jump length at that position.
# // Your goal is to reach the last index in the minimum number of jumps.
# // You can assume that you can always reach the last index.



def jump(nums):
    recs = []
    count = 0
    for index, num in enumerate(nums):
        i = 0
        while index > 0:
            index += num - i
            i+=1
            count +=1
        print(count)
        recs.append(count) 

    print(min(recs))


nums = [2,3,0,1,4]

jump(nums)