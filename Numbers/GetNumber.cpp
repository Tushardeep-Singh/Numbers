/* Created by Tushardeep Singh */
/* Just started*/

/* Function name : getMin
   Input : EnteredNumber[], size, min
   *min gets assigned minimum value that is entered by user. */
 void getMin(float EnteredNumber[], int size,float *min){
    for(int i = 1; i <= size; i++){
        if(EnteredNumber[i] < *min)
            *min = EnteredNumber[i];
    }
}

/* Funtion name : getMax
   Input : EnteredNumber[], size, max
   *max gets assigned maximum value user has entered. */
float getMax(float EnteredNumber[], int size, float *max){
for(int i = 1; i <= size; i++){
    if(EnteredNumber[i] > *max)
        *max = EnteredNumber[i];
   }
    return *max;
}

float max2nd(float EnteredNumber[], int size, float *max){
    int max2nd = 0;
    
    for(int i = 2; i <= size; i ++){
        if( (EnteredNumber[i] < *max)  &&  (EnteredNumber[i] > EnteredNumber[i-1]) ){
            max2nd = EnteredNumber[i];
        }
    }
    return max2nd;
}







