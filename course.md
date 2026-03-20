# C++ Object-Oriented Programming Notes

## 02. C++ Basic
### Introduction and Environment Setup
- Introduction to C++
- Compilation process (source -> object -> executable)
- Environment setup and ISO C++ standard

### Basic Syntax and Data Types
- [Minimal C++ program structure](./Basic/basic_structure.cpp)
- `#include <iostream>` and `std::cout`
- Namespaces (`using namespace std;`)
- [Basic data types (`bool`, `char`, `int`, `double`)](./Basic/data_types.cpp)
- [`sizeof` operator](./Basic/data_types.cpp)
- [Type conversion](./Basic/type_conversion.cpp)
- [Value initialization (e.g., `double d2 {2.3};`)](./Basic/value_initialization.cpp)
- [Automatic type deduction with `auto`](./Basic/automatic_type_deduction.cpp)
- [Constants (`const` and `constexpr`)](./Basic/constants.cpp) (`const`: value won't change; `constexpr`: evaluated at compile-time)

### Operators and Control Flow
- Arithmetic operators (`+`, `-`, `*`, `/`, `%`)
- Comparison operators (`==`, `!=`, `<`, `>`, `<=`, `>=`)
- Other operators (`+=`, `++`, `-=`, `--`, etc.)
- [Loops (e.g., `while`, `switch`)](./Basic/loops.cpp)

### Arrays, Pointers, and References
- [Arrays and pointers](./Basic/arrays_and_pointers.cpp) (Pointers store memory addresses; `*` dereferences to access value, `&` is the address-of operator)
- [Looping through arrays](./Basic/arrays_and_pointers.cpp) (e.g., `for (auto x : v)`)
- [References](./Basic/arrays_and_pointers.cpp) (`&`)
- [`nullptr`](./Basic/arrays_and_pointers.cpp)

### Strings
- [C-style strings](./Basic/string_cpp.cpp) vs [C++ `std::string`](./Basic/string_cpp.cpp)

### User-Defined Data Types
- [`struct`](./Basic/struct.cpp)
- [`class`](./Basic/class.cpp) (introduction)
- `enum class`

### Functions and Modularity
- Interface and implementation
- Header files (`.h`) and source files (`.cpp`)
- Separate compilation

### Error Handling
- Exceptions (`try`, `catch`, `throw`)
- Invariants
- Static assertions (`static_assert`)

---

## 03. C++ OO - Classes and Objects
### Introduction to Classes
- Concepts and terminology
- Class vs. Struct
- Concrete vs. Abstract classes

### Defining Classes and Objects
- Class declaration syntax
- Object instantiation
- Accessing members using `.` (dot) and `->` (arrow) operators

### Member Functions
- Inline member functions
- Defining member functions outside the class using scope resolution operator `::`

### Access Control
- `public` interface
- `private` implementation
- `protected` (detailed in inheritance)

### Core Concepts
- `this` pointer: Implicit and explicit usage
- `static` members: Shared data and utility functions
- `const` member functions: Ensuring state immutability
- `mutable`: Modifying data in const objects
- `friend`: Granting external access to private members

---

## 04. C++ OO - Class Members & Lifecycle
### Constructors and Destructors
- Default constructors
- Parameterized constructors
- Copy constructors
- Move constructors
- Delegating constructors (C++11)
- Explicit constructors
- Virtual destructors (overview)

### Member Initialization
- Initializer lists
- Order of initialization
- Base class initialization

### Object Lifecycle
- Creation process
- Destruction and resource cleanup (RAII)
- `new` and `delete` operators with class objects

### Special Member Functions
- Rule of Zero/Three/Five
- Defaulted and Deleted functions (`= default`, `= delete`)

---

## 05. C++ OO - Operator Overloading
### Principles of Overloading
- Syntax and constraints
- Members vs. Non-member functions for operators

### Common Operators
- Binary operators: `+`, `-`, `*`, `/`, etc.
- Unary operators: `++`, `--`, `-`, `!`, etc.
- Relational operators: `==`, `!=`, `<`, `>`, etc.
- Assignment operators: `=`, `+=`, etc.

### Specialized Operators
- Subscript operator `[]`
- Function call operator `()`
- Arrow operator `->`
- Stream insertion `<<` and extraction `>>`

### Conversions and Literals
- Type conversion operators
- Explicit conversion
- User-defined literals

--

## 06. C++ OO - Inheritance and Polymorphism
### Basic Inheritance
- Base and Derived classes
- `public`, `protected`, and `private` inheritance
- Overriding member functions

### Polymorphism and Virtual Functions
- Dynamic binding (Run-time polymorphism)
- `virtual` keyword and vtable mechanism
- `override` and `final` specifiers (C++11)
- Virtual destructors (critical for resource safety)

### Abstract Classes
- Pure virtual functions `= 0`
- Designing interfaces
- Abstract base classes (ABCs)

### Advanced Inheritance
- Multiple inheritance and ambiguity
- Virtual base classes (Diamond problem)
- Inheriting constructors (`using` declaration)

### Pointers to Members
- Declaring pointers to data members
- Declaring pointers to member functions
- Usage with `.*` and `->*` operators
