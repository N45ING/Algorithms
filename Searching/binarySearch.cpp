// Basic algorithm for binary search in one dimensional array

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int binarySearch(int* array, int left, int right,int key);

int main()
{
    const int numberOfElements = 10;
    const int numberToFound = 7;
    int* testArray = new int [numberOfElements];

    srand(time(NULL));
    for(int i=0;i<numberOfElements;i++)
    {
        testArray[i] = i+1;
        cout << testArray[i] << "  ";
    }
    cout << endl;
    cout << binarySearch(testArray,0,numberOfElements-1,numberToFound) << endl;
    return 0;
}

int binarySearch(int *array, int left, int right, int key)
{
    // returning index of first needed element, if not founded returning -1
    int mid = right + (left-right)/2;

    if(key<array[left])
    {
        return -1; // have not found our key, returning -1
    }
    else if (key>array[right])
    {
        return -1; // have not found our key, returning -1;
    }
    else if (key == array[mid])
    {
        return mid; //found our key on mid, returning index
    }
    else if (mid == right)
    {
        return left;
    }

    if (array[mid] < key)
    {
        binarySearch(array,mid,right,key);
    }
    else
    {
        binarySearch(array,0,mid,key);
    }
}
