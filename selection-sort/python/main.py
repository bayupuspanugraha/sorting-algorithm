def selection_sort(data):
  for it in range(len(data)-1):
    minIndex = it
    minValue = data[minIndex]

    for y in range(it+1, len(data)):
      if data[y] < minValue:
        minIndex = y
        minValue = data[y]
    
    data[minIndex] = data[it]
    data[it] = minValue

    print(f"Iteration-{it+1}:\t{data}")

sampleData = [10,4,9,3,5,8,2,7,6,1]
print(f"Raw Data:\t\t{sampleData}") 
selection_sort(sampleData)