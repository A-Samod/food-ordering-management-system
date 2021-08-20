#include <stdio.h>	  /* -- HEADER FILES -- */
#include <ctype.h> // Numerious Standard Library Functions to Handle Characters (Especially Test Characters )
#include<conio.h>  // Change Color of text and Background


void bfast();		/* -- FUNCTIONS -- */
void lunch();
void dinner();
void m_m();        //MAIN MENU
void drinks();
void deserts();
void exit();

int num;		  // VARIABLE
float price;
float total;
char choice;
int again;

void main()
{
	m_m();
}


void m_m()     // Main Menu :
{
	char choice = ' ' ; // Local Variable :

  printf("            @@@@@@@:> | WELCOME TO FOOD PARADISE RESTAURANT | <:@@@@@@@    \n ");
  printf("*******************************************************************************         \n\n\n");

  printf("   @ Please Select the Food that You would like to Purchase :- \n");
  printf("  ------------------------------------------------------------- \n\n");
  printf("\t\t      [A]>--Breakfast--<\n");
  printf("\t\t      [B]>--Lunch------<\n");
  printf("\t\t      [C]>--Dinner-----<\n\n");
  printf("\t\t      [D]>--DrinkS-----<\n");
  printf("\t\t      [E]>--DesertS----<\n\n");
  printf("\t\t      [F]>--Exit-------<\n\n");
  system("color 1");//(System colour Code)to change colour from window to window.

  printf("Enter Your Choice Here : ");
  scanf("%c", &choice);
  system("cls");//For  New Window.

		{
		if (toupper(choice) == 'A' )//toupper is used for sentence case
		  bfast();
		else if (toupper(choice) == 'B')
				  lunch();
			else if (toupper(choice) == 'C')
					 dinner();
		 		else if (toupper(choice) == 'D')
					 drinks();
				else if( toupper(choice) == 'E')
					deserts();

				else
					  if (toupper(choice) == 'F')
						  exit();
					  else
						  if (toupper(choice) != 'A' , 'B' , 'C' , 'D','E','F')
						  {
							  m_m();
						  }
	}

getch();
}
void bfast() //Breakfast Menu Screen
{
  int choice = 0; // Variables
  int quantity = 0;
  int again = 0;



  printf("            @@@@@@@:> | WELCOME TO FOOD PARADISE RESTAURANT | <:@@@@@@@    \n ");
  printf("*******************************************************************************         \n\n\n");
  printf("                       --- Breakfast Menu ---\n\n\n");
  printf("   @ Please Select the Food that You would like to Purchase :- \n");
  printf("  ------------------------------------------------------------- \n\n");
  printf("\t\t   [1] String Hoppers :- Rs.   2.50\n");
  printf("\t\t   [2] Rice & curry   :- Rs. 250.00\n");
  printf("\t\t   [3] Noodles        :- Rs. 160.00\n\n");
  printf("\t\t   [4] Main Menu \n\n");
  system("color 5");


  printf("Enter Your Choice Here : ");
  scanf("%d", &choice);
  {
  if (choice == 1)
	  {
	  printf("Enter Quantity : ");
	  scanf("%d", &quantity);
	  total =  2.50 * quantity ;
      printf("\nYour Total amount is Rs %.2f \n\n$$$$$$$$$$$$$$$$$$$$$ Please Pay at the Counter. $$$$$$$$$$$$$$$$$$$$$\n\n ", total);
      printf("\nWould You like to buy anything else ?\nIF Yes, Press Nu.[1] ; IF No, Press Nu.[2] : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");

			 if (again == 1 )
				bfast();
			 else
				 if (again == 2 )
					m_m();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry ! Invalid Decision Entered.\n\n\n\n");
				 exit();
				}
      }
	else
		  if ( choice == 2)
		  {
		  printf("Enter Quantity : ");
		  scanf("%d", &quantity);
		  total = 250.00 * quantity ;

		  printf("\nYour Total amount is Rs %.2f \n\n$$$$$$$$$$$$$$$$$$$$$ Please Pay at the Counter. $$$$$$$$$$$$$$$$$$$$$\n\n ", total);
          printf("\nWould You like to buy anything else ?\nIF Yes, Press Nu.[1] ; IF No, Press Nu.[2] : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");

			 if (again == 1 )
				bfast();
			 else if (again == 2 )
				m_m();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry ! Invalid Decision Entered.\n\n\n\n");
				 exit();
				}
		  }
		  else
			  if ( choice == 3 )
			  {
			  printf("Enter Quantity : ");
			  scanf("%d", &quantity);
			  total = 160.00  * quantity ;

			  printf("\nYour Total amount is Rs %.2f \n\n$$$$$$$$$$$$$$$$$$$$$ Please Pay at the Counter. $$$$$$$$$$$$$$$$$$$$$\n\n ", total);
              printf("\nWould You like to buy anything else ?\nIF Yes, Press Nu.[1] ; IF No, Press Nu.[2] : "); // Allows user to choose whether to check-out or buy anything else.
              scanf("%d", &again);
		      system("cls");

			  if (again == 1 )
				{
				bfast();
				 }
			  else
				  if (again == 2 )
				{
				m_m();
				}
				else
				    if (again != 1 , 2)
					{
					 printf("\n\n\t\tSorry ! Invalid Decision Entered.\n\n\n\n");
					 exit();
					}
			  }
			  else
			      if ( choice == 4 )
			  {
			    m_m();
			  }


			  else
					if (choice != 1 , 2 , 3 , 4 )
						{

						printf("\n\n\t\t   Invalid Choice Entered\n\n");
	                    fflush(stdin);
						system("cls");
						bfast();

    	                }



    }
	getch();

  }

void lunch() // Lunch Screen Menu
{
  int choice=0;  // Variables
  int quantity=0;
  int again=0;


  fflush(stdin);
 printf("            @@@@@@@:> | WELCOME TO FOOD PARADISE RESTAURANT | <:@@@@@@@    \n ");
  printf("*******************************************************************************         \n\n\n");
  printf("                          --- Lunch Menu --- \n\n\n");
  printf("   @ Please Select the Food that You would like to Purchase :- \n");
  printf("  ------------------------------------------------------------- \n\n");
  printf("\t\t   [1] FriedRice    :- Rs. 300.00\n");
  printf("\t\t   [2] Pasta        :- Rs. 180.00\n");
  printf("\t\t   [3] Rice & curry :- Rs. 250.00\n\n");
  printf("\t\t   [4] Main Menu \n\n");
  system("color 2");

  printf("Enter Your Choice Here : ");
  scanf("%d", &choice);
  {
  if (choice == 1)
	  {
	  printf("Enter Quantity : ");
	  scanf("%d", &quantity);
	  total = 300.00 * quantity ;
	   printf("\nYour Total amount is Rs %.2f \n\n$$$$$$$$$$$$$$$$$$$$$ Please Pay at the Counter. $$$$$$$$$$$$$$$$$$$$$\n\n ", total);
       printf("\nWould You like to buy anything else ?\nIF Yes, Press Nu.[1] ; IF No, Press Nu.[2] : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");

			 if (again == 1 )
			lunch();
			 else
				 if (again == 2 )
					m_m();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry ! Invalid Decision Entered.\n\n\n\n");
				 exit();
				}
      }
	else
		  if ( choice == 2)
		  {
		  printf("Enter Quantity : ");
		  scanf("%d", &quantity);
		  total = 180.00 * quantity ;
		  printf("\nYour Total amount is Rs %.2f \n\n$$$$$$$$$$$$$$$$$$$$$ Please Pay at the Counter. $$$$$$$$$$$$$$$$$$$$$\n\n ", total);
          printf("\nWould You like to buy anything else ?\nIF Yes, Press Nu.[1] ; IF No, Press Nu.[2] : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");

			 if (again == 1 )
				lunch();
			 else if (again == 2 )
				m_m();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry ! Invalid Decision Entered.\n\n\n\n");
				 exit();
				}
		  }
		  else
			  if ( choice == 3 )
			  {
			  printf("Enter Quantity : ");
			  scanf("%d", &quantity);
			  total = 250.00 * quantity ;
			  printf("\nYour Total amount is Rs %.2f \n\n$$$$$$$$$$$$$$$$$$$$$ Please Pay at the Counter. $$$$$$$$$$$$$$$$$$$$$\n\n ", total);
      printf("\nWould You like to buy anything else ?\nIF Yes, Press Nu.[1] ; IF No, Press Nu.[2] : "); // Allows user to choose whether to check-out or buy anything else..
			   scanf("%d", &again);
			   system("cls");

			  if (again == 1 )
				{
				lunch();
				 }
			  else
				  if (again == 2 )
				{
				m_m();
				}
				else
				    if (again != 1 , 2)
					{
					 printf("\n\n\t\tSorry ! Invalid Decision Entered.\n\n\n\n");
					 exit();
					}
			  }
			  else
			      if ( choice == 4 )
			  {
			    m_m();
			  }
			  else
					if (choice != 1 , 2 , 3 , 4 )
						{

						printf("\n\n\t\t   Invalid Choice Entered\n\n");
	                    fflush(stdin);
						system("cls");
						lunch();
						}
    }
    getch();
}
  void dinner() // Dinner Screen Menu
{
  int choice=0;  //variables
  int quantity=0;
  int again=0;



  printf("            @@@@@@@:> | WELCOME TO FOOD PARADISE RESTAURANT | <:@@@@@@@    \n ");
  printf("*******************************************************************************         \n\n\n");
  printf("                        ---  Dinner Menu --- \n\n\n");
  printf("   @ Please Select the Food that You would like to Purchase :- \n");
  printf("  ------------------------------------------------------------- \n\n");
  printf("\t\t   [1] Kottu   :- Rs. 300.00\n");
  printf("\t\t   [2] Hoppers :- Rs.  15.00\n");
  printf("\t\t   [3] Roti     :- Rs.  20.00\n\n");
  printf("\t\t   [4] Main Menu \n\n");
  system("color 3");


  printf("Enter Your Choice Here : ");
  scanf("%d", &choice);
  {
  if (choice == 1)
	  {
	  printf("Enter Quantity : ");
	  scanf("%d", &quantity);
	  total = 300.00 * quantity ;
	  printf("\nYour Total amount is Rs %.2f \n\n$$$$$$$$$$$$$$$$$$$$$ Please Pay at the Counter. $$$$$$$$$$$$$$$$$$$$$\n\n ", total);
      printf("\nWould You like to buy anything else ?\nIF Yes, Press Nu.[1] ; IF No, Press Nu.[2] : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");

			 if (again == 1 )
				dinner();
			 else
				 if (again == 2 )
					m_m();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry ! Invalid Decision Entered.\n\n\n\n");
				 exit();
				}
      }
	else
		  if ( choice == 2)
		  {
		  printf("Enter Quantity : ");
		  scanf("%d", &quantity);
		  total = 15.00 * quantity ;
		  printf("Your total amount is Rs%.2f , Please pay at the counter\n\n\n ", total);
		    printf("\nWould You like to buy anything else ?\nIF Yes, Press Nu.[1] ; IF No, Press Nu.[2] : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");

			 if (again == 1 )
				dinner();
			 else if (again == 2 )
				m_m();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry ! Invalid Decision Entered.\n\n\n\n");
				 exit();
				}
		  }
		  else
			  if ( choice == 3 )
			  {
			  printf("Enter Quantity : ");
			  scanf("%d", &quantity);
			  total = 20.00 * quantity ;
			  printf("\nYour Total amount is Rs %.2f \n\n$$$$$$$$$$$$$$$$$$$$$ Please Pay at the Counter. $$$$$$$$$$$$$$$$$$$$$\n\n ", total);
              printf("\nWould You like to buy anything else ?\nIF Yes, Press Nu.[1] ; IF No, Press Nu.[2] : "); // Allows user to choose whether to check-out or buy anything else.
			   scanf("%d", &again);
			   system("cls");

			  if (again == 1 )
				{
			dinner();
				 }
			  else
				  if (again == 2 )
				{
				m_m();
				}
				else
				    if (again != 1 , 2)
					{
					 printf("\n\n\t\tSorry ! Invalid Decision Entered.\n\n\n\n");
					 exit();
					}
			  }
			  else
			      if ( choice == 4 )
			  {
			    m_m();
			  }
			  else
					if (choice != 1 , 2 , 3 , 4 )
						{

						printf("\n\n\t\t   Invalid Choice Entered\n\n");
	                    fflush(stdin);
						system("cls");
						dinner();
						}
    }
    getch();
}

  void drinks()//Drink Menu Screen
{
  int choice = 0; //local variables
  int quantity = 0;
  int again = 0;


  printf("            @@@@@@@:> | WELCOME TO FOOD PARADISE RESTAURANT | <:@@@@@@@    \n ");
  printf("*******************************************************************************         \n\n\n");
  printf("                          --- Drinks Menu --- \n\n");
  printf("   @ Please Select the Food that You would like to Purchase :- \n");
  printf("  ------------------------------------------------------------- \n\n");
  printf("\t\t   [1] Cofee    :- Rs. 40.00\n");
  printf("\t\t   [2] Tea      :- Rs. 35.00\n");
  printf("\t\t   [3] Nescafee :- Rs. 50.00\n\n");
  printf("\t\t   [4] Main Menu \n\n");
  system("color 6");



  printf("Enter Your Choice Here : ");
  scanf("%d", &choice);
  {
  if (choice == 1)
	  {
	  printf("Enter Quantity : ");
	  scanf("%d", &quantity);
	  total = 40.00 * quantity ;
	   printf("\nYour Total amount is Rs %.2f \n\n$$$$$$$$$$$$$$$$$$$$$ Please Pay at the Counter. $$$$$$$$$$$$$$$$$$$$$\n\n ", total);
       printf("\nWould You like to buy anything else ?\nIF Yes, Press Nu.[1] ; IF No, Press Nu.[2] : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");//uses to clare the screen

			 if (again == 1 )
				drinks();
			 else
				 if (again == 2 )
					m_m();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry ! Invalid Decision Entered.\n\n\n\n");
				 exit();
				}
      }
	else
		  if ( choice == 2)
		  {
		  printf("Enter Quantity : ");
		  scanf("%d", &quantity);
		  total = 35.00 * quantity ;
		  printf("\nYour Total amount is Rs %.2f \n\n$$$$$$$$$$$$$$$$$$$$$ Please Pay at the Counter. $$$$$$$$$$$$$$$$$$$$$\n\n ", total);
          printf("\nWould You like to buy anything else ?\nIF Yes, Press Nu.[1] ; IF No, Press Nu.[2] : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");

			 if (again == 1 )
				drinks();
			 else if (again == 2 )
				m_m();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry ! Invalid Decision Entered.\n\n\n\n");
				 exit();
				}
		  }
		  else
			  if ( choice == 3 )
			  {
			  printf("Enter Quantity : ");
			  scanf("%d", &quantity);
			  total = 50.00 * quantity ;
			  printf("\nYour Total amount is Rs %.2f \n\n$$$$$$$$$$$$$$$$$$$$$ Please Pay at the Counter. $$$$$$$$$$$$$$$$$$$$$\n\n ", total);
              printf("\nWould You like to buy anything else ?\nIF Yes, Press Nu.[1] ; IF No, Press Nu.[2] : "); // Allows user to choose whether to check-out or buy anything else.
			   scanf("%d", &again);
			   system("cls");

			  if (again == 1 )
				{
				drinks();
				 }
			  else
				  if (again == 2 )
				{
				m_m();
				}
				else
				    if (again != 1 , 2)
					{
					 printf("\n\n\t\tSorry ! Invalid Decision Entered.\n\n\n\n");
					 exit();
					}
			  }
			  else
			      if ( choice == 4 )
			  {
			    m_m();
			  }
			  else
					if (choice != 1 , 2 , 3 , 4 )
						{

						printf("\n\n\t\t   Invalid Choice Entered\n\n");
	                    fflush(stdin);
						system("cls");
						drinks();
						}

    }
	getch();
  }

void deserts() //Deserts Menu Screen
{
  int choice = 0; //variables
  int quantity = 0;
  int again = 0;


  printf("            @@@@@@@:> | WELCOME TO FOOD PARADISE RESTAURANT | <:@@@@@@@    \n ");
  printf("*******************************************************************************         \n\n\n");
  printf("                         --- Deserts Menu ---\n\n");
  printf("   @ Please Select the Food that You would like to Purchase :- \n");
  printf("  ------------------------------------------------------------- \n\n");
  printf("\t\t   [1] Ice cream   - Rs.  80.00\n");
  printf("\t\t   [2] Fruit salad - Rs. 120.00\n");
  printf("\t\t   [3] Watalappan  - Rs.  80.00\n\n");
  printf("\t\t   [4] Main Menu \n\n");
  system("color 4");

  printf("Enter Your Choice Here : ");
  scanf("%d", &choice);
  {
  if (choice == 1)
	  {
	  printf("Enter Quantity : ");
	  scanf("%d", &quantity);
	  total = 80.00 * quantity ;
	   printf("\nYour Total amount is Rs %.2f \n\n$$$$$$$$$$$$$$$$$$$$$ Please Pay at the Counter. $$$$$$$$$$$$$$$$$$$$$\n\n ", total);
       printf("\nWould You like to buy anything else ?\nIF Yes, Press Nu.[1] ; IF No, Press Nu.[2] : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");//uses to clare the screen

			 if (again == 1 )
				deserts();
			 else
				 if (again == 2 )
					m_m();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry ! Invalid Decision Entered.\n\n\n\n");
				 exit();
				}
      }
	else
		  if ( choice == 2)
		  {
		  printf("Enter Quantity : ");
		  scanf("%d", &quantity);
		  total = 120.00 * quantity ;
		  printf("\nYour Total amount is Rs %.2f \n\n$$$$$$$$$$$$$$$$$$$$$ Please Pay at the Counter. $$$$$$$$$$$$$$$$$$$$$\n\n ", total);
          printf("\nWould You like to buy anything else ?\nIF Yes, Press Nu.[1] ; IF No, Press Nu.[2] : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");

			 if (again == 1 )
				deserts();
			 else if (again == 2 )
				m_m();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry ! Invalid Decision Entered.\n\n\n\n");
				 exit();
				}
		  }
		  else
			  if ( choice == 3 )
			  {
			  printf("Enter Quantity : ");
			  scanf("%d", &quantity);
			  total = 80.00 * quantity ;
			  printf("\nYour Total amount is Rs %.2f \n\n$$$$$$$$$$$$$$$$$$$$$ Please Pay at the Counter. $$$$$$$$$$$$$$$$$$$$$\n\n ", total);
              printf("\nWould You like to buy anything else ?\nIF Yes, Press Nu.[1] ; IF No, Press Nu.[2] : "); // Allows user to choose whether to check-out or buy anything else.
			   scanf("%d", &again);
			   system("cls");

			  if (again == 1 )
				{
				deserts();
				 }
			  else
				  if (again == 2 )
				{
				m_m();
				}
				else
				    if (again != 1 , 2)
					{
					 printf("\n\n\t\tSorry ! Invalid Decision Entered.\n\n\n\n");
					 exit();
					}
			  }
			  else
			      if ( choice == 4 )
			  {
			    m_m();
			  }
			  else
					if (choice != 1 , 2 , 3 , 4 )
						{

						printf("\n\n\t\t   Invalid Choice Entered\n\n");
	                    fflush(stdin);
						system("cls");
						deserts();
						}

    }
	getch();
  }

