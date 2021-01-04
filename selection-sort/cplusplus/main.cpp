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

  cout << "]" << endl;
}

void selectionSort(int data[], int length) {
  for(int it=0;it<length-1;it++) {
    int minIndex = it;
    int minValue = data[minIndex];

    for(int y=it+1;y<length;y++) {
      if(data[y]<minValue) {
        minIndex = y;
        minValue = data[y];
      }
    }

    data[minIndex] = data[it];
    data[it] = minValue;

    cout <<"Iteration-" << it+1 << ":\t";
    printArray(data, length);
  }
}

int main() {
  int sampleData[] = {10,4,9,3,5,8,2,7,6,1};
  int lengthOfArray = sizeof(sampleData)/sizeof(sampleData[0]);
  cout <<"Raw Data:\t\t";
  printArray(sampleData, lengthOfArray); 
  selectionSort(sampleData, lengthOfArray);
}