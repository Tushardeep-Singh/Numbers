/* Created by Tushardeep Singh */
/* Just started*/

#include <iostream>
#include "Numbers.h"
using namespace std;

int main(){
    cout << "               NUMBERS " << endl;
    cout << "               -------\n" << endl;
        
    int count = 1;
    while (count > 0 || count < 0)
    {
    cout << "How many numbers would you like to input ? (<= 10)" << endl;
    cout << "-> ";
    cin >> count;
    
    if(count > 10 || count < 0)
        cout << "ERROR : Maximum allowed 10 and non-negative \n" << endl;
        
    else
        break;
    }
    
    cout << "\n" << "Enter Numbers (maybe decimal) :- " << endl;
    
    /* Dynamic array used */
    float *EnteredNumber = new float[count];
    
    for(int i = 1; i <= count; i++){
        cout << "-> number " << i << " : ";
        cin >> EnteredNumber[i];
    }
    
    /* EnteredNumber[0] not required */
    EnteredNumber[0] = NULL;
    
    cout << "\nYou entered : (";
    for(int i = 1; i <= (count - 1); i++){
        cout << *(EnteredNumber + i) << ", ";
    }
    cout << EnteredNumber[count] << ")" << endl;
    
    
    float min = EnteredNumber[1];
    float max = EnteredNumber[1];

    GetMinMax(EnteredNumber, count, &min, &max);
    
    cout << "\n" <<"Data : " << endl;
    cout << "----\n";
    
    
    if(max == min){
        cout << "Maximum Number entered = Minimum Number entered = " << max << endl;
    }
    else{
    cout << "Maximum Number entered: " << max << endl;
    cout << "Minimum Number entered: " << min << "\n" << endl;
    }
    
    float difference = (max - min);
    cout << "Difference of max. and min. = " << difference << endl;
    
    
    float addition = (min + max);
    cout << "Addition of max. and min. = " << addition << endl;
    
    cout << "Multiplication of all numbers entered = " << multiply(EnteredNumber, count) << endl;
    
    float MultiplicationMaxMin = ( max * min );
    cout << "Multiplication of max. and min. = " << MultiplicationMaxMin << endl;
    
    float division = ( max / min);
    cout << "Division of max. and mini. = " << division << endl;
    
    
    }
    

