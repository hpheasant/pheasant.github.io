//Write a program that creates a two-dimensional array initialized with test data. Use any data type you wish. The program should have the following functions:
//getTotal. This function should accept a two-dimensional array as its argument and return the total of all the values in the array.
//getAverage. This function should accept a two-dimensional array as its argument and return the average of all the values in the array.
//getRowTotal. This function should accept a two-dimensional array as its first argu- ment andan integer as its second argument. The second argument should be the subscript of a row in the array. The function should return the total of the values in the specified row.
//getColumnTotal. This function should accept a two-dimensional array as its first argument and an integer as its second argument. The second argument should be the subscript of a column in the array. The function should return the total of the values in the specified column.
//getHighestInRow. This function should accept a two-dimensional array as its first argument and an integer as its second argument. The second argument should be the subscript of a row in the array. The function should return the highest value in the specified row of the array.


#include <iostream>
using namespace std;
const int ROWS = 5;
const int COLS = 6;

int getTotal(int iArray[][COLS], int rows)
{
    int row, col;
    int total = 0;
    for (row = 0; row < ROWS; row++)
        for (col = 0; col < COLS; col++)
            total += iArray[row][col];

    return total;
}

int getAverage(int aArray[][COLS], int rows)
{
    int row, col;
    int total = 0;
    for(int row = 0; row < ROWS; row++)
        for(int col = 0; col < COLS; col++)
    total += aArray[row][col];
   
    return total / (ROWS * COLS);
}

int getRowTotal(int bArray[][COLS], int rows[5])
{
    int row;
    int total = 0;
    for(row = 0; row < ROWS; row++){
        
        return total += bArray[row];
}


int getColumnTotal(int cArray[][COLS], int cols[6] , int rows)
{
    int col;
    int total = 0;
    for(int col = 0; col < COLS; col++){
        
        return total += cArray[col];
}


int getHighestInRow(int dArray[][COLS], int rows[5])
{
    int row;
    int max = dArray[0];
    
    for(row = 0;row < ROWS; row++)
        if (dArray[row] > max)
            max = dArray[row];
    return max;

int main()
{
    int myArray[ROWS][COLS] = {
{23, 45, 56, 34, 23, 56},
{34, 56, 23, 54, 98, 23},
{12, 65, 92, 89, 23, 23},
{34, 56, 89, 34, 23, 56},
{67, 34, 87, 98, 56, 99}};
    cout << "getTotal result is: " << getTotal(myArray, ROWS) << endl;
    return 0;


    int aArray[ROWS][COLS] = {
{23, 45, 56, 34, 23, 56},
{34, 56, 23, 54, 98, 23},
{12, 65, 92, 89, 23, 23},
{34, 56, 89, 34, 23, 56},
{67, 34, 87, 98, 56, 99}};
    cout << "getAverage result is: " << getAverage(aArray, ROWS) << endl;
return 0;


int getRowTotal(int bArray[][COLS], int rows[5])= {
    {23, 45, 56, 34, 23, 56},
    {34, 56, 23, 54, 98, 23},
    {12, 65, 92, 89, 23, 23},
    {34, 56, 89, 34, 23, 56},
    {67, 34, 87, 98, 56, 99}};
        cout << "getRowTotal is: " << getRowTotal(bArray, ROWS) << endl;
        return 0;



int getColumnTotal(int cArray[][COLS], int cols[COLS] , int rows)= {
    {23, 45, 56, 34, 23, 56},
    {34, 56, 23, 54, 98, 23},
    {12, 65, 92, 89, 23, 23},
    {34, 56, 89, 34, 23, 56},
    {67, 34, 87, 98, 56, 99}};
        cout << "getColumnTotal is: " << getColumnTotal(cArray, ROWS) << endl;
        return 0;

int getHighestInRow(int dArray[][COLS], int rows[5]) = {
    {23, 45, 56, 34, 23, 56},
    {34, 56, 23, 54, 98, 23},
    {12, 65, 92, 89, 23, 23},
    {34, 56, 89, 34, 23, 56},
    {67, 34, 87, 98, 56, 99}};
        cout << "getHighestInRow result is: " << getHighestInROw(dArray, ROWS) << endl;
        return 0;
}
}
}
}


