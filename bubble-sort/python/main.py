def bubble_sort(data, withOptimization):
    for x in range(len(data)):
        isSwapped = False
        for y in range(len(data) - 1):
            if data[y] > data[y+1]:
                temp = data[y]
                data[y] = data[y+1]
                data[y+1] = temp
                isSwapped = True

        # optimization if no swap happens then means all data are sorted
        if withOptimization and not isSwapped:
            break

        print(f"iteration-{x+1}:\t{data}")


sampleData = [10, 4, 9, 3, 5, 8, 2, 7, 6, 1]
print(f"Raw Data:\t\t{sampleData}")
withOptimization = False
bubble_sort(sampleData, withOptimization)
