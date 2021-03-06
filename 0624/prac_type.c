// 문제 : 변수의 주소를 올바른 포인터 변수에 저장하지 않은 예 구현

#include "stdio.h"

// int 변수를 가리키려면 int 전용 포인터 변수를 써야하는 이유

int main(void) {
  int i = 1000;
  char* cp = &i; // cp 에는 i 의 주소값이 저장된다.
  
  printf("%d\n", i);
  printf("%d\n", *cp); // 1000 이 아는 -24가 출력된다.
  // 오류가 나는 이유 : 물론 cp 는 i의 주소값을 가지고 있다. 하지만 cp는 i변수에 접근하고 나서 4바이트를 가져오지 않고 1 바이트만 가져온다.
  // 누군가를 가리키려면 주소값으로는 부족하다. 올바른 사이즈도 필요하다.
  
  return 0;
}