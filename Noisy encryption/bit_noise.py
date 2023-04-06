import hashlib
from random import randint

def sha256_hash(string):
    hashed_string = hashlib.sha256(string.encode('utf-8')).hexdigest()
    return hashed_string

flag = ""

flag_hash = sha256_hash(flag)

def add_noise(c):
    c = ord(c)
    x = randint(1, 100000)
    if x % 2 == 0:
        c ^= 1 #alters the lsb with a 50% probability
    return chr(c)

noisy_flag = ""
for c in flag:
    noisy_flag += add_noise(c)

print(flag_hash) #8776bda0a1bcdefbb56dc0011ee5ae6577581076801972425e3504086560b044
print(noisy_flag) #coddstsiz0sb^t0gfl3|