from Crypto.Util.number import long_to_bytes


#input the values of ct, e from the given file
ct = 
e = 

# factorize the given n from factordb and put the factors in p and q respectively
p = 
q = 

n = p * q
phi = (p - 1) * (q - 1)
d = pow(e, -1, phi)
m = pow(ct, d, n)
m = long_to_bytes(m).decode()
print("coderush{" + m + "}")