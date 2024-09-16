# Python Basics for Competitive Programming

Welcome to the **Python Competitive Programming Quick Reference**! This README is designed for last-minute revision and covers essential Python syntax, shortcuts, and tips to solve problems efficiently during competitions.

## Table of Contents

1. [Basic Syntax and Input/Output](#basic-syntax-and-input-output)
2. [Data Structures](#data-structures)
3. [Loops and Conditions](#loops-and-conditions)
4. [String Manipulation](#string-manipulation)
5. [Mathematics](#mathematics)
6. [Sorting and Searching](#sorting-and-searching)
7. [Common Algorithms](#common-algorithms)
8. [Helpful Built-in Functions](#helpful-built-in-functions)
9. [Best Practices for Competitive Programming](#best-practices-for-competitive-programming)
10. [Shortcuts for Fast Problem Solving](#shortcuts-for-fast-problem-solving)
11. [Quick Links](#quick-links)

---

## 1. Basic Syntax and Input/Output

### Input:
- **Single line input (multiple values):**
    ```python
    x, y = map(int, input().split())
    ```
- **Multiple inputs (list of integers):**
    ```python
    arr = list(map(int, input().split()))
    ```

### Output:
- **Print variables:**
    ```python
    print(a, b, c)
    ```
- **Formatted string:**
    ```python
    print(f"The answer is {result}")
    ```

---

## 2. Data Structures

### List:
- Create a list:
    ```python
    my_list = [1, 2, 3]
    ```
- Append elements:
    ```python
    my_list.append(4)
    ```
- Slicing a list:
    ```python
    sliced_list = my_list[1:3]
    ```

### Set:
- To store unique values:
    ```python
    my_set = set([1, 2, 2, 3])  # {1, 2, 3}
    ```

### Dictionary:
- Key-value pair storage:
    ```python
    my_dict = {'key': 'value'}
    ```

---

## 3. Loops and Conditions

### For loop:
```python
for i in range(5):
    print(i)
```

### While loop:
```python
while condition:
    # code
```

### Conditional:
```python
if a > b:
    print("a is greater")
elif a == b:
    print("Equal")
else:
    print("b is greater")
```

---

## 4. String Manipulation

### Slicing:
```python
s = "hello"
print(s[1:3])  # "el"
```

### Reversing a string:
```python
reversed_s = s[::-1]
```

### Common operations:
- **Find substring:**
    ```python
    s.find('substring')
    ```
- **Replace substring:**
    ```python
    s.replace('old', 'new')
    ```

---

## 5. Mathematics

### Fast Exponentiation:
```python
pow(base, exp, mod)
```

### Greatest Common Divisor (GCD):
```python
import math
gcd = math.gcd(a, b)
```

### Least Common Multiple (LCM):
```python
lcm = (a * b) // math.gcd(a, b)
```

### Prime checking (basic):
```python
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True
```

---

## 6. Sorting and Searching

### Sort a list:
```python
arr.sort()  # Ascending
arr.sort(reverse=True)  # Descending
```

### Binary Search:
```python
import bisect
index = bisect.bisect_left(arr, value)
```

---

## 7. Common Algorithms

### Two-pointer approach:
```python
i, j = 0, len(arr) - 1
while i < j:
    # logic
```

### Prefix Sum (for range queries):
```python
prefix_sum = [0] * (n + 1)
for i in range(1, n + 1):
    prefix_sum[i] = prefix_sum[i-1] + arr[i-1]
```

### DFS (Depth-First Search):
```python
def dfs(node):
    visited[node] = True
    for neighbor in graph[node]:
        if not visited[neighbor]:
            dfs(neighbor)
```

---

## 8. Helpful Built-in Functions

- **max() and min():**
    ```python
    max(arr)
    min(arr)
    ```
- **sum():**
    ```python
    total = sum(arr)
    ```
- **any() and all():**
    ```python
    if any(x > 0 for x in arr):  # True if any element satisfies the condition
    if all(x > 0 for x in arr):  # True if all elements satisfy the condition
    ```

---

## 9. Best Practices for Competitive Programming

- **Use Fast I/O** for large input/output:
    ```python
    import sys
    input = sys.stdin.read
    print = sys.stdout.write
    ```

- **Modular Arithmetic**:
    Use `mod = 10**9 + 7` for large numbers.

- **Edge Case Handling**: 
    Always check for edge cases like:
    - Empty arrays
    - Maximum/minimum input values
    - Single element arrays

- **Optimize Time Complexity**: 
    Avoid nested loops wherever possible. Aim for `O(n log n)` solutions for large datasets.

---

## 10. Shortcuts for Fast Problem Solving

- **Multiple Inputs on One Line**:
    ```python
    a, b, c = map(int, input().split())
    ```

- **List Comprehension**:
    Quick list creation:
    ```python
    squares = [x ** 2 for x in range(10)]
    ```

- **Ternary Conditional**:
    Short-hand for if-else:
    ```python
    result = 'Yes' if a > b else 'No'
    ```

- **Finding Unique Elements**:
    ```python
    unique_elements = list(set(arr))
    ```

- **Reversing a List**:
    ```python
    arr.reverse()
    ```

---

## 11. Quick Links

Here are some important resources for further study:

- **Python Documentation**: [Official Python Docs](https://docs.python.org/3/)
- **Competitive Programming Platforms**:
    - [Codeforces](https://codeforces.com/)
    - [LeetCode](https://leetcode.com/)
    - [HackerRank](https://www.hackerrank.com/domains/tutorials/10-days-of-javascript)
- **Algorithm Reference**:
    - [CP Algorithms](https://cp-algorithms.com/)

---

This guide is designed to help you quickly revise Python concepts for competitive programming. **Good luck!**

---

### Contribution

Feel free to contribute by adding new tips or algorithms that you think are useful for competitive programming!
