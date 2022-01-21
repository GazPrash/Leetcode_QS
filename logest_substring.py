# import random
# def lengthOfLongestSubstring(s):
#     char_list = []
#     counter_list = [0]
#     comb_list = []
#     j = 0

#     loop_len = len(s)-1
#     str_ = ""

#     def permutation(x):
#         if x == 1 or x == 0:
#             return 1
#         return x * permutation(x-1)

#     for i in s:
#         if i not in char_list:
#             char_list.append(i)

#     # ordered_set_words = set(char_list)
#     total_comb = permutation(len(char_list))

#     # for i in ordered_set_words:
#     #     str_ += i
#     #     print(str_)
#     #     if str_ in s:
#     #         counter_list.append(len(str_))

#     # for i in range(0, total_comb+1):

#     while j <= total_comb:
#         random.shuffle(char_list)
#         sample = char_list
#         print(sample)
#         if sample not in comb_list:    
#             j+=1
#             for i in sample:
#                 str_ += i
#                 if str_ in s:
#                     counter_list.append(len(str_))





#     print(char_list)

#     # if str_ in s:
#     #     print(len(str_))
    
#     print(max(counter_list))



# string = "dvdf"
def lengthOfLongestSubstring(s):
    char_list = []
    str_ = ""
    i = 0
    j = 0
    count = []

    if len(s) == 0:
        return 0

    while i <= len(s)-1:
        # print(i, j)
        
        if i == len(s)-1:
            if s[i] not in char_list:
                str_ += s[i]
                count.append(len(str_))
                i+=1
            else:
                count.append(len(str_))
                i+=1


        elif s[i] not in char_list and i!= len(s)-1:
            print(f"THIS I: {i}")
            print(s[i], s[i+1])
            str_ += s[i]
            # str_ += s[i+1]
            print(str_)
            char_list.append(s[i])
            i += 1


        else:
            j += 1
            i = j
            char_list.clear()
            print(len(str_))
            count.append(len(str_))
            str_ = ""


    
    return max(count)

print(lengthOfLongestSubstring("dvdfsdasda"))
# lengthOfLongestSubstring("dvdf")