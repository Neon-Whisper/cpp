// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;

// const int N = 1e5 + 11;
// int n,ans = -1;
// int a[N],dp[N];

// // 最大子列和问题
// int main() 
// {
//     memset(dp, 0, sizeof(dp));
//     cin >> n;
//     for (int i = 1; i <= n; i++) cin >> a[i];
//     for (int i = 1; i <= n; i++)
//     {
//         dp[i] = max(dp[i - 1] + a[i], a[i]);
//         ans = max(ans, dp[i]);
//     } 
//     cout << ans << endl;
//     return 0;
// }



// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;

// string s1, s2;
// int dp[1000][1000];

// // 最长公共子串
// int main()
// {
//     memset(dp, 0, sizeof(dp));
//     cin >> s1 >> s2;
//     int n1 = s1.size(), n2 = s2.size();
//     int maxLen = 0;  
//     int endIndex = 0;  
    
//     for (int i = 1; i <= n1; i++)
//     {
//         for (int j = 1; j <= n2; j++)
//         {
//             if (s1[i - 1] == s2[j - 1]) {
//                 dp[i][j] = dp[i - 1][j - 1] + 1;
//                 if (dp[i][j] > maxLen) {
//                     maxLen = dp[i][j];
//                     endIndex = i - 1;
//                 }
//             }
//             else {
//                 dp[i][j] = 0;
//             }
//         }
//     }
    
//     if (maxLen == 0) {
//         cout << "NULL" << endl;
//     } else {
//         cout << s1.substr(endIndex - maxLen + 1, maxLen) << endl;
//     }

//     return 0;
// }





// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;

// int a[110],dp[110],n;


// //跳房子
// int main()
// {
//     memset(dp, 0x3f3f3f3f, sizeof(dp));
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//          cin >> a[i];
//     }
//     dp[1] = a[1];
//     dp[2] = a[2];
//     dp[3] = a[3];

//     for (int i = 4; i <= n; i++)
//     {
//         dp[i] = min(dp[i - 1] + a[i], min(dp[i - 2] + a[i], dp[i - 3] + a[i]));
//     }
    
//     cout << min(dp[n], min(dp[n - 1], dp[n - 2])) << endl;
//     return 0;
// }






// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;

// const int N = 110;
// int a[N][N];
// int m, n;
// int maxSum = -0x3f3f3f3f;
// int cnt = 0;

// void dfs(int x, int y, int i)
// {
//     if (x == m && y == n)
//     {
//         if (i > maxSum)
//         {
//             maxSum = i;
//             cnt = 1;
//         }
//         else if (i == maxSum)
//         {
//             cnt++;
//         }
//         return;
//     }

//     if (x < m)
//     {
//         dfs(x + 1, y, i + a[x + 1][y]);
//     }

//     if (y < n)
//     {
//         dfs(x, y + 1, i + a[x][y + 1]);
//     }
// }

// int main()
// {
//     cin >> m >> n;
//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cin >> a[i][j];
//         }
//     }

//     dfs(1, 1, a[1][1]);

//     cout << maxSum << " " << cnt << endl;
//     return 0;
// }








// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;

// const int N = 110;
// int a[N][N], dp[N][N], cnt[N][N];
// int m, n;

// int main()
// {
//     memset(dp, 0, sizeof(dp));
//     memset(cnt, 0, sizeof(cnt));

//     cin >> m >> n;
//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cin >> a[i][j];
//         }
//     }

//     dp[1][1] = a[1][1];
//     cnt[1][1] = 1;

//     for (int i = 2; i <= m; i++)
//     {
//         dp[i][1] = dp[i - 1][1] + a[i][1];
//         cnt[i][1] = 1;
//     }
//     for (int j = 2; j <= n; j++)
//     {
//         dp[1][j] = dp[1][j - 1] + a[1][j];
//         cnt[1][j] = 1;
//     }

//     for (int i = 2; i <= m; i++)
//     {
//         for (int j = 2; j <= n; j++)
//         {
//             if (dp[i - 1][j] > dp[i][j - 1])
//             {
//                 dp[i][j] = dp[i - 1][j] + a[i][j];
//                 cnt[i][j] = cnt[i - 1][j];
//             }
//             else if (dp[i - 1][j] < dp[i][j - 1])
//             {
//                 dp[i][j] = dp[i][j - 1] + a[i][j];
//                 cnt[i][j] = cnt[i][j - 1];
//             }
//             else
//             {
//                 dp[i][j] = dp[i - 1][j] + a[i][j];
//                 cnt[i][j] = cnt[i - 1][j] + cnt[i][j - 1];
//             }
//         }
//     }

//     cout << dp[m][n] << " " << cnt[m][n] << endl;
//     return 0;
// }





// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;

// int n, m,a[110],dp[110];

// // 硬币找零
// int main()
// {  
//     cin >> m >> n;
//     for (int i = 1; i <= n; i++) cin >> a[i];
//     memset(dp, 0x3f3f3f3f, sizeof(dp));
//     dp[0] = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = a[i]; j <= m; j++)
//         {
//             dp[j] = min(dp[j], dp[j - a[i]] + 1);
//         }
//     }

//     cout << dp[m] << endl;
//     return 0;
// }





// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;

// int n,m,w[510],v[510],dp[510][510];


// // 0/1背包
// int main()
// {
//     cin >> m >> n;
//     for (int i = 1; i <= n; i++) cin >> w[i];
//     for (int i = 1; i <= n; i++) cin >> v[i];
//     memset(dp, 0, sizeof(dp));

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             if (j >= w[i]) dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
//             else dp[i][j] = dp[i - 1][j];
//         }
//     }

//     cout << dp[n][m] << endl;
//     return 0;
// }






// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;

// int n, m, a[20],st[20],cnt = 0;

// // 字典序输出
// void dfs(int u)
// {
//     if (u == m)
//     {
//         for (int i = 0; i < m; i++) cout << a[i] << " ";
//         cout << endl;
//         cnt++;
//         return;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         if (!st[i] && i > a[u - 1])
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
// using namespace std;

// const int N = 25;
// int g[N][N];
// bool row[N], col[N], dg[N], arcdg[N];
// int n = 0,cnt = 0;

// void DFS(int x, int y, int s)
// {
//     if (y == n)
//     {
//         y = 0;
//         x++;
//     }

//     if (x == n)
//     {
//         if (s == n)
//         {
//             // for (int i = 0; i < n; i++)
//             // {
//             //     for (int j = 0; j < n; j++)
//             //     {
//             //         cout << g[i][j] << " ";
//             //     }
//             //     cout << endl;
//             // }
//             // cout << endl;
//             cnt++;
//         }
//         return;
//     }

//     // 此处不放
//     DFS(x, y + 1, s);
//     // 若此处能放
//     if (!row[x] && !col[y] && !dg[x + y] && !arcdg[x - y + n] && g[x][y] == 1)
//     {
//         g[x][y] = 0;
//         row[x] = col[y] = dg[x + y] = arcdg[x - y + n] = true;
//         DFS(x, y + 1, s + 1);
//         row[x] = col[y] = dg[x + y] = arcdg[x - y + n] = false;
//         g[x][y] = 1;
//     }
// }

// int main()
// {
//     cin.tie(0);
//     ios::sync_with_stdio(false);

//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> g[i][j];
//         }
//     }

//     DFS(0, 0, 0);

//     if(cnt <= 1)
//         cout << 0 << endl;
//     else
//     {
//         cout << cnt * (cnt-1) << endl;

//     }
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