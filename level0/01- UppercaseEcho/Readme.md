# Level 0 - UppercaseEcho

## 📝 Summary

This exercise practices:
- Basic C++ syntax
- Standard input/output (`std::cin`, `std::cout`)
- `std::string` manipulation
- Manual ASCII character handling
- Conditional logic

---

## 🎯 Objective

Write a C++ program that:
- Reads a full line of input from the user.
- Prints the same line in **UPPERCASE** using ASCII conversion.
- If the input is empty, prints:

```
* LOUD AND UNBEARABLE FEEDBACK NOISE *
```

---

## 🗂️ Files

You must create:

- `main.cpp` — contains the program logic

---

## ⚙️ Requirements

- Must compile with:  
  `c++ -Wall -Wextra -Werror -std=c++98`
- You **must not** use:
  - `toupper()` from `<cctype>`
  - `using namespace std;`
- You **must**:
  - Use `std::string`, `std::getline`, `std::cout`
  - Handle empty input
  - Convert only lowercase letters to uppercase (`a` to `z` → `A` to `Z`)
  - Leave non-letter characters unchanged (spaces, punctuation, digits, etc.)

---

## 💡 Hints

- Use `getline(std::cin, input)` to read an entire line.
- Loop through the characters of the string.
- Check if a character is between `'a'` and `'z'`.
- Convert to uppercase by subtracting `32` from its ASCII value.

---

## 🧪 Examples

```bash
$ ./uppercase
hello world!
HELLO WORLD!

$ ./uppercase
Brrr it's cold.
BRRR IT'S COLD.

$ ./uppercase

* LOUD AND UNBEARABLE FEEDBACK NOISE *
```

---

## ✅ Submission Checklist

- [ ] No `using namespace std;`
- [ ] No `toupper()` or external libraries
- [ ] Only standard C++98 features used
- [ ] Handles empty input correctly
- [ ] Handles all characters properly
- [ ] Clean, readable code with proper indentation
