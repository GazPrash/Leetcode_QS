def combine(s, numRows):
    zigzag = ""
    r = 0
    for row in range(numRows):
        step = 2*(numRows-1)
        for i in range(row, len(s), step):
            zigzag += s[i]

            if (r>0 and r<numRows-1 and (i+step - 2*row) < len(s)):
                step -= 2*row