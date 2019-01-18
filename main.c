#include <stdio.h>


struct student
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[100];
};

int main(){

    printf("xitong\n");
    struct student arr[1000];
    int index = 0;
    

    while(1){
        printf("1--tianjia\n");
        printf("2--shanchu\n");
        printf("3--xianshi\n");
        printf("4--yewu1\n");
        printf("5--yewu2\n");
        printf("6--yewu3\n");
        printf("7--yewu4\n");
        printf("8--tuichu\n");

        printf("xuanze:\n");
        int code;
        scanf("%d",&code);

        if(code == 1){
            printf("xingming\n");
            scanf("%s",arr[index].name);

            printf("yuwenchengji\n");
            scanf("%d",&(arr[index].yuwen));

            printf("shuxuechengji\n");
            scanf("%d",&(arr[index].shuxue));

            printf("yingyuchengji\n");
            scanf("%d",&(arr[index].yingyu));

            index++;
            printf("wancheng,huichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);

        }
        if(code == 2){
            if(index > 0)
            {

                index--;
                printf("shanchuchenggong,huichejixu\n");
            }
            else{
                printf("shibai,huichejixu\n");
            }
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if(code == 3){
            
        }
        if(code == 4){
            
        }
        if(code == 5){
            
        }
        if(code == 6){
            
        }
        if(code == 7){
            
        }
        if(code == 8){
            printf("tuichu\n");
            break;
        }
    }

    return 0;

}