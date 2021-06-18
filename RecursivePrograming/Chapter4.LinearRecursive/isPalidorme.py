def is_palindrome(s):
    n = len(s)
    if len(s) <=1 :
        return True
    return s[n-1] == s[0] and  is_palindrome(s[1:n-1])
print(is_palindrome('rakr'))