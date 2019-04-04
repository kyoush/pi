#バーゼル問題を使ってpiを求める
import math
n = input('> ')
sum = 0

for i in range(1, int(100000000)):
    sum += (1/(i*i))
    if (i%1000000) == 0:
        print(str(i) + ': ' + str(math.sqrt(sum*6)))
