import os 
import csv

with open('sheet1.csv') as csv_file:
    csv_reader = csv.reader(csv_file, delimiter=',')
    i =5
    for row in csv_reader:
      st=row[1].replace(' ', '_')
      
      path = '/media/adhikram/Arka/Devsnest_DSA/Questions/Q'+str(i)+'_'+st+'/'
      i+=1
      print(path)
      try: 
          os.mkdir(path)
          f =open(path+st+'.txt','w')
          f.close()
      except OSError as error: 
          print(error) 

        
# path 
