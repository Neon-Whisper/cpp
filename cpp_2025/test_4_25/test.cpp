// #include <iostream>
// #include<algorithm>
// #include<queue>
// #include<cstring>
// using namespace std;

// typedef pair<int,int> PII;
// PII begind, endd;
// int n, m, g[110][110],d[110][110];
// int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

// int bfs(int x, int y)
// {
//     queue<PII> q;
//     q.push({x, y});
//     d[x][y] = 0;
//     while (q.size())
//     {
//         auto t = q.front();
//         q.pop();
//         if (t.first == endd.first && t.second == endd.second)
//         {
//             return d[t.first][t.second];
//         }
//         for (int i = 0; i < 4; i++)
//         {
//             int a = t.first + dx[i], b = t.second + dy[i];
//             if (a < 0 || a >= n || b < 0 || b >= m)
//                 continue;
//             if (g[a][b] == 1)
//                 continue;
//             if (d[a][b] != -1)
//                 continue;
//             d[a][b] = d[t.first][t.second] + 1;
//             q.push({a, b});
//         }
//     }
//     return d[endd.first][endd.second];
// }



// int main() 
// {
//     memset(d, -1, sizeof d);
//     cin >> n >> m;
//     for (int i = 0; i < n; i ++ )
//         for (int j = 0; j < m; j ++ )
//             cin >> g[i][j];
//     cin >> begind.first >> begind.second;
//     cin >> endd.first >> endd.second;

//     int ans = bfs(begind.first, begind.second);
//     if (ans == -1)
//         cout << 0 << endl;
//     else
//         cout << ans << endl;
//     return 0;
// }



// #include <iostream>
// #include <algorithm>
// #include <cstring>
// #include <set>
// using namespace std;

// int n = 9,a[11],st[11];
// set<double> s;

// void dfs(int u)
// {
//     if (u == n)
//     {
//         double a1 = a[0], a2 = a[1] * 10 + a[2];
//         double b1 = a[3], b2 = a[4] * 10 + a[5];
//         double c1 = a[6], c2 = a[7] * 10 + a[8];
//         if (a2 == 0 || b2 == 0 || c2 == 0)
//             return;
//         double aa = a1 / a2, b = b1 / b2, c = c1 / c2;

//         if (abs((aa + b) - c) < 1e-6)//精度
//         {
//             s.insert(c);
//         }
//         return;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         if (!st[i])
//         {
//             st[i] = 1;
//             a[u] = i;
//             dfs(u + 1);
//             st[i] = 0;
//         }
//     }

// }


// int main()
// {
//     dfs(0);
//     cout << s.size() << endl;
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;

// int n, m, a[20], st[20], cnt = 0;

// void dfs(int u)
// {
//     if (u == m)
//     {
//         for (int i = 0; i < m; i++)
//             cout << a[i] << " ";
//         cout << endl;
//         cnt++;
//         return;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         if (!st[i] && (u == 0 || i > a[u - 1]))
//         {
//             st[i] = 1;
//             a[u] = i;
//             dfs(u + 1);
//             st[i] = 0;
//         }
//     }
// }

// int main()
// {
//     cin >> n >> m;
//     dfs(0);
//     cout << cnt << endl;
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;

// int n, m, a[20], st[20], cnt = 0;

// void dfs(int u)
// {
//     if (u == m)
//     {
//         for (int i = 0; i < m; i++)
//             cout << a[i] << " ";
//         cout << endl;
//         cnt++;
//         return;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         if (!st[i] && (u == 0 || i > a[u - 1]))
//         {
//             st[i] = 1;
//             a[u] = i;
//             dfs(u + 1);
//             st[i] = 0;
//         }
//     }
// }

// int main()
// {
//     cin >> n >> m;
//     dfs(0);
//     cout << cnt << endl;
//     return 0;
// }





// #include <iostream>
// #include <ctime>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     srand(time(0)); 
//     int totalPoints = 1000000; 
//     int insideCircle = 0; 

//     for (int i = 0; i < totalPoints; i++) {
//         double x = (double)rand() / RAND_MAX;
//         double y = (double)rand() / RAND_MAX;
//         if (x * x + y * y <= 1) {
//             insideCircle++;
//         }
//     }

//     double pi = 4.0 * insideCircle / totalPoints; 
//     cout << fixed << setprecision(2) << pi << endl; 

//     return 0;
// }