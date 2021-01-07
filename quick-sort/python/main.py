def quick_sort(data, left, right):
    if left < right:
        p = partition(data, left, right)
        quick_sort(data, left, p-1)
        quick_sort(data, p+1, right)


def partition(data, left, right):
    # using last as pivot
    pivot = data[right]
    x = left

    for y in range(left, right):
        if data[y] < pivot:
            temp = data[x]
            data[x] = data[y]
            data[y] = temp
            x = x+1
    temp = data[x]
    data[x] = data[right]
    data[right] = temp
    print(f"Iteration-Left:{left}-Right:{right}:\t{data}")
    return x


sampleData = [10, 4, 9, 3, 5, 8, 2, 7, 6, 1]
print(f"Raw Data:\t\t{sampleData}")
quick_sort(sampleData, 0, len(sampleData)-1)
