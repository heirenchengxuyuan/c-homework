/*������һ
#include<stdio.h>
#define pi 3.1415926
int main(void)
{
float r,l,s;
printf("������Բ�İ뾶:");
scanf("%f",&r);
l=2*pi*r;
s=pi*r*r;
printf("Բ���ܳ�Ϊ��%f\n,Բ�����Ϊ��%f\n",l,s);
} */

 
/*��������
#include <stdio.h>
int main(void)
{
  int c,f;
  scanf("%d",&c);
  f=9*c/5+32;
  printf("the f is %d\n",f);
}
*/


/*ѡ����һ
#include<stdio.h>
int main(void)
{
	float h, r, l, s, sq, vq, vz;
	float pi = 3.141526;
	printf("������Բ�뾶r��Բ����h��");
	scanf("%f %f", &r, &h);               //Ҫ������Բ�뾶r��Բ����h 
	l = 2 * pi*r;                          //����Բ�ܳ�l
	s = r*r*pi;                          //����Բ���s
	sq = 4 * pi*r*r;                       //����Բ������sq
	vq = 3.0 / 4.0*pi*r*r*r;               //����Բ�����vq
	vz = pi*r*r*h;                       //����Բ�����vz
	printf("Բ�ܳ�Ϊ:       l=%6.2f\n", l);
	printf("Բ���Ϊ:       s=%6.2f\n", s);
	printf("Բ������Ϊ:   sq=%6.2f\n", sq);
	printf("Բ�����Ϊ:     v=%6.2f\n", vq);
	printf("Բ�����Ϊ:     vz=%6.2f\n", vz);
	return 0;}
*/
	
	
/*ѡ�����
#include<stdio.h>
int main(void){
int i=0 ,j ,k;
int result=0;  //���ڴ洢�õ�������
while(i<3)
{
j=0;
k=1;
while(j<i)   {k*=10; j++;}  //kΪ��iλ����

result+=(a[i]-'0')*k;  //��(a[i]-'0')���ַ���ת��Ϊ��ֵ���ٳ���λk ,
}
}*/




/*ѡ������
#include<stdio.h>
int main(void){
int i=0 ,j ,k;
int result=0;  //���ڴ洢�õ�������
while(i<3)
{
j=0;
k=1;
while(j<i)   {k*=10; j++;}  //kΪ��iλ����

result+=(a[i]-'0')*k;  //��(a[i]-'0')���ַ���ת��Ϊ��ֵ���ٳ���λk ,
}
}*/


//ѡ������ 
#include<stdio.h>
int main(){
char a;
printf("������һ����дӢ����ĸ��");
scanf("%c",&a);
printf("ת����Сд��ĸΪ%c",a+32);
}


