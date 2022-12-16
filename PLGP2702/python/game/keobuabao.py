from random import randint

player = input("Nhap Keo or Bua or Bao: ")
computer = randint(0,2)

if computer == 0: 
    computer = "bua"
if computer == 1:
    computer = "bao"
if computer == 2:
    computer = "keo"

print("----")
print("You choose: ", player)
print("Compputer choose: ", computer)
print("----")

if player == computer:
    print("Draw")
else:
    if player == "keo":
        if computer == "bua":
            print("Lose")
        else:
            print("Win")

    elif player == "bua":
        if computer == "bao":
            print("Lose")
        else:
            print("Win")

    elif player == "bao":
        if computer == "keo":
            print("lose")
        else:
            print("Win")
    else:
        print("Nhap lai!!!!")
