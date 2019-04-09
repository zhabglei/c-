#include <iostream>
using namespace std;
class Account
{
private:
    int Balance;
public:
    Account(int blancecelnit;
      {
          if(blancecelnit>=0)
    {Balance=balancecelnit
    }
    else
    {
     Balance=0
    }
      }
    cout<<"初始余额无效"<<endl;
  //存
 void credit(int account)
 {
    Balance=account+Balance
  }

void debit(int accout)
{
    if(Balance<accout)
    {
        cout<<"Debit amount exceeded account balance"<<endl;
    }
    else
        {
            Balance=Balance-Account
        }

}
 int getBalance()
 {
    return balance
 }
};


int main()
{
    int Balance=100;
    Account a(Balance)
    cout<<"此时余额："<<a.getBalance()<<endl;
    a.debit(50)
    cout<<"此时余额为:"<<a.getBalance()<<endl;
    a.credit(10)
    cout<<"此时余额为:"<<a.getBalance()<<endl;


    cout<<"第二个测试"<<endl;

    Balance=-50
    Account a1(Balance);
    out<<"此时余额为:"<<a1.getBalance()<<endl;
    return 0

