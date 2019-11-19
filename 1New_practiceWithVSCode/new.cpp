#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   vector<string> msg {"Hello", "C++", "World", "from", "VS Code!", "and the C++ extension!"};

   for (const string& word : msg)
   {
      cout << word << " ";
   }
   cout << endl;

//   Trying to see some memory leaking using the valgrind and Assembly code.
   int * a = new int[5];
   delete [] a;

}