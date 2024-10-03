## Exercise 00: Aaaaand... OPEN!

This exercise helps us understand better the construction and use of the Orthodox Canonical Form. 
The Orthodox Canonical Form's Rule of Three :
- Destructor: Cleans up any resources that the class owns. If your class allocates memory (using new, for instance), the destructor should release that memory (using delete).
- Copy Constructor: Creates a new object as a copy of an existing object. It should allocate new memory and copy the content from the original object to avoid shallow copying, which can lead to double deletions or memory leaks.
- Copy Assignment Operator: Assigns the values from one object to another existing object. Like the copy constructor, it must manage resources properly to prevent leaks or corruption (self-assignment checks are often included).

Different constructor calls : 

ClapTrap claptrap1; => the default constructor will be called

ClapTrap claptrap2("Dinosaur"); => the paramterized constructor will be called since we have an argument

ClapTrap claptrap3 = claptrap2; => claptrap3 is initialized with claptrap2 so the copy constructor and assignation operator is called and we create a new instance based on claptrap2

ClapTrap claptrap4; => the default constructor will be called
claptrap4 = claptrap1; => the assignment operator is called to assign the state of claptrap1 to claptrap4

## Exercise 01: Serena, my love!

This exercise introduces the concept of inheritance in C++. Inheritance is a fundamental concept in object-oriented programming (OOP) that allows a class (known as the derived or child class) to inherit properties and behaviors (member variables and functions) from another class (known as the base or parent class). This mechanism promotes code reusability, hierarchical classification, and the ability to create more specialized versions of existing classes.

- Base Class: The class from which properties and methods are inherited. It can also be referred to as the parent class.

- Derived Class: The class that inherits from the base class. It can extend or modify the functionality of the base class.

- Access Specifiers: These determine the visibility of the base class members in the derived class:
        - Public Inheritance: Public members of the base class remain public in the derived class, and protected members remain protected.
        - Protected Inheritance: Public and protected members of the base class become protected in the derived class.
        - Private Inheritance: Public and protected members of the base class become private in the derived class.

- Constructor and Destructor: The base class constructor is called before the derived class constructor, and the derived class destructor is called before the base class destructor.

