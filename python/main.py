import sys

class BankAccount:
    def InitialInput(self):
        print("Enter your total balance please:")
        self.TotalBalance = int(input())

    def WithDraw(self):
        print("How much amount do you want to withdraw?")
        self.WithDrawAmount = int(input())

        if self.WithDrawAmount > self.TotalBalance:
            print("Insufficient Balance! Please Add More Money!")
            print("Do you wanna deposite money? Or Quit??")
            print("Press Q for Quit and M for Adding More Money")
            self.OptionOne = input()
            if self.OptionOne == 'Q' or self.OptionOne == 'q':
                sys.exit(0)
            elif self.OptionOne == 'M' or self.OptionOne == 'm':
                self.Deposite()
        else:
            self.TotalBalance = self.TotalBalance - self.WithDrawAmount
            print("Your new Balance is :", self.TotalBalance)
            self.Continue()

    def Deposite(self):
        print("How much amount do you want to input?")
        self.DepositeAmount = int(input())

        self.TotalBalance = self.TotalBalance + self.DepositeAmount
        print("Your new Balance is :", self.TotalBalance)
        self.Continue()

    def Continue(self):
        print("Do you want to continue?")
        print("Press 1 to WithDraw and 2 to Deposite and 3 to Quit!")
        self.Check = int(input())

        if self.Check == 1:
            self.WithDraw()
        elif self.Check == 2:
            self.Deposite()
        elif self.Check == 3:
            sys.exit(0)


Acc1 = BankAccount()

Acc1.InitialInput()
Acc1.WithDraw()
