## Exercise 00: Aaaaand... OPEN!

This exercise helps us understand better the construction and use of the Orthodox Canonical Form. 
The Orthodox Canonical Form's Rule of Three :
- Destructor: Cleans up any resources that the class owns. If your class allocates memory (using new, for instance), the destructor should release that memory (using delete).
- Copy Constructor: Creates a new object as a copy of an existing object. It should allocate new memory and copy the content from the original object to avoid shallow copying, which can lead to double deletions or memory leaks.
- Copy Assignment Operator: Assigns the values from one object to another existing object. Like the copy constructor, it must manage resources properly to prevent leaks or corruption (self-assignment checks are often included).

In practice : 

ClapTrap claptrap1; => the default constructor will be called

ClapTrap claptrap2("Dinosaur"); => the paramterized constructor will be called since we have an argument

ClapTrap claptrap3 = claptrap2; => claptrap3 is initialized with claptrap2 so the copy constructor and assignation operator is called and we create a new instance based on claptrap2

ClapTrap claptrap4; => the default constructor will be called
claptrap4 = claptrap1; => the assignment operator is called to assign the state of claptrap1 to claptrap4

## Exercise 01: Serena, my love!

This exercise introduces the concept of inheritance in C++ and how constructors are invoked in C++ when dealing with base and derived classes. Inheritance is a fundamental concept in object-oriented programming (OOP) that allows a class (known as the derived or child class) to inherit properties and behaviors (member variables and functions) from another class (known as the base or parent class). This mechanism promotes code reusability, hierarchical classification, and the ability to create more specialized versions of existing classes.

- Base Class: The class from which properties and methods are inherited. It can also be referred to as the parent class.

- Derived Class: The class that inherits from the base class. It can extend or modify the functionality of the base class.

- Access Specifiers: These determine the visibility of the base class members in the derived class:
        - Public Inheritance: Public members of the base class remain public in the derived class, and protected members remain protected.
        - Protected Inheritance: Public and protected members of the base class become protected in the derived class.
        - Private Inheritance: Public and protected members of the base class become private in the derived class.

- Constructor and Destructor: The base class constructor is called before the derived class constructor, and the derived class destructor is called before the base class destructor.

In practice : 

- Default construcors Calls : 

ClapTrap claptrap1; => default constructor
ScavTrap scavtrap1; => before the body of ScavTrap's constructor executes, it automatically calls the ClapTrap default constructor to initialize the base part of the ScavTrap object aka ClapTrap's constructors.

- Parameterized Constructor Calls :

ClapTrap claptrap2("Dinosaur"); => parameterized constructor m
ScavTrap scavtrap2("Scavtrap2"); => before executing its own body, it automatically calls the ClapTrap parameterized constructor to initialize the base part of scavtrap2 with the provided name.

- Copy Constructor Calls :

ScavTrap scavtrap3(scavtrap2); => the ScavTrap copy constructor calls the ClapTrap copy constructor to copy the base part of the object.

- Destructor Calls :

the destructors for ClapTrap are called for each instance following the ScavTrap destructors

## Exercise 02: Repetitive work

This exercise plays around the concept of inheritance introduced in exercise 01 by having another class FragTrap inheriting from ClapTrap.

## Exercise 03: Now it’s weird!

![image](https://github.com/user-attachments/assets/22c3c28b-1aab-4404-8d1c-8340372903b1)


This exercise demonstrate some of the risks and pitfalls associated with multiple inheritance. 

**1. Multiple Inheritance Complexity, the Diamond Problem**


Multiple inheritance is a class that inherits from more than one base class. 
In practice : DiamondTrap inherits from both FragTrap and ScavTrap.

C++ allows multiple inheritance, but it introduces ambiguities and complexity. 
In practice : if both FragTrap and ScavTrap inherit from ClapTrap, then DiamondTrap indirectly inherits from ClapTrap twice—leading to the potential for duplicate copies of the ClapTrap base class within DiamondTrap.

To solve this, C++ uses the **virtual** inheritance mechanism, where the base class (ClapTrap) is shared between FragTrap and ScavTrap, but this solution adds complexity and can be error-prone if not managed properly.

**2. Name Clashing**

Both DiamondTrap and ClapTrap must have n attribute with the same name (_name) according to the exercise. 
We need to use **scope resolution (::)** to counter this but the risk of name collisions still make the code harder to understand and can introduce subtle bugs.

**3. A code to avoid**

Multiple inheritance is often avoided due to the risks and complications it introduces. Composition (using objects to build other objects) is typically favored as a cleaner, safer design pattern.











