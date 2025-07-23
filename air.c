//1. Distance Calculation for a Journey
#include <stdio.h>

int main() {
    float item1 = 250.75;  
    float item2 = 349.50; 
    float tax = 0.18;      
    float subtotal = item1 + item2;
	float taxAmount = subtotal * tax;
	float discount = 50.00; 
    float total = (subtotal + taxAmount) - discount;
	printf("Subtotal: %.2f\n", subtotal);
    printf("Tax: %.2f\n", taxAmount);
    printf("Discount: %.2f\n", discount);
    printf("Total: %.2f\n", total);

    return 0;
}
//2. Bank Interest Calculation
#include <stdio.h>

int main() {
    float principal = 10000.0;   
    float rate = 5.0;            
    int time = 3;                
	float interest = (principal * rate * time) / 100;
	float totalAmount = principal + interest;
	printf("Interest Earned: %.2f INR\n", interest);
    printf("Total Amount: %.2f INR\n", totalAmount);

    return 0;
}
//3. Body Mass Index (BMI) Calculator
#include <stdio.h>

int main() {
    float weight = 68.0;  
    float height = 1.75;  
    float bmi = weight / (height * height);
	printf("Your BMI is: %.2f\n", bmi);

    return 0;
}
//4. Monthly Salary Calculation
#include <stdio.h>

int main() {
    float basicSalary = 50000.0;  
    float bonus = 5000.0;         
    float taxRate = 0.10;         
    float grossSalary = basicSalary + bonus;
	float tax = grossSalary * taxRate;
	float netSalary = grossSalary - tax;
	printf("Gross Salary: %.2f INR\n", grossSalary);
    printf("Tax: %.2f INR\n", tax);
    printf("Net Salary: %.2f INR\n", netSalary);

    return 0;
}
//5. Simple Bill Splitting App
#include <stdio.h>

int main() {
    float totalBill = 4800.0;  
    int People = 4;    
	float amount = totalBill / People;
	printf("Each person pays: %.2f INR\n", amount);

    return 0;
}
//6. Pizza Slice Distribution
#include <stdio.h>

int main() {
    int totalSlices = 15;     
    int friends = 4;          
    int slicesPerFriend = totalSlices / friends;
	int leftoverSlices = totalSlices % friends;
	printf("Each friend gets %d slices.\n", slicesPerFriend);
    printf("Leftover slices: %d\n", leftoverSlices);

    return 0;
}
//7. Fitness Progress Tracker
#include <stdio.h>

int main() {
    float caloriesPerMinute = 8.5;  
    int workoutTime = 45;          
	float totalCalories = caloriesPerMinute * workoutTime;
	printf("Total calories burned: %.2f\n", totalCalories);

    return 0;
}
//8. Currency Conversion
#include <stdio.h>

int main() {
    float amountINR = 10000.0;  
    float exchangeRateUSD = 82.5; 
	float amountUSD = amountINR / exchangeRateUSD;
	printf("Amount in USD: %.2f\n", amountUSD);
	return 0;
}
//9. Loan Repayment Calculator
#include <stdio.h>

int main() {
    float loanAmount = 500000.0;  
    float annualRate = 7.5;       
    int months = 60;              
	float monthlyRate = annualRate / 12 / 100;
	float monthlyInstallment = (loanAmount * monthlyRate) / (1 - (1 / pow(1 + monthlyRate, months)));
	float totalPayable = monthlyInstallment * months;
	printf("Monthly Installment: %.2f INR\n", monthlyInstallment);
    printf("Total Payable Amount: %.2f INR\n", totalPayable);
	return 0;
}
//10.Temperature Converter
#include <stdio.h>

int main() {
    float celsius = 36.6;  
	float fahrenheit = (celsius * 9 / 5) + 32;
	printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);
	return 0;
}
//11. Savings Goal Tracker
#include <stdio.h>

int main() {
    float savingsGoal = 100000.0;  
    float monthlySavings = 7500.0; 
	int monthsNeeded = savingsGoal / monthlySavings;
	printf("Months needed to reach your goal: %d\n", monthsNeeded);
	return 0;
}
//12. Population Growth Estimator
#include <stdio.h>

int main() {
    int currentPopulation = 1000000;  
    float growthRate = 0.02;          
    int years = 5;                    

    
    int futurePopulation = currentPopulation * (1 + growthRate * years);

    printf("Estimated Population in %d years: %d\n", years, futurePopulation);

    return 0;
}
//13. Area and Perimeter of a Rectangle
#include <stdio.h>

int main() {
    float length = 12.5;  
    float width = 8.2;     
	float area = length * width;
	float perimeter = 2 * (length + width);
	printf("Area: %.2f cm²\n", area);
    printf("Perimeter: %.2f cm\n", perimeter);

    return 0;
}
//14. Electricity Bill Calculator
#include <stdio.h>

int main() {
    float unitsConsumed = 350.0;  
    float costPerUnit = 5.75;     
	float totalBill = unitsConsumed * costPerUnit;
	printf("Total Electricity Bill: %.2f INR\n", totalBill);

    return 0;
}
//15. Student Exam Average Calculator
#include <stdio.h>

int main() {
    float math = 85.0;    
    float science = 92.5; 
    float english = 78.0; 
	float totalMarks = math + science + english;
    float averageMarks = totalMarks / 3;
	printf("Total Marks: %.2f\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);

    return 0;
}
//16. Speed Calculator
#include <stdio.h>

int main() {
    float distanceCovered = 150.0; 
    float timeTaken = 2.5;         
    float averageSpeed = distanceCovered / timeTaken;
    printf("Average Speed: %.2f km/h\n", averageSpeed);
    return 0;
}
//17. Age Calculator
#include <stdio.h>

int main() {
    int birthYear = 1995;    
    int currentYear = 2025;  
	int age = currentYear - birthYear;
	printf("Your age is: %d years\n", age);
	return 0;
}
//18. Fuel Cost Calculator
#include <stdio.h>

int main() {
    float distance = 400.0;       
    float mileage = 15.0;         
    float fuelPrice = 95.0;       

    float fuelRequired = distance / mileage;
    float totalCost = fuelRequired * fuelPrice;

    printf("Fuel Required: %.2f liters\n", fuelRequired);
    printf("Total Fuel Cost: %.2f INR\n", totalCost);

    return 0;
}
//19. Profit or Loss Calculator
#include <stdio.h>

int main() {
    float costPrice = 1200.0;  
    float sellingPrice = 1500.0; 

    
    float profitOrLoss = sellingPrice - costPrice;

    if (profitOrLoss > 0) {
        printf("Profit: %.2f INR\n", profitOrLoss);
    } else if (profitOrLoss < 0) {
        printf("Loss: %.2f INR\n", -profitOrLoss);
    } else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
//20. Shopping Cart Discount
#include <stdio.h>

int main() {
    float originalPrice = 1500.0;  
    float discount1 = 0.10;        
    float discount2 = 0.05;        
	float priceAfterFirstDiscount = originalPrice - (originalPrice * discount1);
	float finalPrice = priceAfterFirstDiscount - (priceAfterFirstDiscount * discount2);
	printf("Final Price after all discounts: %.2f INR\n", finalPrice);

    return 0;
}
//21. Calories Remaining
#include <stdio.h>

int main() {
    int dailyCalorieLimit = 2000;   
    int breakfastCalories = 500;   
    int lunchCalories = 700;       
	int remainingCalories = dailyCalorieLimit - (breakfastCalories + lunchCalories);
	printf("Remaining Calories for the Day: %d\n", remainingCalories);

    return 0;
}
//22. Work Hours Tracker
#include <stdio.h>

int main() {
    int regularHours = 40;  
    int hoursWorked = 50;   
	int overtime = hoursWorked - regularHours;
	printf("Overtime Hours: %d\n", overtime);

    return 0;
}
//23. Fuel Efficiency for Multiple Vehicles
#include <stdio.h>

int main() {
    float car1Distance = 500.0;   
    float car1Fuel = 40.0;        
    float car2Distance = 600.0;   
    float car2Fuel = 50.0;        

    float car1Efficiency = car1Distance / car1Fuel;
    float car2Efficiency = car2Distance / car2Fuel;

    printf("Car 1 Fuel Efficiency: %.2f km/l\n", car1Efficiency);
    printf("Car 2 Fuel Efficiency: %.2f km/l\n", car2Efficiency);

    return 0;
}
//24. Currency Denomination
#include <stdio.h>

int main() {
    int amount = 3760;  
    int note = 500;     

    int numberOfNotes = amount / note;
    int leftoverAmount = amount % note;

    printf("Number of %d INR notes: %d\n", note, numberOfNotes);
    printf("Leftover Amount: %d INR\n", leftoverAmount);

    return 0;
}
//25. Cost Per Unit of a Pack
#include <stdio.h>

int main() {
    int totalItems = 24;  
    float totalCost = 480.0;  
    float costPerItem = totalCost / totalItems;
    printf("Cost per item: %.2f INR\n", costPerItem);

    return 0;
}
//26. Travel Budget Planner
#include <stdio.h>

int main() {
    float flightCost = 12000.0;     
    float hotelCost = 8000.0;       
    float foodCost = 3000.0;        
	float totalCost = flightCost + hotelCost + foodCost;
	printf("Total Trip Cost: %.2f INR\n", totalCost);

    return 0;
}
//27. Time Converter
#include <stdio.h>

int main() {
    int hours = 5;  
	int minutes = hours * 60;
    int seconds = minutes * 60;
	printf("Time in Minutes: %d\n", minutes);
    printf("Time in Seconds: %d\n", seconds);

    return 0;
}
//28.Room Painting Cost
#include <stdio.h>

int main() {
    float roomLength = 4.5;  
    float roomWidth = 3.0;   
    float costPerSquareMeter = 25.0;  
	float area = roomLength * roomWidth;
	float totalCost = area * costPerSquareMeter;
	printf("Total Painting Cost: %.2f INR\n", totalCost);

    return 0;
}
//29. Water Bottle Tracker
#include <stdio.h>

int main() {
    int hikers = 5;         
    float waterPerPerson = 2.5;  
	float totalWater = hikers * waterPerPerson;

    printf("Total Water Needed: %.2f liters\n", totalWater);

    return 0;
}
//30. Profit Percentage Calculation
#include <stdio.h>

int main() {
    float costPrice = 200.0;    
    float sellingPrice = 250.0; 
	float profit = sellingPrice - costPrice;
	float profitPercentage = (profit / costPrice) * 100;
	printf("Profit: %.2f INR\n", profit);
    printf("Profit Percentage: %.2f%%\n", profitPercentage);

    return 0;
}
//31. Fuel Cost Split
#include <stdio.h>

int main() {
    float totalFuelCost = 2500.0;  
    int friends = 5;              
	float costPerFriend = totalFuelCost / friends;
	printf("Cost per friend: %.2f INR\n", costPerFriend);

    return 0;
}
//32. Average Speed for a Round Trip
#include <stdio.h>

int main() {
    float distanceTo = 120.0; 
    float distanceBack = 130.0; 
    float totalTime = 5.0;    
    float totalDistance = distanceTo + distanceBack;
    float averageSpeed = totalDistance / totalTime;

    printf("Total Distance: %.2f km\n", totalDistance);
    printf("Average Speed: %.2f km/h\n", averageSpeed);

    return 0;
}
//33. Tip Calculator
#include <stdio.h>

int main() {
    float billAmount = 1500.0;  
    float tipPercentage = 0.10; 

    
    float tipAmount = billAmount * tipPercentage;

    
    float totalAmount = billAmount + tipAmount;

    printf("Tip Amount: %.2f INR\n", tipAmount);
    printf("Total Amount: %.2f INR\n", totalAmount);

    return 0;
}
//35. Cooking Recipe Adjustment
#include <stdio.h>

int main() {
    int originalServings = 4;   
    float flour = 200.0;          
    int desiredServings = 6;      

    float adjustedFlour = (flour / originalServings) * desiredServings;

    printf("Flour needed for %d servings: %.2f grams\n", desiredServings, adjustedFlour);

    return 0;
}
//36. Investment Growth
#include <stdio.h>

int main() {
    float principal = 10000.0;  
    float annualRate = 0.08;    
    int years = 5;              
	float totalValue = principal * (1 + (annualRate * years));

    printf("Total Investment Value: %.2f INR\n", totalValue);

    return 0;
}
//37. BMI with User Input
#include <stdio.h>

int main() {
    float weight, height;

   
    printf("Enter your weight in kg: ");
    scanf("%f", &weight);
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    float bmi = weight / (height * height);

    printf("Your BMI is: %.2f\n", bmi);

    return 0;
}
//38. Daily Step Goal Tracker
#include <stdio.h>

int main() {
    int dailyGoal = 10000;  
    int stepsTaken = 6500;  

   
    int stepsRemaining = dailyGoal - stepsTaken;

    printf("Steps remaining to reach your goal: %d\n", stepsRemaining);

    return 0;
}
//39. Split Bill with Tips
#include <stdio.h>

int main() {
    float billAmount = 2400.0;  
    float tipPercentage = 0.15; 
    int numberOfPeople = 6;     
	float totalWithTip = billAmount + (billAmount * tipPercentage);
    float amountPerPerson = totalWithTip / numberOfPeople;
	printf("Total with Tip: %.2f INR\n", totalWithTip);
    printf("Amount per Person: %.2f INR\n", amountPerPerson);

    return 0;
}
//40. Fuel Refills for a Trip
#include <stdio.h>

int main() {
    float totalDistance = 800.0;  
    float mileage = 15.0;         
    float fuelTankCapacity = 40.0; 
	float totalFuelRequired = totalDistance / mileage;
    int refills = (int)(totalFuelRequired / fuelTankCapacity);

    if (totalFuelRequired > fuelTankCapacity * refills) {
        refills++;
    }

    printf("Total Fuel Required: %.2f liters\n", totalFuelRequired);
    printf("Number of Refills Needed: %d\n", refills);

    return 0;
}
//41. Split Time in a Relay Race
#include <stdio.h>

int main() {
    float totalTime = 48.5;  
    int runners = 4;         
	float timePerRunner = totalTime / runners;

    printf("Average Time per Runner: %.2f minutes\n", timePerRunner);

    return 0;
}
//42. Cake Slice Distribution
#include <stdio.h>

int main() {
    int totalSlices = 20;  
    int guests = 7;         
    int slicesPerGuest = totalSlices / guests;
    int leftoverSlices = totalSlices % guests;

    printf("Each guest gets %d slices.\n", slicesPerGuest);
    printf("Leftover slices: %d\n", leftoverSlices);

    return 0;
}
//43. Simple Tax Calculator
#include <stdio.h>

int main() {
    float income = 750000.0;  
    float taxRate = 0.20;     
   float tax = income * taxRate;
   printf("Tax to be paid: %.2f INR\n", tax);

    return 0;
}
//44. EMI Calculator
#include <stdio.h>
#include <math.h>

int main() {
    float loanAmount = 500000.0;  
    float annualRate = 8.0;       
    int tenureMonths = 24;        
	float monthlyRate = annualRate / 12 / 100;
	float emi = (loanAmount * monthlyRate * pow(1 + monthlyRate, tenureMonths)) /
                (pow(1 + monthlyRate, tenureMonths) - 1);
	printf("Monthly EMI: %.2f INR\n", emi);

    return 0;
}
//45. Net Profit Calculation
#include <stdio.h>

int main() {
    float revenue = 150000.0;   
    float expenses = 85000.0;    
	float netProfit = revenue - expenses;
	printf("Net Profit: %.2f INR\n", netProfit);

    return 0;
}
//46. Split Workout Time
#include <stdio.h>

int main() {
    int totalWorkoutTime = 90;   
    int intervalTime = 15;      
	int intervals = totalWorkoutTime / intervalTime;
    int leftoverTime = totalWorkoutTime % intervalTime;

    printf("Number of intervals: %d\n", intervals);
    printf("Remaining time: %d minutes\n", leftoverTime);

    return 0;
}
//47. Household Budget
#include <stdio.h>

int main() {
    float monthlyIncome = 60000.0;    
    float rent = 20000.0;             
    float groceries = 10000.0;        
    float utilities = 5000.0;         

    
    float totalExpenses = rent + groceries + utilities;
    float savings = monthlyIncome - totalExpenses;

    printf("Total Expenses: %.2f INR\n", totalExpenses);
    printf("Savings: %.2f INR\n", savings);


    return 0;
}
//48. Paint Coverage
#include <stdio.h>

int main() {
    float wallArea = 150.0;    
    float coveragePerCan = 20.0; 

    
    int cansRequired = (int)(wallArea / coveragePerCan);
    if (wallArea > coveragePerCan * cansRequired) {
        cansRequired++;
    }

    printf("Cans of paint required: %d\n", cansRequired);

    return 0;
}
//49. School Supplies Distribution
#include <stdio.h>

int main() {
    int totalPencils = 125;   
    int students = 24;        

    
    int pencilsPerStudent = totalPencils / students;
    int leftoverPencils = totalPencils % students;

    printf("Each student gets: %d pencils\n", pencilsPerStudent);
    printf("Leftover pencils: %d\n", leftoverPencils);

    return 0;
}
//50. Internet Data Usage
#include <stdio.h>

int main() {
    float totalData = 50.0;   
    float dailyUsage = 1.75;   

   
    int days = (int)(totalData / dailyUsage);

    printf("Your data plan will last for approximately %d days.\n", days);

    return 0;
}
//51. Road Toll Calculator
#include <stdio.h>


int main() {
    int vehicles = 30;        
    float tollPerVehicle = 150.0; 

    float totalToll = vehicles * tollPerVehicle;

    printf("Total Toll Fees: %.2f INR\n", totalToll);

    return 0;
}
//52. Shared Internet Speed
#include <stdio.h>

int main() {
    float totalSpeed = 100.0;  
    int users = 4;            


    float speedPerUser = totalSpeed / users;

    printf("Internet speed per user: %.2f Mbps\n", speedPerUser);

    return 0;
}
//53. Distance to Empty (DTE)
#include <stdio.h>

int main() {
    float fuelLeft = 10.5; 
    float mileage = 18.0;   

   
    float distance = fuelLeft * mileage;

    printf("Distance to empty: %.2f km\n", distance);

    return 0;
}
//54. Monthly Savings Growth
#include <stdio.h>

int main() {
    float monthlySaving = 5000.0;  
    int months = 12;              

   
    float totalSavings = monthlySaving * months;

    printf("Total Savings in %d months: %.2f INR\n", months, totalSavings);

    return 0;
}
//55. Fuel Split for Multiple Cars
#include <stdio.h>

int main() {
    int cars = 5;             
    float fuelPerCar = 40.0;    

   
    float totalFuel = cars * fuelPerCar;

    printf("Total Fuel Needed: %.2f liters\n", totalFuel);

    return 0;
}
//56. Weekly Workout Tracker
#include <stdio.h>

int main() {
    float dailyCalories = 500.0;  
    int workoutDays = 7;          

    
    float weeklyCalories = dailyCalories * workoutDays;

    printf("Total Weekly Calories Burned: %.2f\n", weeklyCalories);

    return 0;
}
//57. Classroom Table Distribution
#include <stdio.h>

int main() {
    int students = 50;    
    int tables = 8;       

 
    int studentsPerTable = students / tables;
    int remainingStudents = students % tables;

    printf("Students per table: %d\n", studentsPerTable);
    printf("Remaining students without a table: %d\n", remainingStudents);

    return 0;
}
//58. Time Spent on a Task
#include <stdio.h>

int main() {
    float session1 = 1.5;  
    float session2 = 2.0;  
    float session3 = 1.0;  

    
    float totalTime = session1 + session2 + session3;

    printf("Total Time Spent: %.2f hours\n", totalTime);

    return 0;
}
//59.Area of a Circle
#include <stdio.h>

int main() {
    float radius = 5.0;       
    float pi = 3.14159;       

   float area = pi * radius * radius;

    printf("Area of the Circle: %.2f\n", area);

    return 0;
}
//60.Simple Interest
#include <stdio.h>

int main() {
    float principal = 10000.0;  
    float rate = 5.0;           
    float time = 3;             

    
    float interest = (principal * rate * time) / 100;

    printf("Simple Interest: %.2f\n", interest);

    return 0;
}
//62.BMI Calculator
#include <stdio.h>

int main() {
    float weight = 70.0;  
    float height = 1.75;  

    float bmi = weight / (height * height);

    printf("BMI: %.2f\n", bmi);

    return 0;
}
//63.Fuel Cost Calculator 
#include <stdio.h>

int main() {
    float fuel_price, fuel_efficiency, distance, liters_needed, total_cost;


    printf("Enter the price of fuel per liter: ₹");
    scanf("%f", &fuel_price);

    printf("Enter your car's fuel efficiency (km per liter): ");
    scanf("%f", &fuel_efficiency);

    printf("Enter distance to travel (in km): ");
    scanf("%f", &distance);

  
    liters_needed = distance / fuel_efficiency;
    total_cost = liters_needed * fuel_price;

  
    printf("\nFuel Needed: %.2f liters\n", liters_needed);
    printf("Total Fuel Cost: ₹%.2f\n", total_cost);

    return 0;
}
//64. Student Grade Calculator
#include <stdio.h>

int main() {
    float fuel_price, fuel_efficiency, distance, liters_needed, total_cost;

   
    printf("Enter the price of fuel per liter: ₹");
    scanf("%f", &fuel_price);

    printf("Enter your car's fuel efficiency (km per liter): ");
    scanf("%f", &fuel_efficiency);

    printf("Enter distance to travel (in km): ");
    scanf("%f", &distance);

    
    liters_needed = distance / fuel_efficiency;
    total_cost = liters_needed * fuel_price;


    printf("\nFuel Needed: %.2f liters\n", liters_needed);
    printf("Total Fuel Cost: ₹%.2f\n", total_cost);

    return 0;
}
//65.Salary Calculator 
#include <stdio.h>

int main() {
    float basic_salary, hra_percent, da_percent, tax_percent;
    float hra, da, gross_salary, tax, net_salary;

    printf("Enter your Basic Salary: ₹");
    scanf("%f", &basic_salary);

    printf("Enter HRA percentage: ");
    scanf("%f", &hra_percent);

    printf("Enter DA percentage: ");
    scanf("%f", &da_percent);

    printf("Enter Tax percentage: ");
    scanf("%f", &tax_percent);

   
    hra = (hra_percent / 100) * basic_salary;
    da = (da_percent / 100) * basic_salary;
    gross_salary = basic_salary + hra + da;
    tax = (tax_percent / 100) * gross_salary;
    net_salary = gross_salary - tax;

  
    printf("\nBasic Salary: ₹%.2f\n", basic_salary);
    printf("HRA (%.2f%%): ₹%.2f\n", hra_percent, hra);
    printf("DA (%.2f%%): ₹%.2f\n", da_percent, da);
    printf("Gross Salary: ₹%.2f\n", gross_salary);
    printf("Tax Deduction (%.2f%%): ₹%.2f\n", tax_percent, tax);
    printf("Net Salary: ₹%.2f\n", net_salary);

    return 0;
}
//66.Restaurant Bill Splitter
#include <stdio.h>

int main() {
    float bill_amount, tax_percent, tip_percent, total_bill, per_person;
    int num_friends;

  
    printf("Enter total food bill amount: ₹");
    scanf("%f", &bill_amount);
    
    printf("Enter tax percentage: ");
    scanf("%f", &tax_percent);
    
    printf("Enter tip percentage: ");
    scanf("%f", &tip_percent);
    
    printf("Enter number of friends: ");
    scanf("%d", &num_friends);

   
    float tax = (tax_percent / 100) * bill_amount;
    float tip = (tip_percent / 100) * bill_amount;
    total_bill = bill_amount + tax + tip;
    per_person = total_bill / num_friends;

    printf("\n----- Restaurant Bill Summary -----\n");
    printf("Food Bill: ₹%.2f\n", bill_amount);
    printf("Tax (%.2f%%): ₹%.2f\n", tax_percent, tax);
    printf("Tip (%.2f%%): ₹%.2f\n", tip_percent, tip);
    printf("Total Bill: ₹%.2f\n", total_bill);
    printf("Each Person Pays: ₹%.2f\n", per_person);

    return 0;
}

