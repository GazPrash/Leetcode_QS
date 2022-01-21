from itertools import permutations


def checkInclusion(s1, s2):
    if s1 in s2:
        return True

    if len(s1) > len(s2):
        return False

    perms = ["".join(tuples) for tuples in permutations(s1, len(s1))]


    print(perms)
    for options in perms:
        if options in s2:
            return True
        
    return False

print(checkInclusion("trin", "dinitrophenylhydrazinetrinitrophenylmethylnitramine"))


