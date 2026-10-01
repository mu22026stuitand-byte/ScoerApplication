#include <iostream>
#include <new>//nothrow
using namespace std;

int main()
{ 
    int p = 0;
    cin >> p;
    cout << "人数を入力" << endl;
   
    
    int* scoer = new int[p];
    cout << "点数を入力" << endl;
    
    for (int i= 0;i<p;i++)
    {
        cin >> scoer[i];
    }
    for (int i = 0;i < p;i++)
    {
        cout << i+1 << "人目" << endl;
        cout << scoer[i] << "点" << endl;
    }
    
    delete[] scoer;
}

