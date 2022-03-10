class Solution:
    def champagneTower(self, poured: int, query_row: int, query_glass: int) -> float:
        out = []
        n = 1
        for i in range(query_row):
            out.append([])
            for j in range(n):
                if (i == 0) or (j == 0):
                    out[i].append(poured)
                    continue
                else:
                    if (j == 0 or (j == n)):
                        out[i].append(out[i-1][j] - 1)
                    else:
                        out[i].append((out[i-1][j-1] + out[i-1][j+1] -2)/2)

            
            n += 1

        
        return out[-1][query_glass]

