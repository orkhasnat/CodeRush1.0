flag = "" #flag is kept hidden
#len(flag) = 30
key = "696969696969696969696969696969"
#len(key) = 30
xored_flag = ""

for i in range(len(flag)):
    xored_flag += chr(ord(flag[i]) ^ ord(key[i])) #ord function gives the ascii value of a character
                                                  # chr function is the reverse of ord

print(xored_flag)
#xored_flag = UVR\DLEQMAYKiPEfWfUVYUiMDPUR↨D