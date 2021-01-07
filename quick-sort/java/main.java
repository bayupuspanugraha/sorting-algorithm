import java.util.Arrays;

class Main {
  private static void quickSort(int[] data, int left, int right) {
    if(left < right) {
      int p = partition(data, left, right);
      quickSort(data, left, p-1);
      quickSort(data, p+1, right);
    }
  }

  private static int partition(int[] data, int left, int right) {
    int pivot = data[right];
    int x = left;

    for(int y=left;y<data.length;y++) {
      if(data[y]<pivot) {
        int temp = data[x];
        data[x] = data[y];
        data[y] = temp;
        x++;
      }
    }

    int temp = data[x];
    data[x] = data[right];
    data[right] = temp;

    System.out.println("Iteration-Left:" + left + "-Right:" + right + "\t" + Arrays.toString(data)); 

    return x;
  }

  public static void main(String[] args) {
    int[] sampleData = {10,4,9,3,5,8,2,7,6,1};

    System.out.println("Raw Data:\t\t" + Arrays.toString(sampleData)); 
    quickSort(sampleData, 0, sampleData.length -1);
  }
}