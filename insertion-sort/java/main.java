import java.util.Arrays;

class Main {
  private static void insertionSort(int[] data) {
    for(int it=1;it<data.length;it++) {
      int target = data[it];
      int prev = it-1;
      while(prev>=0 && data[prev]>target) {
        data[prev+1] = data[prev];
        prev -=1;
      }

      data[prev+1] = target;
      System.out.println("Iteration-" + it + ":\t" + Arrays.toString(data));
    }
  }

  public static void main(String[] args) {    
    int[] sampleData = {10,4,9,3,5,8,2,7,6,1};
    System.out.println("Raw Data:\t\t" + Arrays.toString(sampleData));
    insertionSort(sampleData);
  }
}