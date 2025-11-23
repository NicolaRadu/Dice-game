#!/usr/bin/env python3
import random

x = random.randint(1, 6)
y = random.randint(1, 6)

if x == 6 and y == 5:
        print("Dau cu zaru 6 5 n-am nevoie de servici")
elif x == 6 and y == 6:
        print("Dau cu zaru 6 6 ca mine nu se mai naste")
else:
        print(f"Dau cu zaru {x} {y}")

