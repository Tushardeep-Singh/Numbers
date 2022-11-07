//  Created by Tushardeep Singh.
#include <iostream>
#include "Operations.h"
using namespace std;

/* Funtion name : multiplyAll
   inputs : EnteredNumbers[], size
   returns "result" which is multiplication of all the numbers entered by the user.
*/

float multiplyAll(float EnteredNumbers[], int size){
    float result = 1;
    size_t i {1};
    for( ; i <= size; ++i){
        result = ( result * EnteredNumbers[i] );
    }
    
    return result;
}

/* function name : diff
 inputs : max, min
 returns "difference" which is the difference of maximum and minimum value entered by the user.*/
float diff (float max, float min){
float difference = (max - min);
return difference;

}


/* function name : add
 inputs : max, min
 returns "addition" which is the addition of the maximum and minimum value entered by the user. */
float add (float max, float min) {
float addition = (min + max);
    return addition;
}


/* function name : multiply
 inputs : max, min
 returns "multiplication", which is the multiplication of the maximum and minimum value entered by the user. */
float multiply(float max, float min){
     float multiplication = ( max * min );
    return multiplication;

}

/* function name : divide
 inputs : max, min
 returns "division" which is the division of the maximum and minimum value entered by the user. */
float divide(float max, float min){
    float division = ( max / min);
    return division;
}
