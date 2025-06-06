# C++ Module 03 – Inheritance

## Project Description

This module explores **inheritance** in C++, including single and multiple inheritance, constructor chaining, and class hierarchy interactions. It builds progressively from simple class definitions to complex structures, culminating in a demonstration of the infamous **diamond problem** in C++.

---

## 💡 What I Learned

Throughout this module, I:

* Gained a practical understanding of how inheritance works in C++.
* Discovered constructor/destructor invocation order in base/derived classes.
* Practiced using `protected` attributes for reuse and extension in subclasses.
* Learned about the dangers of multiple inheritance (ambiguity, attribute clashes).
* Realized why **composition** is often preferred over **multiple inheritance** in real-world codebases.

---

## Exercises Breakdown

### **Exercise 00: Aaaaand... OPEN!**

This first exercise introduced the concept of **Orthodox Canonical Form** and how to build a well-structured class in C++.

#### What I Implemented:

* A class `ClapTrap` with health, energy, and attack attributes.
* Canonical methods: default constructor, copy constructor, copy assignment operator, destructor.
* Action methods: `attack`, `takeDamage`, `beRepaired`.

#### What I Learned:

* How to implement and debug basic class behavior.
* The Rule of Three: necessary when handling resources (not needed here, but important to learn).
* Importance of managing copy operations properly to avoid unexpected behavior.

#### Difficulties:

* Getting used to writing full class definitions and separating declarations/definitions.
* Understanding the difference between shallow vs deep copies even in simple examples.

---

### **Exercise 01: Serena, my love!**

We expanded the project by introducing **inheritance** through a new class `ScavTrap` derived from `ClapTrap`.

#### What I Implemented:

* Inherited `ClapTrap` into `ScavTrap`.
* Modified constructor, destructor, and attack messages.
* Added a new method: `guardGate()`.

#### What I Learned:

* Constructor chaining: base class is initialized before derived.
* Destructor chaining: destructors are called in reverse order.
* How derived classes reuse and override base class members.

#### Difficulties:

* Remembering to call the right constructors in the initializer list.
* Ensuring that all attribute values matched the exercise spec (ScavTrap has different values from ClapTrap).

---

### **Exercise 02: Repetitive work**

Here, we created `FragTrap`, another subclass of `ClapTrap`, continuing the inheritance theme.

#### What I Implemented:

* The `FragTrap` class with its own values and messages.
* A new function: `highFivesGuys()`.

#### What I Learned:

* How multiple child classes can coexist under the same parent class.
* Importance of clean and consistent inheritance structure.

#### Difficulties:

* Managing redundant code between `ScavTrap` and `FragTrap`.
* Keeping constructors and destructors distinct for debugging purposes.

---

### **Exercise 03: Now it’s weird!**

This was the most complex and interesting part of the module — creating `DiamondTrap`, which inherits from **both** `FragTrap` and `ScavTrap`.

#### What I Implemented:

* The `DiamondTrap` class with multiple inheritance.
* Overriding attributes to match specific rules:

  * Hit points: from `FragTrap`
  * Energy points: from `ScavTrap`
  * Attack damage: from `FragTrap`
* A special method `whoAmI()` that shows both the DiamondTrap’s own name and its ClapTrap name.

#### What I Learned:

* Multiple inheritance and how it can lead to the **diamond problem**.
* How attribute collisions (like `_name`) can cause ambiguous access.
* Why `virtual` inheritance exists in C++ — even if it wasn’t used here, it helped understand real-world design choices.

#### Difficulties:

* Debugging conflicting attributes (e.g., `ClapTrap::_name` vs `DiamondTrap::_name`).
* Unexpected behavior due to base class attributes being shared and overwritten multiple times.
* Making sure the correct constructor order was followed.

---

## Summary of Concepts

### Orthodox Canonical Form (Rule of Three)

* Default Constructor
* Copy Constructor
* Copy Assignment Operator
* Destructor

### Inheritance

* Constructors of base classes are called first.
* Destructors of base classes are called last.
* In multiple inheritance, ambiguity and duplication issues can arise.

### Diamond Problem

* Arises when a class inherits from two classes that both inherit from a common base.
* Can cause duplicate base class objects unless `virtual` inheritance is used.

---

## Final Thoughts

This project was a valuable step forward in understanding how C++ handles class relationships and memory safety in more complex scenarios. The final exercise made it very clear why **multiple inheritance should be used with caution**, and why **composition** is often a better alternative. The hands-on experience with constructor chaining and method overriding helped reinforce object-oriented design in C++.
