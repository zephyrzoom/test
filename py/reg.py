import re

content = """General Purpose Registers:
       rax = 0x0000000010004005
       rbx = 0x00000000ffffffff
       rcx = 0x00007fff51a54498
       rdx = 0x0000000000000000
       rdi = 0x00007fff51a54610
       rsi = 0x0000000007000806
       rbp = 0x00007fff51a544e0
       rsp = 0x00007fff51a54498
        r8 = 0x0000000000002c03
        r9 = 0x00000000ffffffff
       r10 = 0x0000000000000c00
       r11 = 0x0000000000000206
       r12 = 0x0000000000000c00"""

m = re.search(r"rax\s?=\s?(0x[0-9a-z]{16})", content)
print(m.group(0))
m = re.search(r"rbx\s?=\s?(0x[0-9a-z]{16})", content)
print(m.group(0))
