#include <iostream>
#include <vector>

int main() {
  std::vector<bool> vec;
  // ... some operations ...
  if (!vec.empty()) { // Check if the vector is not empty using vec.empty()
    bool value = vec[0]; // Access the first element
    std::cout << value << std::endl; 
  } else {
    std::cout << "Vector is empty" << std::endl;
  }
  return 0;
}