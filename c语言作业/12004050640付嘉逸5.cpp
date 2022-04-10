//必做题一 
#include <stdio.h> 
int main (void) 
{ 
int a,k;
scanf("%d",&a);       
if (a>0)       {           
printf("%d:",a);           
for (k=1;k<=a;k++)             
 if (!(a%k))   
    printf("%d,",k); 
} 
 printf("\n"); 
} 
//第二题 
#include<stdio.h>

int main()

{

int i,n;//定义循环控制变量和分母值

double sum,k=1;//定义求和变量和转变符号的变量的初值

printf("please input number n:\n");//提示用户输入想要的分母值

scanf("%d",&n);//需要用户输入的n的值

for(i=1,sum=0;i<=n;i++)//循环从1到n进行求和

{

sum+=k/i;//累加求和

k*=-1;//实现符号的变换

}

printf("%lf\n",sum);//输出结果

return 0;

}  
//第三题 
#include <stdio.h>
int main()
{
    int i,n;
    double sum=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum*i;
    printf("%d!=%lf",n,sum);
    printf("\n");
return 0;
    }

//第四题 
#include <stdio.h>
void main()
{
int i, j, a[10];
long sum = 0, chengji = 1, pingfanghe = 0;
printf("请输入10个数：\n");
   for (i = 0; i < 10; i++)//输入十个数
        scanf("%d", &a[i]);
   for (j = 0; j < 10; j++)
{
    sum += a[j];
    chengji *= a[j];
    pingfanghe += a[j] * a[j];
}
    printf("十个数的和为：%ld\n", sum);
    printf("十个数的积为：%ld\n", chengji);
    printf("十个数的平方和为：%ld\n", pingfanghe);
    printf("十个数的和的平方为：%ld\n", sum*sum);
    system("pause");
}
//第五题
 int i,j;
 for(i = 1; i < 100; i++){
     for(j = 1; j < i/2; j++){
         if(0 == i%j && i != j && j != 1)
             break;
          printf(i);
     }
 } 
//第六题 
#include<stdio.h>
void main()
{
char c;
printf("请输入一串字符(以#结束):");
c=getchar();
int i=0,j=0,k=0;
while(c!='#')
{
if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))i++;
else
if(c>='0'&&c<='9')j++;
else k++;
c=getchar();
}
printf("字母个数:%d\n",i);
printf("数字个数:%d\n",j);
printf("其它字符个数:%d\n",k);
} 
//第七题 
int i;
int a,b,c;
for (i=100;i<=999;i++){
a=i
b=(i/10)%10;
c=i%10;
	if(a*a*a+b*b*b+c*c*c==i) 
	  printf("%d\n",i);
  }
  return 0;
}

//必做题二
int main() {
int a[10];
int Max = 0;
for (int i = 0; i < 10; i++) {
scanf("%d", &a[i]);
}
for (int i = 0; i < 10; i++) {
if(a[i] > Max) {
Max = a[i];
}
}
printf("十个数中最大的是：%d", Max);
return 0;
} 

//选做题四
 #include<stdio.h>
int main()
{
int zs;fs;ls;n;s[20];
for(i=0;i<20;i++)
scanf("%d",&s[i]);//输入20个数
for(j=0;j<20;j++)
{if(s[j]>0)
zs++;
else if(s[j]==0)
ls++;
else
fs++;
}
printf("正数=%d\n负数=%d\n零=%d\n",zs,fs,ls);

} 























 
