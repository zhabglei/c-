#include <iostream>

using namespace std;

int main()
{
    for (unsigned int count = 1; count <= 10; count++ )
    {
        if ( count != 5 )
      cout << count << " ";
    }
    cout << "\nHaven't used continue to skip printing 5" << endl;


}
