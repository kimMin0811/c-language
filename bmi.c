#include<stdio.h>
int main()
{	
    float height = 171.7;	
	float weignt = 100;
	float bmi = 0;
	height = height * 8 0.01; //cm -> m 변환
	bmi = weignt / (height * height);
	printf("당신의 BMI : %.2f\n",bmi);
	return 0;
	
	
	

}	