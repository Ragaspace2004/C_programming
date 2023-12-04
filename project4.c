#include <stdio.h>
int main() {
char pickup;
char drop;
int id,time,choice;
printf("**************CALL TAXI APPLICATION**************");
printf("\nEnter Customer ID:");
scanf("%d",&id);
printf("\nPickup Time:");
scanf("%d",&time);
printf("\nPickup Point:");
scanf("%s",&pickup);
printf("\nDrop Point:");
scanf("%s",&drop);
printf("\nKMS AND DESTINATIONS:\n15.A TO B (or)B TO A (or)B TO C (or)C TO (or) C TO D(or) D TO C (or)D TO E(or)E TO D(or) E TO F(or) F TO E");
printf("\n30.A TO C (or)C TO A (or)B TO D (or)D TO B(or)C TO E(or) E TO C(or)D TO F (or)F TO D");
printf("\n45.A TO D(or) D TO A (or)B TO E (or)E TO B (or)C TO F(or)F TO C");
printf("\n60.A TO E (or)E TO A (or) B TO F (or) F TO B");
printf("\n75.A TO F(or)F TO A");
printf("\nEnter your choice:");
scanf("%d",&choice);
switch(choice){
  case 15:
printf("Taxi is allotted for Customer %d from %c to %c at %d",id,pickup,drop,time);
printf("\nCustomer %d Total Fare: Rs. 200",id);
  break;
  case 30:
printf("Taxi is allotted for Customer %d from %c to %c at %d",id,pickup,drop,time);
printf("\nCustomer %d Total Fare: Rs. 350",id);
  break;
  case 45:
printf("Taxi is allotted for Customer %d from %c to %c at %d",id,pickup,drop,time);
printf("\nCustomer %d Total Fare: Rs. 500",id);
  break;
  case 60:
printf("Taxi is allotted for Customer %d from %c to %c at %d",id,pickup,drop,time);
printf("\nCustomer %d Total Fare: Rs. 650",id);
  break;
  case 75:
printf("Taxi is allotted for Customer %d from %c to %c at %d",id,pickup,drop,time);
printf("\nCustomer %d Total Fare: Rs. 800",id);
  break;
}
return 0;
}
