// #include <iostream>
// #include <algorithm>
// #include <map>
// #include <cmath>
// using namespace std;

// struct node
// {
//     int x;
//     int y;
//     int type;
// };

// int n,q,x,y;
// const int N = 2e3+11;
// node a[N];

// int cmp(node a,node b)
// {
//     int t1 = pow(abs(a.x - x),2) + pow(abs(a.y - y),2);
//     int t2 = pow(abs(b.x - x),2) + pow(abs(b.y - y),2);
//     if (t1 != t2) return t1 < t2;
//     else return a.type < b.type;
// }

// int main()
// {
//     cin >> n >> q;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i].x >> a[i].y >> a[i].type;
//     }
//     cin >> x >> y;
//     sort(a,a+n,cmp);

//     while(q--)
//     {
//         map<int,int> mp;
//         int k,res = 0,time = 0;
//         cin >> k;
//         for (int i = 0; i < k; i++)
//         {
//             mp[a[i].type]++;
//             if (mp[a[i].type] == time && a[i].type < res)
//             {
//                 res = a[i].type;
//             }
//             else if (mp[a[i].type] > time)
//             {
//                 time = mp[a[i].type];
//                 res = a[i].type;
//             }
//         }
//         cout << res << endl;
//     }

//     return 0;
// }

// #include<iostream>
// #include<cstring>
// using namespace std;

// struct ad
// {
//     int a;
//     int s;
//     int t;
// };

// const int N = 1e5+10;
// ad p[N];
// int n,v[N];

// int main()
// {
//     memset(v,0,sizeof v);
//     cin >> n;
//     for (int i =1; i <= n; i++)
//     {
//         cin >> p[i].a >> p[i].s >> p[i].t;
//     }
//     for (int i =2; i <= n; i++)
//     {
//         int l = p[i].s;
//         for (int j = i-1; j>= 1; j--)
//         {
//             if (l >= p[j].s && l <= p[j].t && p[i].a > p[j].a)
//             {
//                 v[i] = max(v[i],p[i].a-p[j].a);
//             }
//         }
//         for (int j = i+1; j <= n; j++)
//         {
//             if (l >= p[j].s && l <= p[j].t && p[i].a > p[j].a)
//             {
//                 v[i] = max(v[i],p[i].a-p[j].a);
//             }
//         }
//     }

//     for (int i = 1;i <= n;i++)
//     {
//         cout << v[i] << ' ';
//     }
//     cout << endl;
//     return 0;
// }

// #include<iostream>
// #include<stack>
// #include<string>
// using namespace std;

// const int N = 300;
// char a[N];
// string s;
// stack<char> sk;

// int main()
// {
//     getline(cin,s);
//     for (auto x:s)
//     {
//         if (x == '(')
//         {
//             sk.push(x);
//         }
//         else if (x == ')')
//         {
//             if (sk.size() == 0)
//             {
//                 cout << "NO" << endl;
//                 return 0;
//             }
//             else
//             {
//                 sk.pop();
//             }
//         }
//         else if (x == '@')
//         {
//             if (sk.size() == 0)
//             {
//                 cout << "YES" << endl;
//             }
//             else
//             {
//                 cout << "NO" << endl;
//             }
//         }

//     }
//     return 0;
// }

// #include<iostream>
// #include<stack>
// using namespace std;

// stack<int> sk;

// int main()
// {
//     int a;
//     while (cin >> a)
//     {
//         if (a == 0) break;
//         sk.push(a);
//     }
//     // 由于 std::stack 不支持范围 for 循环，使用 while 循环输出栈元素
//     while (!sk.empty())
//     {
//         cout << sk.top() << " ";
//         sk.pop();
//     }
//     return 0;
// }

// #include<iostream>
// #include<stack>
// using namespace std;

// stack<int> sk;

// int main()
// {
//     char x;
//     while(cin >> x)
//     {
//         if (x == '@')
//         {
//             if (!sk.empty()) cout << sk.top() << endl;
//             else cout << "NO" << endl;
//             break;
//         }
//         else if (x <= '9' && x >= '0')
//         {
//             int t = x - '0';
//             while(1)
//             {
//                 cin >> x;
//                 if (x != '.')t = t*10 + x - '0';
//                 if (x == '.') break;
//             }
//             sk.push(t);
//         }
//         else if (x == '+')
//         {
//             int a = sk.top();
//             sk.pop();
//             int b = sk.top();
//             sk.pop();
//             sk.push(a+b);
//         }
//         else if (x == '-')
//         {
//             int a = sk.top();
//             sk.pop();
//             int b = sk.top();
//             sk.pop();
//             sk.push(b-a);
//         }
//         else if (x == '*')
//         {
//             int a = sk.top();
//             sk.pop();
//             int b = sk.top();
//             sk.pop();
//             sk.push(a*b);
//         }
//         else if (x == '/')
//         {
//            int a = sk.top();
//            sk.pop();
//            int b = sk.top();
//            sk.pop();
//            sk.push(b/a);
//         }
//     }
// }

// #include<iostream>
// #include<stack>
// #include<string>
// using namespace std;

// stack<int> sk;
// string s;
// int T,n;

// int main()
// {
//     cin >> T;
//     while(T--)
//     {
//         cin >> n;
//         while(n--)
//         {
//             cin >> s;
//             if (s == "push")
//             {
//                 int x;
//                 cin >> x;
//                 sk.push(x);
//             }
//             else if (s == "pop")
//             {
//                 if (!sk.empty()) sk.pop();
//                 else cout << "Empty" << endl;
//             }
//             else if (s == "query")
//             {
//                 if (!sk.empty()) cout << sk.top() << endl;
//                 else cout << "Anguei!" << endl;
//             }
//             else if (s == "size")
//             {
//                 cout << sk.size() << endl;
//             }
//         }
//         sk = stack<int> ();
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// const int N = 1e6+11;
// int a[N][3];
// int n;

// void qian(int x)
// {
//     cout << x << " ";
//     if (a[x][0] != 0) qian(a[x][0]);
//     if (a[x][1] != 0) qian(a[x][1]);
// }

// void zhong(int x)
// {
//     if (a[x][0]!= 0) zhong(a[x][0]);
//     cout << x << " ";
//     if (a[x][1]!= 0) zhong(a[x][1]);
// }

// void hou(int x)
// {
//     if (a[x][0]!= 0) hou(a[x][0]);
//     if (a[x][1]!= 0) hou(a[x][1]);
//     cout << x << " ";
// }

// int main()
// {
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i][0] >> a[i][1];
//     }
//     // // 打印 v 的内容
//     // for (int i = 1; i <= n; i++)
//     // {
//     //     for (int j = 0; j < 2; j++)
//     //     {
//     //         cout << a[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }
//     qian(1);
//     cout << endl;
//     zhong(1);
//     cout << endl;
//     hou(1);
//     return 0;
// }






// #include <iostream>
// #include <queue>
// using namespace std;

// const int N = 1e5 + 11;
// int a[N];
// int n, m_d, ids = 0;
// long long res = 0;
// queue<int> q;

// int main()
// {
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int d = 1;
//     q.push(0);
//     while (!q.empty())
//     {
//         long long sum = 0;
//         int size = q.size();
//         for (int i = 0; i < size; i++)
//         {
//             int t = q.front();
//             q.pop();
//             sum += a[t];
//             if (t * 2 + 1 < n)
//             {
//                 q.push(t * 2 + 1);
//             }
//             if (t * 2 + 2 < n)
//             {
//                 q.push(t* 2 + 2);
//             }
//         }
//         if (sum > res)
//         {
//             res = sum;
//             m_d = d;
//         }
//         d++;
//     }

//     cout << m_d << endl;
//     return 0;
// }






// #include<iostream>
// #include<string>
// #include<cmath>
// using namespace std;

// int n;
// const int N = 20;
// string s;
// char tree[N];

// char check(string s)
// {
//     int res = 0,len = s.length();
//     for (auto x:s)
//     {
//         if (x == '1') res++;
//         if (x == '0') res--; 
//     }
//     if (res == len) return 'I';
//     else if (res == -len) return 'B';
//     else return 'F';
// }


// void maketree(string s,int root)
// {
//     int len = s.length();
//     if (len <= 0) return;
//     tree[root] = check(s);
//     if (len > 1) 
//     {
//     maketree(s.substr(0,len/2),root*2+1);
//     maketree(s.substr(len/2,len/2),root*2+2);        
//     }
// }

// void printtree(int root,int m)
// {
//     if (root >= m) return;
//     printtree(root*2+1,m);
//     printtree(root*2+2,m);
//     cout << tree[root];
// }



// int main()
// {
//     cin >> n;
//     cin >> s;
//     int root = 0;
//     maketree(s, root);
//     int m = pow(2, n + 1) - 1;
//     printtree(root, m);
// }






// #include<iostream>
// #include<string>
// using namespace std;

// string sf, sm;
// char tree[50];
// int idx = 0;

// void maketree(string s,int root)
// {
//     if (idx >= sf.length() || s.empty()) return;
//     char t_c = sf[idx++];
//     tree[root] = t_c;
//     int t_idx = sm.find(t_c);
//     if (root * 2 + 1 < sm.length()) maketree(sm.substr(0,t_idx), root * 2 + 1);
//     if (root * 2 + 2 < sm.length()) maketree(sm.substr(t_idx+1,sm.length()-t_idx-1), root * 2 + 2);
    
// }

// void printtree(int root)
// {
//     if (root * 2 + 1 < sm.length()) printtree(root * 2 + 1);
//     if (root * 2 + 2 < sm.length()) printtree(root * 2 + 2);
//     cout << tree[root];
// }


// int main()
// {
//     cin >> sm >> sf;
//     maketree(sm, 0);
//     printtree(0);
//     return 0;
// }

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int N = 1e9 + 7;
int n;
vector<int> a, b;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    long long res = 1;
    int sum = 0;
    for (int i = n - 1, j = i; i >= 0; i--)
    {
        int t = b[i];
        while (j >= 0)
        {
            if (a[j] > t)
            {
                sum++;
                j--;
            }
            else
            {
                break;
            }
        }
        res = (res * sum--) % N;
    }
    cout << res << endl;
    return 0;
}