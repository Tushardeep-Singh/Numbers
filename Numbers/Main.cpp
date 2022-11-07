
//  Created by Tushardeep Singh.

#include <stdio.h>
#include <iostream>
#include "GetNumber.h"
#include "Operations.h"
#include <iomanip>
using namespace std;


int main(){
    const size_t colsize {24};
    cout << setw(colsize) << "NUMBERS " << endl;
    cout << setw(colsize) << "-------\n" << endl;
       
    int count;
    
    for(;;){
        cout << "How many numbers would you like to input ? (<= 10)" << endl;
        cout << "-> ";
        cin >> count;
        
        const size_t CONST1 {10};
        const size_t CONST2 {0};
        
        if(count > CONST1 || count < CONST2)
            cout << "ERROR : Maximum allowed 10 and non-negative \n" << endl;
        else if(count == CONST2)
            cout << "Really ?\n" << endl;
        else
            break;
    }
    
    cout << "\n" << "Enter Numbers (maybe decimal) :- " << endl;
    
    
    /* Dynamic array used */
    float *EnteredNumber = new float[count];
    
    for(size_t i = 1; i <= count; i++){
        cout << "-> number " << i << " : ";
        cin >> EnteredNumber[i];
    }
    
    /* EnteredNumber[0] not required */
    EnteredNumber[0] = NULL;
    
    cout << "\nYou entered : (";
    
    for(size_t i = 1; i <= (count - 1); ++i){
        cout << *(EnteredNumber + i) << ", ";
    }
    cout << EnteredNumber[count] << ")" << endl;
    
    
    float min = EnteredNumber[1];
    float max = EnteredNumber[1];

    getMax(EnteredNumber, count, &max);
    getMin(EnteredNumber, count, &min);
    
    
    cout << "\n" <<"Data : " << endl;
    cout << "----\n";
    
    if(max == min){
        cout << "Maximum Number entered = Minimum Number entered = " << max << endl;
    }
    else{
        cout << "Maximum Number entered: " << max << endl;
        cout << "Minimum Number entered: " << min << "\n" << endl;
    }
    
    
    cout << "Difference of max. and min. = " << diff ( max,  min)<< endl;
    cout << "Multiplication of all numbers entered = " << multiplyAll(EnteredNumber, count) <<endl;
    cout << "Addition of max. and min. = " << add(max, min) << endl;
    cout << "Multiplication of max. and min. = " << multiply(max, min) << endl;
    
    if (min != 0)
        cout << "Division of max. and mini. = " << divide(max, min) << endl;
    else
        cout << "Division is not possible as the min is 0"<< endl;
    
    cout << "Second highest number = " << max2nd(EnteredNumber, count, &max) << endl;
    }
