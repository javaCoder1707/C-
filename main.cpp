#include<iostream>
using namespace std;
#include<conio.h>  
//#pragma warning(disable : 4996); 
int main()
{
  //for(int j = 100; j <= 110; j++)
  //{
  //    cout << j;
 // }



  //int l = 100;
  //while (l != 110)
  //{
  //    l++;
 //     cout << l;
  //}

    int num;
    int j = 1;
    cout << " Number ";
    cin >> num;

    while (j * num <= ( num * 10))
    {
        cout << j * num << endl;
        j++;
    }
    return 0;
}