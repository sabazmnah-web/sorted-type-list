# Sorted Type List Implementation in C++

A comprehensive, classroom-based implementation of a templated **Sorted Array-Based List** data structure. This project is a personal practice workspace exploring templated classes, manual memory shifting, binary search retrieval, and custom object operator overloading using a `timeStamp` object tracking system.


## Project Structure

The project is structured into modular header and source files to maintain clear separation of logic:

* `sortedtype.h` - Contains the templated `SortedType` class definition, member function signatures, and internal tracking variables.
* `sortedtype.cpp` - Implements the core sorting algorithms, list element shifts, dynamic item retrieval via binary search, and element deletions.
* `timestamp.h` - Declares the custom `timeStamp` object tracking class interface.
* `timestamp.cpp` - Defines constructor systems, custom terminal formatting methods, and essential operator overloads (`>`, `<`, `==`, `!=`) required for array sorting logic.
* `main.cpp` - The pipeline engine testing data operations sequentially on primitive types (`int`) and complex custom objects (`timeStamp`).


## How to Run the Project

This project is fully compatible with standard C++ environments and has been validated using the **Code::Blocks IDE** with the **GNU GCC Compiler**.

1. Clone or download this repository files into a single local working folder.
2. Open **Code::Blocks**.
3. Select **File -> New -> Project...** and choose **Console Application** (C++).
4. Right-click your project tracking panel on the left, select **Add files...**, and pick all five source files (`main.cpp`, `sortedtype.h`, `sortedtype.cpp`, `timestamp.h`, `timestamp.cpp`).
5. Ensure `timestamp.cpp` is checked for both **Debug** and **Release** target builds.
6. Hit **F9** (or click Build and Run) to see the execution pipeline output.

## Expected Program Output

When compiled and run successfully, the terminal window mirrors your assignment specs exactly:

0
1 2 4 5 7 
Item is not found
Item is found
List is full
2 4 5 7 
List is not full

15:34:23
13:13:02
43:45:12
52:02:20

Process returned 0 (0x0)   execution time : 0.163 s
Press any key to continue.
