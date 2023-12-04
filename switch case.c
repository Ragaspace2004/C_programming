int main() {
  char ch;
  int num1,num2,num3;
  printf("Enter an arithmetic operator:");
  scanf("%c",&ch);
  printf("Enter number1:");
  scanf("%d",&num1);
  printf("Enter number2:");
  scanf("%d",&num2);
  switch (ch)
{
  case '+':
  num3=num1+num2;
  printf("addition:%d",num3);
 //break;
  case '-':
     num3=num1-num2;
  printf("subtraction:%d",num3);
// break;
  case '*':
   num3=num1*num2;
  printf("multiplication:%d",num3);
  //break;
   case '/':
   num3=num1/num2;
  printf("division:%d",num3);
  //break;
   case '%':
     num3=num1%num2;
  printf("modulus:%d",num3);
  //break;
  }
  return 0;
  }
