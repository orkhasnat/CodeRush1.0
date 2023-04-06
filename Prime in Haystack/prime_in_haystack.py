from Crypto.Util.number import getPrime, bytes_to_long, long_to_bytes
from random import randint

flag = 

def decrypt(p, q, e, ct):
    phi = (p - 1) * (q - 1)
    d = pow(e, -1, phi)
    m = pow(ct, d, p * q)
    m = long_to_bytes(m)
    return m

def encrypt(p, q, e, m):
    m = bytes_to_long(m.encode())
    ct = pow(m, e, p * q)
    return ct

primes = []
for i in range(100):
    p = getPrime(128)
    primes.append(p)

with open('primes.txt', 'a') as f:
    for p in primes:
        f.write(str(p) + "\n")


pn = randint(0, 99)
qn = randint(0, 99)
p = primes[pn]
q = primes[qn]
e = 65537
ct = encrypt(p, q, e, flag)
print(ct)
# ct = 50544513036589883652795124832011407239497591880475597490711542375974722633767

