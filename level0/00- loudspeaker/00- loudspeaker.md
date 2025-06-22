# Exercise - Level 0: The Loudspeaker

### ✅ Objective

Practice basic C++ syntax: namespaces, classes, member functions, I/O streams, const, and static.

---

### 📁 Directory

Save your work in a folder named: `level00_loudspeaker/`

---

### 📄 Files to Submit

- `main.cpp`
- `Loudspeaker.hpp`
- `Loudspeaker.cpp`

---

### ❌ Forbidden Functions

None — but only use **C++98** features!

---

### 🧠 Description

Create a class `Loudspeaker` that simulates a shouting machine.

---

### 📦 Class Specification

- **Class name:** `Loudspeaker`

#### 🔒 Private Members

- `static int instanceCount;`  
  → Counts how many `Loudspeaker` instances are currently active.

- `std::string phrase;`  
  → Stores the sentence to shout.

#### 🔓 Public Members

- **Constructor:**  
  Takes a `std::string` and stores it as `phrase`.

- **Destructor:**  
  Decreases `instanceCount` and prints:  
  `"Loudspeaker destroyed: goodbye!"`

- `void shout() const;`  
  → Prints the `phrase` in uppercase (manually convert character by character).

- `static int getInstanceCount();`  
  → Returns the number of active `Loudspeaker` objects.

---

### 🧪 Example

```cpp
int main() {
    std::cout << "Total: " << Loudspeaker::getInstanceCount() << std::endl;
    Loudspeaker a("hello world");
    Loudspeaker b("c++ is powerful");
    a.shout();   // HELLO WORLD
    b.shout();   // C++ IS POWERFUL
    std::cout << "Total: " << Loudspeaker::getInstanceCount() << std::endl;
    return 0;
}
```

---

### 🧼 Output Behavior

- Convert lowercase letters to uppercase manually (no `std::transform` or algorithm headers).
- Ensure the correct count of instances is printed.
- The destructor must print:  
  `"Loudspeaker destroyed: goodbye!"`

---

Good luck, and don’t forget to think like the compiler 🧠⚙️
