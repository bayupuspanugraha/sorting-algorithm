package main

import "fmt"

func quickSort(data []int, left int, right int) {
	if left < right {
		p := partition(data, left, right)
		quickSort(data, left, p-1)
		quickSort(data, p+1, right)
	}
}

func partition(data []int, left int, right int) int {
	pivot := data[right]
	x := left
	for y := left; y < right; y++ {
		if data[y] < pivot {
			temp := data[x]
			data[x] = data[y]
			data[y] = temp
			x += 1
		}
	}

	temp := data[x]
	data[x] = data[right]
	data[right] = temp
	fmt.Println(fmt.Sprintf("Iteration-Left:%v-Right:%v\t %v", left, right, data))
	return x
}

func main() {
	sampleData := []int{10, 4, 9, 3, 5, 8, 2, 7, 6, 1}
	fmt.Println("Raw Data:\t\t", sampleData)
	quickSort(sampleData, 0, len(sampleData)-1)
}
