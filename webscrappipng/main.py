# 2 ways to scrap a website:
#  1) APIS
#  2) use a tool like bs4


# step 0: Install the requirements
# pip install requests
# pip install bs4
# pip install html5lib

import requests
from bs4 import BeautifulSoup
url = "https://codewithharry.com"

# step 1: Get the HTML
r = requests.get(url) #To get url content
htmlcontent = r.content
# print(htmlcontent)

# step 2: PArse the HTML
soup = BeautifulSoup(htmlcontent,'html.parser')
# print(soup.prettify())

# step 3: HTML tree traversal

# commonly  used types of Objects:
# print(type(title))# 1.tag
# print(type(title.string))# 2.NavigableString
# print(type(soup))# 3.BeautifulSoup
# 4.Comment

# Get the title of HTML page
title = soup.title

# Get all the paragraphs from the page
paras = soup.find_all('p')
# print(paras)


# print(soup.find('p')['class'])

# find all the elements whose class is lead
# print(soup.find_all("p",class_="lead"))

# Get the text from the tages/soup
# print(soup.find('p').get_text())

# Get all the anchor tags from the page
anchors = soup.find_all('a')
# print(anchors)

# Get all the links on the page
# for link in anchors:
#     print(link.get('href'))

# get the links without them repeating
all_links = set()
for link in anchors:
    if(link.get('href') != '#'):
        linktext = "https://codewithharry.com" +link.get('href')
        all_links.add(linktext)
        print(linktext)