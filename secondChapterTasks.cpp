#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
  int x = 12321;
  cout << x/100;
}


/*
отобразить заглавную строку
пропуск строки
ФОР(от 1 до 5)
  отобразить строку * счетчик

Необходимо ввести по очереди 10 чисел и выбрать 2 наибольших, использовать можно только 3 переменные - 
для вводимого числа, счетчик, наибольшее.


  ********************************************************
  Найти наибольшее из введенных чисел
  number counter largest
  число, счетчик = 1, наибольшее = 0

  Фор(от 1 до 10)
    ввести число
    Если(Число > наибольшее)
      наибольшее = число
  Вывести наибольшее  

int main(){
  int number, counter, largest = 0;
  for(counter = 1; counter <= 10; counter++){
    cout << "Enter number\n";
    cin >> number;
    if(number > largest){
      largest = number;
    }
  }
  cout << largest;
  
}
    


  *******************************************************

  ставка1, ставка2, часы, выплата

  ПОКА(часы != -1)
    Предложить ввести количество отработынных часов
    ЕСЛИ(часы не -1)
      ЕСЛИ(Часы больше 40)
        выплата = ((часы-40)Ставка2 + часы*Ставка1)
      Иначе 
        часы*ставка1
  int main(){
  int hours, rateBase, payout=0;
  while (hours != -1){
    cout << "Enter hours or type -1 to exit. \n";
    cin >> hours;
    if(hours != -1){
      cout << "Enter your base rate. \n";
      cin >> rateBase;
      float rateBonus = 1.5*rateBase;
      if(hours >= 40){
        payout = ((hours - 40)*rateBonus + 40*rateBase);
        cout << "Your payout: " << payout << endl;
      }
      else{
        payout = hours*rateBase;
        cout << "Your payout: " << payout << endl;
      }
    }
    else{
      cout << "End of programm." << endl;
    }
  }  

}




  **************************************************
    Рассчет дохода диллера на основе его дохода ->

    доход, ставка, допы, выплата
    ПОКА(доход != -1)
      Пригласить ввести доход
      
      ЕСЛИ(доход != -1)
        выплата = доход*ставка + допы
        вывести выплату на экран
int main(){
 float income, rate = 0.09, bonus = 200, payout;
 while(income != -1){
   cout << "Enter income or type -1 to exit.\n";
   cin >> income;
   if(income != -1){
     payout = income * rate + bonus;
     cout << "your payout = " << payout << endl;
   }
   else{
     cout << "idi robotay!";
   }
 } 
}




  
 **************************************************************************
    бенз, дист, расход, счетчик_бочек, средний_расход

    ПОКА(бенз != -1)
      пригласить ввести бенз 
    
      ЕСЛИ(бенз != -1 И бенз не )
        предложить ввести дист 
        посчитать расход
        вывести расход на экран
        ++ счетчик_бочек
        средний_расход += расход
    ЕСЛИ (счетчик бочек != 0)
      средний_расход /= счетчик_бочек
      вывести общее средне на экран
    Иначе пошол нахой

    int main(){
  float benz, dist, avrg = 0, tanks = 0, total_avg = 0;
  
  while(benz != -1){
    cout << "Enter volume of gasoline and -1 to exit. \n";
    cin >> benz;

    if(benz != -1 && benz != 0){
      cout << "Enter distance \n";
      cin >> dist;
      avrg = dist / benz;
      ++tanks;
      total_avg +=avrg;
      cout << avrg << " kilometers by 1 liter of gasoline" << endl;
    }    
    else
    {
      cout << "End of programm" << endl;
    }
    
  }
  if(tanks != 0){
    total_avg /= tanks;
    cout << "Average rate is: " << total_avg << endl;
  }
  else
  {
    cout << "Poshol nahoi";
  }  
}
*********************************************************





    int x = 1;
  while(x <= 20){
    cout << x;
    if( x%5 == 0 ){
      cout << "\n";
    } else {
      cout << "\t";
    }
    x++;
  }

  float x = pow(2.5, 3);
  cout << setiosflags(ios::showpoint | ios::fixed) << setprecision(2) <<  x;

  ////////форматированный вывод
  float i = 333.54627;
  std::cout << std::setiosflags(std::ios::fixed | std::ios::showpoint | std::ios::left)
    << std::setprecision(1) << std::setw(15) << i << std::endl
    << std::setprecision(2) << std::setw(15) << i << std::endl
    << std::setprecision(3) << std::setw(15) << i << std::endl;  
  
  ///////////////////////
  int sum = 0;
  for(int i =1; i <= 99; i += 2){
    sum += i;
    std::cout << i << " & " << sum << std::endl;
  }
  ///////////////  
  int power = 1, x = 0, y = 0, i = 1;
  
  std::cout << "Enter base" << std::endl;
  std::cin >> x;
  std::cout << "Enter power" << std::endl;
  std::cin >> y;
    
  while (i <= y){
    power *= x;
    i++;
    std::cout << x << " " << i << std::endl;
  } 

  std::cout << "Result: " << power << std::endl;
*/