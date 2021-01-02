#include <iostream>
using namespace std; 

void printArray(int data[], int length) {
  cout << "[";
  for(int it=0;it<length;it++) {
    cout << data[it];
    if(it < length -1) {
      cout << ",";
    }
  }
  cout << "]";
}

void bubbleSort(int data[], int length, bool withOptimization) {    
  for(int it=0; it<length;it++) {
    bool isSwapped = false;
    for(int y=0;y<length-1;y++) {      
      if(data[y]>data[y+1]) {
        int temp = data[y];
        data[y] = data[y+1];
        data[y+1] = temp;
        isSwapped = true;
      } 
    }
  
    // optimalization if no swap happens then means all data are sorted
    if(withOptimization && !isSwapped) {
      break;
    }

    cout << "Iteration-" << it + 1 << ":\t";
    printArray(data, length);
    cout << endl;
  } 
}

int main() {
  int sampleData[] = {10,4,9,3,5,8,2,7,6,1};  
  int lengthOfArray = sizeof(sampleData)/sizeof(sampleData[0]);

  cout << "Raw Data:\t\t";
  printArray(sampleData, lengthOfArray);
  cout << endl;

  bool withOptimization = false;
  bubbleSort(sampleData, lengthOfArray, withOptimization);
}