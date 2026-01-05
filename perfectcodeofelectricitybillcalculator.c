#include<stdio.h>
#include<math.h>
int main()
{   
    printf("  💡Monthaly electicity bill counter💡 \n");
    float a,b,c,d,e;
        printf("            for tube light \n");
             printf("Enter number of light:");
                 scanf("%f",&a);
                     printf("Enter energy consumption(in watt):");
                         scanf("%f",&b);
                             printf("Enter daily use(in hours):");
                                 scanf("%f",&c);
                                            printf("Enter total days in month:");
                                            scanf("%f",&d);
                                            printf("Enter energy charge in your area:");
                                            scanf("%f",&e);
                                            float x=a*b*c*d*e/1000;
                                            printf("Your electricity bill of light:%f",x);
             
          
    float f,g,h;
        printf("            for Fans \n");
            printf("Enter number of fans:");
                scanf("%f",&f);
                    printf("Enter energy consumption(in watt):");
                        scanf("%f",&g);
                            printf("Enter daily use(in hours):");
                                scanf("%f",&h);    
                                
                                            float y=f*g*h*d*f/1000;
                                            printf("Your electricity bill of fans: %f",y);
    float i,j,k;
        printf("            for T.V \n");
            printf("Enter number of T.V:");
                scanf("%f",&i);
                    printf("Enter energy consumption(in watt):");
                        scanf("%f",&j);
                            printf("Enter daily use(in hours):");
                                 scanf("%f",&k);
               
                                           float z=i*j*k*d*f/1000;
                                           printf("Your electricity bill T.V: %f \n",z);
         
    float o=x+y+z;
        printf("Total electricity bill:%f",o);
    return 0;
}