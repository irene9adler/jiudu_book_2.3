//¾Å¶È sort½µÐò2.3
#include <stdio.h>
#include <algorithm>
using namespace std;

bool cmp (int x,int y)
{
    return x>y;
}
int main()
{
    int a[100];
    int n;
    scanf("%d",&n);

    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    sort(a,a+n,cmp);

    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
