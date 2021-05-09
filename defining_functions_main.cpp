Act 10 Defining functions
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int width ;
int temp = 0 ;
int maxWidth = 40;
int maxHeight = maxWidth / 2 ;
int flag ;
int w ;
int count ;
int total ;

cout << "Please enter width in between 1 to maxWidth 3" ;
cin >> temp ;
while ( temp < 40 )
{
for (int i =0 ; i < maxHeight; i ++){
int total = 0 ;
int count = 0 ;
while (count< w && total<maxWidth )
cout << "." ;
total ++ ;
count++ ;
}
flag = 0 ;
}
{
if
( int count = 0 )
while ( count <w && total < maxWidth ){
cout << '*' ;
total ++ ;
count ++ ;
flag = 1 ;
}
}
cout <<"\n";

return 0 ;
}
