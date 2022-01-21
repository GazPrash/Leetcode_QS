
def calculate(s):
    s = s.strip()
    eval_stack = []
    operator_stack = []
    operand_stack = []
    calc = 0

    if s.isdigit():
        return int(s)

    for char in s:
        if char == ")" or char == "(":
            continue
        elif char == "+":
            operator_stack.append(char)
        elif char == "-":
            operator_stack.append(char)
        elif char == " ":
            continue
        else:
            operand_stack.append(int(char))

    j = 0

    for index, num in enumerate(operand_stack):
        if index == 0:
            if s[0] == "-":
                first_num = -num
                operator_stack.remove("-")
            else:
                first_num = num
        elif j < len(operator_stack):
            eval_stack.append((num, operator_stack[j]))
            j+=1
        

    calc += first_num
    
    for tuples in eval_stack:
        if tuples[1] == "+":
            calc += tuples[0]
        else:
            calc -= tuples[0]


    return calc

s = "-2+1-1-2+4 +5"

print(calculate(s))
calculate(s)



# ALTERNATE APPROACH FOR SOME OTHER DAY

# print(stack)
# for stuff in stack:
#     print(operator_stack)
#     if stuff != "+" and stuff != "-":
#         if not operand_stack:
#             print("yessss")
#             operand_stack.append(stuff)
        
#         elif operator_stack:
#             opr = operator_stack.pop()
#             if opr == "+":
#                 calc += a + stuff
#             else:
#                 calc += a - stuff

#         else:
#             print("beforr")
#             print(operand_stack, operator_stack)
#             print("after")
#             a = operand_stack.pop()
#             opr = operator_stack.pop()
#             print(operand_stack, operator_stack)
#             if opr == "+":
#                 calc += a + stuff
#             else:
#                 calc += a - stuff

#     elif stuff == "-":
#         operator_stack.append("-")

#     else:
#         operator_stack.append("+")