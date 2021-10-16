import random

f=open('Q2_Move_negetive_hidden_sample.txt', 'w')
total=50
N=  1000
f.write(str(total))
f.writelines("\n")
while(total):
  total-=1
  num = random.randint(1, N)
  f.write(str(num))
  f.writelines("\n")
  s=""
  for i in range(0,num):
    foo=[1,-1]
    s += str(random.randint(1,num)*random.choice(foo))+" "

  f.write(s[:-1])
  f.writelines("\n")
f.close()
