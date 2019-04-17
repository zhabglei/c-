
#include <iostream>
#include<cstdlib>
using namespace std;
int A,B=rand()%99+1;
int main()
{
   cout<<"I have a number between 1 and 100 \n Can you guess my number \n Please type your first guess ";

   for(int i=1;i<100;i++)
   {
       cin>>A;
       if(A>B)
      {
           cout<<"Too high,try again";
           continue;
      }

       if(A<B)

         {
            cout<<"Too low,try again";
            continue;
         }
       if(A=B)
         {
             if(i<11)
             {
                 cout<<"Either you know the secret or you are so lucky ";
                 cout<<"Excellent!You guessed the number!";
                break;
             }
             if(i=11)
             {
                 cout<<"Ahah!You know the secret!";
                 break;
             }
             if(i>11)
             {
                 cout<<"you should be better";
                 break;
             }

         }

   }
   return 0;
}


