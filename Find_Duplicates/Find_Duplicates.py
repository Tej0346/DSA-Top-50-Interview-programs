def find_duplicates(arr):
    seen = set()
    duplicates = set()
    for num in arr:
        if num in seen:
            duplicates.add(num)
        else:
            seen.add(num)
    print("Duplicates:", list(duplicates))
arr = [1, 2, 3, 2, 4, 5, 3]
find_duplicates(arr)