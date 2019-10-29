#include <stdio.h>
int main()
{
    double fahrenheit, celsius;
    scanf("%lf", &fahrenheit);
    celsius = (fahrenheit-32)*5/9;
    printf("%.2lf\n", celsius);
    return 0;
}
