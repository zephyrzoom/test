/*
 * @author 707<707472783@qq.com>
 * 数字反转
 */
#include<stdio.h>
void m(int a[], int n)
{
    int b[8], i, j;
    for (i = 3, j = 0; i < n; i++, j++) {
        b[j] = a[i];
    }
    for (i = 0; i < 3; i++, j++) {
        b[j] = a[i];
    }
    for (i = 0; i < n; i++) {
        a[i] = b[i];
    }
}

int main(void)
{
    int a[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    m(a, 8);
    int i;
    for (i = 0; i < 8; i++){
        printf("%5d", a[i]);
    }
}
