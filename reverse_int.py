def reverse(x):
    sample = str(x)
    last_index = len(sample)-1
    n = len(sample)
    neg_val = False
    new_str = ""
    if sample[0] == '-':
        neg_val = True
    
    for i in range(0, n):
        new_str += sample[last_index - i]


    if neg_val:
        new_str = new_str[:last_index]
        ans =  int(new_str)
        if ans > 2**31:
            return 0 
        else:    
            return -int(new_str)

    else:
        ans = int(new_str)
        if ans > 2**31:
            return 0
        else:
            return int(new_str)


x = -123


print(reverse(x))