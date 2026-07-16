# Beam Load Calculator using C++
## Learn Arrays, Vectors and Time Complexity through a Civil Engineering Example

> A beginner-friendly tutorial for GATE CSE aspirants to understand how Data Structures & Algorithms concepts can be applied to Civil Engineering problems.

---

# Learning Objectives

After completing this project, you will understand:

- One-dimensional arrays using `std::vector`
- Function design in C++
- Passing vectors by reference
- Linear traversal of an array
- Summation algorithm
- Time Complexity `O(n)`
- Space Complexity `O(n)`
- Auxiliary Space `O(1)`
- Engineering interpretation of array traversal

---

# Problem Statement

A simply supported beam is subjected to multiple point loads.

Given the magnitude of each point load, calculate the **total load** acting on the beam.

Example

| Point Load | Magnitude (kN) |
|------------|---------------:|
| P₁ | 10 |
| P₂ | 20 |
| P₃ | 15 |
| P₄ | 25 |
| P₅ | 30 |

Required Output

Total Load

```
10 + 20 + 15 + 25 + 30 = 100 kN
```

---

# Engineering Interpretation

Instead of manually adding loads,

```
10
20
15
25
30
```

the program stores them inside a vector

```
Index

0    1    2    3    4

10   20   15   25   30
```

and visits every load exactly once.

---

# Algorithm

### Step 1

Read the number of point loads.

### Step 2

Create a vector of size `n`.

### Step 3

Read every load.

### Step 4

Initialize

```cpp
total = 0
```

### Step 5

Traverse the vector

```cpp
for(each load)
    total += load;
```

### Step 6

Print the total load.

---

# C++ Concepts Used

| C++ Concept | Purpose |
|-------------|---------|
| std::vector | Dynamic array |
| Function | Modular programming |
| for loop | Array traversal |
| Reference parameter | Avoid copying vector |
| double | Store engineering values |
| iomanip | Format output |

---

# Relation with GATE CSE DSA

| DSA Topic | Used Here |
|-----------|-----------|
| Array | Store loads |
| Traversal | Visit every load |
| Aggregation | Compute total sum |
| Function | Modular design |
| Complexity Analysis | O(n) |

---

# Time and Space Complexity Explained

## Time Complexity: O(n)

Think of the array as a row of boxes.

**Example**
---

# Time and Space Complexity Explained

## Time Complexity: O(n)

Think of the array as a row of boxes.

**Example**

```
+----+----+----+----+----+
| 10 | 20 | 15 | 25 | 30 |
+----+----+----+----+----+
```

To calculate the total load, the program must open every box exactly once.

| Step | Action  | Total |
|------|---------|-------|
| 1    | Read 10 | 10    |
| 2    | Read 20 | 30    |
| 3    | Read 15 | 45    |
| 4    | Read 25 | 70    |
| 5    | Read 30 | 100   |

The program cannot skip any box because every load contributes to the final answer.

| Number of loads | Iterations |
|------------------|------------|
| 5                | 5          |
| 100              | 100        |
| 1,000            | 1,000      |
| n                | n          |

The amount of work grows directly with the number of loads.

> **Time Complexity = O(n)**

---

## Space Complexity: O(n)

Before the program can calculate the total load, it must first store all the loads entered by the user.

**Example**

User enters:
```
10
20
15
25
30
```

The vector stores them in memory:

```
+----+----+----+----+----+
| 10 | 20 | 15 | 25 | 30 |
+----+----+----+----+----+
```

| Loads entered | Numbers stored |
|----------------|-----------------|
| 100            | 100             |
| 10,000         | 10,000          |

As the number of loads increases, the memory required by the vector increases proportionally.

> **Space Complexity = O(n)**

---

## What About the Variable `total`?

The program also creates:

```cpp
double total = 0.0;
```

This variable occupies only **one** memory location, whether there are 5, 500, or 50,000 loads.

Similarly, the loop variable:

```cpp
int i;
```

also uses only one memory location.

These variables do **not** grow with the input size.

> Therefore, they require **O(1)** (constant) space.

---

## Overall Summary

| Metric              | Reason                                       | Result |
|----------------------|-----------------------------------------------|--------|
| **Time Complexity**  | The program visits every load exactly once   | `O(n)` |
| **Space Complexity** | The vector stores all `n` load values        | `O(n)` |
| **Auxiliary Space**  | Only `total` and `i` are extra variables     | `O(1)` |

---

## What is "O"? (Big-O Notation)

The letter **"O"** stands for **Order** in the mathematical notation called **Big-O Notation**.

Big-O is **not** a unit of time like seconds or milliseconds. Instead, it describes **how the amount of work grows as the input size grows**.

It answers questions like:

> "If the input becomes larger, how much more work will the algorithm perform?"

---

## What is "n"?

The letter **"n"** represents the **input size**. It means different things depending on the problem:

| Problem               | n represents               |
|------------------------|-----------------------------|
| Array Program          | Number of array elements   |
| Linked List            | Number of nodes            |
| Graph                  | Number of vertices         |
| String                 | Number of characters       |
| Beam Load Calculator   | Number of point loads      |

---

## Examples

| n      | Loop executes  |
|--------|-----------------|
| 5      | 5 times         |
| 100    | 100 times       |
| 10,000 | 10,000 times    |

---

## Why is it Called O(n)?

The algorithm:

```cpp
for (i = 0; i < n; i++) {
    total += loads[i];
}
```

Every iteration processes exactly one element:

| Elements | Iterations |
|----------|------------|
| 5        | 5          |
| 100      | 100        |
| 1,000    | 1,000      |

The work grows in direct proportion to `n`.

> **Time Complexity = O(n)**

---

## Simple Meaning of O(n)

> "The running time grows **linearly** with the size of the input."

or

> "If the input doubles, the amount of work approximately doubles."

---

## Common Big-O Values

### O(1) — Constant Time
- `arr[5]`
- Reading one variable
- Pushing to a stack (amortized)

### O(log n) — Logarithmic Time
- Binary Search
- Balanced BST Search

### O(n) — Linear Time
- Array Traversal
- Finding Maximum
- Finding Minimum
- Computing Sum
- Beam Load Calculator

### O(n log n)
- Merge Sort
- Heap Sort
- Quick Sort (average case)

### O(n²) — Quadratic Time
- Bubble Sort
- Selection Sort
- Insertion Sort (worst case)
- Comparing every pair of elements
---


---

# Real Engineering Applications

The same traversal algorithm appears in

- Load Combination
- Shear Force Calculation
- Bending Moment Calculation
- Structural Analysis
- Finite Element Pre-processing
- Bridge Loading
- Building Load Estimation

---

# Learning Outcome

After this project, you should be able to

- use vectors confidently
- traverse arrays
- compute cumulative values
- write modular functions
- analyze algorithm complexity
- connect DSA concepts with engineering software

---



---

## Question 1: Time and Space Complexity (GATE CSE Style)

**Problem Statement:**

Consider the following C++ function that calculates a cumulative structural summary from an input vector of size `n`:

```cpp
std::vector<double> computeCumulativeLoads(const std::vector<double>& loads) {
    int n = loads.size();
    std::vector<double> cumLoads(n); 
    double runningSum = 0.0;
    for (int i = 0; i < n; ++i) {
        runningSum += loads[i];
        cumLoads[i] = runningSum;
    }
    return cumLoads;
}
```

Let `T(n)` be the worst-case time complexity and `S(n)` be the auxiliary space complexity (extra space used excluding the input space). Which of the following is correct?

- **(A)** T(n) = O(n) and S(n) = O(1)
- **(B)** T(n) = O(n) and S(n) = O(n)
- **(C)** T(n) = O(n²) and S(n) = O(n)
- **(D)** T(n) = O(n²) and S(n) = O(1)

---

## Question 2: Dynamic Memory & Vectors (GATE CSE Style)

**Problem Statement:**

A `std::vector` in C++ manages a dynamically allocated contiguous array. When its capacity is full and a new element is added, it reallocates memory by doubling its current capacity and copies the existing elements to the new memory location.

Suppose an empty vector has an initial capacity of `1`. We insert `n` structural loads sequentially using `push_back()`, where `n = 2^k + 1` (for some integer `k ≥ 1`). What is the total number of element copy operations performed during memory reallocations to insert all `n` elements?

- **(A)** n
- **(B)** 2n - 3
- **(C)** n log₂n
- **(D)** n - 2

# Key Takeaways

- Arrays are among the most fundamental data structures in GATE CSE.
- Engineering calculations often reduce to simple array traversal and aggregation.
- A single `for` loop that visits each element once has linear time complexity `O(n)`.
- `std::vector` is the modern C++ replacement for raw arrays in most applications.
- Understanding this example builds the foundation for more advanced topics such as prefix sums, cumulative loads, shear force diagrams, bending moment calculations, and finite element preprocessing.

---

## Reference

Program and complexity discussion are based on the accompanying Beam Load Calculator source code a
