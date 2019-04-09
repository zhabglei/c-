


#include <iostream>

using namespace std;

int main()
{
    unsigned int count;
    bool stop=false;
    for ( count = 1; (count <= 10) && (!stop); count++ )
        {
            if ( count== 5 )
                stop= true;
            else
                cout << count << " ";
        }
    cout << "Exit early because it meets a break condition"<< endl;
}
