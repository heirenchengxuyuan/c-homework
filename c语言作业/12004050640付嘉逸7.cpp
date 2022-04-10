/*一
#include
void main()
{
    int a=1，b=2 c=3；
    printf("1---a=%d，b=%d，c=%d\n", a, b, c)；
    {
        int a, b, c;
        a=10, b=20, c=30;
        printf("2---a=%d, b=%d, c=%d\n" ,a, b, c);
     }
     printf("3---a=%d, b=%d, c=%d\n" a, b, c);
}

#include <stdio.h>
#include <math.h>
 
double distance(int x1, int y1, int x2, int y2){
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}
*/
 
/*二 
int main(){
    double sum=0;
    int n,x[10],y[10];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d %d",&x[i],&y[i]);
    for(int i=0;i<n-1;i++)
        sum+=distance(x[i],y[i],x[i+1],y[i+1]);
    printf("%.2f",sum);
 
    return 0;
*/
 
/*三 
#include
float change(float x);
void main(){undefined
float fahr;
printf("请输入摄氏温度:");
scanf("%f",&fahr);
printf("\n对应的华氏温度为：%.1f\n\n",change(fahr));
}
float change(float x){undefined
float cent=x*9/5+32;
return cent;
}
*/


/*四 
#include<iostream>
using namespace std;
#define PI 3.14159
int main()
{
float circleArea(float r);
float r;
cin >> r;
cout << circleArea(r) << endl;
return 0;
}

float circleArea(float r)
{
return PI * r * r;
} 
*/ 

/*五
#include <stdio.h>
#include <string.h>
void invert(char * ch)
{
char t;
int i;
for(i = 0 ; i < strlen(ch) / 2 ; i ++)
{
t = ch[i];
ch[i] = ch[strlen(ch)-i-1];
ch[strlen(ch)-i-1] = t;
}

}

void main()
{
char a[200];
printf("请输入字符串：");
gets(a);
invert(a);
printf("反序后的字符串为：%s\n",a);

}
*/ 
































 
