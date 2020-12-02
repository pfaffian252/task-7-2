#include <stdio.h>
#include <stdlib.h>
const int n=6;
const int m=6;
//*************************************************************
//*************************************************************
int t74(int a[],int n)
{
    int  i, m, m2;
   m=a[0];
m2=a[0];
if (a[1]<a[0]) m2=a[1];
for (i=1; i<n; i++)
{
   if (a[i]>m )
   {
       m2=m;
    m=a[i];
   }
   else if (a[i]>m2) m2=a[i];
}
return m2;
}
//*************************************************************
//*************************************************************
int t75 (int a[],int n,int x, int l, int r)
{
int m=(l+r)/2;
    if (l<=r)
    {
    if (a[m]==x)
        return 1;
    else if (a[m]>x) return t75(a, n, x, l, m-1);
        else return t75(a, n, x, m+1, r);
    }
        else return 0;
}
//*************************************************************
//*************************************************************
t76(int a[],int b[])
{
int na=0, nb=0, i, c[n+m];
    for (i=0; i<n+m; i++)
    {
        if (a[na]>b[nb] && nb<m && na<n)
        {
            c[i]=b[nb];
            nb++;
        }
        else if (na<n && nb<m)
        {
            c[i]=a[na];
            na++;
        }
        else
        {
            if (na<n)
        {
            c[i]=a[na];
            na++;
        }
        if (nb<m)
        {
            c[i]=b[nb];
            nb++;
        }
        }
    }
    for (i=0; i<n+m; i++) printf("%d ", c[i]);

}
//*************************************************************
//*************************************************************
int main()
{
    int jobnumb, k, a[n], i, b[m], c[n], j, s=0;
printf("Task 7\nSelect job number (3-6)\n");
scanf("%d", &jobnumb);
switch (jobnumb)
{
//*************************************************************
//*************************************************************
    case 3:
        printf(" Enter an array of %d elements\n", n);
for (i=0; i<n; i++)
scanf("%d", &a[i]);
for (i=0; i<n; i++) c[i]=a[i];
for (i=0; i<n-1; i++)
{
    j=i+1;
    for (k=j; k<n; k++)
        if (a[k]==a[i]) c[k]=0;
}
for (i=0; i<n; i++)
{
    if (c[i]!=0)
    {
        a[s]=c[i];
        s++;
    }
}
for (j=s; j<n; j++)
    a[j]=0;
for (i=0; i<n; i++) printf("%d ", a[i]);
        break;
//*************************************************************
//*************************************************************
    case 4:
        printf("\nenter an array of %d elements\n", n);
        for (i=0; i<n; i++)
scanf("%d", &a[i]);
        k=t74(a, n);
        printf("second maximum in the array: %d", k);
        break;
//*************************************************************
//*************************************************************
    case 5:
        printf("enter an ordered array of %d elements\n", n);
          int  x;
    for ( i=0; i<n; i++) scanf ("%d",&a[i]);
    printf("enter the element you are looking for\n");
    scanf ("%d",&x);
    k=t75(a, n, x, 0, n-1);
    if (k) printf ("\nitem found");
    else printf ("\nitem not found");
        break;
//*************************************************************
//*************************************************************
    case 6:
        printf("enter an ordered array of %d elements\n", n);
        for (i=0; i<n; i++) scanf("%d", &a[i]);
    printf("enter an ordered array of %d elements\n", m);
    for (i=0; i<m; i++) scanf("%d", &b[i]);
    printf("combined array\n");
  t76 (a, b);
break;
}
    return 0;
}
