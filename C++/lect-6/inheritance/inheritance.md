What is Inheritance?

Inheritance is the process where one class (Derived/Child) acquires properties 
and behaviors of another class (Base/Parent).

Helps in code reusability and building class hierarchies.

Basic Syntax:
```cpp

 class Base {
 public:
     void display() {
         cout << "Base class method" << endl;
     }
 };

 class Derived : public Base {  // Inheriting from Base
 };

 int main() {
     Derived d;
     d.display();  // Derived class can access Base methods
 }

```

Types of Inheritance in C++

1.Single Inheritance
2.Multiple Inheritance
3.Multilevel Inheritance
4.Hierarchical Inheritance
5.Hybrid Inheritance

Inheritance = Code reusability + "IS-A" relationship.

Types: Single, Multiple, Multilevel, Hierarchical, Hybrid.

Supports public, private, protected inheritance modes.

