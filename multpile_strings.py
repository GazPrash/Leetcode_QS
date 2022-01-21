def multiply(num1, num2):
    refer = {
        '1' : 1,
        '2' : 2,
        '3' : 3,
        '4' : 4,
        '5' : 5,
        '6' : 6,
        '7' : 7,
        '8' : 8,
        '9' : 9,
        "0" : 0

    }
    
    iterator1 = len(num1)-1
    i = 0
    sum1 = 0
    for chars in num1:
        if (iterator1-i) < 0:
            break
        sum1 += refer[chars]*(10**(iterator1-i))
        # print(sum1)
        i+=1

    iterator2 = len(num2)-1
    j = 0
    sum2 = 0
    for chars in num2:
        if (iterator2-j) < 0:
            break
        sum2 += refer[chars]*(10**(iterator2-j))
        j+=1

    return sum1*sum2


num1 = "123"
num2 = "456"

print(multiply(num1, num2))