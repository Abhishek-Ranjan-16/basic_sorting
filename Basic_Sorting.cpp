#include <bits/stdc++.h>
#define nn "\n"
#define ll long long
#define pb push_back
#define pll pair<ll, ll>
#define vll vector<ll>
#define all(_obj) _obj.begin(), _obj.end()
#define fr(x, y) for (ll x = 0; x < y; x++)
#define nach_basanti                  \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define inp(x) \
    ll x;      \
    cin >> x;
#define inpv(v, n) \
    vll v(n);      \
    fr(i, n) cin >> v[i];
#define printv(v) fr(i, v.size()) cout << v[i] << " ";
#define yes cout << "YES"
#define no cout << "NO"
#define home return;
const ll mod = 1e9 + 7;
using namespace std;
void solve()
{
    inp(n);
    inpv(vec, n);

    // this is bubble sort in which you keep putting the largest element at the end
    // for (int i = 0; i < n; i++)
    // {
    //     // n-i-1 ka itna fadak nehi pdta, it is just saving some extra iterations
    //     for(int j=0;j<n-i-1;j++){
    //         if(vec[j]>vec[j+1])
    //             swap(vec[j],vec[j+1]);
    //     }
    // }

    // this selection sort where you keep the minimum element at the end
    // for(int i=0;i<n;i++){
    //     int miniInd=i;
    //     for(int j=i;j<n;j++){
    //         if(vec[j]<vec[miniInd])
    //             miniInd=j;
    //     }
    //     swap(vec[miniInd],vec[i]);
    // }

    // this is insertion sort where you get the element in correct position
    // for (int i = 0; i < n; i++)
    // { 
    //     int key = vec[i];
    //     int j = i - 1;
    //     while (j >= 0 && vec[j] > key)
    //     { 
    //         vec[j + 1] = vec[j];
    //         j--;
    //     } 
    //     vec[j + 1] = key;
    // }
    printv(vec);
}
int32_t main()
{
    nach_basanti;
    inp(t);
    fr(i, t)
    {
        solve();
        cout << nn;
    }
    return 0;
}
