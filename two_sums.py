inp_arr = [3, 3]
# target = 70


def soulution(nums, target):
    res = []
    for index, element in enumerate(nums):
        res.append((index, element))    

    for (i,j) in res:
        for (k,l) in res:
            if i != k and j+l == target:
                return (list([i, k]))

        

    

print(soulution(inp_arr, 6))