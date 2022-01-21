from itertools import combinations

def combine(n, k):
    n_listed = [x for x in range(1, n+1)]
    combo = combinations(n_listed, k)

    return combo

    

combine(4, 2)
