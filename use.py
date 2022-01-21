matrix = [[1,2,3], [5,6,7]]

def trasnp(matrix):
    x_rows = len(matrix) 
    y_cols = len(matrix[0]) # ANY MATRIX SUB-LIST (OR ANY INDEX) WILL GIVE THE SAME NUMBER OF COLS

    new_rows = y_cols
    new_cols = x_rows

    t_matrix = []

    for i in range(new_rows):
        row =[]
        for item in matrix:
            row.append(item[i])

        t_matrix.append(row)
    return t_matrix



print(trasnp(matrix))