# N ~ 2N-1
#    *
#   ***
#  *****
# *******
#*********
#*******
#   *****
#    ***
#     *    

N = int(input()) #5
c = 1
d = 1
e = 2
for i in range(2*N):
    f = N-i-1 # 6-6-1
    g = i-N-1
    c = 2*i-1 #11
    if c > 2*N-1: 
        d = 2*(i-e)-1 
        print(" "*g,"*"*d)
        e += 2
    else:
        print(" "*f,"*"*c)
        
# n = int(input())
# for i in range(1, n):
#     print(' '*(n-i) + '*'*(2*i-1))
# for i in range(n, 0, -1):
#     print(' '*(n-i) + '*'*(2*i-1))