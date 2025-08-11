// #include <iostream>
// #include <algorithm>
// using namespace std;

// int n,tot = 0;
// int ans[30],visy[30],visd[30],visad[30];

// void dfs(int x)
// {
//     if(x==n+1)
//     {
//         tot++;
//         if(tot<=3)
//         {
//             for(int i=1;i<=n;i++)
//             {
//                 cout << ans[i] << " ";
//             }
//             cout << endl;
//         }
//         return;
//     }
//     for(int i=1;i<=n;i++)
//     {
//         if(visy[i] || visd[i+x] || visad[i-x+n]) continue;
//         ans[x] = i;
//         visy[i] = visd[i+x] = visad[i-x+n] = 1;
//         dfs(x+1);
//         visy[i] = visd[i+x] = visad[i-x+n] = 0;
//     }

// }


// int main() 
// {
//     cin >> n;
//     dfs(1);
//     cout << tot << endl;
//     return 0;
// }






// #include <iostream>
// #include <algorithm>
// using namespace std;

// int a[10][10] = {{1, 0, 1, 0, 1}}, ans = 0,op[10];

// int check()
// {
//     int time = 0;
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 0; j < 5-i; j++)
//         {
//             if (op[time] == 1) a[i][j] = a[i - 1][j] & a[i - 1][j + 1];
//             else if (op[time] == 2)  a[i][j] = a[i - 1][j] | a[i - 1][j + 1]; 
//             else if (op[time] == 3) a[i][j] = a[i - 1][j] ^ a[i - 1][j + 1];  
//             time++;
//         }
//     }
//     if (a[4][0] == 1)
//         return 1;
//     else
//         return 0;
// }



// void dfs(int x)
// {
//     if(x == 10)
//     {
//         if(check())
//             ans++;
//         return;
//     }

//     for (int i = 1; i <= 3; i++)
//     {
//         op[x] = i;
//         dfs(x + 1);
//         op[x] = 0;
//     }

// }



// int main()
// {
//     dfs(0);
//     cout << ans << endl;
//     return 0;
// }




// #include <iostream>
// #include <algorithm>
// using namespace std;

// int a[40],ans = 0;

// void dfs(int l,int soc,int x)
// {
//     if (x == 0)
//         soc = 0;
//     else
//     {
//         soc += 10;
//         if (soc >= 100)
//             return;
//     }
//     if (soc == 70)
//         ans++;
//     if (l == 30) 
//         return;

//     dfs(l + 1, soc, 0);
//     dfs(l + 1, soc, 1);
        
// }


// int main()
// {
//     dfs(0,0,0);
//     cout << ans << endl;
//     return 0;
// }






// #include <iostream>
// #include <algorithm>
// using namespace std;

// struct plane
// {
//     int t;
//     int d;
//     int l;
// };

// plane p[12];
// int G,n,st[12],a[12],ans;

// int cmp(plane a,plane b)
// {
//     if (a.t == b.t) return a.d < b.d;
//     return a.t < b.t;
// }


// void dfs(int x,int time)
// {
//     if (x == n)
//     {
//         ans = 1;
//         return;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         if (!st[i] && time <= p[i].t + p[i].d)
//         {
//             int t = time;
//             if (t <= p[i].t) t = p[i].t;
//             st[i] = 1;
//             dfs(x + 1, t + p[i].l);
//             st[i] = 0;
//         }
        
//     }
// }


// int main()
// {
//     cin >> G;
//     while(G--)
//     {
//         cin >> n;
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> p[i].t >> p[i].d >> p[i].l;
//         }
//         sort(p + 1, p + 1 + n, cmp);
//         ans = 0;
//         dfs(0,0);
//         if (ans) cout << "YES" << endl;
//         else cout << "NO" << endl;
//     }
//     return 0;
// }




// #include <iostream>
// #include <algorithm>
// #include <string>
// using namespace std;

// int n, a, b;
// string s;
// long long ans;

// void dfs(int i, long long num)
// {
//     if (s[i] == '\n')
//     {
//         ans = max(ans, num);
//         return;
//     }
//     int d = s[i] - '0';

//     if (a > 0)
//     {
//         int t = min(a, 9 - d);
//         a -= t;
//         dfs(i + 1, num * 10 + d + t);
//         a += t;        
//     }

//     if (b > d && b > 0)
//     {
//         b -= d + 1;
//         dfs(i + 1, num * 10 + 9);
//         b += d + 1;
//     }
// }

// int main()
// {
//     cin >> s >> a >> b;
//     dfs(0, 0);
//     cout << ans << endl;
//     return 0;
// }






// #include <iostream>
// #include <algorithm>
// using namespace std;

// int ans = 0x3f3f3f3f,n;
// int wm[40], m;
// bool st[40];

// void dfs(int c,int w)
// {
//     if (c >= ans)
//         return;
//     if (w == m)
//     {
//         ans = min(ans, c);
//         return;
//     }
//     for (int j = 1; j <= n; j++)
//     {
//         if (st[j]) continue;
//         float t = wm[j];
//         if (w + t/2 <= m)
//         {
//             st[j] = 1;
//             dfs(c + 1, w + t/2);
//             st[j] = 0;
//         }
//         if (w + t <= m)
//         {
//             st[j] = 1;
//             dfs(c, w + t);
//             st[j] = 0;
//         }
//     }

// }

// int main()
// {
//     cin >> n >> m;
//     m *= 2;
//     for (int i = 1; i <= n; i++)
//     {
//        cin >> wm[i]; 
//        wm[i] *= 2;
//     }
//     dfs(0,0);
//     if (ans == 0x3f3f3f3f)
//     {
//         cout << -1 << endl;
//     }
//     else
//     {
//         cout << ans << endl;
//     }
//     return 0;
// }





// #include <iostream>
// #include <algorithm>
// using namespace std;

// int n, k,ans = 0;

// void dfs(int time,int x,int sum)
// {
//     if (time == k)
//     {
//         if (sum == n)
//             ans++;
//         return;
//     }

//     for (int i = x; sum + i*(k-time) <= n; i++)
//     {
//         dfs(time + 1, i, sum + i);
//     }
    
// }

// int main()
// {
//     cin >> n >> k;
//     dfs(0, 1, 0);
//     cout << ans << endl;
//     return 0;
// }







//(失败！！！！！)
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int n, m,ans = 0x3f3f3f3f;

// void dfs(int k,int h,int r,int v,int s)
// {
//     if (k == 0)
//     {
//         if (v == n)
//         ans = min(ans, s);
//         return;
//     }
//     for (int i = h-1; i >= k; i--)
//     {
//         for (int j = r-1; j >= k; j--)
//         {
//             if (v + i * j * j > n) continue;
            
//         }
//     }
// }


// int main()
// {
//     cin >> n >> m;


//     return 0;
// }








// #include <iostream>
// #include <algorithm>
// #include <unordered_map>
// using namespace std;

// int n, a[60],max_len = 0,;





// int main()
// {
//     cin >> n;
//     for (int i = 1; i <= 50; i++)
//     {
//         cin >>  a[i];
//         max_len += a[i];
//     }
//     sort(a + 1, a + 1 + 50, greater<int>());


//     return 0;
// }








// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// int main()
// {
//     // 初始化随机数种子
//     std::srand(std::time(0));
//     // 生成 0 或 1 的随机数
//     int randomNum = std::rand() % 2;
//     if (randomNum == 0)
//     {
//         std::cout << "和华哥学习" << std::endl;
//     }
//     else
//     {
//         std::cout << "自己在宿舍学习" << std::endl;
//     }
//     return 0;
// }









// #include <iostream>
// #include <algorithm>
// using namespace std;

// struct gold
// {
//     float m;
//     float v;
//     float p;
//     /* data */
// };

// const int N = 110;
// int n, t;
// gold p[N];//m,v
// float ans = 0;

// bool cmp(gold a,gold b)
// {
//     return a.p > b.p;
// }

// int main()
// {
//     cin >> n >> t;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> p[i].m >> p[i].v;
//         p[i].p = p[i].v / p[i].m;
//     }
//     sort (p + 1, p + 1 + n,cmp);
//     for (int i = 1; i <= n; i++)
//     {
//         int m = p[i].m;
//         int v = p[i].v;
//         if (t >= m)
//         {
//             ans += v;
//             t -= m;
//         }
//         else
//         {
//             float tv = t * p[i].p;
//             ans += tv;
//             t = 0;
//             break;
//         }
//         if (t <= 0) break;
//     }
//     printf("%.2f",ans);
//     return 0;
// }








#include <iostream>
#include <algorithm>
using namespace std;

struct race
{
    int s;
    int e;
};

const int N = 1e6 + 11;
race r[N];
int n, ed = -1,ans = 0;

bool cmp (race a,race b)
{
    return a.e < b.e;
}


int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> r[i].s >> r[i].e;
    }
    sort(r,r + n,cmp);

    for (int i = 0; i < n; i++)
    {
        if (r[i].s >= ed)
        {
            ans++;
            ed = r[i].e;
        }
    }
    cout << ans << endl;
    return 0;
}