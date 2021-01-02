def insertion_sort(data):
    for it in range(1, len(data)):
        target = data[it]
        prev = it - 1
        while prev >= 0 and data[prev] > target:
            data[prev + 1] = data[prev]
            prev = prev - 1

        data[prev + 1] = target
        print(f"Iteration-{it}:\t{data}")


sampleData = [10, 4, 9, 3, 5, 8, 2, 7, 6, 1]
print(f"Raw Data:\t\t{sampleData}")
insertion_sort(sampleData)
