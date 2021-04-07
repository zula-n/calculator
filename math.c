#include "math.h"

float add(float first, float second){
    float answer = first + second;
    return answer;
}

float subtract(float first , float second){
    float answer = first - second;
    return answer;
}


float divide(float first , float second){
    float answer = first/second;
    return answer;
}

float multiply(float first, float second){
    float answer = first*second;
    return answer;
}

float power(float first, float second){
    long power = 1;
    int counter;
    for(counter = 1; counter <= second; counter++)
    {
        power = power * first;
    }
    return power;
}

float recursivePower(float first,float second){
    if(second == 0){
        return 1;
    }
    else{
        float result = first*recursivePower(first, second -1 );
        return result;
        }
}