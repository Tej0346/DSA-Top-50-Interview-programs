def rotate(arr):
    if not arr: return arr
    # Concatenate the last element with everything except the last element
    return arr[-1:] + arr[:-1]

arr = [1, 2, 3, 4, 5]
arr = rotate(arr)
print(arr)