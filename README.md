# DSA_Basic
Solutions and core logic for fundamental Data Structures and Algorithms.




# Data Structures and Algorithms Foundations

How do you build a working game without a game engine? You use raw logic. This repository documents my first-semester journey through foundational Data Structures and Algorithms, tracking my progress from basic loops to manual memory management, and culminating in a terminal-based clone of Candy Crush built entirely from the ground up.

Every file in this repository was written from scratch to master core programming logic, pointer manipulation, and problem-solving without relying on external libraries or shortcuts.

## Featured Project: Mini Candy Crush

The primary highlight of this repository is a complete, console-based Mini Candy Crush game implemented in C++.

### Key Features

* **Grid Mechanics:** Built using 2D array manipulation to handle real-time board updates, detecting matching sequences, popping them, and shifting the remaining elements downward dynamically.
* **Score Tracker and Move Logic:** Manages player inputs, tracks validity of moves, and updates scores based on the size of the matches.
* **Zero Dependencies:** Written purely using standard loops, condition checking, and matrices—proving that complex mechanics can be achieved with solid foundational logic.

## Repository Architecture

### 1. Basic Arrays and Matrix Logic

* Standard 1D array operations including insertion, deletion, and element shifting.
* Multi-dimensional arrays focusing on matrix multiplication, transposing, and grid boundary collision logic.
* Dynamic array allocation using pointers.

### 2. Searching and Sorting Algorithms

* **Searching:** Iterative and recursive implementations of Linear Search and Binary Search.
* **Sorting:** Practical implementations of Bubble Sort, Selection Sort, and Insertion Sort to understand time complexity firsthand.

### 3. Pointers and Memory Management

* Deep-dive exercises into pointer arithmetic, references, and dereferencing.
* Explicit handling of dynamic memory allocation using `new` and `delete` structures to maximize efficiency and prevent memory leaks.

### 4. Recursion

* Classic structural recursion examples including Factorials, the Fibonacci sequence, and the Tower of Hanoi.
* Practical analysis of stack memory and defining strict base cases to prevent stack overflow.

### 5. Linked Lists Introduction

* Initial implementations of Singly Linked Lists, covering node creation, sequential insertion, deletion, and traversal.

  
* core concepts built from scratch, featuring a complete console-based Mini Candy Crush game in C++.

## Technical Stack

* **Language:** C++
* **Compiler:** GCC / G++
* **Environment:** VS Code

## How to Compile and Run

To run the Mini Candy Crush game or any of the algorithmic solutions locally, follow these steps:

1. Clone this repository:
```bash
git clone https://github.com/your-username/repository-name.git

```



```

2. Navigate to the directory containing the file:
   ```bash
   cd repository-name

```

3. Compile the code using g++:
```bash
g++ candy_crush.cpp -o candy_crush

```



```

4. Run the compiled executable:
   ```bash
./candy_crush

```

