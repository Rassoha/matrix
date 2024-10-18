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
  int** t = nullptr;
  try{
    t=matrix(m,n);
  }
  catch(std::bad_alloc& e) {
    std::cerr << "Error"<<e.what()<<'\n';
    return 1;
  }
  enter(t,m,n);
  out(t, m, n);
  std::cout <<'\n';
  clear(t, m);

}
