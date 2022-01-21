def isBadVersion(x):
    if x == 4:
        return True
    else:
        return False

def search(n):
    old_ver = 0
    new_ver = n

    while old_ver <= new_ver:
        mean = old_ver + (new_ver - old_ver)//2
        if not isBadVersion(mean):
            old_ver = mean + 1
        else:
            new_ver = mean

    return new_ver

print(search(5))
