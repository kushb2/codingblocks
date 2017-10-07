
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m; cin >> t;
   int c1,c2,c3,c4;
    //std::vector<int> rick;
    //std::vector<char> cab;
    //int rick[1005],cab[1005];
    while (t--) {
        cin>>c1>>c2>>c3>>c4;

        cin>>n>>m;
         std::vector<int> rick(n);
    std::vector<int> cab(m);
        for(int i=0;i<n;i++){
            cin>>rick[i];
        }

        for(int i=0;i<m;i++){
            cin>>cab[i];
        }
       /*cin>>c1>>c2>>c3>>c4;
        cin >> n >> m;
        std::vector<int> rick(n);
        std::vector<char> cab(m);
        for (int i = 0; i < n; i++) cin >> rick[i];
        for (int i = 0; i < m; i++) cin >> cab[i];
            */
/*
            int res = 0;
        int localRes = 0;
        for(int i=0;i<n;i++){
           localRes += min(rick[i]*c1,c2);
           }
        res += min(localRes,c3);
        localRes = 0;
        for(int i=0;i<m;i++){
            localRes += min(cab[i]*c1,c2);
        }
        res += min(localRes,c3);
        cout<<min(res,c4)<<endl;
    }*/
        int rickcost = 0;
        for(int i=0;i<n;i++){
            rickcost += min(c1*rick[i],c2);
        }
        rickcost = min(rickcost,c3);

        int cabcost = 0;
        for(int i=0;i<m;i++){
            cabcost += min(c1*cab[i],c2);
        }
        cabcost = min(cabcost,c3);

        int finalAns = min(c4,rickcost+cabcost);
        cout<<finalAns<<endl;
    }     
    return 0;
}