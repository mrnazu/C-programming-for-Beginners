# Pointers in C
#### Pointers are variables which store the address of a variable.
#### They have data type just like variables, for example an integer type pointer can hold the address of an integer variable and an character type pointer can hold the address of char variable.

# Example
```
#include <stdio.h>
int main (){
	int y = 5;
	int *p;
	p = &y;
	printf("Address of y : %x\n", &y );
	printf("Content of p: %x\n", p );
	printf("Content of *p: %d\n", *p );
}

int a = 20;
int *p = &a;
```
<img>


