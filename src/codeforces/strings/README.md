# Strings in C++

Reference guide for a Java engineer learning C++ strings for competitive programming.

---

## C++ Strings vs Java Strings

In Java, `String` is a first-class immutable object. In C++ you have two string types:

| | Java | C++ `std::string` | C `char[]` / `char*` |
|---|---|---|---|
| Mutable | No | **Yes** | Yes |
| Memory managed | GC | RAII (auto) | Manual |
| Null-terminated | No | No (has `.size()`) | **Yes** (you manage it) |
| Competitive prog | always | **use this** | avoid unless forced |

In competitive programming always use `std::string`.

---

## 1. Declaration & Input

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;         // reads one word (stops at whitespace) — like Java Scanner.next()

    string line;
    getline(cin, line); // reads full line — like Java Scanner.nextLine()
}
```

**Gotcha:** mixing `cin >>` and `getline` leaves a `\n` in the buffer. Fix:
```cpp
int n; cin >> n;
cin.ignore();         // consume the leftover '\n'
getline(cin, line);
```

---

## 2. Basic Operations (Java → C++ mapping)

```cpp
string s = "hello";

// length — s.length() in Java
s.size();       // or s.length() — both work, prefer size()

// charAt(i)
s[0];           // 'h' — no bounds check (fast)
s.at(0);        // 'h' — bounds-checked (throws std::out_of_range)

// substring(start, end) — NOTE: second arg is LENGTH, not end index!
s.substr(1, 3); // "ell" — start=1, length=3  (Java: s.substring(1, 4))

// indexOf — returns index or string::npos if not found
s.find("ll");   // 2
s.find("z");    // string::npos  (sentinel, like -1 in Java)
if (s.find("ll") != string::npos) { /* found */ }

// concatenation — operator+ works just like Java
string t = s + " world";

// append in-place (mutates s — unlike Java which creates a new object)
s += " world";

// equals — operator== works, no .equals() needed
s == "hello";   // true

// compareTo — same sign contract as Java
s.compare("hello"); // 0 if equal

// contains — no direct method, use find
s.find("ell") != string::npos; // true
```

---

## 3. Iterating Characters

```cpp
string s = "hello";

// range-for (like Java enhanced for)
for (char c : s) cout << c << "\n";

// index-based
for (int i = 0; i < (int)s.size(); i++) cout << s[i] << "\n";

// mutate in-place via reference
for (char &c : s) c = toupper(c); // s is now "HELLO"
```

---

## 4. char Utilities (`<cctype>`)

```cpp
#include <cctype>

isalpha(c)  // letter?
isdigit(c)  // digit?
isspace(c)  // whitespace?
isupper(c)  // uppercase?
islower(c)  // lowercase?
toupper(c)  // uppercase version
tolower(c)  // lowercase version
```

---

## 5. Conversions

```cpp
#include <string>

// int → string  (Java: String.valueOf(n))
string s = to_string(42);

// string → int  (Java: Integer.parseInt(s))
int n = stoi("42");

// string → long
long l = stol("123456789");

// char digit → int value
int d = '7' - '0'; // = 7  — classic competitive prog trick
```

---

## 6. Splitting a String

C++ has no built-in `.split()`. Use `stringstream` from `<sstream>`.

**Split on whitespace** — like Java's `"a b".split("\\s+")`
```cpp
#include <sstream> // stringstream
#include <vector>
#include <string>

string s = "hello world foo";
stringstream ss(s);
vector<string> tokens;

string word;
while (ss >> word) {
    tokens.push_back(word);
}
// tokens = ["hello", "world", "foo"]
```

**Split on a custom delimiter** — like Java's `"a,b,c".split(",")`
```cpp
string s = "a,b,c";
stringstream ss(s);
vector<string> tokens;

string token;
while (getline(ss, token, ',')) {
    tokens.push_back(token);
}
// tokens = ["a", "b", "c"]
```

| Java | C++ equivalent |
|---|---|
| `s.split("\\s+")` | `stringstream` + `>> word` loop |
| `s.split(",")` | `getline(ss, token, ',')` loop |

In competitive programming the whitespace variant covers 90% of cases since input is almost always space-separated.

---

## 7. Sorting and Reversing

```cpp
#include <algorithm>

string s = "dcba";
sort(s.begin(), s.end());    // "abcd"
reverse(s.begin(), s.end()); // "dcba"
```

Strings are ranges in C++. Anything that works on `vector` with iterators works on `string` too.

---

## 7. Common Competitive Programming Patterns

```cpp
// frequency count of characters
int freq[26] = {};
for (char c : s) freq[c - 'a']++;

// palindrome check
string rev = s;
reverse(rev.begin(), rev.end());
bool isPalin = (s == rev);

// anagram check — sort both and compare
string a = "listen", b = "silent";
sort(a.begin(), a.end());
sort(b.begin(), b.end());
bool isAnagram = (a == b);

// build a string char by char
string result = "";
for (int i = 0; i < n; i++) result += someChar;
```

---

## Problem Types to Practice

| Type | Key technique |
|---|---|
| Palindrome check | `reverse` + compare |
| Character frequency | `freq[c - 'a']` array |
| Anagram check | sort both strings, compare |
| String parsing | `find`, `substr`, `stoi` |
| Case manipulation | `toupper` / `tolower` in range-for with `char &` |
