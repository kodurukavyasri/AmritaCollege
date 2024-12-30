import gmpy2

c: 964354128913912393938480857590969826308054462950561875638492039363373779803642185
n :1584586296183412107468474423529992275940096154074798537916936609523894209759157543
e: 65537

for i in range (i=10000):
    m, is_true_root = gmpy2.iroot(i*n+c,e)
    if is_true_root :
        print (f"Found i = {i}")
        print("Message: {}". format (bytearray.fromhex(format(m,'x')).decode()))
        break