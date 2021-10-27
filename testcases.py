import random

name="Q18_Combinations_"
total=1
# N=[2,5,10,50,100,500,1000,5000,10000,50000,100000]
# N=[1,5,10,20,30,40,60,70,80,90,100]
# N=[1,5,10,15,20,25,30,35,40,45,50]
# N=[1,50,100,150,200,250,300,350,400,450,500]
# N=[1,50,100,250,500,700,750,800,900,950,1000]
# N=[15,50,100,150,200,250,500,1000,5000,6000,10000]
N=[1,3,5,7,9,11,13,15,17,19,21]
while(total<11):
  f=open(name+str(total)+'.txt', 'w')
  
  number = random.randint(N[total-1], N[total])
  number1 = random.randint(N[total-1], number-1)
  
  
  f.write(str(number))
  f.writelines(" ")
  f.write(str(number1))
  f.writelines("\n")
  # s=""
  # for i in range(0,number):
  #   s += str(random.randint(0,N[total-1]*10))+" "

  # f.write(s[:-1])
  # f.writelines("\n")
  # s=""
  # for i in range(0,number1):
  #   s += str(random.randint(0,1000000))+" "

  # f.write(s[:-1])
  # f.writelines("\n")
  f.close()
  total+=1
