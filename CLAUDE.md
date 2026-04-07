# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Purpose

This is a competitive programming practice repository for learning C and C++ to pass the SW Expert Academy test. Problems are sourced from CodeChef and Codeforces.

## Build Commands

Each file is compiled individually — there is no project-wide build system.

**Compile a C file:**
```sh
gcc -g -o src/path/to/output src/path/to/file.c
```

**Compile a C++ file:**
```sh
g++ -g -o src/path/to/output src/path/to/file.cpp
```

**Run the compiled binary:**
```sh
./src/path/to/output
```

The VSCode tasks build the active file into the same directory with the same base name (e.g., `foo.c` → `foo`). Compiled binaries (`*.out`) are gitignored.

## Repository Structure

```
src/
  codechef/
    basics/       # C fundamentals: I/O, strings, control flow
    dp/           # Dynamic programming solutions (C++)
    practice/     # Mixed C/C++ algorithm practice
  codeforces/
    simple/       # Basic C/C++ problems
    arrays/       # Array manipulation problems (C/C++)
    functions/
      c/          # Function-based problems in C
      cpp/        # Function-based problems in C++
```

## Coding Style

- C files use `#include <stdio.h>` and standard C I/O (`scanf`/`printf`, `fgets`, `getchar`/`putchar`)
- C++ files use `#include <iostream>` or `#include <bits/stdc++.h>` with `using namespace std;`
- Common C++ typedef: `typedef vector<int> vi;`
- Problems typically read `t` test cases then loop: `int t; cin >> t; while(t--) { ... }`
- Dynamic programming solutions use both recursive (`dp(a, i)`) and iterative memoized (`mem[]` array) approaches
