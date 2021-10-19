import random

name='/media/adhikram/Arka/Devsnest_DSA/Q01sort012/sort012_hidden_sample_'

total=1
N=  100
while(total<11):
  f=open(name+str(total)+'.txt', 'w')
  total+=1
  number = random.randint(1, N)
  f.write(str(number))
  f.writelines("\n")
  s=""
  for i in range(0,number):
    s += str(random.randint(1,100))+" "

  f.write(s[:-1])
  f.writelines("\n")
  f.close()
