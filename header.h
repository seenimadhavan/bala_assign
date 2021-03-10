#include<stdio.h>
#include<stdlib.h>

#define bitmapping(event,eve) event | (1 << (eve-1))

int modu[5];
int n;

typedef void(*fptr)();

void module1();
void module2();
void module3();
void module4();
void module5();
void init(int);
void reg_event(int , int, fptr);
void event(int);
