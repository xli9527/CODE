#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 0; i < 5; i++){
        int flag = 1;
        int a = rand()%11;


        if (a>=0 && a<=5){
            flag =1;
        }
        else{
            flag = 0;
        }
        switch (flag)
        {
        case 1:
            printf("hey ,it`s , %d\n",a);
            break;
        
        default:
            printf("oh ,it`s , %d\n",a);
            break;
        }

    }
}