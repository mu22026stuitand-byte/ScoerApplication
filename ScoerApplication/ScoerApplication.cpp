#include <iostream>
#include <new>//nothrow
using namespace std;

int main()
{ 
    
    cout << "人数を入力" << endl;
    int p = 0;
    cin >> p;
    
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
    int sum = 0;
    int average = 0;
    for (int i = 0;i < p;i++)//合計
    {
        sum += scoer[i];
    }
    average = sum / p;

    cout << "合計" << sum << endl;
    cout << "平均" << average << endl;

    
    delete[] scoer;
}

