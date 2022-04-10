/*一 
#include<stdio.h>
main()
{
float stu[10],sum,aver;
int i;
sum=0;
for(i=0;i<10;i++)
{
scanf("%f",&stu[i]);
sum=sum+stu[i];
}
aver=sum/10;
printf("average=%f\n",aver);
printf("每个学生成绩与平均成绩之差:\n ");
for(i=0;i<10;i++)
{
printf("%.2f,",stu[i]-aver);
}
getch();
}*/ 


/* 二
#include <stdio.h>
#define N 10
int main()
{
int nArray[N];
int i=0,n=1;
printf("请输入数组数据:\n");
for(i=0;i<N;i++)
{
scanf("%d",&nArray[i]);
}
printf("原始数据为:\n");
for(i=0;i<N;i++)
{
printf("%d ",nArray[i]);
}
printf("\n");
//开始冒泡
printf("\n排序过程:\n");
int temp;
for(i=N-1;i>0;i--)
{
for(int j=0;j<i;j++)
{
if(nArray[j]>nArray[j+1])//由大到小排则修改为<号
{
temp=nArray[j];
nArray[j]=nArray[j+1];
nArray[j+1]=temp;
//printf("第%d个%-5d 同 第%d个%-5d 交换\n",j,nArray[j],j+1,nArray[j+1]);
printf("第%d步:\t",n);
for(int k=0;k<N;k++)
{
printf("%d ",nArray[k]);
}
printf("\n");
n++;
}
}
}
printf("排序过程结束\n\n");

//结束冒泡
printf("排序结果:\n");
for(i=0;i<N;i++)
{
printf("%d ",nArray[i]);
}
printf("\n");
return 0;
} 
*/ 



/*三
#include<stdio.h>
#include<string.h>
void main()
{char str[10],max;
printf("请输入字符：\n");
gets(str);
max=str[0];
for (i=0;i<strlen(str)+1;i++)
if (max<str[i])//字符比较就是ascii码的比较..
max=str[i];
putchar(max);//输出最大的字符
puts("\n");//输出换行符
}
*/


/*四
#include <stdio.h>
int  main()
{
int i,n=0,a[20]={1,1};
for(i=2;i<20;i++)
a[i]=a[i-1]+a[i-2];
for(i=0;i<20;i++)
{
printf("%-6d",a[i]);
n++;
if(n%5==0) printf("\n");
}
return 0;
}*/


/*五
#include <string.h>
#include <stdio.h>
 
int main()
{
    char str[1000];
    int lowAlpha, upAlpha, num, other;
    int i;
     
    lowAlpha = upAlpha = num = other = 0;
    for (i = 0; i < strlen(str); i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            lowAlpha++;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            upAlpha++;
        else if (str[i] >= '0' && str[i] <= '9')
            num++;
        else
            other++;
         
    printf("Upper:%d, Lower:%d, Number:%d, Other:%d\n", upAlpha, lowAlpha, num, other);
     
    return 0;
}
 


























 





































