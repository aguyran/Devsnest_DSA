import random
name='/media/adhikram/Arka/Devsnest_DSA/Q02_Move_negetive/Q2_Move_negetive_hidden_sample'

total=1
N=  1000
while(total<11):
  f=open(name+str(total)+'.txt', 'w')
  total+=1
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
