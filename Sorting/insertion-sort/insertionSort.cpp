// Basic algorithm for insertion sort of 1 dimension array

#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;
void insertionSort(int* array, int lengthOfArray);

int main()
{
    const int numberOfElements = 10;
    int* testArray = new int [numberOfElements];

    srand(time(NULL));
    for(int i=0;i<numberOfElements;i++)
    {
        testArray[i] = rand() % 100;
        cout << testArray[i] << "  ";
    }
    cout << endl;

    insertionSort(testArray,numberOfElements);

    for(int i=0;i<numberOfElements;i++)
    {
        cout << testArray[i] << "  ";
    }
    return 0;
}

void insertionSort(int* array, int lengthOfArray)
{
    int key;
    for (int i=1; i <lengthOfArray; i++)
    {
        key=array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j+1] = array[j];
            j=j-1;
        }
        array[j+1]=key;
    }
}
