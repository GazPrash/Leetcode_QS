import random
def findSubstring(s, words):
    list_of_str = []
    answer_list = []
    
    def permutation(x):
        if x == 1 or x == 0:
            return 1
        return x * permutation(x-1)

    x = len(list(set(words)))
    perms = permutation(x)
    i = 0
    while i != perms:
        print(perms, i)
        random.shuffle(words)        
        temp_word = [wor for wor in words]
        
        if words not in list_of_str:
            i+=1
            list_of_str.append(temp_word)
            sub_string = "".join(words)
            if sub_string in s:
                answer_list.append(s.index(sub_string))


    return answer_list

    
s = "lingmindraboofooowingdingbarrwingmonkeypoundcake"
words = ["fooo","barr","wing","ding","wing"]


print(findSubstring(s, words))




