a = [[1,2,3],[4,5,6]]

def transpose_matrix(a: list[list[int|float]]) -> list[list[int|float]]:

    b = []
    row_num: int = len(a)
    if row_num == 0:
        return
    col_num: int = len(a[0])
    for i in range(col_num):
        b.append([])


    for i in range(col_num):
        for j in range(row_num):
            b[i].append(a[j][i])
    return b

print(transpose_matrix(a))
