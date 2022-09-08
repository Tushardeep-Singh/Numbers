/* Creted by Tushardeep Singh */

#ifndef main_h
#define main_h

/* void function to retrieve minimum and maximum number entered by user from the array "EnteredNumber" */
 void GetMinMax(float EnteredNumber[], int size,float *min,float *max){
    for(int i = 1; i <= size; i++){
        if(EnteredNumber[i] < *min)
            *min = EnteredNumber[i];
    }
    
    for(int i = 1; i <= size; i++){
        if(EnteredNumber[i] > *max)
            *max = EnteredNumber[i];
    }
}


/* Funtion to calculate the product of all numbers entered by the user */
float multiply(float EnteredNumbers[], int size){
    float result = 1;
    
    for(int i = 1; i <= size; i++){
        result = ( result * EnteredNumbers[i] );
    }
    
    return result;
}

#endif /* main_h */
