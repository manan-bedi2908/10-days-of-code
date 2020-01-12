#include <iostream>
using namespace std;
int main()
{
    int t , n;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int counter=0;
        cin>>n;
        // count the number of the 1`s in the bot representation of the number 
        while(n)  // very fast one 
        {
            counter++;
            n=n&(n-1); // go on the number of the 1`s in the number only             
        }
        cout<<counter<< endl;
    }
    return 0;
}
