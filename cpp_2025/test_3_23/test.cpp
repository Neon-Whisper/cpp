// #include <iostream>
// #include <algorithm>
// using namespace std;

// struct q
// {
//     long long s;
//     long long e;
// };
// const int N = 1e5 + 11;
// q p[N];
// int ans,n;

// bool cmp(q a, q b)
// {
//     return a.s < b.s;
// }

// int main()
// {
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> p[i].s >> p[i].e;
//     }
//     sort(p, p + n, cmp);
//     long long end = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (p[i].e >= end)
//         {
//             ans += p[i].e - max(p[i].s, end) + 1;
//             end = p[i].e + 1;
//         }
        
//     }
//     cout << ans;
//     return 0;
// }








// #include <iostream>
// #include <algorithm>
// using namespace std;

// const int N = 5e5 + 11;
// int n, a[N];
// bool st[N];

// int findp(int p)
// {
//     int l = 0,r = n-1,res = -1;
//     while (l <= r)
//     {
//         int mid = (l + r) / 2;
//         if (p >= a[mid]) 
//         {
//             res = mid;
//             l = mid + 1;
//         }
//         else r = mid - 1;
//     }
//     // cout << res <<  endl;
//     if (res != -1)
//     {
//         for (int i = res; i >= 0; i--)
//         {
//             if (!st[i])
//             {
//                 st[i] = true;
//                 return a[i];
//             }
//         }        
//     }
//     return 0;
// }


// int main()
// {
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     sort(a, a + n);
//     int cnt = 0,p = 0,ans = 0;
//     for (int i = n-1; i >= 0; i--)
//     {
//         if (!st[i])
//         {
//             st[i] = true;
//             cnt++;
//             p = a[i];
//             ans += p; 
//             // cout << p << endl;
//         }
//         if (cnt == 2)
//         {
//             cnt = 0;
//             int x = findp(p/2);
//         }
//     }
//     cout << ans;
//     return 0;
// }







// #include <iostream>
// #include <algorithm>
// using namespace std;

// const int N = 1e3 + 11;
// int n, x,c[N],s = 0,ans = 0;

// int finds(int p)
// {
//     int res;
//     for (int i = 0; i < n; i++)
//     {
//         if (c[i] <= p)
//         {
//             res = c[i];
//         }
//         else break;
//     }
//     return res;
// }

// int main()
// {
//     cin >> x >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> c[i];
//     }
//     sort(c, c + n);
//     if (c[0] != 1)
//         ans = -1;
//     else
//     {
//         while (s < x)
//         {
//             int x = finds(s+1); 
//             s += x;
//             ans++;
//         }        
//     }

//     cout << ans;
// }







// #include <iostream>
// #include <algorithm>
// using namespace std;


// struct valve
// {
//     int i;
//     int t;
// };
// const int N = 5010;
// int n, len;
// valve a[N];

// int main()
// {
//     cin >> n >> len;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i].i >> a[i].t;
//     }
//     int l = 1,r = len,res = -1;
//     while (l <= r)
//     {
//         int mid = (l + r) / 2;

//     }
    
//     return 0;
// }









// #include <iostream>
// #include <algorithm>
// using namespace std;

// typedef long long ll;
// ll k;

// ll check(ll n)
// { // 计算n!末尾有多少个0
//     ll cnt = 0;
//     while (n)
//         cnt += (n /= 5);
//     return cnt;
// }

// int main()
// {
//     cin >> k;
//     ll l = 0,r = 1e18+11;
//     while (l + 1 != r)
//     {
//         ll mid = (l + r) / 2;
//         ll x = check(mid);
//         if(x < k)
//         {
//             l = mid;
//         }
//         else r = mid;
//     } 
//     if (check(r) == k)   
//         cout << r;
//     else cout << -1;
//     return 0;
// }







// #include <iostream>
// #include <algorithm>
// using namespace std;

// struct ckl
// {
//     int h;
//     int w;
// };

// const int N = 1e5 + 11;
// int n, k,maxw = -1;
// ckl c[N];

// int check(int x)//满足多少小朋友
// {
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int hx = c[i].h/x, wx = c[i].w/x;
//         cnt += hx * wx;
//     }
//     return cnt;
// }


// int main()
// {
//     cin >> n >> k;
//     for (int i = 0; i < n; i++)
//     {
//         int h, w;
//         cin >> h >> w;
//         if (h > w)  swap(h, w);
//         c[i].h = h;
//         c[i].w = w;
//         maxw = max(maxw, w);
//     }
//     int l = 0, r = maxw + 1;
//     while (l + 1 < r)
//     {
//         int mid = (l + r) / 2;
//         int x = check(mid);
//         if (x >= k)
//         {
//             l = mid;
//         }   
//         else r = mid;
//     } 
//     if (check(l) >= k)
//         cout << l;
//     else cout << -1;
//     return 0;
// }








// #include <iostream>
// #include <algorithm>
// using namespace std;

// const int N = 5e4 + 11;
// int len, n, m,r[N];

// int check(int d)
// {
//     int num = 0, last = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (r[i] - last < d)
//         {
//             num++;
//         }
//         else last = r[i];
//     }
//     return num; 
// }

  
// int main()
// {
//     cin >> len >> n >> m;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> r[i];
//     }
//     int l = 0, r = len;
//     while (l + 1 < r)
//     {
//         int mid = (l + r) / 2;
//         if (check(mid) <= m) l = mid;
//         else r = mid;
//         // cout << l << " " << r << endl;
//     }
//     if (check(l) <= m)
//         cout << l;
//     else cout << -1;
//     return 0;
// }







// #include <iostream>
// #include <algorithm>
// using namespace std;

// const int N = 1e5 + 11;
// int n, d;
// int rock[N],s[N];

// bool check(int x)
// {
//     for (int i = 1; i + x <= n; i++)
//     {
//         if (s[i + x - 1] - s[i - 1] < d * 2)
//         {
//             return false;
//         }
//     }
//     return true;
// }


// int main()
// {
//     cin >> n >> d;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> rock[i];
//         s[i] = s[i - 1] + rock[i];
//     }
//     int l = 0, r = n + 1;
//     while (l + 1 < r)
//     {
//         int mid = (l + r) / 2;
//         if (!check(mid)) l = mid;
//         else r = mid;
//     }
//     cout << r;
//     return 0;
// }







// #include <iostream>
// #include <algorithm>
// using namespace std;

// const int N = 1e5 + 11;
// int n,m,maxa = -1;
// int a[N], b[N];

// int check(int x)
// {
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] >= x)
//         {
//             cnt +=((a[i] - x) / b[i]) + 1;
//         }
//     }
//     return cnt;
// }



// int main()
// {
//     cin >> n >> m;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i] >> b[i];
//         maxa = max(maxa, a[i]);
//     }
//     int l = 0, r = maxa + 1;
//     while (l + 1 < r)
//     {
//         int mid = (l + r) / 2;
//         if (check(mid) > m) l = mid;
//         else r = mid;
//     }
//     int cnt = 0,sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] < r) continue;
//         int k = (a[i] - r) / b[i];
//         if (k * b[i] != a[i] - r) k++;
//         sum = sum + (a[i] + a[i] - (k - 1) * b[i]) * k / 2;
//         cnt += k;
//     }
//     sum += (m - cnt) * r;
//     cout << sum;
//     return 0;
// }







// #include <iostream>
// #include <algorithm>
// using namespace std;

// struct valve
// {
//     int loc;
//     int t;
// };

// const int N = 1e5 + 11;
// int n, len,maxt;
// valve v[N];

// bool check(int x)
// {
//     int cnt = 0,last = -1,l_l = 0x3f3f3f3f,l_r = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (v[i].t > x)
//             continue;
//         int l = v[i].loc - (x - v[i].t);
//         int r = v[i].loc + (x - v[i].t);
//         l_l = min(l_l, l);
//         l_r = max(l_r, r);
//         cout << l_l << " " << l_r << endl;
//         if (last <= r)
//         {
//             cnt += r - max(l, last) + 1;
//             last = r + 1;
//         }

//     }
//     if (l_l <= 1 && l_r >= len && cnt < len) return true;
//     else return false;
// }

// int main()
// {
//     cin >> n >> len;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i].loc >> v[i].t;
//         maxt = max(maxt, v[i].t);
//     }
//     int l = 0, r = len + maxt;
//     while (l + 1 < r)
//     {
//         int mid = (l + r) / 2;
//         if (check (mid)) l = mid;
//         else r = mid;
//     }
//     cout << r;
//     return 0;
// }







// #include <iostream>
// #include <algorithm>
// #include <string>
// using namespace std;

// string s1,s2;

// char flip(char c)
// {
//     if (c == '*') return 'o';
//     else return '*';
// }

// int main()
// {
//     cin >> s1 >> s2;
//     int cnt = 0;
//     for (int i = 0; i + 1 < s1.size(); i++)
//     {
//         if (s1[i] == s2[i])
//         {
//             continue;
//         }
//         else
//         {
//             s1[i] = flip(s1[i]);
//             s1[i + 1] = flip(s1[i + 1]);
//             cnt++;
//         }
//     }
//     cout << cnt;
//     return 0;
// }