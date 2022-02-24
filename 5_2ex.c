#include<stdio.h>
#include<ctype.h>

//FUNCTION DECLARATION
void  getfloat(float *pt);


int main(void)
{
float p;
getfloat(&p);//passing address of float 
printf("\nRES :%f",p);
return 0;
}

//FUNCTION DEFINITION
void  getfloat(float *pt)
{
   int ch,sign=1;
   int flag=0,pow=0;
   ch=getchar(); //getting first character
  // printf("\nch:%d",ch);
   while(ch!=EOF)
  {
   if(!isdigit(ch)&&(ch!='+')&&(ch!='-')) //not a number
   {
   printf("\nch:%d",ch);
   printf("invalid");
   return ;
  }
  else
  {
    if(ch=='+'||ch=='-')  //chech the sign
    {
     sign=(ch=='+')?1:-1;
     ch=getchar();
    }
    for(*pt=0;isdigit(ch)||ch=='.';) //check if it is a number
    {
///printf("\nt:%f",t);
     if(flag==1) // if flag =1 , increment the pow to calculate the fractonal part
     {
      pow++;
     }
      if(isdigit(ch))  //if it is a number 
     {
      *pt=(*pt)*10.0+(ch-'0');
       ch=getchar();   
     }
    else if (ch=='.') //if it is a decimal part we enable the flag 
    {
      flag=1;
      ch=getchar();
    }
  // printf("t=%f",t*sign);
   }
  }
 if(ch=='\n') // if it is a enter character 
 {
 *pt=(*pt)*sign;
//printf("pt:%f",*pt);
//printf("pow:%d",pow);
 for(;pow!=0;pow--) // to calculate fraction part 
 {
 (*pt)=(*pt)/10;// point 
 }
 return ;
 }
 
}
if(ch==EOF)
{
printf("EOF");
return ;
}
}

