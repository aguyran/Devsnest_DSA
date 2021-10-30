import json
from os import path,getcwd


with open(path.join(getcwd(),"data.json")) as dataFile:
 sudokuData= json.load(dataFile)["data"]
dataFile.close()
count =1
for i in sudokuData:
    # change out to in or vice versa depending on the need
    writeFile = open(f"Q56_Sudoku_{count}_hidden_in.txt","w")
    temp=0
    # puzzle instead of solution for questions
    for j in i["puzzle"]:
        writeFile.write(' '.join([str(k) for k in j]))
        if temp<8:writeFile.write("\n")
        temp+=1
    writeFile.close()
    count+=1
