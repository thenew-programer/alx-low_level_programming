# Struct In C
In C programming language, a structure, or struct, is a user-defined data type that groups together related data items of different data types. A struct can be thought of as a collection of variables under a single name.

To define a struct, you use the struct keyword, followed by a name for the struct, and a set of curly braces that enclose the list of member variables. Here is an example of a struct that defines a animal:

```
struct animal {
    char name[50];
	char owner[20];
};
```

In this example, the animal struct has two member variables: a character array for the animal's name, and a char array for the animal's age.

To create an instance of a struct, you declare a variable of the struct type and initialize its member variables using the dot (.) operator. Here is an example:


```
struct animal dog;

strcpy(dog.name, "Poppy");
strcpy(dog.owner, "ALX")
```
