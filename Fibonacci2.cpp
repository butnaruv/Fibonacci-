  #include<iostream>
  #include <chrono>
  using namespace std;
  using namespace std::chrono;

  int fib(int n)
  {
      if (n <= 1)
          return n;
      return fib(n-1) + fib(n-2);
  }

  int main ()
  {
      int n = 2 ;
      while (n <= 40)
      {
      auto start = high_resolution_clock::now();
      cout << n << endl;
      cout << fib(n) << endl;

      auto stop = high_resolution_clock::now();
      auto duration = duration_cast<microseconds>(stop - start);
      cout << "Time taken by function: "
           << duration.count() << " microseconds" << endl;
           n = n+2;
      }
      return 0;
  }
