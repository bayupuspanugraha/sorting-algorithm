using System;

class MainClass
{
    private static void insertionSort(int[] data)
    {
        for (var it = 1; it < data.Length; it++)
        {
            var target = data[it];
            var prev = it - 1;

            while (prev >= 0 && data[prev] > target)
            {
                data[prev + 1] = data[prev];
                prev -= 1;
            }

            data[prev + 1] = target;
            Console.WriteLine("Iteration-{0}:\t[{1}]", it, string.Join(",", data));
        }
    }

    public static void Main(string[] args)
    {
        int[] sampleData = { 10, 4, 9, 3, 5, 8, 2, 7, 6, 1 };
        Console.WriteLine("Raw Data:\t\t[{0}]", string.Join(",", sampleData));
        insertionSort(sampleData);
    }
}