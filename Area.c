#include <stdio.h>
int choice;
float Parallelogram(),Trapezoid(),Rhombus(),Sphere(),Ellipse();
float p_hight,p_base,lb,sb,th,rh,rs,sr,mae,m_radius;
int main()
{
    printf("1.Parallelogram\n2.Trapezoid\n3.Rhombus\n4.Sphere\n5.Ellipse\n6.All\n");
    printf("Select from (1-6) to find area: ");
    scanf("%d",&choice);
    if (choice<2){
        Parallelogram();
    }
    else if (choice<3){
        Trapezoid();
    }
    else if(choice<4){
        Rhombus();
    }
    else if(choice<5){
        Sphere();
    }
    else if(choice<6){
        Ellipse();
    }
    else if(choice<7){
        Parallelogram();
        printf("\n");
        Trapezoid();
        printf("\n");
        Rhombus();
        printf("\n");
        Sphere();
        printf("\n");
        Ellipse();
        printf("\n");
    }
    else{
        printf("invalid choice");
    }

    return 0;
}
float Parallelogram(){
    printf("Enter hight of Parallelogram: ");
    scanf("%f",&p_hight);
    printf("Enter base of Parallelogram: ");
    scanf("%f",&p_base);;
    printf("Area of Parallelogram is : %f",p_hight*p_base);
}
float Trapezoid(){
    printf("Enter long base of Trapezoid: ");
    scanf("%f",&lb);
    printf("Enter short base of Trapezoid: ");
    scanf("%f",&sb);
    printf("Enter hight of Trapezoid: ");
    scanf("%f",&th);
    printf("Area of Trapezoid : %f",(lb+sb)*th/2);
}
float Rhombus(){
    printf("Enter hight of Rhombus: ");
    scanf("%f",&rh);
    printf("Enter side of Rhombus: ");
    scanf("%f",&rs);
    printf("Area of Rhombus : %f",(rh*rs)/2);
}
float Sphere(){
    printf("Enter radius of Sphere: ");
    scanf("%f",&sr);
    printf("Area of Sphere: %f",4*3.14*(sr*sr));
}
float Ellipse(){
    printf("Enter major radius of Ellipse: ");
    scanf("%f",&mae);
    printf("Enter minor radis of Ellipse: ");
    scanf("%f",&m_radius);
    printf("Area of Ellipse : %f",3.14*mae*m_radius);
}


