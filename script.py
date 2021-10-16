import os 
import csv

with open('sheet1.csv') as csv_file:
    csv_reader = csv.reader(csv_file, delimiter=',')
    i =4
    for row in csv_reader:
      st=row[1].replace(' ', '_')
      
      path = '/media/adhikram/Arka/Devsnest_DSA/Q'+str(i)+'_'+st+'/'
      i+=1
      print(path)
      try: 
          os.mkdir(path)
          f =open(path+st+'.txt','w')
          u =open(path+st+'.cpp','w')
          c =open(path+st+'_hidden_sample_out.txt','w')
          k =open(path+st+'_hidden_sample.txt','w')
          f.close()
          u.close()
          c.close()
          k.close()
      except OSError as error: 
          print(error) 

        
# path 
