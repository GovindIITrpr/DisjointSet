#include <bits/stdc++.h>
using namespace std;
 
//----------------------------SHORTCUTS---------------------------------------------
#define ll                  long long
#define ld                  long double
#define int                 ll
const int mod=               1e9+7;
const long double PI =      3.14159265358979323846264338;
#define d0(x) cout<<(x)<<" "
#define d1(x) cout<<(x)<<endl
#define d2(x,y) cout<<(x)<<" "<<(y)<<endl
#define endl "\n"
#define mii                 map<int,int>
#define veci                vector<int>
typedef pair<int,int>       pii; 
#define all(v)              v.begin(),v.end()
#define rall(v)             v.rbegin(),v.rend()
#define mp                  make_pair
#define ff                  first
#define ss                  second
#define take(x)             for(auto &y:x) cin>>y
#define show(x)             for(auto y:x) cout<<y<<" ";cout<<endl;
#define pb                  push_back  
 

// disjoint set data structure
class DisjointSet{
    vector<int>Parent,Rank,Size;
public:
    DisjointSet(int n){
        Rank.resize(n+1,0); 
        Size.resize(n+1,1);
        Parent.resize(n+1);
        
        for(int i=0;i<=n;i++){
            Parent[i]=i;
        }
        
    }
    int findUPar(int u){
        if(Parent[u]==u){
            return u;
        }
        return Parent[u]=findUPar(Parent[u]);
    }
    void unionByRank(int u,int v){
        int ulti_par_u = findUPar(u);
        int ulti_par_v = findUPar(v);
        
        if(ulti_par_v==ulti_par_u){
            return;
        }
        else if(Rank[ulti_par_u]<Rank[ulti_par_v]){
            Parent[ulti_par_u]=ulti_par_v;
        }
        else if(Rank[ulti_par_u]>Rank[ulti_par_v]){
            Parent[ulti_par_v]=ulti_par_u;
        }
        else {
            Parent[ulti_par_u]=ulti_par_v;
            Rank[ulti_par_v]++;
        }
    }
    void unionBySize(int u,int v){
        int ulti_par_u = findUPar(u);
        int ulti_par_v = findUPar(v);
        
        if(ulti_par_v==ulti_par_u){
            return;
        }
        else if(Size[ulti_par_u]<Size[ulti_par_v]){
            Parent[ulti_par_u]=ulti_par_v;
            Size[ulti_par_v]+=Size[ulti_par_u];
        }
        else {
            Parent[ulti_par_v]=ulti_par_u;
            Size[ulti_par_u]+=Size[ulti_par_v];
        } 
    }
    
};  

void solve(){
     int n;cin>>n;
     DisjointSet ds(n);    
}
signed main()
{
    int t;cin>>t;
    while(t--)
        solve();
    return 0;
}
