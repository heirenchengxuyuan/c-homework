/* TODO (#1#): ��Ŀ1 

#include <stdio.h>
int main(void){


 printf("********************\n");
 printf("\n");
 printf(" Very Good! \n");
 printf("\n");
 printf("********************\n");
}
���Ϊһ���Ǻ��м��и�very good ��*/ 
 



/* TODO (#1#): ��Ŀ2 
#include<stdio.h>
int main(void){
	int a,b,c,d,sum;
	a=10;b=20;c=30;
	sum=a+b*c;
	a=c;d=a+c;
	printf("sum=%d,d=%d",sum,d); 
}
���Ϊsum=610 d=60*/




/* TODO (#1#): ��Ŀ3 

#include<stdio.h>
int main(void){
	int a,b,h;
	float s;//���sҪ����Ϊ������ 
	a=5;
	b=10;
	h=6;
	s=a*b*h;
	printf("a=%d,b=%d,h=%d,s=%f\n",a,b,h,s);
	return 0;
}
*/


/* TODO (#1#): ��Ŀ4.1
#include<stdio.h>
int main(void){
    double x;
    printf("������һ��ʵ��x:");
    scanf("%lf",&x);
    printf("x=%f,y=%f",x,x*x);
    return 0; 
} 
 */
 
 /* TODO (#1#): ��Ŀ4.2
#include<stdio.h>
int main(void){
	int a,b,c,s;
	float ave;
	scanf("%d%d%d",&a,&b,&c);//����������ɶ����ɶ ��Ҫ��&a,&b,&c��Щ������������ 
	s=a*b*c;
	ave=s/3.0;//����ط�������3.0  ��������3 
	printf("s=%d\n,ave=%f\n",s,ave);
	return 0;
}
*/


/* TODO (#1#): ��Ŀ7 

#include<stdio.h>
int main(void){
    int i2;
    int i1 = 1000;
    {
        int i1 = 00;
        printf("i1 = %d",i1);
    }
    i2 = i1;
    printf("i2 = %d",i2);
    return 0;
} 
    ���Ϊi1 = 0i2 = 1000 */
    
    
    
/* TODO (#1#): ��Ŀ10 */ 
#include<stdio.h>
int main(void){   
    int a , b , c , n , sum ;
    n = 126;
    a = n / 100;
    b = (n - a * 100 ) / 10;
    c = n - 100 - b * 10;
    sum = a + b + c;
    printf ("sum = %d", sum);
	return 0; 
}
    //���Ϊsum=9 
