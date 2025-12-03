import numpy as np

a = [[1, 2, 3, 4], [5, 6, 7, 8]]

new_shape = (4, 2)


def reshape_matrix(
    a: list[list[int | float]], new_shape: tuple[int, int]
) -> list[list[int | float]]:
    # Write your code here and return a python list after reshaping by using numpy's tolist() method
    temp_list = []
    for row in a:
        for col in row:
            temp_list.append(col)

    reshaped_matrix = []
    if len(temp_list) != new_shape[0] * new_shape[1]:
        return []
    k = 0
    for i in range(new_shape[0]):
        reshaped_matrix.append([])
        for j in range(new_shape[1]):
            reshaped_matrix[i].append(temp_list[k])
            k = k + 1

    return reshaped_matrix


print(reshape_matrix(a, new_shape))
