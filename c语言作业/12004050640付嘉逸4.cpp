/**/
#include<stdio.h>
int main(void){
 int


 return 0;
}
 //����1
void a(){
    printf("����������������");
    int a,b,c;
    int max;
    scanf("%d%d%d",&a,&b,&c);
    max = (a>((b>c)?b:c))?a:((b>c)?b:c);
    printf("%d",max);
}
 //����2
void b(){
      printf("������������ĸ��");
      char a,b,c;
      char min = 'a';
      scanf("%c %c %c",&a,&b,&c);
      if (a > b)
      {
          if (b > c)
          {
              min = c; 
          }else
          {
              min = b;
          }
      }else
      {
          if (a > c)
          {
              min = c;
          }else
          {
              min = a;
          }
      }
      printf("%c",min);
    
    printf("������������ĸ��");
    char a,b,c;
    char max;
    scanf("%c %c %c",&a,&b,&c);
    max = (a>((b>c)?c:b))?((b>c)?c:b):a;
    printf("%c",max);
}
#include<math.h>
 //����3
void c(){
    printf("��������κ�����ϵ����");
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float x1,x2;
    x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
    if (sqrt(b*b-4*a*c) > 0)
    {
       printf("�˷�������������x1 = %.3f , x2 = %.3f",x1,x2);
    }
    else if (sqrt(b*b-4*a*c) == 0)
    {
        printf("�˷�����������ȵĸ���x1 = x2 = %.3f",x1);
    }
    else 
    {
        printf("�÷���û�и���");
    }
}

 //����4
void d(){
    printf("������һ���ɼ���");
    int grade;
    scanf("%d",&grade);
    if (grade >= 90)
    {
        printf("�ȼ�ΪA");
    }else if (grade >= 80)
    {
        printf("�ȼ�ΪB");
    }else if (grade >= 70)
    {
        printf("�ȼ�ΪC");
    }else if (grade >= 60)
    {
        printf("�ȼ�ΪD");
    }else
    {
        printf("�ȼ�ΪE");
    }   
}

 //����5
void e(){
    printf("����������������");
    int a,b,c;
    int t;
    scanf("%d%d%d",&a,&b,&c);
    if (a < b)
    {
        t = a;
        a = b;
        b = t;
    }
    if (a < c)
    {
        t = a;
        a = c;
        c = t;
    }
    if (b < c)
    {
        t = b;
        b = c;
        c = t;
    }
    printf("%d\t%d\t%d\n",a,b,c);
}
    
    
    

int main(){
     a();
     b();
     c();
     d();
    e();
}

