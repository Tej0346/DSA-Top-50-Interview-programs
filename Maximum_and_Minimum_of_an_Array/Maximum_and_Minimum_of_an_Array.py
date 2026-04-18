def find_kth_largest_smallest(arr, k):
    if k > len(arr) or k < 1:
        return None, None
    sorted_arr = sorted(arr)
    
    kth_smallest = sorted_arr[k - 1]
    kth_largest = sorted_arr[-k]
    
    return kth_largest, kth_smallest

if __name__ == "__main__":
    arr = [12, 35, 1, 10, 34, 63]
    k = 3
    
    largest, smallest = find_kth_largest_smallest(arr, k)
    print(f"Array: {arr}")
    print(f"k = {k}")
    print(f"Kth Largest: {largest}")
    print(f"Kth Smallest: {smallest}")