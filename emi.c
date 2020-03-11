#include <math.h> 
#include <stdio.h> 
  

float emi_calculator(float p, float r, float t) 
{ 
    float emi; 
  
    r = r / (12 * 100); 
    t = t * 12;
    emi = (p * r * pow(1 + r, t)) / (pow(1 + r, t) - 1); 
  
    return (emi); 
} 
  

int main() 
{ 
    float principal, rate, time, emi; 
    principal = 20000; 
    rate = 5; 
    time = 3; 
    emi = emi_calculator(principal, rate, time); 
    printf("\nMonthly EMI is= %f\n", emi); 
  
    return 0; 
} 

