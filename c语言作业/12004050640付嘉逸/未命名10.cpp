/* TODO (#1#): 题目1 

#include <stdio.h>
int main(void){


 printf("********************\n");
 printf("\n");
 printf(" Very Good! \n");
 printf("\n");
 printf("********************\n");
}
结果为一堆星号中间有个very good ！*/ 
 



/* TODO (#1#): 题目2 
#include<stdio.h>
int main(void){
	int a,b,c,d,sum;
	a=10;b=20;c=30;
	sum=a+b*c;
	a=c;d=a+c;
	printf("sum=%d,d=%d",sum,d); 
}
结果为sum=610 d=60*/




/* TODO (#1#): 题目3 

#include<stdio.h>
int main(void){
	int a,b,h;
	float s;//面积s要定义为浮点型 
	a=5;
	b=10;
	h=6;
	s=a*b*h;
	printf("a=%d,b=%d,h=%d,s=%f\n",a,b,h,s);
	return 0;
}
*/


/* TODO (#1#): 题目4.1
#include<stdio.h>
int main(void){
    double x;
    printf("请输入一个实数x:");
    scanf("%lf",&x);
    printf("x=%f,y=%f",x,x*x);
    return 0; 
} 
 */
 
 /* TODO (#1#): 题目4.2
#include<stdio.h>
int main(void){
	int a,b,c,s;
	float ave;
	scanf("%d%d%d",&a,&b,&c);//引号里面有啥就输啥 不要把&a,&b,&c这些打到引号里面了 
	s=a*b*c;
	ave=s/3.0;//这个地方必须是3.0  不可以是3 
	printf("s=%d\n,ave=%f\n",s,ave);
	return 0;
}
*/


/* TODO (#1#): 题目7 

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
    结果为i1 = 0i2 = 1000 */
    
    
    
/* TODO (#1#): 题目10 */ 
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
    //结果为sum=9 
