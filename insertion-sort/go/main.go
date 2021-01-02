package main

import "fmt"

func insertionSort(data []int) {
	for it := 1; it < len(data); it++ {
		target := data[it]
		prev := it - 1

		for prev >= 0 && data[prev] > target {
			data[prev+1] = data[prev]
			prev--
		}

		data[prev+1] = target
		fmt.Println(fmt.Sprintf("Iteration-%v:\t%v", it, data))
	}
}

func main() {
	sampleData := []int{10, 4, 9, 3, 5, 8, 2, 7, 6, 1}
	fmt.Println("Raw Data:\t\t", sampleData)
	insertionSort(sampleData)
}
