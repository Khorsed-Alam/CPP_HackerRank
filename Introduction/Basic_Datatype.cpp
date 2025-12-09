#include<iostream>
using namespace std;
int main(){
    int a;
    long b;
    char c;
    float f;
    double d;
     scanf("%d %ld %c %f %lf.5",&a,&b,&c,&f,&d);
     printf("%d\n",a);
     printf("%ld\n",b);
     printf("%c\n",c);
     printf("%.3f\n",f);
     printf("%.9lf\n",d);

    return 0;
}
