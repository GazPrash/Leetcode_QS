import random as rd

a = []
strr1 = ""
strr2 = ""
i = 1
for i in range(9980):
    a.append(rd.randint(-10e5, 10e5))

    # strr1 += (str(rd.randint(0, 9)))
    # strr2 += (str(rd.randint(0, 9)))


# print(strr1)
# print(strr2)

print(a)