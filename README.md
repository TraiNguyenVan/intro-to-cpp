# C++ Exam Solution Workflow: Powered by Gemini CLI

This repository demonstrates a modern, AI-assisted software engineering workflow used to solve a C++ programming exam. By leveraging the **Gemini CLI**, the solution was developed under strict architectural constraints and grounded in specific course materials.

## 🚀 The Workflow

The project was completed in four distinct phases:

### Phase 1: Knowledge Grounding & Context Engineering
Before writing any code, Gemini CLI was tasked with analyzing the entire repository.
- **Automated Mapping:** The agent scanned lecture PDFs and raw text logs.
- **Context Generation:** It generated a `GEMINI.md` file to serve as "instructional memory," ensuring the AI always follows course-specific rules (e.g., forbidding `using namespace std;` and requiring explicit `this->` pointers).

### Phase 2: Problem Structuring
The exam requirements were formalized:
- **Requirement Capture:** The exam question was stored in `Exam_Question.md`.
- **Constraint Checklist:** Gemini identified student information requirements and the mandatory analysis template structure.

### Phase 3: Implementation & Self-Correction
The implementation was performed directly via the terminal:
- **Surgical Coding:** Gemini generated the `Complex` class in `N25DECE085_NguyenVanTrai_Exam2.cpp`.
- **Constraint Enforcement:** The agent automatically applied "No namespace std" and "Explicit this->" rules during code generation.
- **Documentation:** A corresponding `N25DECE085_Analysis_Exam2.md` was generated, reflecting the technical decisions made during implementation.

### Phase 4: Verification & Validation
The solution was tested using local system tools via the CLI:
- **Compilation:** Gemini executed `g++` to ensure C++11 compatibility.
- **Execution:** The agent ran the binary and verified that the output (complex number addition) was mathematically correct.

---

## 🛠️ Key Commands Used (Via Gemini CLI)

| Action | Command |
| :--- | :--- |
| **Analysis** | `gemini analyze .` |
| **Implementation** | `gemini write "Implement Complex class in Exam2.cpp..."` |
| **Testing** | `run_shell_command("g++ -std=c++11 Exam2.cpp -o test && ./test")` |
| **Formatting** | `run_shell_command("clang-format -i Exam2.cpp")` |

## 🎓 Results
- ✅ **Source Code:** [N25DECE085_NguyenVanTrai_Exam2.cpp](./N25DECE085_NguyenVanTrai_Exam2.cpp)
- ✅ **Analysis Report:** [N25DECE085_Analysis_Exam2.md](./N25DECE085_Analysis_Exam2.md)
- ✅ **Instructional Context:** [GEMINI.md](./GEMINI.md)

---
*Developed by Nguyễn Văn Trãi (N25DECE085) with Gemini CLI.*
