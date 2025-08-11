// #include <iostream>
// #include <algorithm>
// using namespace std;

// const int N = 1e6 + 11;
// pair<int,int> a[N];
// int n;
// long long ans;

// int main()
// {
//     cin >> n;
//     for(int i = 1;i <= n;i ++)
//     {
//         cin >> a[i].first;
//         a[i].second = i;
//     } 
//     sort(a + 1,a + n + 1);
//     for (int i = 1;i <= n;i++)
//     {
//         cout << a[i].second << " ";
//     }
//     cout << endl;
//     for (int i = 1;i <= n;i++)
//     {
//         int t = a[i].first;
//         ans += t * (n - i);
//     }
//     printf("%.2lf\n",ans*1.0/n);
// }




// #include <iostream>
// #include <algorithm>
// #include <queue>
// using namespace std;

// struct mongky
// {
//     int i;
//     int m;
//     int b;
// };
// const int N = 1e5 + 11;
// int n, m;
// priority_queue<int> bnn;
// mongky mk[N];

// int cmp_m(mongky a, mongky b)
// {
//     return a.m > b.m;
// }

// int cmp_i(mongky a, mongky b)
// {
//     return a.i < b.i;
// }

// int main()
// {
//     cin >> n >> m;
//     for (int i = 1;i <= n;i++)
//     {
//         int x;
//         cin >> x;
//         bnn.push(x);
//     }
//     for (int i = 1;i <= m;i++)
//     {
//         mk[i].i = i;
//         cin >> mk[i].m;
//     }
//     sort(mk + 1,mk + m + 1,cmp_m);
//     while (!bnn.empty())
//     {
//         for (int i = 1;i <= m;i++)
//         {
//             mk[i].b += bnn.top();
//             bnn.pop();
//             if (bnn.empty()) break;
//         }        
//     }
//     sort(mk + 1,mk + m + 1,cmp_i);
//     for (int i = 1;i <= m;i++)
//     {
//         cout << mk[i].b << " ";
//     }

//     return 0;
// }





// #include <iostream>
// #include <map>
// using namespace std;

// map<int,int> mp;
// int n;

// int main()
// {
//     cin >> n;
//     for (int i = 1;i <= n;i++)
//     {
//         int x;
//         cin >> x;
//         mp[x]++;
//     }
//     for (auto i : mp)
//     {
//         cout << i.first << " " << i.second << endl;
//     }
//     return 0;
// }


 


// #include <iostream>
// #include <cstring>
// using namespace std;

// const int N = 1e5 + 11;
// int st[N],res_c,res_d,mini = INT_MAX;

// int main()
// {
//     memset(st,0,sizeof st);
//     int n = 0;
//     int x;
//     cin >> x;
//     while (cin >> x)
//     {
//         n++;
//         st[x]++;
//         mini = min(mini,x);
//     }
//     for (int i = mini;i <= mini+n-1;i++)
//     {
//         if (st[i] == 0) res_d = i;
//         if (st[i] == 2) res_c = i;
//     }
//     cout << res_d << " " << res_c;
//     return 0;
// }






// #include <iostream>
// #include <algorithm>
// using namespace std;

// struct stu
// {
//     /* data */
//     int id;
//     int sum;
//     int yuwen;
// };

// stu s[305];
// int n;

// int cmp(stu a,stu b)
// {
//     if (a.sum == b.sum)
//     {
//         if (a.yuwen == b.yuwen)
//         {
//             return a.id < b.id;
//         }
//         return a.yuwen > b.yuwen;
//     }
//     return a.sum > b.sum;
// }


// int main()
// {
//     cin >> n;
//     for (int i = 1;i <= n;i++)
//     {
//         stu t;
//         t.id = i;
//         int a, b, c;
//         cin >> a >> b >> c;
//         t.sum = a + b + c;
//         t.yuwen = a;
//         s[i] = t;
//     }
//     sort(s + 1,s + n + 1,cmp);
//     for (int i = 1;i <= 5;i++)
//     {
//         cout << s[i].id << " " << s[i].sum << endl;
//     }
//     return 0;
// }






// #include <iostream>
// #include <algorithm>
// #include <cstring>
// #include <map>
// using namespace std;

// typedef pair<int,int> PII;

// const int N = 1e5 + 11;
// int n, m, t;
// PII ding[N];//time,id
// PII store[N];//st,val
// map<int,int> pro;//id,val

// int main()
// {
//     cin >> n >> m >> t;
//     for (int i = 1;i <= n;i++)
//     {
//         store[i].first = 0;
//         store[i].second = 0;
//     }
//     for (int i = 1;i <= m;i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         ding[i].first = x;
//         ding[i].second = y;
//     }
//     sort(ding + 1,ding + m + 1);
//     for (int time = 1,i = 1;time <= t ;time++)
//     {
//         while ( i <= m && ding[i].first == time )
//         {
//             int id = ding[i].second;
//             store[id].second += 2;
//             store[id].first = 1;
//             i++;
//         }

//         for (int j = 1;j <= n;j++)
//         {
//             if (store[j].first == 0 && store[j].second > 0)
//             {
//                 store[j].second--;
//             }
//             if (store[j].second >= 5)
//             {
//                 pro[j] = 1;
//             }
//             if (pro.find(j) != pro.end() && store[j].second <= 3)
//             {
//                 pro.erase(j);
//             }
//             store[j].first = 0;
//         }
//     }
//     cout << pro.size() << endl;
//     return 0;
// }





// #include <iostream>
// #include <algorithm>
// using namespace std;

// const int N = 5010;
// int n, m,a[N];

// int cmp(int a,int b)
// {
//     return a > b;
// }



// int main()
// {
//     cin >> n >> m;
//     for (int i = 1;i <= n;i++)
//     {
//         a[i] = i;
//     }
//     for (int i = 1;i <= m;i++)
//     {
//         int p, q;
//         cin >> p >> q;
//         if (p == 0)
//         {
//             sort(a + 1,a + q + 1,cmp);
//         }
//         else
//         {
//             sort(a + q,a + n + 1 );
//         }
//     }
//     for (int i = 1;i <= n;i++)
//     {
//         cout << a[i] << " ";
//     }
//     return 0;
// }



// #include <iostream>
// #include <algorithm>
// #include <queue>
// #include <vector>
// #include <unordered_map>
// using namespace std;

// priority_queue<long long, vector<long long>, greater<long long>> q;
// unordered_map<long long, int> mp;
// int a[3] = {3, 5, 7};
// long long rtans = 59084709587505,pos = -1;

// int main()
// {
//     q.push(1);
//     mp[1] = 1;
//     while (!q.empty())
//     {
//         long long t = q.top();
//         q.pop();
//         pos++;

//         if (t == rtans) break;

//         for (int i = 0;i < 3;i++)
//         {
//             long long x = t * a[i];
//             if (mp.find(x) == mp.end() && x <= rtans)
//             {
//                 mp[x] = 1;
//                 q.push(x);
//             }
//         }   
//     }
//     cout << pos;
//     return 0;
// }





// #include <iostream>
// #include <algorithm>
// #include <cmath>
// using namespace std;

// int n, q;
// int a[1010],qst[1010],len[1010];

// int main()
// {
//     cin >> n >> q;
//     for (int i = 1; i <= n;i++)
//     {
//         cin >> a[i];
//     }
//     sort(a + 1, a + n + 1);
//     for (int i = 1; i <= q;i++)
//     {
//         cin  >> len[i] >> qst[i];
//     }
//     for (int i = 1; i <= q;i++)
//     {
//         int bt = pow(10, len[i]),flag = 0;
//         for (int j = 1; j <= n;j++)
//         {
//             int x = a[j] % bt;
//             if (x == qst[i])
//             {
//                 cout << a[j] << endl;
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0) cout << -1 << endl;
//     }
//     return 0;
// }





// #include <iostream>
// #include <algorithm>
// using namespace std;

// int n,ans;
// int a[13],b[13] ,st[13];

// void  dfs(int lay)
// {
//     if (lay == n + 1)
//     {
//         for (int i = 1;i <= n;i++)
//         {
//             cout << b[i] << " ";
//         }
//         cout << endl;
//         return;
//     }
//     for (int i = 1;i <= n;i++)
//     {
//         if (!st[i])
//         {
//             st[i] = 1;
//             b[lay] = a[i];
//             dfs(lay + 1);
//             st[i] = 0;
//         }
//     }
//     return;
// }


// int main()
// {
//     cin >> n;
//     for (int i = 1;i <= n;i++)  a[i] = i;
//     dfs(1);
//     return 0;
// }







// #include <iostream>
// #include <algorithm>
// #include <string>
// using namespace std;

// char a[35][65];
// int xa[4] = {0, 0, 1, -1}, ya[4] = {1, -1, 0, 0};
// int maxans = 0;

// int dfs(int x,int y)
// {
//     if (a[x][y] == '0') return 0;
//     a[x][y] = '0';
//     int ans = 1;
//     for (int i = 0;i < 4;i++)
//     {
//         int xx = x + xa[i],yy = y + ya[i];
//         if (xx < 0 || xx >= 30 || yy < 0 || yy >= 60) continue;
//         ans += dfs(xx,yy);
//     }
//     return ans;
// }

// int main()
// {
//     for (int i = 0;i < 30;i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0;i < 30;i++)
//     {
//         for (int j = 0;j < 60;j++)
//         {
//             if (a[i][j] == '1')
//             {
//                 maxans = max(maxans,dfs(i,j));
//             }
//         }
//     }
//     cout << maxans;
//     return 0;
// }








// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;

// const int N = 1010;
// char g[N][N];
// int a[4] = {0, 0, 1, -1}, b[4] = {1, -1, 0, 0};
// int st[N][N],n;

// int dfs(int x,int y)
// {
//     if (st[x][y]) return 0;
//     st[x][y] = 1;
//     int ans = 0,t=0;
//     for (int i = 0;i < 4;i++)
//     {
//         int xx = x + a[i],yy = y + b[i];
//         if (g[xx][yy] == '#') t++;
//         if ((xx < 0 || xx >= n || yy < 0 || yy >= n) || g[xx][yy] == '.' || st[xx][yy])  continue;
//         ans += dfs(xx,yy);
//     }
//     if (t == 4) ans++;
//     return ans;//返回有几个岛能留下
// }

// int main()
// {
//     memset(st,0,sizeof st);
//     cin >> n;
//     for (int i = 0;i < n;i++)
//     {
//         cin >> g[i];
//     }
//     int ans = 0;
//     for (int i = 0; i < n;i++)
//     {
//         for (int j = 0;j < n;j++)
//         {
//             if (g[i][j] == '.' || st[i][j]) continue;
//             if (dfs(i,j) <= 0) ans++;   
//         }
//     }
//     cout << ans;
//     return 0;
// }