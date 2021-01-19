#include <stdlib.h>
#include <stdio.h>

// 创建长度为N的动态数组
// 这是一个 指针(函数)

int * getArray(int n){
  int *a = (int * ) malloc(n*sizeof(int));
  return a;
}

int main(){
  int i , n =3;
  int *array = getArray(n);
  printf("初始化array:\n");

  for(i=0; i<n; i++){
    printf("array %d 是 %d\n",i,array[i]);
  }

  printf("赋值 array:\n");

  for(i=0; i<n; i++){
    array[i] = i;
  }
  for(i=0; i<n; i++){
    printf("array %d 是 %d\n",i,array[i]);
  }

  printf("free array:\n");

  // free(array);
  for(i=0; i<n; i++){
    printf("array %d 是 %d\n",i,array[i]);
  }
  
  // array = getArray(6);
  printf("重新指向 array:\n");

  printf("%d \n",array[5]);
  for(i=0; i<n; i++){
    printf("array %d 是 %d\n",i,array[i]);
  }

}