def ip_address(s):
    def isValid(num, arr):
        diff = len(arr) - len(num)

        if diff % 3 <= 2:
            return True


    n = len(s)
    if n > 12:
        return []

    stack = [".",".","."]

    ip_arr = [int(x) for x in s]
    spare = ip_arr[::]

    out = []

    i = 0
    j = 1
    
    while j < len(ip_arr):
        while stack:
            for item in s[i:j]:
                if isValid(item, ip_arr):
                    spare.insert(j, '.')
                    stack.pop()
                else:
                    j += 1


        out.append(spare)
        stack = [".", ".", "."]


        




    