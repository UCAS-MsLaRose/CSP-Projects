
print("Hello, and welcome to your financial calculator!\n")
income=float(input("What is your monthly income: "))
rent=float(input("What is your monthly rent: "))
utilities=float(input("What is your monthly utilities: "))
groceries=float(input("What is your monthly groceries: "))
transportation=float(input("What is your monthly transportation costs: "))
savings = income *.2
expenses = rent+utilities+groceries+transportation
spending = income-expenses-savings
prent = rent/income *100
putilities = utilities/income *100
pgroceries = groceries/income *100
ptransportation = transportation/income *100
psavings = savings/income * 100
pexpenses = expenses/income * 100

print(f"Your monthly income is ${income:.2f}\n")
print(f"Your monthly expenses are ${expenses:.2f}\n")
print(f"Your monthly savings is ${savings:.2f}\n")
print(f"Your monthly spending money is ${spending:.2f}\n")
print(f"Your rent is {int(prent)}% of your monthly income\n")
print(f"Your utilities are {int(putilities)}% of your monthly income\n")
print(f"Your groceries are {int(pgroceries)}% of your monthly income\n")
print(f"Your transportation is {int(ptransportation)}% of your monthly income\n")
print(f"Your savings are {int(psavings)}% of your monthly income\n")
print(f"Your expenses are {int(pexpenses)}% of your monthly income\n")