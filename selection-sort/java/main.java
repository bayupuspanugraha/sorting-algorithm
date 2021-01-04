import java.util.Arrays;

class Main {
  private static void selectionSort(int[] data) {
    for(int it=0;it<data.length-1;it++) {
      int minIndex = it;
      int minValue = data[minIndex];
      for(int y=it+1;y<data.length;y++) {
        if(data[y] < minValue) {
          minIndex = y;
          minValue = data[y];
        }
      }

      data[minIndex] = data[it];
      data[it] = minValue;

      System.out.println("Iteration-"+ (it +1) +":\t" + Arrays.toString(data));
    }
  }

  public static void main(String[] args) {
    int[] sampleData = {10,4,9,3,5,8,2,7,6,1};
    System.out.println("Raw Data:\t\t" + Arrays.toString(sampleData));

    selectionSort(sampleData);
  }
}