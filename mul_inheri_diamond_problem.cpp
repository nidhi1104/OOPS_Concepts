
// If you don't use the virtual keyword for inheritance in the diamond problem scenario, 
// you will encounter the diamond problem, leading to ambiguity and potential issues. 
// Let's see what happens when you don't use the virtual keyword:
//output: error: request for member ‘show’ is ambiguous


// When you create an object of class D and call the show() method,
// the compiler faces an ambiguity because 
// it doesn't know which show() method to use — the one inherited from class B or the one inherited from class C.

// To resolve this issue, you can use the virtual keyword 
// when inheriting from the base class to indicate that the base class 
// should participate in virtual inheritance. This way, there will be only one copy of the base class, 
// and the ambiguity will be removed. Here's how you can modify the classes to avoid the diamond problem

#include <iostream>

class A {
public:
    A() {
        std::cout << "A Constructor" << std::endl;
    }

    void show() {
        std::cout << "A" << std::endl;
    }
};

class B : public A {
public:
    B() {
        std::cout << "B Constructor" << std::endl;
    }
};

class C : public A {
public:
    C() {
        std::cout << "C Constructor" << std::endl;
    }
};

class D : public B, public C {
public:
    D() {
        std::cout << "D Constructor" << std::endl;
    }
};

int main() {
    D obj;
    obj.show(); // Ambiguity: Which "show" method should be called?

    return 0;
}
