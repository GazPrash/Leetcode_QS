def threeSumClosest(nums, target):
    num_list = []
    diff_val = []
    sum = 0
    counter_ = 0
    j = 0


    for i in nums:
        diff_val.append(abs(target - i))
        num_list.append(i)

    # print(diff_val, num_list)

    while counter_ < 3:
        print(diff_val, num_list)
        j = min(diff_val)
        print(j)
        note_ind = diff_val.index(j)
        print(f"NUMS ARE: {num_list[note_ind]}")
        sum += num_list[note_ind]
        num_list.remove(num_list[note_ind])
        diff_val.remove(j)
        counter_+=1

    print(sum)
    return sum


# Given an integer array nums of length n and an integer target, 
# find three integers in nums such that the sum is closest to target.
# Return the sum of the three integers.
nums = [0,2,1,-3]
target = 1

threeSumClosest(nums, target)

# print(min(-5, -15))
