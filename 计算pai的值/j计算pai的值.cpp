#include <iostream>
using namespace std;

int main()
{
   int a=1,c=1;
   double pai=4;
   for(a;a<=1000;++a)
   {
       if(a%2==1)
       {
           c=c+2;
       pai=pai-4.0/c;
       }
    else
       {
            c=c+2;
        pai=pai+4.0/c;
       }
   }
        cout<<"Ô²ÖÜÂÊÎª£º"<<pai<<endl;

    return 0;
}
