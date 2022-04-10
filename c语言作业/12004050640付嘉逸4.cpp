/**/
#include<stdio.h>
int main(void){
 int


 return 0;
}
 //必做1
void a(){
    printf("请输入三个整数：");
    int a,b,c;
    int max;
    scanf("%d%d%d",&a,&b,&c);
    max = (a>((b>c)?b:c))?a:((b>c)?b:c);
    printf("%d",max);
}
 //必做2
void b(){
      printf("请输入三个字母：");
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
    
    printf("请输入三个字母：");
    char a,b,c;
    char max;
    scanf("%c %c %c",&a,&b,&c);
    max = (a>((b>c)?c:b))?((b>c)?c:b):a;
    printf("%c",max);
}
#include<math.h>
 //必做3
void c(){
    printf("请输入二次函数的系数：");
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float x1,x2;
    x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
    if (sqrt(b*b-4*a*c) > 0)
    {
       printf("此方程有两个根：x1 = %.3f , x2 = %.3f",x1,x2);
    }
    else if (sqrt(b*b-4*a*c) == 0)
    {
        printf("此方程有两个相等的根：x1 = x2 = %.3f",x1);
    }
    else 
    {
        printf("该方程没有根！");
    }
}

 //必做4
void d(){
    printf("请输入一个成绩：");
    int grade;
    scanf("%d",&grade);
    if (grade >= 90)
    {
        printf("等级为A");
    }else if (grade >= 80)
    {
        printf("等级为B");
    }else if (grade >= 70)
    {
        printf("等级为C");
    }else if (grade >= 60)
    {
        printf("等级为D");
    }else
    {
        printf("等级为E");
    }   
}

 //必做5
void e(){
    printf("请输入三个整数：");
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

