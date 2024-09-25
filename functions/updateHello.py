def nameAsk():
    print("Hello "+ input("what is your name?: "))
def runName():
    nameAsk()
    check = input("would you like to input a different name\n if so press y: ").strip().lower()
    if check == "y":
        nameAsk()
    else:
        runName
runName()