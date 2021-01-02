using System;

class MainClass {
  private static void bubbleSort(int[] data, bool withOptimization) {
    for(int it=0; it<data.Length;it++) {     
      bool isSwapped = false;

      for(int y=0;y<data.Length - 1;y++) {
        if(data[y]>data[y+1]) {
          int temp = data[y];
          data[y] = data[y+1];
          data[y+1] = temp;
          isSwapped = true;
        }
      }

      // optimization if no swap happens then means all data are sorted
      if(withOptimization && !isSwapped) {
        break;
      }

       Console.WriteLine("Iteration-{0}:\t[{1}]", (it + 1), string.Join(",", data)); 
    }
  }
  
  public static void Main (string[] args) {
    int[] sampleData = {10,4,9,3,5,8,2,7,6,1};

     Console.WriteLine("Raw Data:\t\t[{0}]", string.Join(",", sampleData)); 
    bool withOptimization = false;
    bubbleSort(sampleData, withOptimization);
  }
}