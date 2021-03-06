// 문제 : 원본값을 훼손하는 change 함수를 만들어주세요.(2중포인터)

#include <stdio.h>

void change(int** num) {
    **num = 50;
}

int main(void) {
  int x = 20;
  int* p = &x;

  printf("change 함수 호출하기 전의 x : %d\n", x);

  change(&p);

  printf("change 함수 호출한 후의 x : %d\n", x);
  // 출력 => change 함수 호출한 후의 x : 50

  return 0;
}