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

int partition(int data[], int length, int left, int right)
{
    int pivot = data[right];
    int x = left;
    for (int y = left; y < right; y++)
    {
        if (data[y] < pivot)
        {
            int temp = data[x];
            data[x] = data[y];
            data[y] = temp;
            x++;
        }
    }

    int temp = data[x];
    data[x] = data[right];
    data[right] = temp;

    cout << "Iteration-Left:" << left << "-Right:" << right << "\t";
    printArray(data, length);
    cout << endl;

    return x;
}

void quickSort(int data[], int length, int left, int right)
{
    if (left < right)
    {
        int p = partition(data, length, left, right);
        quickSort(data, length, left, p - 1);
        quickSort(data, length, p + 1, right);
    }
}

int main()
{
    int sampleData[] = {10, 4, 9, 3, 5, 8, 2, 7, 6, 1};
    int lengthOfArray = sizeof(sampleData) / sizeof(sampleData[0]);

    cout << "Raw Data:\t\t";
    printArray(sampleData, lengthOfArray);
    cout << endl;

    quickSort(sampleData, lengthOfArray, 0, lengthOfArray - 1);
}