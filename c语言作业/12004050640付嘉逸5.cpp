//������һ 
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
//�ڶ��� 
#include<stdio.h>

int main()

{

int i,n;//����ѭ�����Ʊ����ͷ�ĸֵ

double sum,k=1;//������ͱ�����ת����ŵı����ĳ�ֵ

printf("please input number n:\n");//��ʾ�û�������Ҫ�ķ�ĸֵ

scanf("%d",&n);//��Ҫ�û������n��ֵ

for(i=1,sum=0;i<=n;i++)//ѭ����1��n�������

{

sum+=k/i;//�ۼ����

k*=-1;//ʵ�ַ��ŵı任

}

printf("%lf\n",sum);//������

return 0;

}  
//������ 
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

//������ 
#include <stdio.h>
void main()
{
int i, j, a[10];
long sum = 0, chengji = 1, pingfanghe = 0;
printf("������10������\n");
   for (i = 0; i < 10; i++)//����ʮ����
        scanf("%d", &a[i]);
   for (j = 0; j < 10; j++)
{
    sum += a[j];
    chengji *= a[j];
    pingfanghe += a[j] * a[j];
}
    printf("ʮ�����ĺ�Ϊ��%ld\n", sum);
    printf("ʮ�����Ļ�Ϊ��%ld\n", chengji);
    printf("ʮ������ƽ����Ϊ��%ld\n", pingfanghe);
    printf("ʮ�����ĺ͵�ƽ��Ϊ��%ld\n", sum*sum);
    system("pause");
}
//������
 int i,j;
 for(i = 1; i < 100; i++){
     for(j = 1; j < i/2; j++){
         if(0 == i%j && i != j && j != 1)
             break;
          printf(i);
     }
 } 
//������ 
#include<stdio.h>
void main()
{
char c;
printf("������һ���ַ�(��#����):");
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
printf("��ĸ����:%d\n",i);
printf("���ָ���:%d\n",j);
printf("�����ַ�����:%d\n",k);
} 
//������ 
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

//�������
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
printf("ʮ�����������ǣ�%d", Max);
return 0;
} 

//ѡ������
 #include<stdio.h>
int main()
{
int zs;fs;ls;n;s[20];
for(i=0;i<20;i++)
scanf("%d",&s[i]);//����20����
for(j=0;j<20;j++)
{if(s[j]>0)
zs++;
else if(s[j]==0)
ls++;
else
fs++;
}
printf("����=%d\n����=%d\n��=%d\n",zs,fs,ls);

} 























 
