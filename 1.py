f = open('WPD2.txt', 'a',
         encoding='utf-8',
         errors='ignore')

with open('WPD.txt', 'r',
          encoding='utf-8',
          errors='ignore') as r:
            for _line in r:
                if len(_line) >= 9:
                    f.write(_line)

f.close()
