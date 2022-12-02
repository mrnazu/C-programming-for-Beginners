# Arrays in C
#### An array is a collection of elements where the data types of all the elements are same.
#### An array stores all the elements in contiguous memory locations.
#### Every element in an array has a specified index.
#### Size of an array in C is fixed at the time of definition

![Arrays-in-C-Programming-2](https://user-images.githubusercontent.com/108541991/205313917-e0b70ed1-ea38-4d6d-aefc-e28f54931162.png)


# Definition:
#### An array can be defined in the following manner in C:
#### Data_type name_of_array>[<size_of_array>]
#### Size of an array should always be an integer it cannot be a real value.


# Example
```
int a[10]; //single dimensional array 
float b[3][3]; //float - dimensional array
```

# Array initialization:
## 1. Static Initialization
```
int a[10]={0,1,2,3,4,5,6}
char c[5]={‘h’,’e’,’l’,’l’,’o’}
```

# 2. Dynamic Initialization
```
int a[10]; //array is created with garbage value
for (int i=0 ;i<10; i++)
scanf(“%d”,&a[i]);
```












