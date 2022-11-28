## Conditional Statements in C programming are used to make decisions based on the conditions. Conditional statements execute sequentially when there is no condition around the statements. If you put some condition for a block of statements, the execution flow may change based on the result evaluated by the condition.

![maxresdefault](https://user-images.githubusercontent.com/108541991/204302535-c6d3185a-23ba-4722-ae40-de093d2cf896.jpg)


### The if statement:-
#### Use if to specify a block of code to be executed, if a specified condition is true
```
if (condition){
	statement 1;
	statement 2;
}
```

### The if-else statement:-
#### Depending on the result of the condition, the if - else statement executes one of the two potential statements. The if...else statement executes two different codes depending upon whether the test expression is true or false.

```
if (condition){
	statement 1;
	statement 2;
}
else{
	statement 3:
}
```

### The Nested if-else statement:-
#### A nested if-else contains one or more if-else statements.

```
if (condition1){
	statement 1;
	if(condition2)
		statement 2;
	else
		statement 3;
}
else{
	statement 3:
}
```

### Loops:-
#### Loops are used to re-execute a part of a code a given number of times, depending upon thecondition specified.

### Entry controlled:-
### The condition is checked each-time before entering the loop. If the condition is satisfied then only the loop body gets executed. The loop body does not get executed if the condition is false in the first iteration.


### 1) For loop
#### Syntax:
```
for(i=0 ;i<n; i++){
	//do something
}
```
### 2) While Loop
#### Syntax:
```
while(condition is True){
	//do something
}
```

### Switch case:-
#### The switch statement works as a multiway branch statement.
#### It’s a modified form of if-else.
#### It’s a common alternative to the if statement when you want to get multiple results.
#### Default condition gets executed when no conditions are met.

```
switch (n){
	case 1: Statement 1;
		break;
	case 2: Statement 2;
		break;
	default: Statement;
}
```
