using System;

class MainClass {
  private static void quickSort(int[] data, int left, int right) {
    if(left < right) {
      var p = partition(data, left, right);
      quickSort(data, left, p-1);
      quickSort(data, p+1, right);
    }
  }

  private static int partition(int[] data, int left, int right) {
    var pivot = data[right];
    var x = left;
    for(var y=left;y<right;y++) {
      if(data[y]<pivot) {
        var temp = data[x];
        data[x] = data[y];
        data[y] = temp;
        x++;
      }
    }

    var temp3 = data[x];
    data[x] = data[right];
    data[right] = temp3;

    Console.WriteLine(string.Format("Iteration-Left:{0}-Right:{1} :\t{2}",left, right, string.Join(",", data)));

    return x;
  }

  public static void Main (string[] args) {
    int[] sampleData = {10,4,9,3,5,8,2,7,6,1};  
    Console.WriteLine (string.Format("Raw Data:\t\t" + string.Join(",", sampleData)));

    quickSort(sampleData, 0, sampleData.Length-1);
  }
}