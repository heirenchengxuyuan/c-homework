/*必做题一
#include<stdio.h>
#define pi 3.1415926
int main(void)
{
float r,l,s;
printf("请输入圆的半径:");
scanf("%f",&r);
l=2*pi*r;
s=pi*r*r;
printf("圆的周长为：%f\n,圆的面积为：%f\n",l,s);
} */

 
/*必做题三
#include <stdio.h>
int main(void)
{
  int c,f;
  scanf("%d",&c);
  f=9*c/5+32;
  printf("the f is %d\n",f);
}
*/


/*选做题一
#include<stdio.h>
int main(void)
{
	float h, r, l, s, sq, vq, vz;
	float pi = 3.141526;
	printf("请输入圆半径r，圆柱高h∶");
	scanf("%f %f", &r, &h);               //要求输入圆半径r和圆柱高h 
	l = 2 * pi*r;                          //计算圆周长l
	s = r*r*pi;                          //计算圆面积s
	sq = 4 * pi*r*r;                       //计算圆球表面积sq
	vq = 3.0 / 4.0*pi*r*r*r;               //计算圆球体积vq
	vz = pi*r*r*h;                       //计算圆柱体积vz
	printf("圆周长为:       l=%6.2f\n", l);
	printf("圆面积为:       s=%6.2f\n", s);
	printf("圆球表面积为:   sq=%6.2f\n", sq);
	printf("圆球体积为:     v=%6.2f\n", vq);
	printf("圆柱体积为:     vz=%6.2f\n", vz);
	return 0;}
*/
	
	
/*选做题二
#include<stdio.h>
int main(void){
int i=0 ,j ,k;
int result=0;  //用于存储得到的整数
while(i<3)
{
j=0;
k=1;
while(j<i)   {k*=10; j++;}  //k为第i位的内

result+=(a[i]-'0')*k;  //用(a[i]-'0')将字符容转化为数值，再乘以位k ,
}
}*/




/*选做题三
#include<stdio.h>
int main(void){
int i=0 ,j ,k;
int result=0;  //用于存储得到的整数
while(i<3)
{
j=0;
k=1;
while(j<i)   {k*=10; j++;}  //k为第i位的内

result+=(a[i]-'0')*k;  //用(a[i]-'0')将字符容转化为数值，再乘以位k ,
}
}*/


//选做题六 
#include<stdio.h>
int main(){
char a;
printf("请输入一个大写英语字母：");
scanf("%c",&a);
printf("转换成小写字母为%c",a+32);
}


