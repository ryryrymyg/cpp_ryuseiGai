from math import pi, cos, sqrt
import numpy as np

H_len, M_len, H, M = map(int, input().split())

#H_len = Lis[0]
#M_len = Lis[1]

#H = Lis[2]
#M = Lis[3]

M_deg = 2*pi * M / 60
H_deg = 2*pi * (60 * H + M) / 12 / 60

deff = 0.0

deff = abs(M_deg - H_deg)

ans = sqrt(H_len ** 2 + M_len ** 2 - (2 * H_len * M_len * cos(deff)))

print(ans)
