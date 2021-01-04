package main

import "fmt"

func selectionSort(data []int) {
	for it := 0; it < len(data)-1; it++ {
		minIndex := it
		minValue := data[it]
		for y := it + 1; y < len(data); y++ {
			if data[y] < minValue {
				minIndex = y
				minValue = data[y]
			}
		}

		data[minIndex] = data[it]
		data[it] = minValue

		fmt.Println(fmt.Sprintf("Iteration-%v:\t%v", (it + 1), data))
	}
}

func main() {
	sampleData := []int{10, 4, 9, 3, 5, 8, 2, 7, 6, 1}
	fmt.Println("Raw Data:\t\t", sampleData)
	selectionSort(sampleData)
}
