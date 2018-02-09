#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a;
    int b;
    int c;
    int d;
    
    printf("a.b.c.d \n");
    
    printf("Enter a: ");
    scanf("\n%d",&a);
    printf("Enter b: ");
    scanf("\n%d",&b);
    printf("Enter c: ");
    scanf("\n%d",&c);
    printf("Enter d: ");
    scanf("\n%d",&d);
    
    printf("%d.%d.%d.%d \n",a,b,c,d);
    system("PAUSE");
    return EXIT_SUCCESS;
}
