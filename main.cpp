#include "matrix.hpp"
#include <iostream>
int main() {
  size_t m = 0;
  size_t n = 0;
  std::cin >> m >> n;
  if (!std::cin){
    std::cerr <<"NOT A NUBMER!!!";
    return 1;
  }
  int** t = matrix(m, n);
  std::cout << m << " " << n;
  std::cout << '\n';
  enter(t,m, n);
  std::cout << '\n';
  out(t, m, n);
  clear(t, m);

}
