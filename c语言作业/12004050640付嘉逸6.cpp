/*һ 
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
printf("ÿ��ѧ���ɼ���ƽ���ɼ�֮��:\n ");
for(i=0;i<10;i++)
{
printf("%.2f,",stu[i]-aver);
}
getch();
}*/ 


/* ��
#include <stdio.h>
#define N 10
int main()
{
int nArray[N];
int i=0,n=1;
printf("��������������:\n");
for(i=0;i<N;i++)
{
scanf("%d",&nArray[i]);
}
printf("ԭʼ����Ϊ:\n");
for(i=0;i<N;i++)
{
printf("%d ",nArray[i]);
}
printf("\n");
//��ʼð��
printf("\n�������:\n");
int temp;
for(i=N-1;i>0;i--)
{
for(int j=0;j<i;j++)
{
if(nArray[j]>nArray[j+1])//�ɴ�С�����޸�Ϊ<��
{
temp=nArray[j];
nArray[j]=nArray[j+1];
nArray[j+1]=temp;
//printf("��%d��%-5d ͬ ��%d��%-5d ����\n",j,nArray[j],j+1,nArray[j+1]);
printf("��%d��:\t",n);
for(int k=0;k<N;k++)
{
printf("%d ",nArray[k]);
}
printf("\n");
n++;
}
}
}
printf("������̽���\n\n");

//����ð��
printf("������:\n");
for(i=0;i<N;i++)
{
printf("%d ",nArray[i]);
}
printf("\n");
return 0;
} 
*/ 



/*��
#include<stdio.h>
#include<string.h>
void main()
{char str[10],max;
printf("�������ַ���\n");
gets(str);
max=str[0];
for (i=0;i<strlen(str)+1;i++)
if (max<str[i])//�ַ��ȽϾ���ascii��ıȽ�..
max=str[i];
putchar(max);//��������ַ�
puts("\n");//������з�
}
*/


/*��
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


/*��
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
 


























 





































