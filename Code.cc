Problem Statement
 Nairobi and tokyo are best friends. one night they decided to play a game. they have an array of n numbers. 
 both players move in turns, and nairobi start the game. . during a player's turn, she picks an element and stole it from the array.
 (i.e. after every turn, size of array decreases by 13 game ends when the size of an ay become zero. the score of a player is xor of all the elements she stolen. 
  player with maximum score wins the game. if both players have same score then it's a draw assuming both the players will play optimally. 
  determine if nairobi will win lose or draw.
 Print-       1,if nairobi will win the game
             -1,if nairobi will win the game
              0,if Draw
              
  I/p-3
      8 1 8
  O/P-1


Solution->
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
const int maxn=3e5+7;
const int INF=2e9;
int a[maxn];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int flag=0;
    for(int i=30;i>=0;i--)
    {
        int c=0;
        for(int j=1;j<=n;j++)
        {
            if(a[j]&(1<<i))
            {
                c++;
            }
        }
        if(c%2==1)
        {
            if(c%4==1)
            {
                flag=1;
            }
            else
            {
                if(n%2==1)
                flag=-1;
                else
                flag=1;
            }
            break;
        }
    }
    if(flag==1)
    {
        printf("1");
    }
    else if(flag==0)
    {
         printf("-1");
    }
    else
    {
         printf("0");
    }

    // for(scanf("%d",&n),i=n;i--;scanf("%d",a+i));
    // for(b=1<<30,f=0;!f&&b;b>>=1)
    return 0;
}
