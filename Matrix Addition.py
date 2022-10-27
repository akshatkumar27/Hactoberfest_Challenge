X = [[14,23,99],
    [44 ,35,60],
    [7 ,85,10]]
 
Y = [[1,2,3],
    [6,5,4],
    [7,8,9]]
 
 
result = [[0,0,0],
        [0,0,0],
        [0,0,0]]
 

for i in range(len(X)):  
    for j in range(len(X[0])):
        result[i][j] = X[i][j] + Y[i][j]
 
for r in result:
    print(r)
