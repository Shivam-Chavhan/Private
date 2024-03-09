// Code Practise 1st //

// #include<stdio.h>
// int main(){

//     int age; 
//     printf("enter you age");
// scanf( "%d",&age);

//     //if (age < 1
//     if(age>18){  
//         printf("Age is greater than 18");  
// }
    
//     else if (age == 18) {  
//         printf("You are a teenager.");    
//     }
      
//     else {    
//         printf("Age is less than  18");     

// return 0;

// }
// }



// Code Practise 2nd //

// #include <stdio.h>

// int main() {
//   int mm = 5;  // integer
  
//   printf("%d\n", mm);
//   printf("%i\n", mm);


//   float nm= 5.99;  // Floating point number
  
//   printf("%f\n", nm);
  
//     double mm1 = 19.99;  // Double (floating point number)
  
//   printf("%lf", mm1);
//   return 0;
// }

#include <stdio.h>

int main()
{

int age;
printf("Enter The Age");
scanf("%d", &age);

if(age<10){
printf("You are eligible");
}


else if (age == 11){
printf("You are lovely");
}


else if (age<18){
printf("You are gorgeous");
}


else if(age = 18){
printf("You are an adult");
}


else{
printf("You are an adult");
return 0;

}


}