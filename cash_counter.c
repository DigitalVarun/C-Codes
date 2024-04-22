#include <stdio.h>

int main() {
  int at;
  char _2000 = 0;
  char _500 = 0;
  char _200 = 0;
  char _100 = 0; 
  char _50 = 0; 
  char _20 = 0; 
  char _10 = 0; 
  char _5 = 0; 
  char _2 = 0; 
  char _1 = 0;
  printf("Enter Amount: ");
  scanf("%d", &at);
  if(at>=2000){
    _2000 = at/2000;
    at = at%2000;
  }
  if(at>=500){
    _500 = at/500;
    at = at%500;
  }
  if(at>=200){
    _200 = at/200;
    at = at%200;
  }
  if(at>=100){
    _100 = at/100;
    at = at%100;
  }
  if(at>=50){
    _50 = at/50;
    at = at%50;
  }
  if(at>=20){
    _20 = at/20;
    at = at%20;
  }
  if(at>=10){
    _10 = at/10;
    at = at%10;
  }
  if(at>=5){
    _5 = at/5;
    at = at%5;
  }
  if(at>=2){
    _2 = at/2;
    at = at%2;
  }
  if(at>=1){
    _1 = at/1;
    at = at%1;
  }
  printf("\n$2000: %d", _2000);
  printf("\n$500: %d", _500);
  printf("\n$200: %d", _200);
  printf("\n$100: %d", _100);
  printf("\n$50: %d", _50);
  printf("\n$20: %d", _20);
  printf("\n$10: %d", _10);
  printf("\n$5: %d", _5);
  printf("\n$2: %d", _2);
  printf("\n$1: %d", _1);
  return 0;
}
