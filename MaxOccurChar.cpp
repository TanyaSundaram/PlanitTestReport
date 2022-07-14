/******************************************************************************

Program to find the character that has the highest number of occurrences within 
a certain string by checking every character with each other character.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int FindMaxNumberOfOccurringChar(char *str)
{
    int pos = -1; // pos variable to find the position in the string
    int i,j;  //local variables to run the for loop
    
    /* For loops to compare the characters are same or not*/
    for(i = 0 ; i < strlen(str) ; i++){
        for(j = i+1 ; j < strlen(str) ; j++){
            if(str[i] == str[j]){  //if both characters are same
                pos = i; 
                break;
            }
        }
        if(pos != -1)
            break;
    }
    
    return pos;
}

int main()
{
    char str[50];
    cout<<"Enter the string ";
    cin.getline(str,50); //Input from the user
    
    int pos = FindMaxNumberOfOccurringChar(str); //Calling a function to find the first Repeative char
    
    if(pos == -1)
        cout << "No repeative characters found"; //if no Repeative characters found
    else
        cout << "The First Repeative char is " << str[pos] << endl; //printing the max occurring char

    return 0;
}