import sys
class Solution:
    def addStrings(self, n1: str, num2: str) -> str:
        sys.set_int_max_str_digits(10000)
        a=0
        b=0
        for i in n1:
            a=a*10+(ord(i)-48)
        for i in num2:
            b=b*10+(ord(i)-48)
        result=a+b 
        result=str(result) 
        return result      
      
  class Solution:
    def addStrings(self, n1: str, num2: str) -> str:
        a=0
        b=0
        for i in n1:
            a=a*10+(ord(i)-48)
        for i in num2:
            b=b*10+(ord(i)-48)
        result=a+b 
        result=str(result) 
        return result      

