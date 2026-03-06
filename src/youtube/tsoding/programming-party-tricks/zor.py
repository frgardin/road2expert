# a^b^b == a

seq = [(a, b) for a in range(2) for b in range(2)]

zor_seq = [a^b^b == a for (a, b) in seq]

print(zor_seq)


m = 'Hello World'

m_arr = [a for a in m]

m_byte_arr = [ord(a) for a in m]

k = 69

def encrypt(m, k):
    return ''.join([chr(ord(a)^k) for a in m])

print(encrypt(m, k))

print(encrypt(encrypt(m, k), k))