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
    cout<<"��ʼ�����Ч"<<endl;
  //��
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
    cout<<"��ʱ��"<<a.getBalance()<<endl;
    a.debit(50)
    cout<<"��ʱ���Ϊ:"<<a.getBalance()<<endl;
    a.credit(10)
    cout<<"��ʱ���Ϊ:"<<a.getBalance()<<endl;


    cout<<"�ڶ�������"<<endl;

    Balance=-50
    Account a1(Balance);
    out<<"��ʱ���Ϊ:"<<a1.getBalance()<<endl;
    return 0

