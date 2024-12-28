a = int(input())
b= int(input())
c = int(input())

d=a+b*c
d1 = a*(b+c)
d2 = a*b*c
d3 =(a+b)* c
d4 = a+b+c
d5 = (a*b)+c
d6 = a+(b*c)
r=  max(d5,d6)
m = max(d,d1)
m2 = max(d2,d3)
result =  max(m,m2)
ans = max(d4,result)
last  = max(ans,r)
print(last)