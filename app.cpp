#include <iostream>
#include <string>
#include <vector>
#include <exception>
#include "Sales_data.h"

using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int main()
{
  Sales_data total;
  double price = 0;
  if (cin >> total.bookNo >> total.units_sold >> price)
  {
    Sales_data trans;
    double price = 0;
    while(cin >> trans.bookNo >> trans.units_sold >> price)
    {
      if(total.bookNo == trans.bookNo)
      {
	total.units_sold += trans.units_sold;
	total.revenue = price * total.units_sold;
      }
      else
      {
	cout << total.bookNo << " " << total.units_sold << " " << total.revenue;
	total.bookNo = trans.bookNo;
	total.units_sold = trans.units_sold;
	total.revenue = trans.revenue;
      }
    }
    cout << total.bookNo << total.units_sold << price;
  }
  else
  {
    std::cerr << __FILE__ << ":" << __func__ << ":" << __LINE__ << "\n"
	      << "Wrong Input";
    return -1;
  }
}
