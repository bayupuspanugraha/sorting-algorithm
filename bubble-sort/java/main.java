import java.util.Arrays;

class Main {
  private static void bubbleSort(int[] data, boolean withOptimization) {
    for(int it=0; it<data.length;it++) {      
      boolean isSwapped = false;
      for(int y=0;y<data.length - 1;y++) {
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

      System.out.println("Iteration-" + (it + 1) + ":\t" + Arrays.toString(data));
      //System.out.format("Iteration-%s:\t%s\n", (it + 1), Arrays.toString(data));
    }
  }

  public static void main(String[] args) {    
    int[] sampleData = {10,4,9,3,5,8,2,7,6,1};

    System.out.println("Raw Data:\t\t" + Arrays.toString(sampleData));
    boolean withOptimization = false;
    bubbleSort(sampleData, withOptimization);
  }
}