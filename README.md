# C++ Object-Oriented Programming Notes

## 02. C++ Basic
### Introduction and Environment Setup
C++ is a statically typed, compiled, general-purpose programming language created by Bjarne Stroustrup in 1985. It combines C's low-level capabilities with high-level abstractions, supporting procedural, object-oriented, and generic programming paradigms.

The compilation process transforms source code into an executable through four stages: preprocessing (handles `#include` and macros), compilation (source to assembly), assembly (to object files), and linking (combines objects and libraries).

Setting up a C++ environment requires a compiler (GCC/G++, Clang, MSVC) and optionally an IDE. Choose an ISO C++ standard (C++11/14/17/20/23) using compiler flags like `-std=c++17` for modern features.

- Introduction to C++
- Compilation process (source -> object -> executable)
- Environment setup and ISO C++ standard

### Basic Syntax and Data Types
A minimal C++ program requires a `main()` function as the entry point, with `return 0;` indicating successful execution. The `#include <iostream>` directive imports the iostream library, providing `std::cout` for console output and `std::cin` for input. These reside in the `std` namespace; `using namespace std;` imports all std names, though it's often avoided in large projects to prevent naming conflicts.

C++ primitive types include `bool` (boolean), `char` (character, 1 byte), `int` (integer, typically 4 bytes), and `double` (double-precision float, 8 bytes). The `sizeof` operator returns a type's size in bytes at compile time. Type conversion occurs implicitly for widening (e.g., `int` to `double`) but requires explicit casts (`static_cast`) for narrowing to prevent data loss.

C++11 introduced uniform initialization with braces `{}`, which prevents narrowing conversions and value-initializes objects. The `auto` keyword deduces variable types automatically from initializers, reducing verbosity and improving maintainability.

**Constants** - values that cannot be changed after creation:
- `const` - value is set at runtime and stays fixed. Use for variables that get their value when the program runs.
- `constexpr` - value is calculated at compile-time. Use for values known when writing the code (e.g., `constexpr double pi = 3.14159`).

The key difference: `const` is "set once, read-only"; `constexpr` is "computed at compile, embedded in the binary".

- [Minimal C++ program structure](./Basic/basic_structure.cpp) (see line 6)
- `#include <iostream>` and `std::cout`
- Namespaces (`using namespace std;`) - [example](./Basic/namespace.cpp) (see lines 5-8, 31-33)
- [Basic data types (`bool`, `char`, `int`, `double`)](./Basic/data_types.cpp) (see lines 4-8)
- [`sizeof` operator](./Basic/data_types.cpp) (see lines 10-14)
- [Type conversion](./Basic/type_conversion.cpp) (see lines 2-6)
- [Value initialization (e.g., `double d2 {2.3};`)](./Basic/value_initialization.cpp) (see lines 5-10)
- [Automatic type deduction with `auto`](./Basic/automatic_type_deduction.cpp) (see lines 5-9)
- [Constants (`const` and `constexpr`)](./Basic/constants.cpp) (see lines 6, 15, 17-19)

### Operators and Control Flow
C++ provides comprehensive operators: arithmetic (`+`, `-`, `*`, `/`, `%`), comparison (`==`, `!=`, `<`, `>`, `<=`, `>=`), compound assignment (`+=`, `-=`, etc.), and increment/decrement (`++`, `--`). Prefix/postfix increment differ in evaluation order: `++x` returns incremented value; `x++` returns original.

Control flow includes conditional statements (`if`, `else if`, `else`, `switch`) and loops: `while` (pre-test), `do...while` (post-test, guaranteed at least one iteration), `for` (counter-controlled), and the range-based `for` introduced in C++11 (`for (auto x : container)`). The `switch` statement supports integral or enum types; `break` prevents fall-through.

- Arithmetic operators (`+`, `-`, `*`, `/`, `%`)
- Comparison operators (`==`, `!=`, `<`, `>`, `<=`, `>=`)
- Compound assignment (`+=`, `-=`, `*=`, `/=`) and increment/decrement (`++`, `--`)
- [Loops (e.g., `while`, `switch`)](./Basic/loops.cpp) (see lines 4-20)

### Arrays, Pointers, and References
Arrays are fixed-size contiguous memory blocks; the array name decays to a pointer to the first element in most contexts. Pointers store memory addresses, declared with `*` (e.g., `int* ptr`). The address-of operator `&` obtains a variable's address, while dereference operator `*` accesses the pointed-to value. The equivalence `arr[i] == *(arr + i)` reveals the deep connection between arrays and pointers.

References provide aliases to existing variables (`int& ref = var`). They must be initialized at declaration, cannot be reseated, and cannot be null. References are safer than pointers for function parameters and return types, avoiding manual dereferencing syntax.

`nullptr` (C++11) is a type-safe null pointer literal, replacing `NULL` and `0` to prevent ambiguity in overload resolution.

- [Arrays and pointers](./Basic/arrays_and_pointers.cpp) (Pointers store memory addresses; `*` dereferences to access value, `&` is the address-of operator) (see lines 9-17)
- [Looping through arrays](./Basic/arrays_and_pointers.cpp) (e.g., `for (auto x : v)`) (see lines 33-36)
- [References](./Basic/arrays_and_pointers.cpp) (`&`) (see lines 40-45)
- [`nullptr`](./Basic/arrays_and_pointers.cpp) (see lines 48-51)

### Strings
C++ supports both C-style strings (null-terminated `char` arrays) and the modern `std::string`. C-style strings use functions from `<cstring>` (`strlen`, `strcpy`, `strcat`) and are prone to buffer overflows due to manual memory management.

`std::string` from the Standard Template Library provides automatic memory management, bounds checking (`at()`), concatenation (`+`), and rich member functions (`length()`, `substr()`, `find()`). It is safer and more convenient; prefer `std::string` in C++ code.

- [C-style strings](./Basic/string_c.cpp) (see lines 4-8) vs [C++ `std::string`](./Basic/string_cpp.cpp) (see lines 2-12)

### User-Defined Data Types
C++ enables creating custom types with `struct` and `class`. Both support member functions, constructors, inheritance, and templates. The key difference: `struct` defaults to public member access; `class` defaults to private. `struct` is typically used for passive data structures (POD), while `class` enables encapsulation by hiding implementation details.

`enum class` (scoped enumeration, C++11) is strongly typed and scoped—enumerators must be accessed as `EnumName::Value` and don't implicitly convert to integers. This prevents accidental misuse and namespace pollution versus traditional C enums. The underlying type can be specified: `enum class Status : uint8_t`.

- [`struct`](./Basic/struct.cpp) (see lines 5-23)
- [`class`](./Basic/class.cpp) (introduction) (see lines 5-15)
- [`enum class`](./Basic/enum_class.cpp) (see lines 1-2, 17-26)

### Functions and Modularity
Functions encapsulate reusable logic with a signature (return type, name, parameters) and a body. The interface (declaration) describes what the function does; the implementation (definition) describes how.

Large projects separate declarations into header files (`.h` or `.hpp`) and definitions into source files (`.cpp`). Headers use include guards (`#ifndef HEADER_H ... #endif`) or `#pragma once` to prevent multiple inclusion. Source files include their corresponding headers.

Separate compilation compiles each `.cpp` file independently into object files (`.o`). The linker combines objects and resolves external references, enabling faster recompilation, modularity, and team collaboration—only modified files need recompilation.

- [Interface and implementation](./Basic/function.cpp) (see lines 4-18)
- [Header files (`.h`)](./Basic/Vector.h) and [source files (`.cpp`)](./Basic/Vector.cpp)
- Separate compilation

### Error Handling
C++ uses exceptions for runtime error handling. Code that may throw is enclosed in `try`, exceptions are thrown with `throw` (typically an error object), and `catch` blocks handle specific exception types. Exceptions propagate up the call stack until caught, enabling centralized error handling.

Invariants are conditions that must always hold true at specific program points (e.g., after construction, before/after public method calls). They ensure correctness and are often verified with `assert` in debug builds.

`static_assert` performs compile-time assertions: `static_assert(condition, "message")`. It catches errors early—size requirements, type traits, or constant expressions—instead of at runtime.

- Exceptions (`try`, `catch`, `throw`) - see [usage in user.cpp](./Basic/user.cpp) and [implementation in Vector.cpp](./Basic/Vector.cpp)
- [Invariants](./Basic/Vector.cpp) (see lines 8-10), [exception handling](./Basic/user.cpp) (see lines 26-32)
- [Static assertions](./Basic/static_assert.cpp) (`static_assert`) (see lines 1, 8-9)

---

## 03. C++ OO - Classes and Objects
### Introduction to Classes
A **class** is a user-defined type that encapsulates data (member variables) and operations (member functions). Classes are the foundation of object-oriented programming in C++, enabling data abstraction and encapsulation.

**Class vs. Struct**: Both can have members, methods, and access specifiers. The key difference: `class` defaults to `private` access; `struct` defaults to `public`. Use `struct` for simple data aggregates (POD), `class` when you need encapsulation and invariants.

**Concrete vs. Abstract classes**: Concrete classes can be instantiated directly. Abstract classes contain at least one pure virtual function (`= 0`) and serve as interfaces or base classes—they cannot be instantiated.

- Concepts and terminology
- [Class vs. `struct`](./Basic/class.cpp) (see lines 5-15)
- Concrete vs. Abstract classes

### Defining Classes and Objects
A **class declaration** defines the type's interface: member variables and function prototypes. **Object instantiation** creates actual instances of the class in memory. Access members on stack objects with `.` (dot operator) and on pointers/heap objects with `->` (arrow operator).

The class body starts with `class Name {` and ends with `};`. Inside, specify access specifiers (`public:`, `private:`, `protected:`) followed by members. Objects are instantiated like variables: `ClassName object;` or `ClassName* ptr = new ClassName();`.

- Class declaration syntax
- Object instantiation
- Accessing members using `.` (dot) and `->` (arrow) operators

### Member Functions
**Member functions** operate on class instances and can access private members. **Inline functions** are defined within the class body—compilers may expand them in-place for performance. Functions defined outside use the **scope resolution operator `::`** to associate them with the class: `ReturnType ClassName::functionName() { ... }`.

Define simple getters/setters inline; move complex logic outside the class to keep headers clean and reduce compilation dependencies.

- Inline member functions
- Defining member functions outside the class using scope resolution operator `::` - [example](./Basic/function.cpp) (see lines 15-18)

### Access Control
**Access specifiers** enforce encapsulation—the principle of hiding implementation details. `public` members form the class interface accessible from anywhere. `private` members are internal implementation details, only accessible within the class. `protected` members are accessible within the class and by derived classes (covered in inheritance).

Encapsulation allows changing internal implementation without breaking client code.

- `public` interface
- `private` implementation
- `protected` (detailed in inheritance)

### Core Concepts
**`this` pointer**: An implicit pointer to the current object instance. Use it when parameter names shadow member variables: `this->member = param;`. It is passed automatically to all non-static member functions.

**`static` members**: Belong to the class, not individual objects. Static data is shared across all instances; static functions can be called without an object (`ClassName::function()`). Use for counters, shared configuration, or utility functions.

**`const` member functions**: Functions that don't modify the object's state. Declare with `void func() const;`. Required when calling methods on const objects. Enables const-correctness—guarantees read-only access.

**`mutable`**: Allows specific members to be modified even in `const` objects. Use for internal state like cache or reference counts that don't affect logical constness.

**`friend`**: Grants non-member functions or other classes access to private/protected members. Use sparingly—it breaks encapsulation but is necessary for some operator overloading and tightly coupled classes.

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
