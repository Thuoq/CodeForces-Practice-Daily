def reverse_string(s):
    if s == '':
        return ''
    return reverse_string(s[1:]) + s[0]

print(reverse_string('abcd'))
