#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char* argu[]){
    float n1,n2;
    n1= atof(argu[1]);
    n2= atof(argu[2]);
    printf("%.2f",pow(n1,n2)); //pow se usa para potencias 
    return 0;
}