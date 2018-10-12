#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include <math.h>
bool chieuDaiCanhHuyen(int a, int b) {
    if (a <= 0 || b <= 0) {
        printf("Độ dài của hai cạnh không được nhỏ hơn 0:\n");
        return false;
    }
    return true;
}
float tinhChieuDaiCanhHuyen (int a, int b) {
    return (float) sqrt (pow (a, 2) + pow (b, 2));
}
int main() {
    int a;
    int b;
    printf("Vui lòng nhập cạnh thứ nhất:\n");
    scanf("%d", &a);
    printf("Vui lòng nhập cạnh thứ hai:\n");
    scanf("%d", &b);
    bool test = chieuDaiCanhHuyen(a, b);
    if (test == true) {
        printf("Cạnh huyền của tam giác là: %.2f\n", tinhChieuDaiCanhHuyen(a, b));
    }
}
