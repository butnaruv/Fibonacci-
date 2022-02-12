#include<iostream>
#include<cmath>
#include <chrono>
using namespace std;
using namespace std::chrono;

int fib(int n) {
  double phi = (1 + sqrt(5)) / 2;
  return round(pow(phi, n) / sqrt(5));
}

int main ()
{

  int n = 2 ;
  while( n <= 40)
  {
  auto start = high_resolution_clock::now();
  cout << n << endl;
  cout << fib(n) << endl;

  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
         n = n + 2;
}
         return 0;
}
