class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        def is_num(n):
            try:
                int(s)
                return True
            except:
                return False
        op_map = {'+' : (lambda x, y: x + y), '-' : (lambda x, y : x - y), 
               "*": (lambda x, y: x * y), "/": (lambda x, y: int(x / y))}
        for s in tokens:
            if is_num(s):
                stack.append(s)
            else:
                a = int(stack.pop())
                b = int(stack.pop())
                num = op_map[s](b, a)
                stack.append(num)
        return stack[-1]
