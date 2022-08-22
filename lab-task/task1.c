#include <stdio.h>
int main()
{
    int math, phy, chem, total, total_m_p;
    printf("Enter math's number: ");
    scanf("%d", &math);

    printf("Enter physics's number: ");
    scanf("%d", &phy);

    printf("Enter chemistry's number: ");
    scanf("%d", &chem);

    if (math >= 65 && phy >= 55 && chem >= 50)
    {
        total = math + phy + chem;
        total_m_p = math + phy;
        if (total >= 190 || total_m_p >= 140)
        {
            printf("You are eligible for scholarship");
        }
        else
        {
            printf("You are not eligible for scholarship");
        }
    }
     else
    {
        printf("You are not eligible for scholarship");
    }
   
    return 0;
}