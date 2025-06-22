# 🧠 Rank-5 C++ Exam Preparation

This repository is dedicated to practicing for the **42 School Rank 5 C++ Exam** using a **Level-based exercise system**. It covers all key topics from C++ Modules 00 to 09 using only **C++98**.

## 📁 Structure

- Each level is stored in a separate folder:
  ```
  level0/
  level1/
  ...
  level9/
  ```
- Each folder contains **one or more Markdown files**, each describing an exercise:
  ```
  level3/
    ├── claptrap_simulation.md
    ├── inheritance_chain_test.md
  ```

- No Makefiles are included (unless explicitly required in the exercise).
- You are expected to implement and test the code separately in your own environment.

## 🧱 Levels Overview

| Level | Topics Covered                             | C++ Module |
|-------|---------------------------------------------|------------|
| 0     | Basic Syntax, Namespaces, Streams, Const    | Module 00  |
| 1     | Stack/Heap, Constructors, Pointers, Refs    | Module 01  |
| 2     | Orthodox Canonical Form, Operator Overload  | Module 02  |
| 3     | Inheritance, Constructor Chaining, OOP      | Module 03  |
| 4     | Abstract Classes, Virtual Functions         | Module 04  |
| 5     | Exception Handling, Bureaucrat Logic        | Module 05  |
| 6     | Casting (`static_cast`, `reinterpret_cast`) | Module 06  |
| 7     | Templates: Function and Class               | Module 07  |
| 8     | STL: Containers, Iterators, Algorithms      | Module 08  |
| 9     | Real-World Applications (Bitcoin, RPN, etc) | Module 09  |

## 🚦 Rules & Compilation

- Compile with:
  ```bash
  c++ -Wall -Wextra -Werror -std=c++98
  ```
- ❌ Forbidden:
  - `printf`, `malloc`, `free`, `using namespace`, `friend`
  - STL usage **before Level 8**
- ✅ Allowed:
  - Everything in `<iostream>`, `<string>`, `<cmath>`, etc.
  - Orthodox Canonical Form (Rule of 3) from Level 2+
  - Templates from Level 7+

## 🧠 Purpose

The goal is to give you **non-repeating, exam-style practice problems** across all C++ modules in a focused and modular way — perfect for preparing for evaluation interviews or final exams at 42.

---

> ✊ “Consistency beats intensity. Solve one a day — and you’ll be unbreakable by Level 9.” – You, soon.
