import random

name='/media/adhikram/Arka/Devsnest_DSA/Q4_Merge_Without_Extra_Space/Merge_Without_Extra_Space_hidden_sample.txt'
f=open(name, 'w')
total=50
N=  1000
M=  1000
f.write(str(total))
f.writelines("\n")
while(total):
  total-=1
  number = random.randint(1, N)
  number1 = random.randint(1, M)
  f.write(str(number)+" "+str(number1))
  f.writelines("\n")
  s=""
  for i in range(0,number):
    s += str(random.randint(1,1000))+" "

  f.write(s[:-1])
  f.writelines("\n")  
  s=""
  for i in range(0,number1):
    s += str(random.randint(1,100))+" "

  f.write(s[:-1])
  f.writelines("\n")
f.close()
