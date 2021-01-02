package main

import "fmt"

func bubbleSort(data []int, withOptimization bool) {
	for it := range data {
		isSwapped := false
		for y := 0; y < len(data)-1; y++ {
			if data[y] > data[y+1] {
				temp := data[y]
				data[y] = data[y+1]
				data[y+1] = temp
				isSwapped = true
			}
		}

		// optimization if no swap happens then means all data are sorted
		if withOptimization && !isSwapped {
			break
		}

		fmt.Println(fmt.Sprintf("Iteration-%v:\t", (it+1)), data)
	}
}

func main() {
	sampleData := []int{10, 4, 9, 3, 5, 8, 2, 7, 6, 1}
	fmt.Println(fmt.Sprintf("Raw Data:\t\t%v", sampleData))
	withOptimization := false
	bubbleSort(sampleData, withOptimization)
}
