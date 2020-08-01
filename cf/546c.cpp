#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, h, x;
    int i;
    deque<int> p1,p2;
    cin >> n;

    cin >> h;
    for(i=0; i<h; i++)
    {
        cin >> x;
        p1.push_back(x);
    }


    cin >> h;
    for(i=0; i<h; i++)
    {
        cin >> x;
        p2.push_back(x);
    }

    set< deque<int> > states;
    int turns = 0;
    int top1, top2;
    while( p1.empty() == 0 && p2.empty() == 0 ){
        
        turns++;

        if( states.count(p1) != 0 && states.count(p2) != 0 )
        {
            cout << -1;
            return 0;
        }

        states.insert(p1);
        states.insert(p2);

        top1 = p1.front(); p1.pop_front();
        top2 = p2.front(); p2.pop_front();
      
        if( top1 > top2 )
        {
            p1.push_back( top2 );
            p1.push_back( top1 );
        }
        else
        {
            p2.push_back( top1 );
            p2.push_back( top2 );
        }
    }

    cout << turns << " ";
    if( p1.empty() )  cout << 2 ;
    else cout << 1;

    return 0;
}