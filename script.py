# import os 
# import csv

# with open('sheet1.csv') as csv_file:
#     csv_reader = csv.reader(csv_file, delimiter=',')
#     i =4
#     for row in csv_reader:
#       st=row[1].replace(' ', '_')
      
#       path = '/media/adhikram/Arka/Devsnest_DSA/Q'+str(i)+'_'+st+'/'
#       i+=1
#       print(path)
#       try: 
#           os.mkdir(path)
#           f =open(path+st+'.txt','w')
#           u =open(path+st+'.cpp','w')
#           c =open(path+st+'_hidden_sample_out.txt','w')
#           k =open(path+st+'_hidden_sample.txt','w')
#           f.close()
#           u.close()
#           c.close()
#           k.close()
#       except OSError as error: 
#           print(error) 

        
# path 
import random

name="Q15_Maximize sum_"
total=1
N=[2,5,10,50,100,500,1000,5000,10000,50000,100000]
# N=[1,5,10,20,30,40,60,70,80,90,100]
# N=[2,5,10,15,20,25,30,35,40,45,50]
# N=[1,50,100,150,200,250,300,350,400,450,500]
# N=[1,50,100,250,500,700,750,800,900,950,1000]
# N=[15,50,100,150,200,250,500,1000,5000,6000,10000]
while(total<11):
  f=open(name+str(total)+"_hidden_in.txt", 'w')
  
  number = random.randint(N[total-1], N[total])
  # number1 = random.randint(N[total-1],  N[total])
  
  f.write(str(number))
  # f.writelines(" ")
  # f.write(str(number//2))
  f.writelines("\n")
  s=""
  for i in range(0,number):
    s += str(random.randint(N[total-1],N[total]))+" "

  f.write(s[:-1])
  f.writelines("\n")
  # s=""
  # for i in range(0,number1):
  #   s += str(random.randint(0,1000000))+" "

  # f.write(s[:-1])
  # f.writelines("\n")
  f.close()
  total+=1

