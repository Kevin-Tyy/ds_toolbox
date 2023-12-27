#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class shopping
{
private:
  int pcode;
  float price;
  float dis;
  string pname;

public:
  void menu();
  void administrator();
  void buyer();
  void add();
  void edit();
  void rem();
  void receipt();
  void list();
};

void shopping::menu()
{
  int choice;
  string email;
  string password;

  do
  {
    cout << "\t\t\t\t_______________________________________________\n";
    cout << "\t\t\t\t                                               \n";
    cout << "\t\t\t\t                 Supermarket Main Menu         \n";
    cout << "\t\t\t\t                                               \n";
    cout << "\t\t\t\t_______________________________________________\n";
    cout << "\t\t\t\t                                               \n";
    cout << "\t\t\t\t|     1) Administrator   |\n";
    cout << "\t\t\t\t|                        |\n";
    cout << "\t\t\t\t|     2) Buyer           |\n";
    cout << "\t\t\t\t|                        |\n";
    cout << "\t\t\t\t|     3) Exit            |\n";
    cout << "\t\t\t\t|                        |\n";
    cout << "\n\t\t\t Please select! ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      cout << "\t\t\t Please Login \n";
      cout << "\t\t\t Enter Email   \n";
      cin >> email;
      cout << "\t\t\t Password        \n";
      cin >> password;
      if (email == "admin@gmail.com" && password == "admin@123")
      {
        administrator();
      }
      else
      {
        cout << "Invalid email/password\n";
      }
      break;

    case 2:
      buyer();
      break;

    case 3:
      exit(0);
      break;

    default:
      cout << "Please select from the given options\n";
      break;
    }
  } while (choice != 3);
}

void shopping::administrator()
{
  int choice;

  do
  {
    cout << "\n\n\n\n\t\t\t Administrator menu";
    cout << "\n\t\t\t|_______1) Add the product_______";
    cout << "\n\t\t\t|                                ";
    cout << "\n\t\t\t|_______2) Modify the product____|";
    cout << "\n\t\t\t|                                |";
    cout << "\n\t\t\t|_______3) Delete the product____|";
    cout << "\n\t\t\t|                                |";
    cout << "\n\t\t\t|_______4) Back to main menu_____|";

    cout << "\n\n\t Please enter your choice ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      add();
      break;

    case 2:
      edit();
      break;

    case 3:
      rem();
      break;

    case 4:
      return;

    default:
      cout << "Invalid choice!\n";
      break;
    }
  } while (choice != 4);
}
void shopping::buyer()
{
  int choice;

  do
  {
    cout << "\t\t\t Buyer \n";
    cout << "                   \n";
    cout << "\t\t\t 1) Buy product \n";
    cout << "                      \n";
    cout << "\t\t\t 2) Go back     \n";
    cout << "\t\t\t  Enter your choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      receipt();
      break;

    case 2:
      menu();
      break;

    default:
      cout << "Invalid choice\n";
      break;
    }
  } while (choice != 2);
}

void shopping::add()
{
  fstream data;
  int c;
  int token = 0;
  float p;
  float d;
  string n;

  cout << "\n\n\t\t\t Add new product";
  cout << "\n\n\t Product code of the product";
  cin >> pcode;
  cout << "\n\n\t Name of the product ";
  cin >> pname;
  cout << "\n\n\t Price of the product";
  cin >> price;
  cout << "\n\n\t Discount on product";
  cin >> dis;

  data.open("database.txt", ios::in); // open the file in reading mode || out = in writing mode
  if (!data)
  {
    data.open("database.txt", ios::app | ios::out);
    data << pcode << " " << pname << " " << price << " " << dis << "\n";
    data.close();
  }
  else
  {
    data >> c >> n >> p >> d;

    // checking in the code to find if the code in the file is the same as the inputted code
    while (!data.eof())
    {
      if (c == pcode)
      {
        token++;
      }
      data >> c >> n >> p >> d;
    }
    data.close();

    if (token == 1)
    {
      cout << "\n\n\t Product code already exists!";
      add(); // jump back to the start of the function
    }
    else
    {
      data.open("database.txt", ios::app | ios::out);
      data << pcode << " " << pname << " " << price << " " << dis << "\n";
      data.close();
    }
  }
}

void shopping::edit()
{
  fstream data, data1;
  int pkey;
  int token = 0;
  float p;
  float d;
  string n;

  cout << "\n\t\t\t Modify the record";
  cout << "\n\t\t\t Product code: ";
  cin >> pkey;

  data.open("database.txt", ios::in);
  if (!data)
  {
    cout << "\n\n File doesn't exist";
  }
  else
  {
    data1.open("database1.txt", ios::app | ios::out);
    data >> pcode >> pname >> price >> dis;
    while (!data.eof())
    {
      if (pkey == pcode)
      {
        cout << "\n\t\t Product new code: ";
        cin >> pcode;
        cout << "\n\t\t Name of the product: ";
        cin >> pname;
        cout << "\n\t\t Price: ";
        cin >> price;
        cout << "\n\t\t Discount: ";
        cin >> dis;
        data1 << pcode << " " << pname << " " << price << " " << dis << "\n";
        cout << "\n\n\t\t Record edited";
        token++;
      }
      else
      {
        data1 << pcode << " " << pname << " " << price << " " << dis << "\n";
      }
      data >> pcode >> pname >> price >> dis;
    }
    data.close();
    data1.close();

    remove("database.txt");
    rename("database1.txt", "database.txt");

    if (token == 0)
    {
      cout << "\n\n Record not found sorry!";
    }
  }
}

void shopping::rem()
{
  fstream data, data1;
  int pkey;
  int token = 0;
  cout << "\n\n\t Delete product";
  cout << "\n\n\t Product code: ";
  cin >> pkey;
  data.open("database.txt", ios::in);
  if (!data)
  {
    cout << "File doesn't exist";
  }
  else
  {
    data1.open("database1.txt", ios::app | ios::out);
    data >> pcode >> pname >> price >> dis;
    while (!data.eof())
    {
      if (pcode == pkey)
      {
        cout << "\n\n\t Product deleted successfully";
        token++;
      }
      else
      {
        data1 << pcode << " " << pname << " " << price << " " << dis << "\n";
      }
      data >> pcode >> pname >> price >> dis;
    }
    data.close();
    data1.close();
    remove("database.txt");
    rename("database1.txt", "database.txt");
    if (token == 0)
    {
      cout << "\n\n Record not found";
    }
  }
}

void shopping::list()
{
  fstream data;
  data.open("database.txt", ios::in);
  cout << "\n\n|_____________________________________________\n";
  cout << "ProNo\t\tName\t\tPrice\n";
  cout << "\n\n|_____________________________________________\n";
  data >> pcode >> pname >> price >> dis;
  while (!data.eof())
  {
    cout << pcode << "\t\t" << pname << "\t\t" << price << "\n";
    data >> pcode >> pname >> price >> dis;
  }
  data.close();
}

void shopping::receipt()
{
  fstream data;
  int arrc[100];
  int arrq[100];
  char choice;
  int c = 0;
  float amount = 0;
  float dis = 0;
  float total = 0;

  cout << "\n\n\t\t\t RECEIPT ";
  data.open("database.txt", ios::in);
  if (!data)
  {
    cout << "\n\n Empty database";
  }
  else
  {
    data.close();

    list();
    cout << "\n_______________________________________\n";
    cout << "\n                                       \n";
    cout << "\n           Please place the order      \n";
    cout << "\n                                       \n";
    cout << "\n_______________________________________\n";
    do
    {
    m: // label to use with goto statement
      cout << "\n\n Enter Product code :";
      cin >> arrc[c];
      cout << "\n\n Enter the product quantity :";
      cin >> arrq[c];
      for (int i = 0; i < c; i++) // corrected loop condition
      {
        // iterates the loop finding if the latter values are the same as the current values
        if (arrc[c] == arrc[i])
        {
          cout << "\n\n Duplicate product code. Please try again!";
          goto m; // jump back to label 'm'
        }
      }
      c++;
      cout << "\n\n Do you want to buy another product? if yes then press y else no";
      cin >> choice;
    } while (choice == 'y'); // corrected string literal to character literal

    cout << "\n\n\t\t\t__________________RECEIPT____________________\n";
    cout << "\nProduct No\t product Name\t product quantity\tprice\tAmount with discount \n";

    for (int i = 0; i < c; i++)
    {
      data.open("database.txt", ios::in);
      data >> pcode >> pname >> price >> dis; // corrected variable order
      while (!data.eof())
      {
        if (pcode == arrc[i])
        {
          amount = price * arrq[i];
          dis = amount * (dis / 100);            // corrected discount calculation
          float amount_after_dis = amount - dis; // added variable for amount after discount
          total += amount_after_dis;
          cout << "\n"
               << pcode << "\t" << pname << "\t\t" << arrq[i] << "\t\t" << price << "\t" << amount << "\t" << amount_after_dis;
        }
        data >> pcode >> pname >> price >> dis;
      }
      data.close(); // moved file close inside loop
    }
  }
  cout << "\n\n_______________________________________________________";
  cout << "\n Total Amount : " << total;
}

int main()
{
  shopping s;
  s.menu();
}