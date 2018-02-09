#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int f; // first-class tickets sold
    int c; // coach tickets sold
    double a; // first-class tickets amount
    double b; // coach tickets amount
    int g;
    double h;
    printf("first-class tickets sold: ");
    scanf("%d",&f);  /*input first-class tickets sold*/
    printf("\n coach tickets sold: ");
    scanf("%d",&c);  /*input coach tickets sold*/
    printf("\n first-class tickets amount: ");
    scanf("%d",&a);  /*input first-class tickets amount*/
    printf("\n coach tickets amount: ");
    scanf("%d",&b);  /*input coach tickets amount*/
    g = f + c;
    h= f*a + c*b;
    printf("total amount(coach tickets): $ %f \n" , c*b);
    printf("total amount(first-class tickets): $ %f \n" , f*a);
    printf("total tickets No: %d  \n",g); /*output total tickets*/
    printf("total amount: %f \n",h); /* total amount*/

    system("PAUSE");
    return EXIT_SUCCESS;
}
