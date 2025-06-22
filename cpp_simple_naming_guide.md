# 📝 Simple C++ Naming Guide (C++98 Style - 42 School)

Use this guide when writing your exercises to stay clean, consistent, and norm-friendly.

---

## 🧱 Class Names

- ✅ Use `UpperCamelCase`
- ✅ Match the file name (`ClassName.hpp`, `ClassName.cpp`)
```cpp
class FixedPoint {};
```

---

## 🔐 Private Attributes

- ✅ Prefix with `_`
- ✅ Use `lowerCamelCase` or `snake_case`
```cpp
class FixedPoint {
private:
    int _rawBits;
    float _value;
};
```

---

## 🌍 Public Attributes / Methods

- ✅ Use `lowerCamelCase` for functions
- ✅ No underscore prefix
```cpp
class FixedPoint {
public:
    int getRawBits() const;
    void setRawBits(int raw);
};
```

---

## 🧪 Local Variables

- ✅ Use `snake_case` or `lowerCamelCase`
```cpp
int main() {
    int counter = 0;
    float average_score = 12.5;
}
```

---

## 🔢 Constants

- ✅ Use `ALL_UPPERCASE` with `_` separator
```cpp
const int MAX_USERS = 100;
```

---

## 🧷 Static Variables

- ✅ Prefix with `s_`
```cpp
static int s_totalCount;
```

---

## 🎯 Enum Naming

- ✅ Enum name: `UpperCamelCase`
- ✅ Enum values: `ALL_UPPERCASE`
```cpp
enum Color { RED, GREEN, BLUE };
```

---

## 📛 Forbidden in 42

- ❌ `using namespace std;`
- ❌ `friend`
- ❌ `printf`, `malloc`, `free`
- ❌ STL before Module 08

---

✅ Follow this sheet to avoid mistakes during evaluation!

