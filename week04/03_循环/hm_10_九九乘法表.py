i = 1
while i <= 9:
    j = 1
    while j <= i:
        print("%d * %d = %d" % (j,i,j*i),end="\t")
        j += 1
    print("")
    i += 1
