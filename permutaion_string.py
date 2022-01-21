from collections import Counter

def checkInclusion(s1, s2):
    # if s1 > s2:
    #     return False

    mapped_data = Counter(s1)
    i = 0
    iter = 0
    soln = False
    while i <= (len(s2) - len(s1)):
        for val in list(mapped_data.values()):
            if val == 0:
                soln = True
            else:
                soln = False
                break
        
        if soln:
            return True

        if s2[i] in mapped_data:
            print(list(mapped_data.values()))
            mapped_data[s2[i]] -= 1
            if mapped_data[s2[i]] < 0:
                i = iter + 1
                iter+=1

        i+=1

    return False

checkInclusion("hello", "calhello")

# HEL HELLSDA