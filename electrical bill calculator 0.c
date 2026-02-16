#include <stdio.h>

int main() {
   
    printf("  💡 Monthly Electricity Bill Calculator💡 \n \n");
    float a,b,c,d,e;
        printf("            For Tube Light \n");
             printf("Enter Number of Lights:");
                 scanf("%f",&a);
                     printf("Enter Energy Consumption (in watt):");
                         scanf("%f",&b);
                             printf("Enter Daily Usage (in hours):");
                                 scanf("%f",&c);
                                 
                                            printf("Enter total days in the month:");
                                            scanf("%f",&d);
                                            printf("Enter energy charge in your area (per unit):");
                                            scanf("%f",&e);
                                            float u=a*b*c*d*e/1000;
                                            printf("Your electricity bill for light:%.2f \n \n",u);
             
    float f,g,h;
        printf("            For Fans \n");
            printf("Enter Number of Fans:");
                scanf("%f",&f);
                    printf("Enter Energy Consumption (in watt):");
                        scanf("%f",&g);
                            printf("Enter Daily Usage (in hours):");
                                scanf("%f",&h);    
                                
                                            float v=f*g*h*d*e/1000;
                                            printf("Your electricity bill for fans:%.2f \n \n",v);
    float i,j,k;
        printf("            for T.V \n");
            printf("Enter Number of T.V:");
                scanf("%f",&i);
                    printf("Enter Energy Consumption (in watt):");
                        scanf("%f",&j);
                            printf("Enter Daily Usage (in hours):");
                                scanf("%f",&k);
               
                                           float w=i*j*k*d*e/1000;
                                           printf("Your electricity bill for T.V: %.2f \n \n",w);
    float l,m,n;
        printf("            For Refrigerator \n");
            printf("Enter Number of Refrigeratorr:");
                scanf("%f",&l);
                    printf("Enter Energy Consumption (in watt):");
                        scanf("%f",&m);
                            printf("Enter Daily Usage (in hours):");
                                 scanf("%f",&n);
               
                                           float x=l*m*n*d*e/1000;
                                           printf("Your electricity bill for Refrigerator: %.2f \n \n",x);                                       
    float o,p,q;
        printf("            For  Washing Machine \n");
            printf("Enter Number of Washing Machine:");
                scanf("%f",&o);
                    printf("Enter Energy Consumption (in watt):");
                        scanf("%f",&p);
                            printf("Enter Daily Usage (in hours):");
                                 scanf("%f",&q);
               
                                           float y=o*p*q*d*e/1000;
                                           printf("Your Electricity Bill for washing machine: %.2f \n \n",y);     
    float r,s,t;
        printf("            for Heater \n");
            printf("Enter number of heater:");
                scanf("%f",&r);
                    printf("Enter energy consumption(in watt):");
                        scanf("%f",&s);
                            printf("Enter daily usage (in hours):");
                                 scanf("%f",&t);
               
                                           float z=r*s*t*d*e/1000;
                                           printf("Your electricity bill for heater: %.2f \n \n \n",z);                                       
    float _=u+v+w+x+y+z;
        printf("     *** Total electricity bill:%.2f ***",_);
    return 0;
}