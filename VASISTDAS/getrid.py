def add(val1 , val2):
    return val1 + val2

def sub(val1,val2):
    return val1 - val2

def mul(val1, val2):
    return val1 * val2

def div(val1,val2):
    return val1 / val2

consdict = {
    "add" :add,
    "sub" :sub,
    "mul" :mul,
    "div" : div
}

actfun = consdict.get("add")
print(actfun)

def operation(fun, val1,val2):
    #what actually happen is, we 
    func = consdict.get(fun)
    if not func:
        return 0

    return func(val1,val2)

print(operation("mul", 3,3))

## make this design patter in C
