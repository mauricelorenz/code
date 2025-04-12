def main():
    while(True):
        gross = float(input("Betrag:  "))
        if gross == 0:
            break
        cashback = float(input("Cashback: "))
        net = gross / 1.19
        cash_abs = net * (cashback / 100)
        sum = gross - cash_abs
        print("Endbetrag: " + str(sum))

main()