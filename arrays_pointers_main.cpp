//Hannah Pheasant
//Write a function that accepts an int array and the array’s size as arguments. The function should create a new array that is twice the size of the argument array. The function should copy the contents of the argument array to the new array and initialize the unused elements of the second array with 0. The function should return a pointer to the new array.
#include <iostream>
using namespace std;

int *expandArray(int array[], int size)
{
    int *arrPtr = new int[2 * size];
    for (int i = 0; i<2 * size; i++){
        if(i<size){
            *(arrPtr + i) = *(array + i);
        }
        else{
            *(arrPtr + i) = 0;
        }
    }
    return arrPtr;
}
int
main()
{
    int ar[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    int *ar2;
    
    ar2 = expandArray(ar, 10);
    for (i=0; i<20; i++)
        cout << ar2[i] << " ";
    
}
//
