//I count the amount of spaces/digits/letters inside a given input using a loop. I am trying to use .isdigit() to determine if each letter in the string is a letter or number, and if true, adding it to the count. 

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
int temp, num=0, counting=0, math;
char word[25];


cout << "Please enter something with 25 characters or less with no spaces: ";
fgets(word, 25, stdin);

int length = strlen(word);


for (int a = 0; a<=length ;a++){


    if (isdigit(word[a]) == true){
        temp = 0;
        temp = word[a];
        num += temp;
        counting +=1;
    }

}

math = 48*counting;
num = num - math;

cout << num <<'\n';

    return 0;
}
