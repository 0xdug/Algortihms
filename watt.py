from Crypto.Cipher import AES

x='azdvtH4bvfdS/mryKLTNqQ=='.decode('base64')
print x
ci = AES.new(x,AES.MODE_ECB)
print ci
y='R9TacKHy6cf1AZho/nwWWYaNzP5GfltKE5yW+kwRYe0LY+PdGk1hfoanS/iVZ7z1'.decode('base64')
print y

plain=ci.decrypt(y)
print plain