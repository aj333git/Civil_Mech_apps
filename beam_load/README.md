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

# Why use std::vector?

Compared to a traditional array,

`std::vector`

- allocates memory dynamically
- grows automatically
- manages memory safely
- supports STL algorithms
- provides constant-time indexing

For DSA, it behaves like an array.

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

---

# Answers

## Numerical 1

Running totals

```
8
20
35
45
50
70
```

---

## Numerical 2

```
Iterations = 2500

Time Complexity = O(n)

If loads become 5000

Iterations = 5000
```

---



# Key Takeaways

- Arrays are among the most fundamental data structures in GATE CSE.
- Engineering calculations often reduce to simple array traversal and aggregation.
- A single `for` loop that visits each element once has linear time complexity `O(n)`.
- `std::vector` is the modern C++ replacement for raw arrays in most applications.
- Understanding this example builds the foundation for more advanced topics such as prefix sums, cumulative loads, shear force diagrams, bending moment calculations, and finite element preprocessing.

---

## Reference

Program and complexity discussion are based on the accompanying Beam Load Calculator source code a
