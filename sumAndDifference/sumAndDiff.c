#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m;
    float x, y;
    
	scanf("%d %d", &n, &m);
    scanf("%f %f", &x, &y);
    
    int sum = n + m;
    int dif = n - m;
    printf("%d %d\n", sum, dif);
    
    float sumf = x + y;
    float diff = x - y;
    printf("%0.1f %0.1f", sumf, diff);
    
    return 0;
}
