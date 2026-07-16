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

# Dry Run

Input

```
n = 5
```

Loads

```
10
20
15
25
30
```

Execution

| Iteration | Current Load | Running Total |
|-----------|-------------:|--------------:|
| 1 | 10 | 10 |
| 2 | 20 | 30 |
| 3 | 15 | 45 |
| 4 | 25 | 70 |
| 5 | 30 | 100 |

Output

```
Total Load = 100 kN
```

---

# Time Complexity

Suppose

```
n = Number of point loads
```

If

```
n = 5
```

the loop executes

```
5
```

times.

If

```
n = 100
```

the loop executes

```
100
```

times.

If

```
n = 10,000
```

the loop executes

```
10,000
```

times.

Therefore,

```
Time Complexity = O(n)
```

because every load is visited exactly once.

---

# Space Complexity

The program stores

```
n
```

loads inside

```cpp
std::vector<double>
```

Hence,

```
Space Complexity = O(n)
```

---

# Auxiliary Space

Additional variables are

```cpp
double total;
int i;
```

Their size never depends on `n`.

Hence

```
Auxiliary Space = O(1)
```

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

# Civil Engineering Interpretation

| Programming | Civil Engineering |
|--------------|------------------|
| Vector | Point loads on a beam |
| Array Index | Position of load |
| Traversal | Inspect every load |
| Summation | Compute total load |
| Function | Engineering calculation |
| Report | Structural summary |

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

# Practice Questions

## Numerical 1 (Array Traversal)

A beam has the following point loads

| Load | Value (kN) |
|------|-----------:|
| P₁ | 8 |
| P₂ | 12 |
| P₃ | 15 |
| P₄ | 10 |
| P₅ | 5 |
| P₆ | 20 |

Write the contents of the running total after every iteration.

---

## Numerical 2 (Time Complexity)

A beam contains

```
n = 2,500
```

point loads.

The algorithm traverses the vector exactly once.

Answer the following.

1. Number of loop iterations?

2. Time Complexity?

3. If the number of point loads doubles, how many iterations will the algorithm execute?

---

# GATE CSE Style MCQ 1

Consider the following function

```cpp
std::vector<double> computeCumulativeLoads(
const std::vector<double>& loads)
```

which stores cumulative loads in another vector.

Its worst-case

- Time Complexity
- Auxiliary Space

are

```
(A) O(n), O(1)

(B) O(n), O(n)

(C) O(n²), O(n)

(D) O(n²), O(1)
```

---

# GATE CSE Style MCQ 2

A `std::vector` starts with capacity 1.

Whenever it becomes full, its capacity doubles.

Suppose

```
n = 2ᵏ + 1
```

loads are inserted using

```cpp
push_back()
```

What is the total number of element-copy operations during reallocations?

```
(A) n

(B) 2n − 3

(C) n log₂ n

(D) n − 2
```

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

## MCQ Answers

```
Question 1

Answer : (B)
```

```
Question 2

Answer : (B)
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
