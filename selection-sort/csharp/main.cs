using System;

class MainClass {
  private static void selectionSort(int[] data) {
    for (var it =0;it<data.Length-1;it++) {
        var minIndex = it;
        var minValue = data[minIndex];
        for (var y=it+1;y<data.Length;y++) {
          if(data[y] < minValue) {
            minIndex = y;
            minValue = data[y];
          }
        }

        data[minIndex] = data[it];
        data[it] = minValue;

        Console.WriteLine ("Iteration-{0}:\t[{1}]", (it+1), string.Join(",", data));
    }
  }

  public static void Main (string[] args) {
    int[] sampleData = {10,4,9,3,5,8,2,7,6,1};
    Console.WriteLine ("Raw Data:\t\t[{0}]", string.Join(",", sampleData));
    selectionSort(sampleData);
  }
}