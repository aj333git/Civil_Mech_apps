#include <iostream>
#include <vector>
#include <iomanip>

double calculateTotalLoad(const std::vector<double>& loads)
{
    double total = 0.0;

    for (size_t i = 0; i < loads.size(); ++i)
    {
        total += loads[i];
    }

    return total;
}

int main()
{
    int n;

    std::cout << "Number of point loads: ";
    std::cin >> n;

    std::vector<double> loads(n);

    for (int i = 0; i < n; ++i)
    {
        std::cout << "Load " << i + 1 << " (kN): ";
        std::cin >> loads[i];
    }

    double total = calculateTotalLoad(loads);

    std::cout << "\nBeam Load Report\n";
    std::cout << "--------------------------\n";

    for (int i = 0; i < n; ++i)
    {
        std::cout << "Load " << i + 1
                  << " : "
                  << std::fixed
                  << std::setprecision(2)
                  << loads[i]
                  << " kN\n";
    }

    std::cout << "--------------------------\n";
    std::cout << "Total Load : "
              << std::fixed
              << std::setprecision(2)
              << total
              << " kN\n";

    return 0;
}
//g++ beam_load_cal.cpp -o beam_load_cal

theory

Time Complexity: O(n)

Think of the array as a row of boxes.

Example

+----+----+----+----+----+
|10  |20  |15  |25  |30  |
+----+----+----+----+----+

To calculate the total load, the program must open every box exactly once.

Step 1
Read 10
Total = 10

Step 2
Read 20
Total = 30

Step 3
Read 15
Total = 45

Step 4
Read 25
Total = 70

Step 5
Read 30
Total = 100

The program cannot skip any box because every load contributes to the final answer.

If there are

5 loads
→ 5 iterations

100 loads
→ 100 iterations

1,000 loads
→ 1,000 iterations

In general,

n loads
→ n iterations

The amount of work grows directly with the number of loads.

Therefore,

Time Complexity = O(n)

------------------------------------------------------------

Space Complexity: O(n)

Before the program can calculate the total load, it must first store all the loads entered by the user.

For example,

User enters

10
20
15
25
30

The vector stores them in memory.

+----+----+----+----+----+
|10  |20  |15  |25  |30  |
+----+----+----+----+----+

If the user enters

100 loads

the vector stores 100 numbers.

If the user enters

10,000 loads

the vector stores 10,000 numbers.

As the number of loads increases, the memory required by the vector also increases proportionally.

Therefore,

Space Complexity = O(n)

------------------------------------------------------------

What about the variable 'total'?

The program also creates

double total = 0.0;

This variable occupies only one memory location, whether there are

5 loads,
500 loads, or
50,000 loads.

Similarly, the loop variable

int i;

also uses only one memory location.

These variables do not grow with the input size.

Therefore, they require

O(1) (constant) space.

------------------------------------------------------------

Overall Summary

Time Complexity

Reason:
The program visits every load exactly once.

Result:
O(n)

Space Complexity

Reason:
The vector stores all n load values.

Result:
O(n)

Auxiliary Space

Reason:
Only 'total' and 'i' are extra variables.

Result:
O(1)




This is one of the most common questions when learning algorithms.

------------------------------------------------------------
What is "O"?
------------------------------------------------------------

The letter "O" stands for **Order** in the mathematical notation called
**Big-O Notation**.

Big-O is **not** a unit of time like seconds or milliseconds.

Instead, it describes **how the amount of work grows as the input size grows**.

It answers questions like:

"If the input becomes larger, how much more work will the algorithm perform?"

------------------------------------------------------------
What is "n"?
------------------------------------------------------------

The letter "n" represents the **input size**.

It can mean different things depending on the problem.

Examples

Array Program

n = Number of array elements

Linked List

n = Number of nodes

Graph

n = Number of vertices

String

n = Number of characters

Beam Load Calculator

n = Number of point loads

------------------------------------------------------------
Example 1

Suppose

n = 5

Array

+----+----+----+----+----+
|10  |20  |15  |25  |30  |
+----+----+----+----+----+

The loop executes

5

times.

------------------------------------------------------------
Example 2

Suppose

n = 100

The loop executes

100

times.

------------------------------------------------------------
Example 3

Suppose

n = 10,000

The loop executes

10,000

times.

------------------------------------------------------------
Why is it called O(n)?
------------------------------------------------------------

Your algorithm is

for(i=0;i<n;i++)
{
    total += loads[i];
}

Every iteration processes exactly one element.

If there are

5 elements

↓

5 iterations

If there are

100 elements

↓

100 iterations

If there are

1,000 elements

↓

1,000 iterations

The work grows in direct proportion to n.

Therefore

Time Complexity = O(n)

------------------------------------------------------------
Simple Meaning of O(n)
------------------------------------------------------------

"O(n)" means:

"The running time grows linearly with the size of the input."

or

"If the input doubles, the amount of work approximately doubles."

------------------------------------------------------------
Some Common Big-O Values
------------------------------------------------------------

O(1)

Constant Time

Examples

arr[5]

Reading one variable

Pushing to a stack (amortized)

------------------------------------------------------------

O(log n)

Logarithmic Time

Examples

Binary Search

Balanced BST Search

------------------------------------------------------------

O(n)

Linear Time

Examples

Array Traversal

Finding Maximum

Finding Minimum

Computing Sum

Beam Load Calculator

------------------------------------------------------------

O(n log n)

Examples

Merge Sort

Heap Sort

Quick Sort (average case)

------------------------------------------------------------

O(n²)

Quadratic Time

Examples

Bubble Sort

Selection Sort

Insertion Sort (worst case)

Comparing every pair of elements

------------------------------------------------------------
Beam Load Calculator
------------------------------------------------------------

Input

10
20
15
25
30

n = 5

The algorithm performs

Read element 1

Read element 2

Read element 3

Read element 4

Read element 5

Exactly 5 operations (ignoring small constant work).

Therefore

Time Complexity = O(n)

Space Complexity = O(n)

because the vector stores n load values.

Why use std::vector instead of an array?

Advantages:

Runtime size allocation
Automatic memory management (RAII)
No manual malloc()/free() or new/delete
Bounds-safe access available via .at()
Easy resizing with push_back(), resize(), etc.
Compatible with the C++ Standard Library algorithms

In Data Structures and Algorithms, we usually treat a std::vector as an array because it provides:

Constant-time indexing: loads[i] → O(1)
Contiguous memory layout
Efficient sequential traversal
Linear-time traversal: O(n)

So, for your Beam Load Calculator, std::vector<double> is the modern C++ equivalent of a one-dimensional array used to store the beam's point loads. It lets you keep the same DSA concepts (indexing, traversal, aggregation, complexity analysis) while using idiomatic C++.


| C++ / DSA Concept       | Civil Engineering Interpretation                         |
| ----------------------- | -------------------------------------------------------- |
| `std::vector<double>`   | Store point loads on a beam or structure                 |
| Array indexing          | Access a specific load by its position                   |
| Loop traversal          | Visit every structural load for processing               |
| Summation algorithm     | Compute total applied load                               |
| Function                | Encapsulate an engineering calculation                   |
| Time Complexity `O(n)`  | Calculation time grows linearly with the number of loads |
| Space Complexity `O(n)` | Memory grows linearly with the number of stored loads    |
| Report generation       | Produce an engineering calculation summary               |
| Input handling          | Enter design or field measurement data                   |
| Sequential processing   | Basic workflow used in structural analysis software      |


Load Combinations
This pattern extends to load combination calculations (Dead Load + Live Load + Wind Load + etc.)

Multiple load cases need to be processed similarly

Shear Force & Bending Moment
The same traversal concept applies when calculating:

Shear Force: V(x) = Σ(P_i) for loads to the left of section

Bending Moment: M(x) = Σ(P_i * x_i) for loads to the left of section

(GATE CSE Style)Problem Statement:
Question 1: Time and Space Complexity 
Consider the following C++ function that calculates a cumulative structural summary from an input vector of size n:

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

Let T(n) be the worst-case time complexity and S(n) be the auxiliary space complexity (extra space used excluding the input space). Which of the following is correct?

(A) T(n) = O(n) and S(n) = O(1)

(B) T(n) = O(n) and S(n) = O(n)

(C) T(n) = O(n²) and S(n) = O(n)

(D) T(n) = O(n²) and S(n) = O(1)




Question 2: Dynamic Memory & Vectors (GATE CSE Style)
Problem Statement:
A std::vector in C++ manages a dynamically allocated contiguous array. When its capacity is full and a new element is added, it reallocates memory by doubling its current capacity and copies the existing elements to the new memory location.


Suppose an empty vector has an initial capacity of 1. We insert n structural loads sequentially using push_back(), where n = 2^k + 1 (for some integer k>= 1). What is the total number of element copy operations performed during memory reallocations to insert all n elements?

(A) n
(B) 2n - 3
C) n log₂n
(D) n - 2




