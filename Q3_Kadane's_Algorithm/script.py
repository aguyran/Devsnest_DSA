import random

name='sort012_hidden_sample.txt'
f=open(name, 'w')
total=50
N=  1000
f.write(str(total))
f.writelines("\n")
while(total):
  total-=1
  number = random.randint(1, N)
  f.write(str(number))
  f.writelines("\n")
  s=""
  for i in range(0,number):
    s += str(random.randint(0,2))+" "

  f.write(s[:-1])
  f.writelines("\n")
  f.close()
