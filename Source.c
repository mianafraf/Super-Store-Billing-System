#define _CRT_SECURE_NO_WARNINGS
#include"rllutil.h"//downloaded library for adding colors
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>


void delay(void);
void tim(void);//function to print time
int tme(void);//function to return time in seconds
void space(void);//function to add space to centre the text on the console

int main()
{
	setBackgroundColor(WHITE);
	int ch = 0;
	float discount = 0;
	int choice = 0;
	system("cls");
	setColor(BLUE);
	int i, j, a = 219;
	int cho;
	char anm[10][50] =
	{
		{a,a,a,a,a,a,a,0,0,a,a,a,a,a,a,0,0,a,a,0,0,0,a,a},
		{a,a,a,a,a,a,a,0,0,a,a,a,a,a,a,0,0,a,a,0,0,0,a,a},
		{a,a,0,0,0,a,a,0,0,a,a,0,0,a,a,0,0,a,a,0,0,0,a,a},
		{a,a,0,0,0,a,a,0,0,a,a,0,0,0,0,0,0,a,a,0,0,0,a,a},
		{a,a,a,a,a,a,a,0,0,a,a,a,a,a,a,0,0,a,a,a,a,a,a,a},
		{a,a,a,a,a,a,a,0,0,a,a,a,a,a,a,0,0,a,a,a,a,a,a,a},
		{a,a,0,0,0,a,a,0,0,0,0,0,0,a,a,0,0,a,a,0,0,0,a,a},
		{a,a,0,0,0,a,a,0,0,a,a,0,0,a,a,0,0,a,a,0,0,0,a,a},
		{a,a,0,0,0,a,a,0,0,a,a,a,a,a,a,0,0,a,a,0,0,0,a,a},
		{a,a,0,0,0,a,a,0,0,a,a,a,a,a,a,0,0,a,a,0,0,0,a,a}
	};
	while(1)
	{ 

aga:
	system("cls");
	setColor(MAGENTA);
	for (i = 0; i < 5; i++)
	{
		printf("\n");
	}
	for (i = 0; i < 10; i++)
	{
		space();
		for (j = 0; j < 24; j++)
		{
			printf("%c", anm[i][j]);
		}
		Sleep(30);
		printf("\n");
	}
	
	setColor(BLACK);
	space();
	printf("10 C CASH & CARRY BILLING SYSTEM ");
	Sleep(100);
	setColor(BLACK);
	space();
	puts("");
	puts("");
	setColor(BLUE);
	space();
	puts("MAIN MENU");
	setColor(BLUE);
	space();
	puts("1.Realtime-shopping");
	setColor(BLUE);
	space();
	puts("2.Admin Login");
	setColor(BLUE);
	space();
	puts("3.Exit");
	puts("");
	space();
	setColor(BLACK);
	printf("Enter your choice: ");
	scanf("%d", &ch);
	fflush(stdin);

		//REALTIME SHOPPING
		if (ch == 1)//variale to store choice from main menu
		{
			char nam1[100][30];
			int no1[100] = { 0 };
			int pr1[100];
			int qn1[100];
			int y3 = 0;
          while (1)
			{
				system("cls");
				int m = 0;/*variable to store index of categories in the file*/
				int n = 0, p = 0,/*variable to store user's category choice*/ q = 0;
				int r = 0;//user's choice of item
				int x = 0, y = 0, z = 0, y1 = 0, y2 = 0, y4 = 0, y5 = 0, y6 = 0, y7 = 0,/*total*/ y8 = 0,/*user entered cash*/ y9 = 0, y10 = 0, y11 = 0;
				char nam[100][30];
				int no[100] = { 0 };
				int pr[100];//array to store prices of the items user selected
				int qn[100];//array to store quantity of the items user selected
				char ab[50];//item name
				int j = 0;//serial number
				int k = 0;//price
				int l = 0;//quantity

				char e[50];//string to store category name
				int ch1 = 0, zc = 0, zd = 0;


				char user[100];
				setColor(BLUE);
				int i, f, a = 219;
				int cho;
				char anm[10][50] =
				{
					{a,a,a,a,a,a,a,0,0,a,a,a,a,a,a,0,0,a,a,0,0,0,a,a},
					{a,a,a,a,a,a,a,0,0,a,a,a,a,a,a,0,0,a,a,0,0,0,a,a},
					{a,a,0,0,0,a,a,0,0,a,a,0,0,a,a,0,0,a,a,0,0,0,a,a},
					{a,a,0,0,0,a,a,0,0,a,a,0,0,0,0,0,0,a,a,0,0,0,a,a},
					{a,a,a,a,a,a,a,0,0,a,a,a,a,a,a,0,0,a,a,a,a,a,a,a},
					{a,a,a,a,a,a,a,0,0,a,a,a,a,a,a,0,0,a,a,a,a,a,a,a},
					{a,a,0,0,0,a,a,0,0,0,0,0,0,a,a,0,0,a,a,0,0,0,a,a},
					{a,a,0,0,0,a,a,0,0,a,a,0,0,a,a,0,0,a,a,0,0,0,a,a},
					{a,a,0,0,0,a,a,0,0,a,a,a,a,a,a,0,0,a,a,0,0,0,a,a},
					{a,a,0,0,0,a,a,0,0,a,a,a,a,a,a,0,0,a,a,0,0,0,a,a}
				};
			stat:
				system("cls");
				setColor(BLUE);
				for (i = 0; i < 5; i++)
				{
					printf("\n");
				}
				for (i = 0; i < 10; i++)
				{
					space();
					for (f = 0; f < 24; f++)
					{
						printf("%c", anm[i][f]);
					}
					Sleep(30);
					printf("\n");
				}
				setColor(BLUE);
				space();
				printf("10 C CASH & CARRY BILLING SYSTEM ");
				Sleep(100);
				setColor(BLACK);
				space();
				puts("");
				space();
				puts("Navigate through the given options.");
				space();
				puts("1.Add items to Your Cart");
				space();
				puts("2.View Your Cart");
				space();
				puts("3.Checkout");
				space();
				puts("4.Main Menu");
				puts("");
				space();
				printf("Enter your choice: ");
				scanf("%d", &ch1);
				if (ch1 == 1)
				{
					while (1)
					{
					cat:
						system("cls");
						setColor(BLUE);
						puts("");
						space();
						printf("%s\t\t\t%s", "Serial Number", "Category");
						puts("");
						puts("");
						FILE* stpr;//file to store categories

						stpr = fopen("Categories.txt", "a+");
						fscanf(stpr, "%d%s", &m, e);
						if (m == 0)//no caetgory for zero index
						{
							puts("");
							space();
							puts("No Categories Available");
							delay();
							break;
						}//reading the categories from the file
						while (!feof(stpr))//loop to print all the categories
						{
							space();
							printf("\t%d\t\t\t%s\n", m, e);//printing

							if (m == 0)//no caetgory for zero index
							{
								space();
								printf("No Categories Available");
								break;
							}
							fscanf(stpr, "%d%s", &m, e);//reading from the file
						}

						fclose(stpr);
						puts("");
						space();
						puts("To go back press: -1");
						puts("");
						space();
						printf("Enter Serial Number of Category: ");//selecting the category
						scanf("%d", &p);

						int charlie = 0;
						stpr = fopen("Categories.txt", "a+");
						fscanf(stpr, "%d%s", &m, e);
						while (!feof(stpr))//loop to print all the categories
						{
							if (m == p)
							{
								charlie = 1;
								break;
							}
							fscanf(stpr, "%d%s", &m, e);//reading from the file
						}
						if (charlie == 1)
						{
							system("cls");
							puts("");
							puts("");
							stpr = fopen("Categories.txt", "a+");//opening the file to read the category
							fscanf(stpr, "%d%s", &m, e);//reading the category
							while (!feof(stpr))//loop to display the items in the category
							{
								if (p == m)
								{

									FILE* ptr;//file to store items in any given category
									ptr = fopen(e, "a+");
									space();
									printf("%s\t%s\t%s\t%s", "Serial No.", "Item Name", "Net Price", "Quantity Available");
									space();
									puts("");
									fscanf(ptr, "%d%s%d%d", &j, ab, &k, &l);//reading the items from the file
									if (feof(ptr))
									{
										space();
										puts("Currently No Items Available in the Selected Category.");
										space();
										puts("Please Choose another Category.");
										space();
										delay();
										goto cat;
									}
									while (!feof(ptr))
									{
										n = j;
										no[n] = j;
										strcpy(nam[n], ab);
										pr[n] = k;
										qn[n] = l;
										space();
										printf("%8d\t%10s\t%8d\t%8d\n", j, ab, k, l);
										if (n == 0)
										{
											space();
											puts("Currently No Items Available in the given Category");
											delay();
											break;
										}
										fscanf(ptr, "%d%s%d%d", &j, ab, &k, &l);
									}

									fclose(ptr);
								qnx1:
									puts("");
									space();
									printf("To go back press: -1");
									puts("");
									space();
									printf("Enter Serial No. of item you want to Add to your Cart: ");
									scanf("%d", &r);
									y2 = 0;
									for (int x1 = 0;x1 <= n;x1++)
									{
										if (no[x1] != 0)
										{
											if (no[x1] == r)
											{
												y2 = 1;
												break;
											}
										}
									}
									if (y2 == 1)
									{
									qnx2:

										if (qn[r] == 0)
										{
											space();
											puts("Seleted Amount/item is Currently Out of Stock.");
											space();
											puts("Please Choose another Item");
											space();
											delay();
											goto qnx1;
										}
										system("cls");
										space();
										printf("Quantity Available:%d", qn[r]);
										puts("\n");
										space();
										printf("Enter Quantity you want to purchase : ");
										scanf("%d", &y1);
										if (qn[r] < y1 || y1 < 1)
										{
											space();
											puts("Enter valid Quantity.");
											delay();
											goto qnx2;
										}
									}
									else if (r == -1)
									{
										break;
									}
									else
									{
										space();
										puts("Enter Valid Serial Number");
										goto qnx1;
									}
									y3++;
									strcpy(nam1[y3], nam[r]);
									pr1[y3] = pr[r];
									qn1[y3] = y1;
									qn[r] -= y1;
									no1[y3] = y3;

									ptr = fopen(e, "w");
									for (int x2 = 1;x2 <= n;x2++)
									{
										if (no[x2] != 0)
										{
											fprintf(ptr, "%d\t%s\t%d\t%d\n", no[x2], nam[x2], pr[x2], qn[x2]);
										}
									}

									fclose(ptr);
								su:
									system("cls");
									puts("");
									space();
									puts("Item successfuly added to Your Cart");
									space();
									puts("To add another item to your cart press: 1");
									space();
									puts("To view your Cart Enter: -1");
									puts("");
									space();
									printf("Your choice: ");
									scanf("%d", &y4);
									if (y4 == -1)//to view cart
									{
										goto cart;
									}
									else if (y4 == 1)//to add another item
									{
										goto cat;
									}
									else
									{
										space();
										printf("Enter valid Option");
										delay();
										goto su;
									}

									break;
								}
								fscanf(stpr, "%d%s", &m, e);
								if (m == 0)//to break the loop if index is zero
								{
									break;
								}
							}
							fclose(stpr);
						}
						else if (p == -1)
						{
							break;
						}
						else
						{
							puts("");
							space();
							printf("Enter Valid Serial No.");
							delay();
						}
					}
				}
				/********VIEWING CART*********/
				else if (ch1 == 2)
				{
				cart:
					system("cls");
					space();
					puts("Your Cart Contains the following Items");
					puts("");
					space();
					printf("%s\t%s\t\t%s\t%s\n", "Index No.", "Items", "Net Price", "Quantity");
					for (int x3 = 1;x3 <= y3;x3++)//loop to print items in the cart
					{
						if (no1[x3] != 0)
						{
							space();
							printf("\t%d\t%s\t\t%d\t\t%d\n\n", no1[x3], nam1[x3], pr1[x3], qn1[x3]);
						}
					}
					int pirate = 0;
					for (int man = 0;man <= y3;man++)
					{
						if (no1[man] != 0)
						{
							pirate = 1;
							break;
						}
					}
					if (pirate == 0)
					{
						space();
						puts("Your Cart is Empty.");
						space();
						puts("To go back press: -1");
					}
					space();
					puts("To add an Item to your Cart Press: 1.");
					if (pirate != 0)
					{
						space();
						puts("To delete an item from Cart Press: 2");
						space();
						puts("To Checkout Press : 3");
					}
					puts("");
					space();
					printf("Your choice: ");
					scanf("%d", &y5);
					if (!(y5 == 1 || y5 == -1 )&& pirate == 0)//when user doesnot  want to add an item and his cart is empty
					{
						space();
						puts("Enter Valid Index Number");
						delay();
						goto cart;
					}
					if (pirate != 0 && (y5 < 1 || y5 > 3))//if user enters invalid option
					{
						space();
						puts("Enter valid Index Number ");
						delay();
						goto cart;
					}
					if (y5 == 1)//if the user wants to enter an item
					{
						goto cat;
					}
					if (pirate == 0 && y5 == -1)
					{
						;
					}
					if (pirate != 0)//cart is not empty
					{

						if (y5 == 2)//to delete an item from the cart
						{
						del:
							puts("");
							space();
							printf("Enter Index No. of Item You want to delete: ");
							scanf("%d", &y6);
							int delta = 0;
							for (int iron = 0;iron <= y3;iron++)
							{
								if (no1[iron] == y6 && y6 != 0)
								{
									delta = 1;
									break;
								}
							}
							if (delta == 0)
							{
								space();
								printf("Enter Valid Index No.");
								goto del;
							}
							else if (delta == 1)
							{
								no1[y6] = 0;
								space();
								puts("Selected item is removed from the Cart");
								delay();
								goto cart;
							}
						}
						if (y5 == 3)//if user wants to checkout
						{
							goto chk;
						}
					}
				}
				/********CHECKOUT*******/
				else if (ch1 == 3)
				{
					while (1)
					{
					chk:
						system("cls");
						int pirate = 0;
						for (int man = 0;man <= y3;man++)
						{
							if (no1[man] != 0)
							{
								pirate = 1;
								break;
							}
						}
						if (pirate == 0)
						{
							space();
							puts("Your Cart is Empty");
							space();
							puts("First Add Items To Your Cart");
							delay();
							break;
						}
						//displaying the bill
					ret:
						system("cls");
						puts("");
						space();
						puts("\t\t10 C CASH & CARRY BILLING SYSTEM");
						puts("");
						space();
						puts("=========================================================");
						space();
						tim();
						puts("");
						space();
						puts("*********************************************************");
						space();
						printf("%s\t%s\t%s\t%s\n", "Item Name", "Net price", "Quantity", "Price");
						puts("");
						y7 = 0;
						for (int x3 = 1;x3 <= y3;x3++)//loop to print the items in the cart
						{
							if (no1[x3] != 0)
							{
								space();
								printf("%s\t\t%d\t\t%d\t\t%d\n\n", nam1[x3], pr1[x3], qn1[x3], pr1[x3] * qn1[x3]);
								y7 += pr1[x3] * qn1[x3];
							}
						}
						puts("");
						space();
						puts("**********************************************************");
						puts("");
						space();
						printf("\tSub Total	: %d", y7);
						puts("");
						space();
						if (discount == 0)
						{
							printf("\tTotal Payable	: %d", y7);
						}
						else
						{
							y7 = (float)y7 * (1 - (discount / 100));
							printf("\tTotal Payable after %.0f percent discount: %d", discount, y7);
						}
						puts("");
						space();
						printf("\tEnter Cash	: ");
						scanf("%d", &y8);
						if (y7 > y8)//checking if cash entered by the user is less than total
						{
							while (1)
							{
								system("cls");
								space();
								puts("Oops It Seems You Do Not have enough Money.");
								space();
								puts("To Update Your Cart Press : 1");
								space();
								puts("To Enter cash Again Press : 2");
								puts("");
								space();
								printf("Your choice: ");
								scanf("%d", &y9);
								if (y9 == 1)//to update cart
								{
									goto cart;
								}
								if (y9 == 2)//to re-enter cash
								{
									goto ret;
								}
								else
								{
									space();
									puts("Enter Valid Option");
									delay();
								}
							}
						}
						system("cls");
						puts("");
						space();
						puts("=======================================================");
						puts("");
						space();
						puts("\t\t10 C CASH & CARRY BILLING SYSTEM");
						space();
						tim();
						space();
						puts("=======================================================");
						space();
						puts("");
						space();
						puts("*******************************************************");
						space();
						printf("%s\t%s\t%s\t%s\n", "Item Name", "Net price", "Quantity", "Price");
						puts("");
						y7 = 0;
						for (int x3 = 1;x3 <= y3;x3++)//loop to print the items in the cart
						{
							if (no1[x3] != 0)
							{
								space();
								printf("%s\t%d\t\t%d\t\t%d\n\n", nam1[x3], pr1[x3], qn1[x3], pr1[x3] * qn1[x3]);
								y7 += pr1[x3] * qn1[x3];
							}
						}
						puts("");
						space();
						puts("*******************************************************");
						puts("");
						space();
						printf("\tSub Total			: %d", y7);
						puts("");
						space();
						if (discount == 0)
						{
							printf("\tTotal Payable:%d", y7);
						}
						else
						{
							y7 = (float)y7 * (1 - discount / 100);
							printf("\tTotal Payable after %.0f percent discount	: %d", discount, y7);
						}
						puts("");
						space();
						printf("\tCash Recieved				:%d", y8);
						puts("");
						space();
						printf("\tBalance					:%d", y8 - y7);
						puts("");
						puts("");
						space();
						puts("\t*********Thanks For Shopping*********");
						puts("");
						space();
						puts("=======================================================");
						getchar();
						getchar();
						y3 = 0;
						
						break;
					}

				}
				else if (ch1 == 4)//exit to main menu
				{
					system("cls");
					break;
				}
				else
				{
					puts("");
					space();
					printf("Enter Valid Option");
					delay();
				}
			}
		}
	
	else if (ch == 2)
	{
	system("cls");
	char user[100];
	setColor(BLUE);
	int i, j, a = 219;
	int cho;
	char anm[10][50] =
	{
		{a,a,a,a,a,a,a,0,0,a,a,a,a,a,a,0,0,a,a,0,0,0,a,a},
		{a,a,a,a,a,a,a,0,0,a,a,a,a,a,a,0,0,a,a,0,0,0,a,a},
		{a,a,0,0,0,a,a,0,0,a,a,0,0,a,a,0,0,a,a,0,0,0,a,a},
		{a,a,0,0,0,a,a,0,0,a,a,0,0,0,0,0,0,a,a,0,0,0,a,a},
		{a,a,a,a,a,a,a,0,0,a,a,a,a,a,a,0,0,a,a,a,a,a,a,a},
		{a,a,a,a,a,a,a,0,0,a,a,a,a,a,a,0,0,a,a,a,a,a,a,a},
		{a,a,0,0,0,a,a,0,0,0,0,0,0,a,a,0,0,a,a,0,0,0,a,a},
		{a,a,0,0,0,a,a,0,0,a,a,0,0,a,a,0,0,a,a,0,0,0,a,a},
		{a,a,0,0,0,a,a,0,0,a,a,a,a,a,a,0,0,a,a,0,0,0,a,a},
		{a,a,0,0,0,a,a,0,0,a,a,a,a,a,a,0,0,a,a,0,0,0,a,a}
	};
	while (1)
	{
		system("cls");
		setColor(RED);
		for (i = 0; i < 5; i++)
		{
			printf("\n");
		}
		for (i = 0; i < 10; i++)
		{
			space();
			for (j = 0; j < 24; j++)
			{
				printf("%c", anm[i][j]);
			}
			Sleep(30);
			printf("\n");
		}
		setColor(CYAN);
		space();
		printf("10 C CASH & CARRY BILLING SYSTEM ");
		Sleep(100);
		setColor(BLACK);
		space();
		char name[20];
		char nam[20];
		char pin[50];
		int password[50];
		puts("");
		space();
		printf("Enter Password: ");
		scanf("%s", &pin);
		FILE* aptr;
		aptr = fopen("1122.txt", "a+");
		fscanf(aptr, "%s", &password);
		
		if(!strcmp(password,pin))
		{
			while (1)
			{
				system("cls");
				setColor(BLUE);
				space();
				puts("OPTIONS");
				puts("");
				space();
				puts("1.Update Stock");
				space();
				puts("2.Sales Analysis");
				space();
				puts("3.Password Change");
				space();
				puts("4.Back to Main menu");
				puts("");
				space();
				printf("Your choice: ");
				scanf("%d", &cho);



				/*********UPDATE STOCK*******/
				if (cho == 1)
				{
					while (1)
					{
						int m = 0, n = 0, p = 0, q = 0, r = 0, s = 0;
						int x = 0, y = 0, z = 0;
						char ab[50];
						char bc[50];
						char e[50];
						system("cls");
						space();
						puts("To Add press: 1");
						space();
						puts("To Delete press : 2");
						space();
						puts("To update price or quatity press: 3");
						space();
						puts("Back to options : 4");
						space();
						printf("Your choice: ");
						scanf("%d", &x);
						if (x == 1)//adding category and adding new item to existing category
						{
							while (1)
							{
								system("cls");
								m = 0, n = 0, p = 0;
								space();
								puts("To add a new category press: 1");
								space();
								puts("To add a new item to existing category press : 2");
								space();
								puts("To go back press: -1");
								space();
								printf("Your choice: ");
								scanf("%d", &y);
								if (y == 1)
								{
									while (y != -1)
									{
										FILE* stpr;
										stpr = fopen("Categories.txt", "a+");
										fscanf(stpr, "%d%s", &m, e);

										while (!feof(stpr))
										{
											n = m;
											if (n == 0)
											{
												break;
											}
											fscanf(stpr, "%d%s", &m, e);
										}
										fclose(stpr);
										n++;
									exa:
										system("cls");
										space();
										printf("Enter Category Name: ");
										scanf("%s", e);

										stpr = fopen("Categories.txt", "a+");
										fscanf(stpr, "%d%s", &m, ab);
										while (!feof(stpr))
										{
											if (m == 0)
											{
												break;
											}
											if (!strcmp(e, ab))
											{
												system("cls");
												space();
												puts("Category Already Exist.");
												space();
												puts("Please Enter valid Name.");
												delay();
												goto exa;
											}
											fscanf(stpr, "%d%s", &m, ab);
										}
										fclose(stpr);
										stpr = fopen("Categories.txt", "a+");
										fprintf(stpr, "%d\t%s\n", n, e);
										fclose(stpr);
										system("cls");
										space();
										puts("Category added successfuly.");
										space();
										puts("Press any key to continue adding a new category: 1");
										space();
										puts("To go back enter : -1");
										puts("");
										space();
										printf("Your choice: ");
										scanf("%d", &y);
									}
								}
								if (y == 2)
								{
									system("cls");
									while (y != -1)
									{
										char ab[50];
										int j = 0, k = 0, l = 0;
										m = 0, n = 0, p = 0;
									peta:
										system("cls");
										space();
										printf("%s\t\t%s", "Serial Number", "Category");
										puts("");
										FILE* stpr;

										stpr = fopen("Categories.txt", "a+");
										fscanf(stpr, "%d%s", &m, e);
										if (m == 0)
										{
											space();
											puts("No Categories Available");
											delay();
											break;
										}
										while (!feof(stpr))
										{
											space();
											printf("%d\t\t%s\n", m, e);
											fscanf(stpr, "%d%s", &m, e);
											if (m == 0)
											{
												break;
											}
										}

										fclose(stpr);
										//choose category to update
										space();
										printf("Enter Serial Number of Category: ");
										scanf("%d", &p);
										stpr = fopen("Categories.txt", "a+");
										fscanf(stpr, "%d%s", &m, e);
										while (!feof(stpr))
										{
											s = 0;
											if (p == m)
											{

												FILE* ptr;
												ptr = fopen(e, "a+");
												fscanf(ptr, "%d%s%d%d", &j, ab, &k, &l);
												while (!feof(ptr))
												{
													n = j;
													fscanf(ptr, "%d%s%d%d", &j, ab, &k, &l);
													if (n == 0)
													{
														break;
													}
												}
												fclose(ptr);
												n++;
												system("cls");
											tera:
												system("cls");
												space();
												printf("Enter Item Name: ");
												scanf("%49s", ab);
												ptr = fopen(e, "a+");
												fscanf(ptr, "%d%s%d%d", &j, bc, &k, &l);
												while (!feof(ptr))
												{
													if (!strcmp(ab, bc))
													{
														space();
														puts("Item already Exist.");
														space();
														puts("Try New Name");
														delay();
														goto tera;
													}

													if (n == 0)
													{
														break;
													}
													fscanf(ptr, "%d%s%d%d", &j, bc, &k, &l);
												}
												fclose(ptr);
												space();
												printf("Enter Price: ");
												scanf("%d", &k);
												space();
												printf("Enter Quantity: ");
												scanf("%d", &l);
												ptr = fopen(e, "a+");
												fprintf(ptr, "%d\t%s\t%d\t%d\n", n, ab, k, l);
												fclose(ptr);
												s = 1;
												break;

											}
											fscanf(stpr, "%d%s", &m, e);
										}
										fclose(stpr);
										system("cls");
										if (s == 0)
										{
											space();
											puts("Enter valid Serial Number");
											delay();
											goto peta;
										}
										space();
										puts("Item added Successfully");
										space();
										puts("To add another item press : 1");
										space();
										puts("To go back press : -1");
										space();
										printf("Your choice: ");
										scanf("%d", &y);

									}
								}
								else if (y == -1)
								{
									break;
								}
								else
								{
									space();
									puts("Enter valid Option");
									delay();
								}
							}
						}
						else if (x == 2)//deleting an item or category
						{
							while (1)
							{
								system("cls");
								space();
								puts("To Delete a Category press: 1");
								space();
								puts("To delete an item press : 2");
								space();
								puts("To go back press : -1");
								space();
								printf("Your choice: ");
								scanf("%d", &y);
								if (y == 1)
								{
									char nam[100][30];
									int no[100] = { 0 };
									int pr[100];
									int qn[100];
									char ab[50];
									int j = 0, k = 1, l = 0;
									m = 0, n = 0, p = 0;
								dtecat:
									system("cls");
									space();
									printf("%s\t%s", "Serial Number", "Category");
									puts("");
									FILE* stpr;

									stpr = fopen("Categories.txt", "a+");
									fscanf(stpr, "%d%s", &m, e);

									while (!feof(stpr))
									{
										l = m;
										strcpy(nam[l], e);

										no[l] = m;
										space();
										printf("%d\t%s\n", m, e);
										fscanf(stpr, "%d%s", &m, e);
										if (l == 0)
										{
											break;
										}
									}

									fclose(stpr);
									//choose category to delete
									if (l == 0)
									{
										space();
										puts("Currently no Category Available");
										delay();
										break;
									}
									space();
									printf("Enter Serial Number of Category: ");
									scanf("%d", &p);
									s = 0;
									for (int count = 1;count <= l;count++)
									{
										if (no[count] == p)
										{
											s = 1;
											break;
										}
									}
									if (s == 0)
									{
										space();
										printf("Enter Valid Serial Number: ");
										delay();
										goto dtecat;
									}
									no[p] = 0;
									stpr = fopen("Categories.txt", "w");
									for (int x1 = 1;x1 <= l;x1++)
									{
										if (no[x1] != 0)
										{
											fprintf(stpr, "%d\t%s\n", no[x1], nam[x1]);
										}
									}
									fclose(stpr);
									space();
									puts("Category Deleted Successfuly");
									delay();
								}
								else if (y == 2)
								{

									char nam[100][30];
									int no[100] = { 0 };
									int pr[100];
									int qn[100];
									char ab[50];
									int j = 0, k = 0, l = 0;
									m = 0, n = 0, p = 0, r = 0;
								valid:
									system("cls");
									space();
									printf("%s\t%s", "Serial Number", "Category");
									puts("");
									FILE* stpr;

									stpr = fopen("Categories.txt", "a+");
									fscanf(stpr, "%d%s", &m, e);
									if (m == 0)
									{
										space();
										puts("No Categories Available");
										delay();
										break;
									}
									while (!feof(stpr))
									{
										space();
										printf("\t%d\t%s\n", m, e);
										if (m == 0)
										{
											space();
											puts("No Categories Available");
											break;
										}
										fscanf(stpr, "%d%s", &m, e);
									}

									fclose(stpr);
									//choose category to update
									space();
									printf("Enter Serial Number of Category: ");
									scanf("%d", &p);
									s = 0;
									stpr = fopen("Categories.txt", "a+");
									fscanf(stpr, "%d%s", &m, e);
									while (!feof(stpr))
									{
										if (p == m)
										{
											s = 1;
											system("cls");
											FILE* ptr;
											ptr = fopen(e, "a+");
											space();
											printf("%s\t%s\t%s\t%s\n", "Serial No.", "Item Name", "Net Price", "Quantity ");
											fscanf(ptr, "%d%s%d%d", &j, ab, &k, &l);
											if (j == 0)
											{
												space();
												puts("Currently No Items Available in the selected category");
												delay();
												break;
											}
											while (!feof(ptr))
											{
												n = j;
												no[n] = j;
												strcpy(nam[n], ab);
												pr[n] = k;
												qn[n] = l;
												space();
												printf("%8d\t%10s\t%8d\t%8d\n", j, ab, k, l);
												fscanf(ptr, "%d%s%d%d", &j, ab, &k, &l);
												if (n == 0)
												{
													break;
												}
											}
											fclose(ptr);
										jumanji:
											puts("");
											space();
											printf("Enter Serial No. of item you want to delete: ");
											scanf("%d", &r);
											int alpha = 0;
											for (int mna = 1;no[mna] <= n;mna++)
											{
												if (no[mna] == r)
												{
													alpha = 1;
													break;
												}
											}

											if (alpha == 0)
											{
												space();
												printf("Enter Valid Serial Number: ");

												goto jumanji;
											}

											no[r] = 0;
											ptr = fopen(e, "w");
											for (int x2 = 1;x2 <= n;x2++)
											{
												if (no[x2] != 0)
												{
													fprintf(ptr, "%d\t%s\t%d\t%d\n", no[x2], nam[x2], pr[x2], qn[x2]);
												}
											}
											fclose(ptr);
											space();
											puts("Item deleted successfuly.");
											delay();
											break;

										}
										fscanf(stpr, "%d%s", &m, e);
										if (m == 0)
										{
											break;
										}
									}
									if (s == 0)
									{
										space();
										printf("Enter Valid Serial Number: ");
										delay();
										goto valid;
									}
									fclose(stpr);

								}
								else if (y == -1)
								{
									break;
								}
								else
								{
									system("cls");
									space();
									puts("Enter Valid Option");
									delay();
								}
							}
						}
						else if (x == 3)
						{

							char nam[100][30];
							int no[100] = { 0 };
							int pr[100];
							int qn[100];
							char ab[50];
							int j = 0, k = 0, l = 0, s = 0, t = 0, u = 0, v = 0;
							m = 0, n = 0, p = 0, r = 0;
						potter:
							system("cls");
							space();
							printf("%s\t%s", "Serial Number", "Category");
							puts("");
							FILE* stpr;

							stpr = fopen("Categories.txt", "a+");
							fscanf(stpr, "%d%s", &m, e);
							if (m == 0)
							{
								space();
								puts("Currently No Category Avalaible");
								delay();
								break;
							}
							while (!feof(stpr))
							{
								space();
								printf("%d\t%s\n", m, e);
								fscanf(stpr, "%d%s", &m, e);
								if (m == 0)
								{
									break;
								}
							}

							fclose(stpr);
							//choose category to update
							space();
							puts("Enter Serial Number of Category");
							scanf("%d", &p);
							v = 0;
							stpr = fopen("Categories.txt", "a+");
							fscanf(stpr, "%d%s", &m, e);
							while (!feof(stpr))
							{
								if (p == m)
								{
									v = 1;
									FILE* ptr;
									ptr = fopen(e, "a+");
									system("cls");
									space();
									printf("%s\t%s\t%s\t%s\n", "Serial No.", "Item", "Price", "Quantity");
									fscanf(ptr, "%d%s%d%d", &j, ab, &k, &l);
									if (j == 0)
									{
										space();
										puts("Currently No Item Available in the selected category");
										delay();
										break;
									}
									while (!feof(ptr))
									{
										n = j;
										no[n] = j;
										strcpy(nam[n], ab);
										pr[n] = k;
										qn[n] = l;
										space();
										printf("%8d\t%10s\t%8d\t%8d\n", j, ab, k, l);
										fscanf(ptr, "%d%s%d%d", &j, ab, &k, &l);
										if (n == 0)
										{
											break;
										}
									}
									fclose(ptr);
								sparrow:
									space();
									printf("Enter Serial No. of quantity whose price our quantity you want to update: ");
									scanf("%d", &r);
									int bravo = 0;
									for (int mna = 1;mna <= n;mna++)
									{
										if (no[mna] == r)
										{
											bravo = 1;
											break;
										}
									}
									if (bravo == 1)
									{
									jack:
										system("cls");
										space();
										puts("To update Price Enter: 1");
										space();
										puts("To Update Quantity Enter : 2");
										space();
										printf("Your choice: ");
										scanf("%d", &s);
										if (s == 1)
										{
											space();
											puts("Enter New Price: ");
											scanf("%d", &t);
											if (t < 0)
											{
												space();
												puts("Price Can Not be Negative");
												delay();
											}
											else
											{
												pr[r] = t;
												space();
												puts("Price Updated Successfully");
												delay();
											}
										}
										else if (s == 2)
										{
											space();
											printf("Enter Quantity to add: ");
											scanf("%d", &u);
											if (u < 0)
											{
												space();
												puts("Quantity Can be Negative");
												delay();
											}
											else
											{
												qn[r] += u;
												space();
												puts("Quantity Updated Successfuly");
												delay();
											}
										}
										else
										{
											space();
											puts("Enter Valid Option");
											delay();
											goto jack;
										}


										ptr = fopen(e, "w");
										for (int x2 = 1;x2 <= n;x2++)
										{
											if (no[x2] != 0)
											{
												fprintf(ptr, "%d\t%s\t%d\t%d\n", no[x2], nam[x2], pr[x2], qn[x2]);
											}
										}
										fclose(ptr);
										break;
									}
									else
									{
										space();
										puts("Enter Valid Option");
										delay();
										goto sparrow;
									}
								}
								fscanf(stpr, "%d%s", &m, e);
								if (m == 0)
								{
									break;
								}
							}
							fclose(stpr);
							if (v == 0)
							{
								system("cls");
								space();
								puts("Enter Valid Option");
								delay();
								goto potter;
							}

						}
						else if (x == 4)
						{
							break;
						}
						else
						{
							space();
							puts("Enter Valid Option");
							delay();
						}
					}

				}
				else if (cho == 2)
				{

					while (1)
					{
						int a[10] = { 0 };
						char ab[100];
						char e[100];
						system("cls");
						puts("");
						space();
						puts("OPTIONS");
						space();
						puts("1. ITEMS in RED ZONE");
						space();
						puts("2. DISCOUNTS");
						space();
						puts("3. GO BACK");
						puts("");
						space();
						printf("Enter your choice: ");
						scanf("%d", &a[0]);
						if (a[0] == 1) //Quantity of all items
						{
							while (1)
							{
							hell:
								system("cls");
								space();
								printf("Enter Limit: ");
								scanf("%d", &a[1]);
								if (a[1] < 1)
								{
									system("cls");
									space();
									puts("Limit can not be zero or negative");
									delay();
									goto hell;
								}
								int j = 0, k = 0, l = 0, s = 0, t = 0, u = 0;
								int m = 0, n = 0, p = 0, r = 0;
							nickel:
								system("cls");
								puts("");
								space();
								printf("%s\t\t\t%s", "Serial Number", "Category");
								puts("");
								puts("");
								FILE* stpr;//file to store categories
								stpr = fopen("Categories.txt", "a+");
								fscanf(stpr, "%d%s", &m, e);//reading the categories from the file
								if (m == 0)
								{
									space();
									puts("No Categories Available");
									delay();
									break;
								}
								while (!feof(stpr))//loop to print all the categories
								{
									space();
									printf("\t%d\t\t%s\n", m, e);//printing
									fscanf(stpr, "%d%s", &m, e);//reading from the file
								}
								fclose(stpr);
								puts("\n");
								space();
								printf("To go back press: -1");
								puts("\n");
								space();
								printf("Enter Serial Number of Category: ");//selecting the category
								scanf("%d", &p);

								int charlie = 0;
								stpr = fopen("Categories.txt", "a+");
								fscanf(stpr, "%d%s", &m, e);
								while (!feof(stpr))//loop to print all the categories
								{
									if (m == p)
									{
										charlie = 1;
										break;
									}
									fscanf(stpr, "%d%s", &m, e);//reading from the file
								}
								if (charlie == 1)
								{
									system("cls");
									puts("");
									puts("");
									stpr = fopen("Categories.txt", "a+");//opening the file to read the category
									fscanf(stpr, "%d%s", &m, e);//reading the category
									while (!feof(stpr))//loop to display the items in the category
									{
										if (p == m)
										{

											FILE* ptr;//file to store items in any given category
											ptr = fopen(e, "a+");
											space();
											printf("%s\t%s\t%s\t%s", "Serial No.", "Item Name", "Net Price", "Quantity Available");
											space();
											puts("");
											fscanf(ptr, "%d%s%d%d", &j, ab, &k, &l);//reading the items from the file
											if (feof(ptr))
											{
												space();
												puts("Currently No Items Available in the Selected Category.");
												space();
												puts("Please Choose another Category.");
												space();
												delay();
												goto nickel;
											}
											while (!feof(ptr))
											{
												if (l <= a[1])
												{
													space();
													printf("%8d\t%10s\t%8d\t%8d\n", j, ab, k, l);
												}
												fscanf(ptr, "%d%s%d%d", &j, ab, &k, &l);
											}
											fclose(ptr);
											getchar();
											getchar();
											goto nickel;
										}
										fscanf(stpr, "%d%s", &m, e);
									}
								}
								else if (p == -1)
								{
									break;
								}
								else
								{
									puts("");
									space();
									printf("Enter Valid Serial No.");
									delay();
									goto nickel;
								}
							}
						}
						else if (a[0] == 2) //DISCOUNTS
						{
							system("cls");
							puts("");
							space();
							printf("Enter the discount Percentage: ");
							scanf("%f", &discount);
							puts("");
							space();
							printf("Discount Added Successfuly");
							delay();
						}
						else if (a[0] == 3)
						{
							break;
						}
						else
						{
							space();
							puts("Enter a valid option: ");
							delay();
						}
					}
				}
				else if (cho == 3)
				{
						space();
						printf("Enter New Password:");
						scanf("%s", &password);
						space();
						printf("Confirm New Password:");
						scanf("%s", &pin);
						if (!strcmp(password,pin))
						{
							FILE* homealone;
							homealone = fopen("1122.txt", "w");
							fprintf(homealone, "%s", password);
							fclose(homealone);
							space();
							puts("Password Changed Successfuly");
							delay();
						}
						else
						{
							space();
							puts("Password Change Unsuccessfull");
							space();
							puts("Passwords did not matched");
							delay();
						}
                }

				else if (cho == 4) 
                {
				break;
				}
				else
				{
				space();
				puts("Choose Valid Option");
				delay();
                }
			
			}
		}
		else
		{
			puts("");
			space();
			puts("Incorrect password ");
			space();
			puts("Try again with valid credentials");
			delay();
			break;
		}
		break;
	}

	}
	else if (ch == 3)
	{
	exit(1);
	break;
	}
	else
	{
	space();
	printf("Enter valid Option.");
	delay();
	}

	}
}
void space(void)//function to add space to centre the text on the console
{
	printf("\t\t\t\t\t\t");
}
void tim(void)
{
	time_t a21;
	a21 = time(NULL);
	char* b21 = ctime(&a21);
	printf("%s", b21);
}
int tme(void)
{
	time_t a;
	a = time(NULL);
	return a;
}
void delay(void)//function to put a message on the screen for a specific time
{
	time_t mpa;
	mpa = time(NULL);
	for (int mna = 1;mna > 0;mna++)
	{

		int pma = tme();
		if (pma - mpa == 3)
		{
			break;
		}
	}
}
