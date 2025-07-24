# Shah_Coursera

This repository contains the full implementation of statistical analysis functions in C, created as part of the Coursera Embedded Systems course assignment.

---

## 📁 Repository Structure

All source files are placed in the top-level folder `Shah_Coursera/` as required. No subdirectories are used.

### Files:

- `stats.h` – Header file containing function prototypes and documentation.
- `stats.c` – Contains full definitions of all statistical functions.

---

## 📊 Project Overview

The project performs basic statistical operations on a dataset of `unsigned char` values, including:

- **print_statistics()** – Prints the minimum, maximum, mean, and median.
- **print_array()** – Prints the array elements.
- **find_median()** – Calculates and returns the median.
- **find_mean()** – Calculates and returns the mean.
- **find_maximum()** – Finds and returns the maximum value.
- **find_minimum()** – Finds and returns the minimum value.
- **sort_array()** – Sorts the array in descending order (from largest to smallest).

---

## 🗂️ Version Control History

| Commit # | Description                                                               |
|----------|---------------------------------------------------------------------------|
| 1        | Creating Initial Coursera Repository                                      |
| 2        | Adding code outline and documentation for C1M1 Assessment                 |
| 3        | Complete implementations as required for Module 1                         |

---

## ⚙️ How to Compile

To compile the program, use the following command in the terminal:

```bash
gcc stats.c -o stats.out
./stats.out
