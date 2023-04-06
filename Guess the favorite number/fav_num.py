import random, sys

queries = 0
secret_number = random.getrandbits(64)
flag = 'coderush{b1na4y_s3a4ch_ftw}'

print("Welcome To my Guess the favorite Number Game!")
print("The rule is simple : Guess my favorite number within 70 tries")
print("If your guessed number is greater than the correct one you will get a >")
print("If your guessed number is smaller than the correct one you will get a <")
print("If your guess is correct you will get the flag")
print("Good luck and Have fun!\n")

while True:

    if queries > 70:
        print('Query limit reached. Exiting....')
        sys.exit(1)
    
    num = int(input("Enter your guess: "))
    
    if num == secret_number:
        print('Here is your flag: {}'.format(flag))
        sys.exit(1)
    
    elif num > secret_number:
        print('>')
    
    else:
        print('<')

    queries += 1
