import urllib.request
with urllib.request.urlopen('http://ctf5.shiyanbar.com/web/10/10.php') as f:
    key = f.info()
print(key['FLAG'])

import base64
decoded = base64.b64decode(key['FLAG'])
print(decoded)
decoded_key = str(decoded, encoding = "utf-8").split(':')[1]
print(decoded_key)

import urllib.parse
with urllib.request.urlopen('http://ctf5.shiyanbar.com/web/10/10.php', data=urllib.parse.urlencode([('key',decoded_key)]).encode('utf-8')) as f:
    print(f.read())