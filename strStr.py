def strStr(haystack, needle):
    # if len(haystack)
    list_ind = []
    j = 0
    i = 0
    while i < len(haystack):
        while j < len(needle):
            if needle[j] == haystack[i]:
                list_ind.append(i)
                j+=1
                break

            else:
                j = 0
                list_ind.clear()
                break

        i+=1

    return list_ind[0]

        
# strStr("mississipi", "iss")



test_list = []

startTime = [1,2,3,3] 
endTime = [2,4,5,6]
j = 0
for i in startTime:
    test_list.append((i, endTime[j]))
    j+=1

print(test_list)

test_tup = ()
print(test_tup)
res = []
i = 1
for tup in test_list:
    while i < len(test_list):
        test_tup = test_list[i]    
        if(tup[1] > test_tup[0] and tup[0] < test_tup[1]):
            res.append(tup)
        i+=1

print(res)