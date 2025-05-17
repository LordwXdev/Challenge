#include<iostream>
#include<cstring>
#include<ctime>
using namespace std;

int main ()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int size = 2*N;
        int aprice[size];
        for(int i = 1; i<= size;i++)
        {
            cin>>aprice[i];
        }
        bool has_duplicate = false;
        for(int j = 1; j < size; j++)
        {
            for (int k = j+1; k < size; k++)
            {
                if(aprice[j] == aprice[k])
                has_duplicate=true;
                break;
            }
            if(has_duplicate) break;
        }
        if(has_duplicate)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
    }
}