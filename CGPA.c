#include<stdio.h>
#include<math.h>
#include<stdlib.h>


void Batch_2016();
void Batch_2017();
void Batch_2018();
void Batch_2019();

void main(){

	
printf ("        \t\t\t\t\t\t            CGPA CALCULATOR FOR ONLY CSE/IT/CCE STUDENTS - MANIPAL UNIVERSITY JAIPUR  \n\n\n" );

printf ("\t\t\t\t                         Choose Your Batch   :	1.2016-2020       2. 2017-2021       3.2018-2022          4.2019-2023       	 \n\n");


int x;

scanf("%d",&x);
	
        switch (x) 
        
        {

        case 1 : printf("\t\t\t\t\t\t\t                                 2016-2020 Batch Selected \n\n " );
        break ;
        case 2 : printf("\t\t\t\t\t\t\t                                 2017-2021 Batch  Selected \n\n" );
        break ;
        case 3:  printf("\t\t\t\t\t\t\t                                 2018-2022 Batch Selected  \n\n" );
        break ;
        case 4:  printf("\t\t\t\t\t\t\t                                 2019-2023 Batch Selected \n\n" );
        break ;
        default: printf("\t\t\t\t\t\t\t                         Please Enter Number Between  1-4  \n\n");
	break ;
} 

if(x==1){
        Batch_2016();     
}

else if (x==2){
        Batch_2017();
}

else if(x==3){
       Batch_2018();
}

else if(x==4){
        Batch_2019();
}

}

void Batch_2016(){



		  printf("\t\t\t\t\t\t\t                   Till Which Semester Do You Want To Find Your CGPA  \n") ;


int y;

scanf("%d",&y);

if (y>8){
 printf(" \n Please Enter A Number Btw 2-8 \n\n");
 exit(0);
}

printf("\t\t\t\t                                   Select Cycle For First Semester : 1. Physics       2. Chemistry   \n\n") ;

int z ;

scanf("%d",&z);

switch (z)
{

case 1 : printf ("\t\t\t\t\t\t\t                                Physics Cycle Selected \n");
break ;
case 2 : printf ("\t\t\t\t\t\t\t                               Chemistry Cycle Selected \n");
break ;
default : printf(" \t\t\t\t\t\t\t                               Please Enter Number Between 1-2  \n \n");
break;
}

if(z==1){

long double c[y];
for(int i=1;i<=y;i++){
printf("Enter GPA For Semester (%d):  \n\n",i);

scanf("%Lf",&c[i]);

}

if (y==2){
        long double cgpa =( (250*c[1]) + (240*c[2]) );
        long double fin_cgpa = (cgpa/490);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}
else if (y==3){
        long double cgpa =( (250*c[1]) + (240*c[2]) + (230*c[3]) );
        long double fin_cgpa = (cgpa/720);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);

}
else if (y==4){
long double cgpa =( (250*c[1]) + (240*c[2]) + (230*c[3]) + (230*c[4])  );

long double fin_cgpa = (cgpa/950);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}


else if (y==5){
     long double cgpa =( (250*c[1]) + (240*c[2]) + (230*c[3]) + (230*c[4]) +240*c[5]  );
long double fin_cgpa = (cgpa/1190);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else if (y==6){
long double cgpa =( (250*c[1]) + (240*c[2]) + (230*c[3]) + (230*c[4]) + (240*c[5]) + (220*c[6]) );
long double fin_cgpa = (cgpa/1410);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else if (y==7)
{
long double cgpa =( (250*c[1]) + (240*c[2]) + (230*c[3]) + (230*c[4]) + (240*c[5]) + (220*c[6]) + (220*c[7]) );
long double fin_cgpa = (cgpa/1630);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else if (y==8){
long double cgpa =( (250*c[1]) + (240*c[2]) + (230*c[3]) + (230*c[4]) + (240*c[5]) + (220*c[6]) + (220*c[7]) + (120*c[8]) );
long double fin_cgpa = (cgpa/1750);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else {
        printf("There was an error. Please Try Again ");
}

}

else if(z==2){


long double c[y];
for(int i=1;i<=y;i++){
printf("Enter GPA For Semester (%d):  \n\n",i);

scanf("%Lf",&c[i]);

}

if (y==2){
        long double cgpa =( (240*c[1]) + (250*c[2]) );
        long double fin_cgpa = (cgpa/490);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}
else if (y==3){
        long double cgpa =( (240*c[1]) + (250*c[2]) + (230*c[3]) );
        long double fin_cgpa = (cgpa/720);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);

}
else if (y==4){
long double cgpa =( (240*c[1]) + (250*c[2]) + (230*c[3]) + (230*c[4])  );

long double fin_cgpa = (cgpa/950);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}


else if (y==5){
     long double cgpa =( (240*c[1]) + (250*c[2]) + (230*c[3]) + (230*c[4]) +240*c[5]  );
long double fin_cgpa = (cgpa/1190);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else if (y==6){
long double cgpa =( (240*c[1]) + (250*c[2]) + (230*c[3]) + (230*c[4]) + (240*c[5]) + (220*c[6]) );
long double fin_cgpa = (cgpa/1410);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else if (y==7)
{
long double cgpa =( (240*c[1]) + (250*c[2]) + (230*c[3]) + (230*c[4]) + (240*c[5]) + (220*c[6]) + (220*c[7]) );
long double fin_cgpa = (cgpa/1630);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else if (y==8){
long double cgpa =( (240*c[1]) + (250*c[2]) + (230*c[3]) + (230*c[4]) + (240*c[5]) + (220*c[6]) + (220*c[7]) + (120*c[8]) );
long double fin_cgpa = (cgpa/1750);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else {
        printf("There was an error. Please Try Again \n ");
}

}




}

void Batch_2017(){



		  printf("\t\t\t\t\t\t\t                   Till Which Semester Do You Want To Find Your CGPA  \n") ;

int y;

scanf("%d",&y);

if (y>8){
 printf(" \n Please Enter A Number Btw 2-8 \n\n");
 exit(0);
}

printf("\t\t\t\t                                   Select Cycle For First Semester : 1. Physics       2. Chemistry   \n\n") ;

int z ;

scanf("%d",&z);

switch (z)
{

case 1 : printf ("\t\t\t\t\t\t\t                                Physics Cycle Selected \n");
break ;
case 2 : printf ("\t\t\t\t\t\t\t                               Chemistry Cycle Selected \n");
break ;
default : printf(" \t\t\t\t\t\t\t                               Please Enter Number Between 1-2  \n \n");
break;
}
if(z==1){

long double c[y];
for(int i=1;i<=y;i++){
printf("Enter GPA For Semester (%d):  \n\n",i);

scanf("%Lf",&c[i]);

}

if (y==2){
        long double cgpa =( (250*c[1]) + (240*c[2]) );
        long double fin_cgpa = (cgpa/490);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}
else if (y==3){
        long double cgpa =( (250*c[1]) + (240*c[2]) + (230*c[3]) );
        long double fin_cgpa = (cgpa/720);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);

}
else if (y==4){
long double cgpa =( (250*c[1]) + (240*c[2]) + (230*c[3]) + (230*c[4])  );

long double fin_cgpa = (cgpa/950);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}


else if (y==5){
     long double cgpa =( (250*c[1]) + (240*c[2]) + (230*c[3]) + (230*c[4]) +240*c[5]  );
long double fin_cgpa = (cgpa/1190);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else if (y==6){
long double cgpa =( (250*c[1]) + (240*c[2]) + (230*c[3]) + (230*c[4]) + (240*c[5]) + (220*c[6]) );
long double fin_cgpa = (cgpa/1410);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else if (y==7)
{
long double cgpa =( (250*c[1]) + (240*c[2]) + (230*c[3]) + (230*c[4]) + (240*c[5]) + (220*c[6]) + (220*c[7]) );
long double fin_cgpa = (cgpa/1630);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else if (y==8){
long double cgpa =( (250*c[1]) + (240*c[2]) + (230*c[3]) + (230*c[4]) + (240*c[5]) + (220*c[6]) + (220*c[7]) + (120*c[8]) );
long double fin_cgpa = (cgpa/1750);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else {
        printf("There was an error. Please Try Again ");
}

}

else if(z==2){


long double c[y];
for(int i=1;i<=y;i++){
printf("Enter GPA For Semester (%d):  \n\n",i);

scanf("%Lf",&c[i]);

}

if (y==2){
        long double cgpa =( (240*c[1]) + (250*c[2]) );
        long double fin_cgpa = (cgpa/490);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}
else if (y==3){
        long double cgpa =( (240*c[1]) + (250*c[2]) + (230*c[3]) );
        long double fin_cgpa = (cgpa/720);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);

}
else if (y==4){
long double cgpa =( (240*c[1]) + (250*c[2]) + (230*c[3]) + (230*c[4])  );

long double fin_cgpa = (cgpa/950);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}


else if (y==5){
     long double cgpa =( (240*c[1]) + (250*c[2]) + (230*c[3]) + (230*c[4]) +240*c[5]  );
long double fin_cgpa = (cgpa/1190);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else if (y==6){
long double cgpa =( (240*c[1]) + (250*c[2]) + (230*c[3]) + (230*c[4]) + (240*c[5]) + (220*c[6]) );
long double fin_cgpa = (cgpa/1410);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else if (y==7)
{
long double cgpa =( (240*c[1]) + (250*c[2]) + (230*c[3]) + (230*c[4]) + (240*c[5]) + (220*c[6]) + (220*c[7]) );
long double fin_cgpa = (cgpa/1630);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else if (y==8){
long double cgpa =( (240*c[1]) + (250*c[2]) + (230*c[3]) + (230*c[4]) + (240*c[5]) + (220*c[6]) + (220*c[7]) + (120*c[8]) );
long double fin_cgpa = (cgpa/1750);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else {
        printf("There was an error. Please Try Again \n ");
}

}

}








void Batch_2018(){



		   printf("\t\t\t\t\t\t\t                   Till Which Semester Do You Want To Find Your CGPA  \n") ;

int y;

scanf("%d",&y);

if (y>8){
 printf(" \n Please Enter A Number Btw 2-8 \n\n");
 exit(0);
}

printf("\t\t\t\t                                   Select Cycle For First Semester : 1. Physics       2. Chemistry   \n\n") ;

int z ;

scanf("%d",&z);

switch (z)
{

case 1 : printf ("\t\t\t\t\t\t\t                                Physics Cycle Selected \n");
break ;
case 2 : printf ("\t\t\t\t\t\t\t                               Chemistry Cycle Selected \n");
break ;
default : printf(" \t\t\t\t\t\t\t                               Please Enter Number Between 1-2  \n\n");
break;
}

if(z==1){

long double c[y];
for(int i=1;i<=y;i++){
printf("Enter GPA For Semester (%d):  \n\n",i);

scanf("%Lf",&c[i]);

}

if (y==2){
        long double cgpa =( (250*c[1]) + (240*c[2]) );
        long double fin_cgpa = (cgpa/490);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}
else if (y==3){
        long double cgpa =( (250*c[1]) + (240*c[2]) + (230*c[3]) );
        long double fin_cgpa = (cgpa/720);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);

}
else if (y==4){
long double cgpa =( (250*c[1]) + (240*c[2]) + (230*c[3]) + (230*c[4])  );

long double fin_cgpa = (cgpa/950);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}


else if (y==5){
     long double cgpa =( (250*c[1]) + (240*c[2]) + (230*c[3]) + (230*c[4]) +240*c[5]  );
long double fin_cgpa = (cgpa/1190);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else if (y==6){
long double cgpa =( (250*c[1]) + (240*c[2]) + (230*c[3]) + (230*c[4]) + (240*c[5]) + (220*c[6]) );
long double fin_cgpa = (cgpa/1410);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else if (y==7)
{
long double cgpa =( (250*c[1]) + (240*c[2]) + (230*c[3]) + (230*c[4]) + (240*c[5]) + (220*c[6]) + (220*c[7]) );
long double fin_cgpa = (cgpa/1630);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else if (y==8){
long double cgpa =( (250*c[1]) + (240*c[2]) + (230*c[3]) + (230*c[4]) + (240*c[5]) + (220*c[6]) + (220*c[7]) + (120*c[8]) );
long double fin_cgpa = (cgpa/1750);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else {
        printf("There was an error. Please Try Again ");
}

}

else if(z==2){


long double c[y];
for(int i=1;i<=y;i++){
printf("Enter GPA For Semester (%d):  \n\n",i);

scanf("%Lf",&c[i]);

}

if (y==2){
        long double cgpa =( (240*c[1]) + (250*c[2]) );
        long double fin_cgpa = (cgpa/490);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}
else if (y==3){
        long double cgpa =( (240*c[1]) + (250*c[2]) + (230*c[3]) );
        long double fin_cgpa = (cgpa/720);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);

}
else if (y==4){
long double cgpa =( (240*c[1]) + (250*c[2]) + (230*c[3]) + (230*c[4])  );

long double fin_cgpa = (cgpa/950);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}


else if (y==5){
     long double cgpa =( (240*c[1]) + (250*c[2]) + (230*c[3]) + (230*c[4]) +240*c[5]  );
long double fin_cgpa = (cgpa/1190);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else if (y==6){
long double cgpa =( (240*c[1]) + (250*c[2]) + (230*c[3]) + (230*c[4]) + (240*c[5]) + (220*c[6]) );
long double fin_cgpa = (cgpa/1410);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else if (y==7)
{
long double cgpa =( (240*c[1]) + (250*c[2]) + (230*c[3]) + (230*c[4]) + (240*c[5]) + (220*c[6]) + (220*c[7]) );
long double fin_cgpa = (cgpa/1630);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else if (y==8){
long double cgpa =( (240*c[1]) + (250*c[2]) + (230*c[3]) + (230*c[4]) + (240*c[5]) + (220*c[6]) + (220*c[7]) + (120*c[8]) );
long double fin_cgpa = (cgpa/1750);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else {
        printf("There was an error. Please Try Again \n ");
}
}
}




void Batch_2019(){


printf ("\t\t\t\t\t     CGPA till 2nd Sem Okay . Credits for CSE/IT/CCE Not Confirmed So currently using Credits for IT (2019-2023 from MUJ SITE)\n\n") ;

    
    
		 printf("\t\t\t\t\t\t\t                   Till Which Semester Do You Want To Find Your CGPA  \n\n") ;



int y;

scanf("%d",&y);

if (y>8){
 printf(" \n Please Enter A Number Btw 2-8 \n\n");
 exit(0);
}

printf("\t\t\t\t                                   Select Cycle For First Semester : 1. Physics       2. Chemistry   \n\n") ;

int z ;

scanf("%d",&z);

switch (z)
{

case 1 : printf ("\t\t\t\t\t\t\t                                Physics Cycle Selected \n");
break ;
case 2 : printf ("\t\t\t\t\t\t\t                               Chemistry Cycle Selected \n");
break ;
default : printf(" \t\t\t\t\t\t\t                               Please Enter Number Between 1-2  \n \n");
break;
}
if(z==1){

long double c[y];
for(int i=1;i<=y;i++){
printf("Enter GPA For Semester (%d):  \n\n",i);

scanf("%Lf",&c[i]);

}

if (y==2){
        long double cgpa =( (220*c[1]) + (220*c[2]) );
        long double fin_cgpa = (cgpa/440);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}
else if (y==3){
        long double cgpa =( (220*c[1]) + (220*c[2]) + (230*c[3]) );
        long double fin_cgpa = (cgpa/670);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);

}
else if (y==4){
long double cgpa =( (220*c[1]) + (220*c[2]) + (230*c[3]) + (240*c[4])  );

long double fin_cgpa = (cgpa/910);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}


else if (y==5){
     long double cgpa =( (220*c[1]) + (220*c[2]) + (230*c[3]) + (240*c[4]) +250*c[5]  );
long double fin_cgpa = (cgpa/1160);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else if (y==6){
long double cgpa =( (220*c[1]) + (220*c[2]) + (230*c[3]) + (240*c[4]) + (250*c[5]) + (250*c[6]) );
long double fin_cgpa = (cgpa/1410);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else if (y==7)
{
long double cgpa =( (220*c[1]) + (220*c[2]) + (230*c[3]) + (240*c[4]) + (250*c[5]) + (250*c[6]) + (160*c[7]) );
long double fin_cgpa = (cgpa/1570);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else if (y==8){
long double cgpa =( (220*c[1]) + (220*c[2]) + (230*c[3]) + (240*c[4]) + (250*c[5]) + (250*c[6]) + (160*c[7]) + (120*c[8]) );
long double fin_cgpa = (cgpa/1690);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else {
        printf("\t\t\tThere was an error. Please Try Again ");
}

}

else if(z==2){


long double c[y];
for(int i=1;i<=y;i++){
printf("Enter GPA For Semester (%d):  \n\n",i);

scanf("%Lf",&c[i]);

}

if (y==2){
        long double cgpa =( (220*c[1]) + (220*c[2]) );
        long double fin_cgpa = (cgpa/440);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}
else if (y==3){
        long double cgpa =( (220*c[1]) + (220*c[2]) + (230*c[3]) );
        long double fin_cgpa = (cgpa/670);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);

}
else if (y==4){
long double cgpa =( (220*c[1]) + (220*c[2]) + (230*c[3]) + (240*c[4])  );

long double fin_cgpa = (cgpa/910);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}


else if (y==5){
      long double cgpa =( (220*c[1]) + (220*c[2]) + (230*c[3]) + (240*c[4]) +250*c[5]  );
long double fin_cgpa = (cgpa/1160);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else if (y==6){
long double cgpa =( (220*c[1]) + (220*c[2]) + (230*c[3]) + (240*c[4]) + (250*c[5]) + (250*c[6]) );
long double fin_cgpa = (cgpa/1410);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else if (y==7)
{
long double cgpa =( (220*c[1]) + (220*c[2]) + (230*c[3]) + (240*c[4]) + (250*c[5]) + (250*c[6]) + (160*c[7]) );
long double fin_cgpa = (cgpa/1570);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else if (y==8){
long double cgpa =( (220*c[1]) + (220*c[2]) + (230*c[3]) + (240*c[4]) + (250*c[5]) + (250*c[6]) + (160*c[7]) + (120*c[8]) );
long double fin_cgpa = (cgpa/1690);
        printf("\t\t\t\t\t\t\t                                 Your CGPA IS  : %Lf      \n\n",fin_cgpa);
}

else {
        printf("There was an error. Please Try Again \n ");
}
}
}
