// #include <iostream>
// #include <algorithm>
// #include <queue>
// #include <cstring>
// using namespace std;

// typedef pair<int, int> PII;
// const int N = 410;
// int p[N][N];
// int n, m, x, y;
// queue<PII> q;
// int dx[8] = {-1, 1, 2, 2, 1, -1, -2, -2};
// int dy[8] = { 2, 2, 1, -1, -2, -2, -1, 1};

// int bfs(int x, int y)
// {
//     p[x][y]  = 0;
//     q.push({x, y});
//     while(!q.empty())
//   {
//     PII t = q.front();
//     q.pop();
//     for(int i = 0; i < 8; i++)
//     {
//         int a = t.first + dx[i], b = t.second + dy[i];
//         if(a < 1 || a > n || b < 1 || b > m) continue;
//         if(p[a][b] != -1) continue;
//         p[a][b] = p[t.first][t.second] + 1;
//         q.push({a, b});
//     }
//   }
//   return 0;
// }


// int main() 
// {
//     cin >> n >> m >> x >> y;
//     memset(p, -1, sizeof p);
//     bfs(x, y);
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= m; j++)
//         {
//             if (p[i][j] == -1)
//             {
//                 cout << -1 << "   ";
//             }
//             else
//                 cout << p[i][j] << "    ";
//         }
//         cout << endl;
//     }
//     return 0;
// }








// #include <iostream>
// #include <algorithm>
// #include <string>
// #include <queue>
// #include <map>
// using namespace std;

// string f, ed;
// queue<string> q;
// map<string, int> d;
// int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

// int bfs(string f, string ed)
// {
//     q.push(f);
//     d[f] = 0;
//     while(!q.empty())
//     {
//         string t = q.front();
//         q.pop();
//         if (t == ed) return d[t];
//         int dist = d[t];
//         int dot = t.find('.');
//         int x = dot/3;
//         int y = dot%3;
//         for(int i = 0; i < 4; i++)
//         {
//             int a = x + dx[i], b = y + dy[i];
//             if(a < 0 || a > 2 || b < 0 || b > 2) continue;
//             string temp = t;
//             swap(temp[dot], temp[a*3 + b]);
//             if(d.count(temp) == 0)
//             {
//                 d[temp] = dist + 1;
//                 q.push(temp);
//             }
//         }

//     }
//     return -1;
// }



// int main()
// {
//     cin >> f >> ed;
//     int ans = bfs(f, ed);
//     cout << ans << endl;
//     return 0;
// }








// #include <iostream>
// #include <algorithm>
// #include <queue>
// #include <cstring>
// using namespace std;

// typedef pair<int, int> PII;
// const int N = 1e5+11;
// int n, m, a, b;
// int d[510][510];
// queue<PII> q;
// PII lin[N],gan[N];
// int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};


// void bfs()
// {
//     memset(d, -1, sizeof d);
//     for (int i = 1; i <= a; i++)
//     {
//         int x = gan[i].first, y = gan[i].second;
//         q.push({x, y});
//         d[x][y] = 0;
//     }
//     while(!q.empty())
//     {
//         PII t = q.front();
//         q.pop();
//         for (int i = 0; i < 4; i++)
//         {
//             int a = t.first + dx[i], b = t.second + dy[i];
//             if(a < 1 || a > n || b < 1 || b > m) continue;
//             if(d[a][b] != -1) continue;
//             d[a][b] = d[t.first][t.second] + 1;
//             q.push({a, b});
//         }
//     }
// }



// int main()
// {
//     cin >> n >> m >> a >> b;
//     for (int i = 1; i <= a; i++) 
//     {
//         int x, y;
//         cin >> x >> y;
//         gan[i] = {x, y};
//     }
//     for (int i = 1; i <= b; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         lin[i] = {x, y};
//     }
//     bfs();

//     for (int i = 1; i <= b; i++)
//     {
//         int x = lin[i].first, y = lin[i].second;
//         cout << d[x][y] << endl;
//     }
//     return 0;
// }







// #include <iostream>
// #include <algorithm>
// #include <cstring>
// #include <queue>
// using namespace std;

// typedef pair<int, int> PII;
// int n;
// int g[35][35];
// bool st[35][35];
// queue<PII> q;
// int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

// void bfs()
// {
//     st[0][0] = true;
//     q.push({0, 0});
//     while(!q.empty())
//     {
//         PII t = q.front();
//         q.pop();
//         for (int i = 0; i < 4; i++)
//         {
//             int a = t.first + dx[i], b = t.second + dy[i];
//             if(a < 0 || a > n + 1 || b < 0 || b > n + 1) continue;
//             if(st[a][b]) continue;
//             if (g[a][b] == 1)
//                 continue;
//             st[a][b] = true;
//             q.push({a, b});
//         }
//     }
// }


// int main()
// {   
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cin >> g[i][j];
//         }
//     }
//     bfs();
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (g[i][j] == 1)
//             {
//                 cout << 1 << " ";
//             }
//             else
//             {
//                 if (st[i][j])
//                     cout << 0 << " ";
//                 else
//                     cout << 2 << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }







// #include <iostream>
// #include <algorithm>
// #include <cstring>
// #include <queue>
// using namespace std;

// typedef pair<int, int> PII;
// int n;
// int g[35][35];
// bool st[35][35];
// queue<PII> q;
// int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

// void bfs()
// {
//     st[0][0] = true;
//     q.push({0, 0});
//     while(!q.empty())
//     {
//         PII t = q.front();
//         q.pop();
//         for (int i = 0; i < 4; i++)
//         {
//             int a = t.first + dx[i], b = t.second + dy[i];
//             if(a < 0 || a > n + 1 || b < 0 || b > n + 1) continue;
//             if(st[a][b]) continue;
//             if (g[a][b] == 1)
//                 continue;
//             st[a][b] = true;
//             q.push({a, b});
//         }
//     }
// }


// int main()
// {   
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cin >> g[i][j];
//         }
//     }
//     bfs();
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (g[i][j] == 1)
//             {
//                 cout << 1 << " ";
//             }
//             else
//             {
//                 if (st[i][j])
//                     cout << 0 << " ";
//                 else
//                     cout << 2 << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }







// #include <iostream>
// #include <algorithm>
// #include <queue>
// #include <cstring>
// using namespace std;

// struct PII
// {
//     int time;
//     int x, y;
// };
// int n,pt = 0;
// int t[310][310];
// queue<PII> q;
// bool visited[310][310];
// int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

// int  bfs()
// {
//     if (t[0][0] == 0) return -1;
//     q.push({0, 0, 0});
//     visited[0][0] = true;
//     while(!q.empty())
//     {
//         PII temp = q.front();
//         q.pop();
//         int x = temp.x, y = temp.y,time = temp.time;
//         if (t[x][y] == -1) return time;

//         for (int i = 0; i < 4; i++)
//         {
//             int a = x + dx[i], b = y + dy[i];
//             if(a < 0 || b < 0) continue;
//             if (t[a][b] == -1) return time + 1;
//             if (!visited[a][b] && t[a][b] > time + 1)
//             {
//                 visited[a][b] = true;
//                 q.push({a, b,time + 1});
//             }
//         }
//     }
//     return -1;
// }


// int main()
// {
//     memset(t, -1, sizeof t);
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x, y, time;
//         cin >> x >> y >> time;
//         if (t[x][y] == -1 || time < t[x][y])
//             t[x][y] = time;
//         for (int j = 0; j < 4; j++)
//         {
//             int a = x + dx[j], b = y + dy[j];
//             if(a < 0 || b < 0) continue;
//             if (t[a][b] == -1 || time < t[a][b])  // 修复：更新 t[a][b] 而不是 t[x][y]
//                 t[a][b] = time;
//         }
//     }
//     int ans = bfs();
//     cout << ans << endl;
//     return 0;
// }










// #include <iostream>
// #include <algorithm>
// using namespace std;

// int n;
// int dp[50];

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     cin >> n;
//     dp[1] = 1;
//     dp[2] = 2;
//     for (int i = 3; i <= n; i++)
//     {
//         dp[i] = dp[i - 1] + dp[i - 2];
//     }
//     cout << dp[n] << endl;
//     return 0;
// }








// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;

// int r;
// int num[1010][1010];
// int dp[1010][1010];

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     memset(dp, 0, sizeof dp);
//     cin >> r;
//     for (int i = 1; i <= r; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cin >> num[i][j];
//         }
//     }

//     for (int i = r; i >= 1; i--)
//     {
//         for (int j = i; j >= 1; j--)
//         {
//             dp[i][j] = max(dp[i + 1][j], dp[i + 1][j + 1]) + num[i][j];
//         }
//     }
//     cout << dp[1][1] << endl;
//     return 0;
// }







// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;

// int N, V;
// int w[1010], v[1010];
// int dp[1010];

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cin >> N >> V;
//     for (int i = 1; i <= N; i++)
//     {
//         cin >> v[i] >> w[i];
//     }
//     for (int i = N; i >= 1; i--)//选择的物品
//     {
//         for (int j = V; j >= 0; j--)//背包的容量
//         {
//             if (j >= v[i])
//                 dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
//             else
//                 dp[j] = dp[j];
//         } 
//     }
//     cout << dp[V] << endl;
//     return 0;
// }








// #include <iostream>
// #include <algorithm> 
// #include <cstring>
// using namespace std;

// int N, V, M;
// int w[1010], v[1010],m[1010];
// int dp[101][101];

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cin >> N >> V >> M;
//     for (int i = 1; i <= N; i++)
//     {
//         cin >> v[i] >> m[i] >> w[i];
//     }
//     for (int i = N; i >= 1; i--) // 选择的物品
//     {
//         for (int j = V; j >= v[i]; j--) // 背包的容量
//         {
//             for (int k = M; k >= m[i]; k--) // 背包的重量
//             {
//                 // if (j >= v[i] && k >= m[i])
//                     dp[j][k] = max(dp[j][k], dp[j - v[i]][k - m[i]] + w[i]);
//                 // else
//                 //     dp[j][k] = dp[j][k];
//             }
//         }
//     }
//     cout << dp[V][M] << endl;
//     return 0;
// }








// #include <iostream>
// #include <algorithm>
// using namespace std;

// int N, V;
// int v[1010], w[1010];
// int dp[1010];



// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cin >> N >> V;
//     for (int i = 1; i <= N; i++)
//     {
//         cin >> v[i] >> w[i];
//     }

//     for (int i = 1; i <= N; i++)
//     {
//         for (int j = v[i]; j <= V; j++)
//         {
//             dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
//         }
//     }

//     cout << dp[V] << endl;
//     return 0;
// }







// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;

// int n;
// int c[1010];
// int dp[1010];

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     c[0] = 0;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> c[i];
//     }
//     dp[1] = 0;
//     dp[0] = 0; // 初始化 dp[0
//     for (int i = 2; i <= n; i++)
//     {
//         dp[i] = min(dp[i - 1] + c[i - 1], dp[i - 2] + c[i - 2]);
//     }
//     cout << dp[n] << endl;
//     return 0;
// }








// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;

// typedef pair<int, int> PII;

// int n;
// int dp[20010];
// PII w[20010];


// int main()
// {
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         int a, b, c, t;
//         cin >> a >> b >> c >> t;
//         w[i].first = t;
//         w[i].second = a + b + c;
//     }
//     sort(w + 1, w + n + 1);
//     int ans = -1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = w[i].first; j >= w[i].second; j--)
//         {
//             dp[j] = max(dp[j], dp[j - w[i].second] + 1);
//             ans = max(ans, dp[j]);
//         }
//     }
//     cout << ans << endl;
    
//     return 0;
// }








// #include <iostream>
// using namespace std;

// int a[10], sum = 0;

// int main()
// {
//     for (int i = 1; i <= 7; i++)
//     {
//         cin >> a[i];
//     }
//     sum += a[2];
//     while (a[4])
//     {
//         while (a[5])
//         {
//             if (a[1])
//             {
//                 a[1]--;
//                 a[4]--;
//                 a[5]--;
//                 sum += 3;
//             }
//             else
//             {
//                 a[4]--;
//                 a[5]--;
//                 sum += 2;
//             }
//             a[4]--;
//             a[5]--;
//             sum += 2;
//             if (!a[4] || !a[5])
//                 break;
//         }
//         break;
//     }
//     while (a[1] >= 2)
//     {
//         a[1] -= 2;
//         sum += 2;
//     }
//     cout << sum;
//     return 0;
// } 







// #include <iostream>
// #include <algorithm>
// #include <set>
// #include <vector>

// using namespace std;

// int a[110];
// int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
// set<int> s;
// vector<int> v;

// void dfs(int i,int size)
// {
//     if (size == 8)
//     {
//         if (v[0] == 2 && v[1] == 0 && v[2] == 2 && v[3] == 3)
//         {
//             int month = v[4] * 10 + v[5];
//             int date = v[6] * 10 + v[7];
//             if (month >= 1 && month <= 12 && date >= 1 && date <= day[month])
//             {
//                 int t =  month * 100 + date;
//                 s.insert(t);
//             }
//         }
//         return;
//     }
//     if (size >3 && (v[0] != 2 || v[1] != 0 || v[2] != 2 || v[3] != 3))
//         return;
//     for (int j = i; j <= 100; j++)
//     {
//         v.push_back(a[j]);
//         dfs(j + 1, size + 1);
//         v.pop_back();
//         dfs(j + 1, size);
//     }

// }

// int main()
// {
//     for (int i = 1; i <= 100; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 1; i <= 100; i++)
//     {
//         dfs(0,0);
//     }
//     cout << s.size() << endl;

//     return 0;
// }








// #include <iostream>
// #include <algorithm>
// using namespace std;

// struct record
// {
//     /* data */
//     int a;
//     int b;
// };

// const int N = 1e4+11;
// record r[N];
// int n,maxv = -1;

// bool check1(int mid)
// {
//     int cnt = 0,cntb = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         int a = r[i].a, b = r[i].b;
//         cnt += a/mid;
//         cntb += b;
//     }
//     return cnt > cntb;
// }

// bool check2(int mid)
// {
//     int cnt = 0, cntb = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         int a = r[i].a, b = r[i].b;
//         cnt += a / mid;
//         cntb += b;
//     }
//     return cnt >= cntb;
// }

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> r[i].a >> r[i].b;
//         maxv = max(r[i].a,max(maxv,r[i].b));
//     }
//     int l = 0, r = maxv + 1;
//     while (l + 1 < r)
//     {
//         int mid = (l + r) / 2;
//         if (check1(mid)) l = mid;
//         else r = mid;
//     }
//     cout << r << ' ';
//     l = r,r = maxv + 1;
//     while (l + 1 < r)
//     {
//         int mid = (l + r) / 2;
//         if (check2(mid)) l = mid;
//         else r = mid;
//     }
//     cout << l << endl;
//     return 0;
// }







// #include <iostream>
// #include <algorithm>
// #include <queue>
// #include <vector>
// using namespace std;

// const int N = 5e5 + 11;
// typedef pair<int, int> PII;//first是值，second是序号
// int n, k;
// int L[N], R[N],arr[N];
// priority_queue<PII,vector<PII>,greater<PII>> q;


// int main()
// {
//     cin >> n >> k;
//     for (int i = 0; i < n; i++)
//     {
//         int a;
//         cin >> a;
//         q.push({a, i});
//         arr[i] = a;
//         L[i] = i - 1;
//         R[i] = i + 1;
//     }
//     R[n - 1] = -1;
//     while (k--)
//     {
//         PII t = q.top();
//         q.pop();
//         int id = t.second;
//         int val = t.first;
//         int l = L[id], r = R[id];
//         if (l != -1)
//         {
//             arr[l] += val;
//             R[l] = r;
//             L[r] = l;
//             q.push({arr[l], l});
//         }
//     }


//     return 0;
// }









// #include <iostream>
// #include <algorithm>
// #include <set>
// using namespace std;

// set<string> s;
// string str;
// char c1[30] = {'A','B','C','D','E','F','1','2','3','4','5','6','7','8','9','0'};
// char c2[10] = {'1','2','3','4','5','6','7','8','9','0'};

// void dfs()
// {
//     if (str.size() == 6)
//     {
//         for (int i = 0; i + 2 < 6; i++)
//         {
//             if (str[i] == str[i + 1] && str[i + 1] == str[i + 2])
//                 return;
//         }
//         s.insert(str);
//         return;
//     }


//     if (str.size() < 3)
//     {
//         for (int i = 0; i < 16; i++)
//         {
//             str += c1[i];
//             dfs();
//             str.pop_back();
//         }
//     }    
//     else
//     {
//         if (str[0] == str[1] && str[1] == str[2])
//             return;
//         for (int i = 0; i < 10; i++)
//         {
//             str += c2[i];
//             dfs();
//             str.pop_back(); 
//         } 
//     }

// }


// int main()
// {
//     dfs();
//     cout << s.size() << endl;
//     return 0;
// }







#include <iostream>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

typedef pair<int, int> PII;
int a = 9, b = 16;
PII p[10];
set<string> set1;

void dfs(int u)
{
    if (u == 7)
    {
        int cnt1 = 0,cnt2 = 0;
        for (int i = 0; i < 7; i++)
        {
            int sum = p[i].first + p[i].second;
            if (sum < 2 || sum > 5)
                return;
            cnt1 += p[i].first;
            cnt2 += p[i].second;
        }
        if (cnt1 == 9 && cnt2 == 16)
        {
            string str;
            for (int i = 0; i < 7; i++)
            {
                str += to_string(p[i].first);
                str += to_string(p[i].second);
            }
            set1.insert(str);
        }
        return;
    }

    for (int i = 0; i <= min(a, 5); i++)  // 限制最大值为5
    {
        p[u].first = i;
        for (int j = 0; j <= min(b, 5); j++)  // 限制最大值为5
        {
            if (i + j >= 2 && i + j <= 5)  // 确保和值在2到5之间
            {
                p[u].second = j;
                a -= i;
                b -= j;
                dfs(u + 1);
                a += i;
                b += j;
            }
        }
    }
}




int main()
{
    dfs(0);
    cout << set1.size() << endl;
    return 0;
}