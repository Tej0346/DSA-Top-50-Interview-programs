def find_duplicates(s):
    duplicates = []
    for char in s:
        if s.count(char) > 1 and char not in duplicates:
            duplicates.append(char)
    print("Duplicate characters:", duplicates)

find_duplicates("programming")