#include<iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int fib(int n)
{
    int a = 0, b = 1, c, i;
    if( n == 0)
        return a;
    for(i = 2; i <= n; i++)
    {
       c = a + b;
       a = b;
       b = c;
    }
    return b;
}

int main()
{
    int n = 2 ;
      while (n <= 40)
      {
    auto start = high_resolution_clock::now();
    cout << n  << endl;
    cout << fib(n) << endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
      n = n + 2;
      }
         return 0;
}

