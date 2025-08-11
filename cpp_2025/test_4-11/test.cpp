// #include <iostream>
// #include <algorithm>
// #include <string>
// #include <set>
// #include <queue>
// #include <vector>
// using namespace std;

// string str;
// int ans = 0;
// set<string> set1;
// bool st[10];

// bool check(string str)
// {
//     for (int i = 0; i < str.size(); i++)
//     {
//         if (str[i] == 'a')
//         {
//             if (str.find('f') == string::npos && str.find('b') == string::npos)
//             {
//                 return false;
//             }
//         }
//         else if (str[i] == 'b')
//         {
//             if (str.find('a') == string::npos && str.find('c') == string::npos && str.find('g') == string::npos)
//             {
//                 return false;
//             }
//         }
//         else if (str[i] == 'c')
//         {
//             if (str.find('b') == string::npos && str.find('d') == string::npos && str.find('g') == string::npos)
//             {
//                 return false;
//             }
//         }
//         else if (str[i] == 'd')
//         {
//             if (str.find('c') == string::npos && str.find('e') == string::npos)
//             {
//                 return false;
//             }
//         }
//         else if (str[i] == 'e')
//         {
//             if (str.find('d') == string::npos && str.find('f') == string::npos && str.find('g') == string::npos)
//             {
//                 return false;
//             }
//         }
//         else if (str[i] == 'f')
//         {
//             if (str.find('a') == string::npos && str.find('e') == string::npos && str.find('g') == string::npos)
//             {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// // bool check(string str)
// // {
// //     // 使用邻接表表示七段码的连接关系
// //     vector<vector<char>> adj = {
// //         {'b', 'f'},          // a
// //         {'a', 'c', 'g'},     // b
// //         {'b', 'd', 'g'},     // c
// //         {'c', 'e'},          // d
// //         {'d', 'f', 'g'},     // e
// //         {'a', 'e', 'g'},     // f
// //         {'b', 'c', 'e', 'f'} // g
// //     };

// //     // 检查所有发光二极管是否连通
// //     set<char> visited;
// //     queue<char> q;
// //     q.push(str[0]);
// //     visited.insert(str[0]);

// //     while (!q.empty())
// //     {
// //         char current = q.front();
// //         q.pop();

// //         for (char neighbor : adj[current - 'a'])
// //         {
// //             if (str.find(neighbor) != string::npos &&
// //                 visited.find(neighbor) == visited.end())
// //             {
// //                 visited.insert(neighbor);
// //                 q.push(neighbor);
// //             }
// //         }
// //     }

// //     return visited.size() == str.length();
// // }

// void dfs(int u)
// {
//     if (u > 6)
//     {
//         if (!str.empty() && check(str))
//         {
//             set1.insert(str);
//         }

//         return;
//     }

//     for (int i = 0; i < 7; i++)
//     {
//         if (st[i]) continue;
//         str += (char)('a' + i);
//         dfs(u + 1);
//         str.pop_back();
//         st[i] = false;
//     }
    
//     dfs(u + 1);
// }

// int main() 
// {
//     dfs(0);
//     cout << set1.size() << endl;
//     return 0;
// }









#include <iostream>
#include <algorithm>
using namespace std;






int main()
{





    return 0;

}