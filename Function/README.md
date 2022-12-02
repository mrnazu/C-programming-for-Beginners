# Functions in C

#### Functions are blocks of code which are used to perform specific tasks .
#### In C a function needs to be declared before it’s used.
#### Functions have a function definition , function body and a return type.
#### Functions with return type except void needs to return a value at the end.
#### Functions with return type void do not return any value.
#### A recursive function can call itself during the course of execution of a program.


# Example and Syntax
```
int sum (int a, int b){
	return a+b;
}
int main(){
	printf(“ %d”, sum(5,10));
}
```
```
void myFunction() {
  // code to be executed
}
```
# Explained
#### myFunction() is the name of the function
#### int means that the function datatype
#### Inside the function (the body), add code that defines what the function should do


# Call a Function
#### Declared functions are not executed immediately. They are "saved for later use", and will be executed when they are called.
#### To call a function, write the function's name followed by two parentheses () and a semicolon ;
#### In the following example, myFunction() is used to print a text (the action), when it is called:






