# Function Pointers
Function pointers are a powerful feature of the C programming language that allow a program to pass a function as an argument to another function or assign a function to a variable. In essence, function pointers are variables that store the memory address of a function. When called, the function pointer can be used to invoke the function that it points to.

	To declare a function pointer, you use the syntax:

```
return_type (*pointer_name)(parameter_list)
```

- Return_type: The return type of the function.
- Pointer_name: the name of the function pointer.(You name it whatever you want)
- Parameter_list: list of parameter type that your function will accept.

### Example
```
int (*my_function_pointer)(int, int);
```

The code declare a function pointer named **my_function_pointer** that takes two **int** parameters and returns an **int**.


Once you have declared a function pointer, you can assign it the address of a function using the & operator. For example, if you have a function named add that takes two int parameters and returns their sum, you can assign the address of add to my_function_pointer like this:
```
my_function_pointer = &add;
```
or whithout the '&', like this:

```
my_function_pointer = add;
```
To call the function using the function pointer, you can use the dereference operator * like this:
```
int resutl = (*my_function_pointer)(3, 4);
```
whithout using '*' operator, like this:

```
int result = my_function_pointer(3, 4);
```
