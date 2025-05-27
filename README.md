<h1 align="center">🔁 push_swap</h1>

<p align="center">
  <i>Stack sorting under constraints using a fully custom Butterfly sorting algorithm.</i>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue.svg" />
  <img src="https://img.shields.io/badge/Algorithm-Custom_Butterfly-blueviolet.svg" />
  <img src="https://img.shields.io/badge/Project-push_swap-yellowgreen.svg" />
  <img src="https://img.shields.io/badge/Status-Completed-brightgreen.svg" />
</p>

---

## 📌 Project Overview

**push_swap** is a 42 School project that requires you to sort a stack of integers using a limited set of stack operations.  
The challenge is to output the most efficient (i.e., shortest) sequence of moves to sort the given input.

For this project, I designed and implemented my own sorting algorithm from scratch — the **Butterfly algorithm** — optimized specifically for this task.

---

## 🦋 Butterfly Sorting Algorithm

The **Butterfly algorithm** is a recursive, pattern-based sorting strategy inspired by the symmetry of butterfly networks. It works by:

- **Dividing** the stack into segments based on value ranges
- **Mirroring** elements into structured zones
- **Recursively sorting** partitions while tracking stack state
- **Merging** zones with minimal rotations and swaps

This strategy is highly efficient for datasets ranging from small to large sizes. It was custom-built to reduce instruction count and optimize stack usage within the constraints of `push_swap`.

---

## 🔧 Allowed Operations

- `sa`, `sb`, `ss` – Swap the top two elements
- `pa`, `pb` – Push the top element from one stack to the other
- `ra`, `rb`, `rr` – Rotate up
- `rra`, `rrb`, `rrr` – Rotate down

---

## 🚀 Getting Started

### 🔨 Build

```bash
git clone https://github.com/yourusername/push_swap.git
cd push_swap
make
