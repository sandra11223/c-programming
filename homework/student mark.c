#include <stdio.h>
int main()
{
    int physics,math,chemistry;
    int total,mathPhysicstotal;
    printf("enter the mark of physics");
    scanf("%d",&physics);
    printf("enter the mark of maths");
    scanf("%d",&math);
    printf("enter the mark of chemistry");
    scanf("%d",&chemistry);
    total=physics+math+chemistry;
    mathPhysicstotal=math+physics;
    if(math>=65&&physics>=55&&chemistry>=50&&(total>=190||mathPhysicstotal>=140))
    {
        printf("the candidate is eligible for admission");
    }
    else
    {
        printf("the candidate is not eligible for admission");
    }

    return 0;
}
