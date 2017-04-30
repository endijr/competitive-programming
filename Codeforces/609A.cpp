#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(decltype((c).begin()) i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int m;
    cin >> m;
    vi a(n, 0);
    priority_queue<int> pq;
    for (int i = 0; i < n; ++i)
    {
        int foo;
        cin >> foo;
        pq.push(foo);
    }
    int ans = 0;
    while(m > 0)
    {
        ans++;
        m -= pq.top();
        pq.pop(); 
    }
    cout << ans;
    return 0;
}
