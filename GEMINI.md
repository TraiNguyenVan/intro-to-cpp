# Project Overview: Intro to C++ (Exam Workspace)

This repository is an educational and examination workspace for C++ development, specifically tailored for student **Nguyễn Văn Trãi (ID: N25DECE085)**. It serves as both a study environment and a platform for completing C++ programming assessments.

## Directory Structure & Key Files

- **Instructional Context:**
  - `CPP_Context.txt`: A comprehensive reference document containing all lecture materials, C++ rules, syntax definitions, and code examples.
  - `CPP_Index.md`: A critical navigation index for `CPP_Context.txt`. Use this to find specific topics by line number or search anchors.
  - `*.pdf`: Original lecture slides covering C++ Basics, OOP, Classes, Inheritance, and Overloading.

- **Exam & Source Files:**
  - `N25DECE085_NguyenVanTrai_Exam2.cpp`: The primary C++ source file for the exam project.
  - `Analysis_Document_Template.md`: The final analysis after finish implement the source file of the problem, use it as a template so you can create an actual one
- **Configuration:**
  - `.clang-format`: Enforces the **Google C++ Style Guide** with a 4-space indent.
  - `.vscode/`: contains environment-specific settings for Visual Studio Code.

## Building and Running

### Compilation
To compile the exam source file using `g++`:
```bash
g++ -std=c++11 N25DECE085_NguyenVanTrai_Exam#.cpp -o exam
```

### Execution
Run the compiled binary:
```bash
./exam
```

### Code Formatting
Apply the project's style rules automatically:
```bash
clang-format -i N25DECE085_NguyenVanTrai_Exam2.cpp
```

## Development Conventions

1.  **Instructional Grounding**: Always refer to `CPP_Context.txt` via `CPP_Index.md` before answering technical questions or implementing logic to ensure consistency with the course material.
2.  **Explicit Standard Library**: **Do NOT use `using namespace std;`**. Always use explicit prefixes (e.g., `std::cout`, `std::string`).
3.  **Member Access**: Prefer the explicit `this->` pointer when accessing class members to improve clarity and avoid ambiguity.
4.  **Access Control**: Rigorously separate `private` data members from `public` interfaces.
5.  **Documentation**: Every programming task requires a corresponding analysis report based on `Analysis_Document_Template.md`.
6.  **Style Compliance**: All code must pass `clang-format` checks based on the provided `.clang-format` file.
