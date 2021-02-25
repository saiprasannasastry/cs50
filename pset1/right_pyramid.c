#include <stdio.h>
#include <cs50.h>


void repeat(string s, int i);
int main(void){

    int s = 0;
    while (true){
    s = get_int("Height: ");
    if (s >=1 && s<=23){
        break;
        }
    }

    for(int i = 1;i<=s;i++)
    {
       repeat(" ",s-i);
       repeat("#",i);
       printf("\n");
    }
}

void repeat(string s, int i)
{
    for (int j=0;j<i;j++ ){
        printf("%s",s);
    }
}