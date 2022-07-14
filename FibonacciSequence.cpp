/******************************************************************************

                              

*******************************************************************************/

#include <iostream>

using namespace std;

int GetNumberInFibSeq(int indexNumber){
    int index1 = 0, index2 = 1;
    int numberInSequence = 0;
    
    if(indexNumber == 0){
        cout<<"Enter the index number greater than 0 ";
        exit(1);
    }
    
    if(indexNumber == 1){
        cout<<"The number in the Fibonacci Sequence is 0";
        exit(1);
    }
    numberInSequence = index1 + index2;
    cout<<"The Numbers in the Fibonacci Sequence "<<index1<<" "<<index2;
    for(int i = 3; i <= indexNumber; i++){
        cout<<" "<<numberInSequence;
        index1 = index2;
        index2 = numberInSequence;
        numberInSequence = index1 + index2;
    }
    return index2;
}

bool IsFibonacci(int numberToCheck){
    if(numberToCheck == 0 || numberToCheck == 1){
        return true;
        exit(1);
    }
    
    int index1 = 0, index2 = 1;
    int numberInSequence = 0;
    
    numberInSequence = index1 + index2;
    //for(int i = 3; i <= numberToCheck; i++)
    while(numberInSequence < numberToCheck)
    {
        //cout<<" "<<numberInSequence;
        index1 = index2;
        index2 = numberInSequence;
        numberInSequence = index1 + index2;
    }
    if(numberToCheck == numberInSequence){
        return true;
        exit(1);
    }
    else{
        return false;
        exit(1);
    }
    
}

int FindClosestIndex(int numberToCheck){
    int index;
    if (numberToCheck <= 1) 
        return numberToCheck; 

    int a = 0, b = 1, c = 1; 
    index = 1; 
    while (c < numberToCheck) 
    { 
        c = a + b; 
        index++; 
        a = b; 
        b = c; 
    } 
    return index;
}

int main()
{
    /* Getting the integer number as index from the user and calling the function with index as an argument
       to find the number in the Fibonacci Sequence for the particular index and displaying the number */

    cout<<"Enter the index of the Fibonacci Sequence ";
    int indexNumber;
    cin >> indexNumber; 
    int numberinSeq = GetNumberInFibSeq(indexNumber); 
    cout<<endl<<"The "<<indexNumber<<"th "<<"number in the Fibonacci Sequence is "<<numberinSeq<<endl;
    
    /* Getting the integer number to check whether the given number is i  Fibonacci Sequence or not by
        calling the function with the argument got from the user */

    cout<<"Enter the number to check the number is in Fibonacci Sequence or not ";
    int numberToCheck;
    cin >> numberToCheck;
    bool isFib = IsFibonacci(numberToCheck);
    
    if (isFib == true){
        cout<<numberToCheck<<" is in Fibonacci Sequence";
        //exit(1);
    }
    else {
        cout<<numberToCheck<<" is not in Fibonacci Sequence";
        exit(1);
    }
    
    int closestIndex = FindClosestIndex(numberToCheck);
    cout<<endl<<"The closestIndex of the number "<<numberToCheck<<" is "<<closestIndex;

    return 0;
}
