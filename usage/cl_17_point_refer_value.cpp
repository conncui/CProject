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

    printf("\n x地址：%d , y地址： %d",&x ,&y);
    printf("\n x地址：%p , y地址： %p",&x ,&y);}


void change_by_ref(int &x, int &y){
    printf("\n change_by_ref:");

    int temp = x;
    x = y;
    y = temp;
    printf("\n %d  %d",x ,y);
    printf("\n x地址：%d , y地址： %d",&x ,&y);
    printf("\n x地址：%p , y地址： %p",&x ,&y);
}


int swap(){
    int a ,b;
    a= 1;
    b = 2;
    printf("\n数据:");

    printf("\n %p  %p",a ,b);
    printf("\n %d  %d",&a ,&b);
    printf("\n %p  %p",&a ,&b);

    printf("\n 交换:");
    
    printf("\n------------------------------------------------------------------- ");
    a= 1;
    b = 2;
    change_by_value(a, b);
    printf("\nchange_by_value   : %d  %d",a ,b);

    printf("\n------------------------------------------------------------------- ");
    a= 1;
    b = 2;
    change_by_pointer(&a, &b);
    printf("\nchange_by_pointer : %d  %d",a ,b);

    printf("\n------------------------------------------------------------------- ");
    a= 1;
    b = 2;
    change_by_ref(a, b);
    printf("\nchange_by_ref     : %d  %d",a ,b);
}

int get_ptr_ref(){
    int num = 2222;
    int *num_ptr = &num;
    int &num_ref = num;
    printf("\nnum: %d",num);
    printf("\n&num: %ld",&num);
    printf("\nnum_ptr: %ld",num_ptr);
    printf("\nnum_ref: %ld",num_ref);
    printf("\n&num_ref: %ld",&num_ref);

}
int main(){
    // swap();
    get_ptr_ref();
}