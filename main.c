#include <stdio.h>
#include <stdlib.h>
int main()
{
    float units,bill=0.0,supercharge=0.0,totalbill=0.0;
    printf("The number of units used is:");
    scanf("%f",&units);
    if(units<=100){
        bill=units*2;
    }else if(units>100 && units<=200){
        bill=(100*2)+(units-100)*3;
    }else if(units>200 && units<=300){
        bill=(100*2)+(100*3)+(units-100)*5;
    }else if(units>300){
        bill=(100*2)+(100*3)+(100*5)+(units-100)*7;
    }
    if(bill>2000){
        supercharge=(bill*0.10);
        totalbill=(bill+supercharge);
    }else{
    totalbill=bill;
    }
    printf("The total bill is = %f",totalbill);
    return 0;
}
