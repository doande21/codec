#include<stdio.h>
int nhuan(int y)
{
    return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
}

int songaytrongthang(int m,int y)
{
  switch(m)
  {
    case 1:case 3:case 5:case 7:case 8:case 10:case 12:
    {
      return 31;
      break;
    }
    case 2:
    {
      if(nhuan(y))
      {
        return 29;
      }
      return 28;
    }
    case 4:case 6:case 9:case 11:
    {
      return 30;
    }   
  }
}

void ngaytruocdo(int y,int m,int d)
{
 
  int ny=y;int nm=m;int nd=d;
  
  if(y>0&&m>0&&m<13&&d>0&&d<=(songaytrongthang(m,y)))
  {
    
    nd=d-1;
    
    if(m!=1&&d==1)
    {

      if(m == 2 || m == 4 || m == 6 || m == 8 || m == 9 || m == 11){
        nd = 31;
        nm = m -1;
      }
     
      if(m == 3){
        if(nhuan(y)){
          nd = 29;
          nm = m - 1;
        }
        else
        {
          nd = 28;
          nm = m -1;
        }
      }
      
      if(m == 5 || m == 7 || m == 10 || m == 12){
        nd = 30;
        nm = m - 1;
      }
    }
    
    else if(m==1&&d==1)
    {
      nd=31;
      ny=y - 1;
      nm=12;
    }
  }
    printf("\nNgay truoc do : %d:%d:%d",nd,nm,ny);
}
int main()
{
    int y;int m;int d;
    
    do {
    printf( "\n Nhap ngay: ");
    scanf("%d", &d);
    printf( "Nhap thang: ");
    scanf("%d", &m);
    printf("Nhap nam: ");
    scanf("%d",&y);
  } while (y < 0 || m < 1 || m >12 || d < 0 || d > 31);
    ngaytruocdo(y,m,d);
}
