#include <stdio.h>
void circle(){

    float radius,area;
    printf("enter radius for circle");
    scanf("%f",&radius);

    area=3.14*radius*radius;
    printf("area of circle is : %f",area);
}
void triangle(float base, float height)
{
    float area;
    area=0.5*base*height;
    printf("area of traingle is: %.2f\n",area);
}
int main(){
    int ch;
    float base,height;
    do
    {
        printf("\n1-area of circle\n2-area of triangle");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                    circle();
                    break;

            case 2:
                    printf("enter base and height: ");
                    scanf("%f %f", &base, &height);
                    triangle(base, height);
                    break;
        }
        printf("\ndo you want to continue press 1");
        scanf("%d", &ch);

    } 
    while (ch==1);
    printf("\n thank you");

    return 0;
    
    
}
