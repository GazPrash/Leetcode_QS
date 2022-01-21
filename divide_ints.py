
def cut_again(current_sum, deno, num, count, posve_managed):

    if current_sum - deno <= num and posve_managed:
        if count-1 > 2**31-1:
            return 2**31-1
        else:
            return count-1
    
    elif current_sum - deno <= num and not posve_managed:
        if count-1 > 2**31:
            return 2**31-1
        else:
            return 1-count
    
    else:
        current_sum -= deno
        count -= 1
        cut_again(current_sum, deno, num, count, posve_managed)


def divide(dividend, divisor):
    posve_managed = False

    if (dividend < 0 and divisor < 0) or (dividend > 0 and divisor > 0):
        posve_managed = True
    else:
        posve_managed = False


    if abs(divisor) == 1 and abs(dividend) <= 2**31:
        if posve_managed:
            return abs(dividend)
        else:
            if divisor < 0:
                return -dividend
            else:
                return dividend
    
    elif dividend > 2**31:
        return 2**31 - 1
    

    num = abs(dividend)
    deno = abs(divisor)
    
    current_sum = 0
    count = 0

    while current_sum <= num:
        current_sum += deno
        count += 1

    answer = cut_again(current_sum, deno, num, count, posve_managed)
    return answer

print(divide(1, 2))