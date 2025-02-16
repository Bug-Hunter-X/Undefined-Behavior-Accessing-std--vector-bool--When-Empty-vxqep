# C++ std::vector<bool> Empty Access Bug

This repository demonstrates a potential bug when accessing elements in a `std::vector<bool>` that is empty.  The standard implementation of `std::vector<bool>` uses a bitset optimization which means out-of-bounds access might not throw an exception, but rather lead to undefined behavior.

This can result in seemingly random or incorrect results, making debugging difficult.

**How to reproduce:**
1. Compile and run `bug.cpp`.
2. Observe the behavior (it might appear to work or produce unexpected values).
3. Examine `bugSolution.cpp` for a safer method.

**Solution:**
Always check if the vector is empty before accessing any elements.  Use `vec.empty()` for efficient and safe checking.
