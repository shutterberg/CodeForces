import pyperclip,os

os.chdir("C:\\Users\\91702\\Desktop\\CF")
fp=open("template.txt")
text=fp.readlines()
text=''.join(text)
pyperclip.copy(text)
print("Template copied")