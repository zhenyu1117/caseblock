#include <iostream> 
#include<math.h> 
#include <algorithm> 
using namespace std; 
typedef struct points{ 
double x; 
double y;}type; bool cmp(type a,type b) { 
   if (a.x==b.x) 
   return a.y<b.y; 
   return a.x<b.x; 
} 
int main(){ 
type *pt,*xd; 
double x1,x2,border; 
int i,j,k,n,count= 1,r,flag= 1,flag1= 0; 
while ( scanf( "%d%d",&n,&r)) 
{ 
if (n== 0&&r== 0) 
break; 
pt= new type[n]; 
xd= new type[n]; 
for (i= 0;i<n;i++) 
{ 
cin>>pt[i].x>>pt[i].y; 
  if (pt[i].y>r||r< 0||pt[i].y< 0) 
flag1= 1; 
    } 
    if (flag1) 
{ 
     cout<< "Case"<< " "<<flag<< ":"<< " "<< "-1"<< endl; 
flag1= 0; 
flag++; 
} 
    else 
    { 
sort (pt,pt+n,cmp); 
for (i= 0;i<n;i++) 
{ 
xd[i].x=pt[i].x- sqrt(r*r-pt[i].y*pt[i].y); 
xd[i].y=pt[i].x+ sqrt(r*r-pt[i].y*pt[i].y); }border=xd[ 0].y; 
    for (i= 1;i<n;i++) 
    { 
      if (border>xd[i].y) 
       border=xd[i].y; 
       else 
       { 
       if (xd[i].x>border) 
       { 
border=xd[i].y; 
       count++; 
         } 
   } 
} 
cout<< "Case"<< " "<<flag<< ":"<< " "<<count<< endl; 
count= 1; 
flag++; 
    } 
} 
return 0; 
}

