inputmatrix = [[1,2,3],[4,5,6],[7,8,9]]
def rotate(matrix):
    temp_matrix = [[0 for i in range(len(matrix[0]))] for i in range(len(matrix))]
    i = len(matrix)-1
    j = 0
    k = 0
    for row_num, rows in enumerate(matrix):
        for col_num, cols in enumerate(rows):
            temp_matrix[k][col_num] = matrix[i][j]
            i-=1
        
        i = len(matrix)-1
        k+=1
        j+=1

    print(temp_matrix)
    # print([[1*cols for i in range(len(matrix[0]))] for _ in range(len(matrix))])


rotate(inputmatrix)


