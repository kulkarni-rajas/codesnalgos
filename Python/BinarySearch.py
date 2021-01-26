# program created by styles on binary search 
# where lys is a list

def BinarySearch(lys, val):
    first = 0
    last = len(lys)-1
    index = -1
    while (first <= last) and (index == -1):
        mid = (first+last)//2
        if lys[mid] == val:
            index = mid
        else:
            if val<lys[mid]:
                last = mid -1
            else:
                first = mid +1
    return index

y=BinarySearch([10,20,30,40,50], 30)
if(y==-1):
    print("not found")
else:
    print (y)
