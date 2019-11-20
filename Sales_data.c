#include <iostream>
#include "Sales_data.h"

int main()
{
  Sales_data data1, data2;

  double price = 0.0;
  std::cin >> data1.bookNo >> data1.units_sold >> price;
  data1.revenue = data1.units_sold * price;

  price = 0;
  std::cin >> data2.bookNo >> data2.units_sold >> price;
  data2.revenue = data2.units_sold * price;

  if(data1.bookNo == data2.bookNo)
  {
    int total_sold = data1.units_sold + data2.units_sold;
    double total_revenue = data1.revenue + data2.revenue;
    std::cout << "total sold: " << total_sold << std::endl;
    std::cout << "total revenue: " << total_revenue << std::endl;
  }
  else
  {
    std::cerr << "Data must refer to the same ISBN";
    return -1;
  }
  
  return 0;
}
