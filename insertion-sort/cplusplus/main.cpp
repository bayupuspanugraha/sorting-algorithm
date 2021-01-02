#include <iostream>
using namespace std;

void printArray(int data[], int length)
{
    cout << "[";
    for (int it = 0; it < length; it++)
    {
        cout << data[it];
        if (it < length - 1)
        {
            cout << ",";
        }
    }
    cout << "]";
}

void insertionSort(int data[], int length)
{
    for (int it = 1; it < length; it++)
    {
        int target = data[it];
        int prev = it - 1;

        while (prev >= 0 && data[prev] > target)
        {
            data[prev + 1] = data[prev];
            prev--;
        }

        data[prev + 1] = target;
        cout << "Iteration-" << it << ":\t";
        printArray(data, length);
        cout << endl;
    }
}

int main()
{
    int sampleData[] = {10, 4, 9, 3, 5, 8, 2, 7, 6, 1};
    int lengthOfArray = sizeof(sampleData) / sizeof(sampleData[0]);

    cout << "Raw Data:\t\t";
    printArray(sampleData, lengthOfArray);
    cout << endl;

    insertionSort(sampleData, lengthOfArray);
}