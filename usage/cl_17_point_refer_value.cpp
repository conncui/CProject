#include <stdlib.h>
#include <stdio.h>

// 创建长度为N的动态数组
// 这是一个 指针(函数)


void change_by_value(int x, int y){
    printf("\n change_by_value:");

    int temp = x;
    x = y;
    y = temp;
}

void change_by_pointer(int *x, int *y){
    printf("\n change_by_pointer:");

    int temp = *x;
    *x = *y;
    *y = temp;
    printf("\n %p  %p",x ,y);
}


void change_by_ref(int &x, int &y){
    printf("\n change_by_ref:");

    int temp = x;
    x = y;
    y = temp;
    printf("\n %d  %d",x ,y);
    printf("\n %d  %d",&x ,&y);
    printf("\n %p  %p",&x ,&y);
}

int main(){
    int a = 1;
    int b = 2;
    printf("\n数据:");

    printf("\n %p  %p",a ,b);
    printf("\n %d  %d",&a ,&b);
    printf("\n %p  %p",&a ,&b);

    printf("\n 交换:");

    change_by_value(a, b);
    change_by_pointer(&a, &b);
    change_by_ref(a, b);
}