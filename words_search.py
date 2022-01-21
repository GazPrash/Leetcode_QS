class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        def searchalgo(tuplex, matrix, word, word_ind):
            a, b = tuplex
            
            if word_ind == len(word):
                return True
            
            if a == len(matrix)-1 and b == len(matrix[0])-1:
                if matrix[a][b] == word[word_ind]:
                    return True
                else:
                    return False
            
            # print(a, b, word[word_ind], matrix[a][b])
            #if a > 0 and a < len(matrix[0]) and b < len(matrix) and b > 0:
            
            print(word_ind)
            if a > 0:
                if matrix[a-1][b] == word[word_ind]:
                    return (True & searchalgo((a-1, b), matrix, word, word_ind+1))
            
            if b > 0: 
                if matrix[a][b-1] == word[word_ind]:
                    return (True & searchalgo((a, b-1), matrix, word, word_ind+1))
            
            if a < len(matrix):
                if matrix[a+1][b] == word[word_ind]:
                    return (True & searchalgo((a+1, b), matrix, word, word_ind+1))
            
            if b < len(matrix[0]):
                if matrix[a][b+1] == word[word_ind]:
                    return (True & searchalgo((a, b+1), matrix, word, word_ind+1))
                    
            else:
                return False
        
        
        markind = []
        for rown, row  in enumerate(board):
            for coln, col in enumerate(row):
                if col == word[0]:
                    markind.append((rown, coln))

        if markind == []:
            return False

        for tupes in markind:
            if searchalgo(tupes, board, word, 1):
                return True

        print('yes')
        return False
