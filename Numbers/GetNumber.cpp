
/* Created by Tushardeep Singh */
/* Just started*/

#include <iostream>
using namespace std;

/* Function name : getMin
   Input : EnteredNumber[], size, min
   *min gets assigned minimum value that is entered by user. */
 void getMin(float EnteredNumber[], int size,float *min){
     size_t i {1};
    for( ; i <= size; ++i){
        if(EnteredNumber[i] < *min)
            *min = EnteredNumber[i];
    }
}

/* Funtion name : getMax
   Input : EnteredNumber[], size, max
   *max gets assigned maximum value user has entered. */
float getMax(float EnteredNumber[], int size, float *max){
    size_t i {1};
for( ; i <= size; ++i){
    if(EnteredNumber[i] > *max)
        *max = EnteredNumber[i];
   }
    return *max;
}

/* function name : max2nd
 input : EnteredNumber, size, max
 returns "max2nd" which is the 2nd highest number entered by the user.*/
float max2nd(float EnteredNumber[], int size, float *max){
    float max2nd = 0;
    
    if(size == 1){
        max2nd = *max;
    }
    size_t i {2};
    for( ; i <= size; ++i){
        if( (EnteredNumber[i] < *max)  &&  (EnteredNumber[i] > EnteredNumber[i-1]) ){
            max2nd = EnteredNumber[i];
        }
    }
    return max2nd;
}
