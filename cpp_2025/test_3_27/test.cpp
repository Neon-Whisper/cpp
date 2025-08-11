// #include <iostream>
// #include <algorithm>
// using namespace std;

// typedef pair<int, int> PII;
// const int N = 1e5 + 11;
// int n, m,maxl = -1,minr = 0x3f3f3f3f;
// PII a[N];

// int main()
// {
//     cin >> n >> m;
//     for (int i = 0; i < m; i ++ )
//     {
//         cin >> a[i].first >> a[i].second;
//         maxl = max(maxl, a[i].first);
//         minr = min(minr, a[i].second);
//     }

//     if (maxl <= minr)
//     {
//         int ans = minr - maxl + 1;
//         cout << ans << endl;
//     }
//     else
//         cout << 0 << endl;
//     return 0;
// }






// #include <iostream>
// #include <algorithm>
// using namespace std;

// typedef pair<int, int> PII;
// const int N = 1010;
// int n;
// PII s[N];

// bool cmp(PII a, PII b)
// {
//     return a.first + a.second < b.first + b.second;
// }

// int main()
// {
//     cin >> n;
//     for (int i = 0; i < n; i++ )
//     {
//         int a, b, c;
//         cin >> a >> b >> c;
//         s[i].first = a + b;
//         s[i].second = c;
//     }
//     sort(s, s + n,cmp);
//     long long  ans = 0, laste = 0, lastt = 0;
//     for (int i = 0; i < n; i++ )
//     {
//         long long  t = s[i].first + laste + lastt;
//         lastt = t;
//         ans += t;
//         laste = s[i].second;
//     }
//     cout << ans << endl;
//     return 0;
// }











// #include <iostream>
// #include <algorithm>
// using namespace std;

// const int N = 200010;
// int n;
// long long a[N],s[N];

// int main()
// {
//     cin >> n;
//     for (int i = 1; i <= n; i ++ )
//     {
//         cin >> a[i];
//         s[i] = s[i - 1] + a[i];
//     }
//     long long  ans = 0;
//     for (int i = 1; i <= n; i ++ )
//     {
//         ans += a[i] * (s[n] - s[i]);
//     }
//     cout << ans << endl;
//     return 0;
// }









// #include <iostream>
// #include <algorithm>
// using namespace std;

// const int N = 1e5 + 11;
// int n,k;
// int a[N];
// long long  ans = 0x3f3f3f3f,s[N];

// int main()
// {
//     cin >> n >> k;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i];
//     }
//     sort(a + 1, a + 1 + n);
//     for (int i = 1; i <= n; i++)
//     {
//         s[i] = s[i - 1] + a[i];
//     }
//     for (int i = 0; i <= k; i++) // i 表示用了几次取法1
//     {
//         int j = k - i; // j 表示用了几次取法2
//         long long t1 = s[n] - s[n - i];
//         long long t2 = s[j * 2];
//         ans = min(ans, t1 + t2);
//     }
//     cout << ans << endl;

//     return 0;
// }














// #include <iostream>
// #include <algorithm>
// using namespace std;

// const int N = 1e3 + 11;
// int n, m,c;
// int a[N][N];
// long long s[N][N],ans = -1,x,y;

// int main()
// {
//     cin >> n >> m >> c;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             cin >> a[i][j];
//             s[i][j] = s[i][j - 1]  + s[i - 1][j] - s[i - 1][j - 1] + a[i][j];
//         }
//     }
//     for (int i = c; i <= n; i++)
//     {
//         for (int j = c; j <= m; j++)
//         {
//             long long t = s[i][j] - s[i - c][j] - s[i][j - c] + s[i - c][j - c];
//             if (t > ans)
//             {
//                 ans = t;
//                 x = i - c + 1;
//                 y = j - c + 1;
//             }
//         }
//     }
//     cout << x << " " << y << endl;
//     return 0;
// }











// #include <iostream>
// #include <algorithm>
// using namespace std;

// int ans = 0x3f3f3f3f,n,a,b;

// int main()
// {
//     cin >> n;
//     cin >> a;
//     for (int i = 0; i + 1 < n; i++)
//     {
//         cin >> b;
//         ans = min(ans,abs( b - a));
//         a = b;
//     }
//     cout << ans << endl;
//     return 0;
// }











// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// const int N = 10010;
// int n,m,flag = 0;
// int a[N];

// void find(int num)
// {
//     vector<int> a;
//     for (int i = 1; i * i <= num; i++)
//     {
//         if (i == num)
//             continue;
//         if (num % i == 0)
//         {
//             a.push_back(i);
//             if (i != num / i)
//             {
//                 a.push_back(num / i);
//             }
//         }
//     }
//     sort(a.begin(), a.end());
//     int sum = 0;
//     for (int i = 0; i < a.size() - 1; i++)
//     {
//         sum += a[i];
//     }
//     if (sum == num)
//     {
//         flag++;
//         cout << num << " = " << a[0];
//         for (int i = 1; i < a.size() - 1; i++)
//         {
//             cout << " + " << a[i];
//         }
//         cout << endl;
//     }

// }

// int main()
// {
//     cin >> n >> m;
//     for (int i = n; i <= m; i++)
//     {
//         find (i);
//     }
//     if (flag == 0)
//         cout << "None" << endl;
//     return 0;
// }










// #include <iostream>
// #include <algorithm>
// using namespace std;

// int n, total = 150;

// int main()
// {
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i * 5 > total)
//             break;
//         int b = 50 - 4 * i;
//         int c = 50 + 3 * i;
//         if (b > 0 && c > 0)
//         {
//             cout << i << " " << b << " " << c << endl;
//         }
//     }
//     return 0;
// }











// #include <iostream>
// #include <algorithm>
// using namespace std;

// int n;
// int a[13];

// void print()
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     if (n == 1)
//     {
//         print();
//         return 0;
//     }
//     for (int i = 1; i < n; i++)
//     {
//         int key = a[i];
//         int j = i - 1;
//         while (j >= 0 && a[j] > key)
//         {
//             a[j + 1] = a[j];
//             j--;
//         }
//         a[j + 1] = key;
//         print();
//     }
//     return 0;
// }








// #include <iostream>
// #include <algorithm>
// using namespace std;

// int v1, v2, t, s, l;

// int main()
// {
//     cin >> v1 >> v2 >> s >> t >> l;
//     int time = 0, s2 = 0, s1 = 0, rt = 0;
//     while (s1 < l && s2 < l)
//     {
//         time++;
//         s2 += v2;
//         if (rt != 0)
//         {
//             rt--;
//             // cout << rt << endl;
//         }
//         else
//         {
//             s1 += v1;
//             if (s1 - s2 >= s)
//             {
//                 rt = t;
//             }
//         }
//         // cout << time << " " << s1 << " " << s2 << endl;
//     }
//     if (s1 >= l)
//     {
//         if (s2 < l)
//         {
//             cout << "R" << endl;
//             cout << time << endl;
//         }
//         else
//         {
//             cout << "D" << endl;
//             cout << time << endl;
//         }
//     }
//     else
//     {
//         cout << "T" << endl;
//         cout << time << endl;
//     }
//     return 0;
// }









// #include <iostream>
// #include <algorithm>
// using namespace std;

// int n, k;
// int a[10010];

// int main()
// {
//     cin >> n >> k;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     sort(a, a + n);
//     cout << a[k - 1] << endl;
//     return 0;
// }






// #include <iostream>
// #include <algorithm>
// using namespace std;

// int n;
// int a[10010],ans = 0x3f3f3f3f;

// int main()
// {
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     sort(a, a + n);
//     for (int i = 0; i+1 < n; i++)
//     {
//         ans = min(ans, a[i + 1] - a[i]);
//     }
//     cout << ans << endl;
//     return 0;
// }






// #include <iostream>
// #include <algorithm>
// using namespace std;

// const int N = 1e5 + 11;
// int n;
// int a[N],s[N];

// int main()
// {
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i];
//         s[i] = s[i - 1] + a[i];
//     }
//     int ans = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             ans = max(ans, s[i] - s[j]);
//         }
//     }

//     cout << ans << endl;
//     return 0;
// }






// #include <iostream>
// #include <algorithm>
// using namespace std;

// int n;
// int a[12][12],st[12][12],cnt = 0;

// void printn(int n)
// {
//     if (n < 10)
//     {
//         cout << "  " << n;
//     }
//     else if (n >= 10 && n < 100)
//     {
//         cout << " " << n;
//     } 
//     else
//     {
//         cout << n;
//     }
// }


// int main()
// {
//     cin >> n;
//     if (n == 1)
//     {
//         cout << "  "<< 1 << endl;
//         return 0;
//     }
//     int len = n - 1,x = 1 , y = 1;
//     while(cnt < n * n && len >= 0)
//     {
//         if (st[x][y])
//             break;
//         for (int i = 0; i < len; i++)
//         {
//             a[x][y] = ++cnt;
//             st[x][y] = 1;
//             y++;
//         }
//         if (st[x][y])
//             break;

//         for (int i = 0; i < len; i++)
//         {
//             a[x][y] = ++cnt;
//             st[x][y] = 1;
//             x++;
//         }

//         for (int i = 0; i < len; i++)
//         {
//             a[x][y] = ++cnt;
//             st[x][y] = 1;
//             y--;
//         }

//         for (int i = 0; i < len; i++)
//         {
//             a[x][y] = ++cnt;
//             st[x][y] = 1;
//             x--;
//         }
//         y++;
//         x++;
//         len = len - 2;
//     }
//     if (n % 2 != 0)
//     {
//         a[n/2+1][n/2+1] = ++cnt;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             printn(a[i][j]);
//         }
//         cout << endl;
//     }

//     return 0;
// }








// #include <iostream>
// #include <algorithm>
// using namespace std;

// int n,m,cnt = 0;
// int a[13],st[13];

// void dfs(int idx)
// {
//     if (idx == m)
//     {
//         for (int i = 0; i < m; i++)
//         {
//             cout << a[i] << " ";
//         }
//         cout << endl;
//         cnt++;
//         return;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         if (st[i])
//             continue;
//         st[i] = 1;
//         a[idx] = i;
//         dfs(idx + 1);
//         st[i] = 0;
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
// using namespace std;

// int n;
// int a[110],sum = 0;

// int main()
// {
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     sort(a, a + n);
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += cnt;
//         cnt += a[i];

//     }
//     cout << sum << endl;
//     return 0;
// }








// #include <iostream>
// #include <algorithm>
// using namespace std;

// int m, n, k,cnt = 0;
// int a[10010];

// int main()
// {
//     cin >> m >> n >> k;
//     for (int i = 0; i < k; i++)
//     {
//         cin >> a[i];
//     }
//     sort(a, a + k);
//     int car = 0;
//     while(car < m)
//     {
//         if (car + n >= m)
//         {
//             break;
//         }
//         else
//         {
//             for (int i = k-1; i >= 0; i--)
//             {
//                 if (a[i] <= car + n)
//                 {
//                     car = a[i];
//                     cnt++;
//                     break;
//                 }
//             }
//         }
//     }
//     if (cnt != 0)
//     {
//         cout << cnt << endl;
//     }
//     else
//     {
//        cout << 0 << endl; 
//     }
//     return 0;
// }








#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

struct meeting
{
    int b, e;
};


const int N = 110;
int n;
meeting m[N];

bool cmp(meeting a, meeting b)
{
    return a.b < b.b;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m[i].b;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> m[i].e;
    }
    sort(m, m + n, cmp);
    // int ans = 0,cnt = 0,end = -1;
    // for (int i = 0; i < n; i++)
    // {
    //     if (m[i].b >= end)
    //     {

    //         cnt = 1;
    //         end = m[i].e; 
    //     }
    //     else
    //     {
    //         cnt++;
    //         end = min(end, m[i].e);
    //     }
    //     ans = max(ans, cnt);
    // }
    // cout << ans << endl;

    priority_queue<int, vector<int>, greater<int>> h;

    for (int i = 0; i < n; i++)
    {
        if (!h.empty() && h.top() <= m[i].b)
        {
            h.pop();
        }
       h.push(m[i].e);
    }
    cout << h.size();
    return 0;
}










// #include <iostream>
// #include <algorithm>
// using namespace std;

// struct movie
// {
//     int s,e;
// };

// int n;
// bool cmp(movie a, movie b)
// {
//     return a.e < b.e;
// }

// int main()
// {
//     while(1)
//     {
//         cin >> n;
//         if (n == 0)
//         {
//             break;
//         }
//         movie m[110];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> m[i].s >> m[i].e; 
//         }
//         sort(m, m + n, cmp);
//         int ans = 0,end = -1;
//         for (int i = 0; i < n; i++)
//         {
//             if (m[i].s >= end)
//             {
//                 ans++;
//                 end = m[i].e;
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }









// #include <iostream>
// #include <algorithm>
// using namespace std;

// struct  num
// {
//     int n, id;
// };


// int k,n;
// num a[13];

// bool cmp(num a, num b)
// {
//     return a.id > b.id;
// }
// bool cmp2(num a, num b)
// {
//     if (a.n == b.n)
//     {
//         return a.id < b.id;
//     }
//     return a.n < b.n;
// }

// int main()
// {
//     cin >> n >> k;
//     int cnt = 0;
//     while (n)
//     {
//         a[cnt].id = cnt;
//         a[cnt++].n = n % 10;
//         n /= 10;
//     }
//     if (k == 0)
//     {
//         for (int i = cnt - 1; i >= 0; i--)
//         {
//             cout << a[i].n;
//         }
//     }
//     else if (k == cnt)
//     {
//         return 0;
//     }
//     else
//     {
//         sort(a, a + cnt, cmp2);
//         for (int i = cnt - k; i < cnt; i++)
//         {
//             a[i].id = -1;
//         }
//         sort(a, a + cnt - 1, cmp);
//         for (int i = 0; i < cnt; i++)
//         {
//             if (a[i].id == -1)
//                 continue;
//             cout << a[i].n;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string num;
//     int k;
//     cin >> num >> k;

//     string ans;
//     for (char i : num)
//     {
//         while (!ans.empty() && k > 0 && ans.back() > i)
//         {
//             ans.pop_back();
//             k--;
//         }
//         ans.push_back(i);
//     }

//     while (k > 0)
//     {
//         ans.pop_back();
//         k--;
//     }

//     int i = 0;
//     while (i < ans.size() && ans[i] == '0')
//     {
//         i++;
//     }
//     ans = ans.substr(i);

//     if (ans.empty())
//     {
//         ans = "0";
//     }

//     cout << ans << endl;
//     return 0;
// }

// #include <iostream>
// #include <queue>
// #include <vector>
// using namespace std;

// priority_queue<int, vector<int>, greater<int>> h;

// int main()
// {
//     int n;
//     cin >> n;
    

//     for (int i = 0; i < n; i++)
//     {
//         int len;
//         cin >> len;
//        h.push(len);
//     }
//     int cnt = 0;
//     while (h.size() > 1)
//     {
//         int a = h.top();
//         h.pop();
//         int b = h.top();
//         h.pop();

//         int cost = a + b;
//         cnt += cost;
//         h.push(cost);
//     }

//     cout << cnt << endl;
//     return 0;
// }