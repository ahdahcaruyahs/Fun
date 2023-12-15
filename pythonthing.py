'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
import string
import random

print ('This is python!')
x = 0
while(x<=10):
    print("Number:",x)
    x = x+1
    
z = [1,2,3,4,5,6,7,8,9,0]
y = random.choice(z)
print("\n")
print("Pseudo-random Number choice:",y)

def generate_random_string(length):
    characters = string.ascii_letters + string.digits + string.punctuation
    random_string = ''.join(random.choice(characters) for _ in range(length))
    return random_string

# Example: Generate a random string of length 12
random_string = generate_random_string(500)
print("Random String:", random_string)
