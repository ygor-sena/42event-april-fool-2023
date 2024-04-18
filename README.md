<p align="center">
    <img src="https://github.com/ygor-sena/42event-april-fool-2023/assets/102881479/ebc3167c-2983-45fa-aaa6-c18885ad534e)" width=120>
</p>

<p align="center">
    <img src="https://img.shields.io/badge/OS-Linux-blue" alt="OS">
    <img src="https://img.shields.io/badge/Language-C%20%7C%20Shell Script%20%7C%20Python%20%7C%20Perl%20%7C%20PHP-blue.svg" alt="Language">
    <img src="https://img.shields.io/badge/Grade-100%2F100-brightgreen.svg" alt="Grade">
    <img src="https://img.shields.io/badge/Status-Completed-brightgreen.svg" alt="Status">
</p>

📣 Introduction
----------------

##### ⚙️ How the event worked

On the occasion of the April Fool's Day of 2023, the 42 staff devised a fun challenge for its global student body. The project had to be completed in three days and there were 18 exercises to be done. Each exercise was worth 5 points and the last one 15 points. Project grades spanned from 0 to 100. If the final grade after evaluation was 50, 75 or 100, the student received cumulative rewards on the intranet.

##### ⚠️ The event true intention

The early demo of ChatGPT on November 30, 2022, took the world by a storm. Catastrophic predictions started to the made. Regarding the software development world, it was said that artificial intelligence (AI) would soon eliminate the need for developers. It remains evident that developers will continue to play crucial roles in the future of software development.

Through a series of exercises, the event gave its opinion about the matter. The exercises made the students explore contemporary problems and API updates beyond ChatGPT's training scope, which ended in September, 2021. Thus, the exercises encouraged the students to try different programming languages. I myself had to write solutions in Shell Script, C, Python, Perl and PHP.

This experience underscored the importance of robust programming skills alongside AI assistance. It emphasized that while AI enhances technical problem-solving capabilities, our human creativity and analytical skills remain indispensable. Last but not least, human jokes are far better than AI generated ones.


### 🚀 About the exercises and their solutions 

##### ✅ Exercise 00
This exercise asked the student to join the official Slack channel of the event.

##### ✅ Exercise 01
Create a bash script that writes an infinite number of times the word "yes". The use of `echo`, `cat` and `printf` was not allowed.

##### ✅ Exercise 02
Here, the students had to create a file containing only "42" and its name was `_\\!\@#$%\^\&\*\(\)_......txt`. There are some possible solutions here: 1) escape the characters or 2) use single and double quotes.

##### ✅ Exercise 03
In a file named `joke.txt`, the student had to write its best joke using 256 characters or less.

##### ✅ Exercise 04
At their own risk, the students had to read a QR Code redirecting to this video: https://www.youtube.com/watch?v=dQw4w9WgXcQ. A file containing the lyrics of "_Rick Astley - Never Gonna Give You Up_" had to be turned in.

##### ✅ Exercise 05
This exercise asked the students to write a Perl script that prompts the user for input and checks whether the input is a palindrome.

##### ✅ Exercise 06
Here, the language requested was PHP. The task was to write a script that challenges the user to a game of rock-paper-scissors against the computer.

##### ✅ Exercise 07
This exercise introduced me to **code golfing**, which is a type of recreational computer programming competition in which participants strive to achieve the shortest possible source code that solves a certain problem.

The task was to write a C program with the smallest number of characters possible. The program had to accept two parameters and print them with a `\n` (newline) character and the end. Thus, it had to return the number of parameters printed. If the number of arguments provided wasn't equal to two, the program should do nothing.

##### ✅ Exercise 08
The task here was to write a C program that calculates the value of a blackjack hand following some specified constraints.

##### 🟢 Exercise 09
This exercise asked the students to write a C program that accepts strings as argument and prints them in a rectangular frame, one string per line. If no strings are provided (`argc` is 1), then nothing should be displayed.

##### ✅ Exercise 10
This is the one I had the most fun doing it! This exercise gave the student a bunch of encrypted messages, totalizing 7 of them. The following encryptions were used:
- rot42
- Base64
- Atbash
- Javascript Keycode
- Nato phonetic
- leet
- Playfair with the key PLAYFAIR

To find the solution, I used the websites listed in the next section to employ a trial-and-error approach. I also collaborated with my colleagues on Slack to tackle the challenging problems and find the solutions together.

If you want to try it yourself, here are the 7 encrypted messages:

```
Veh jxyi unuhsysu oek mybb xqlu je mhyju jxu fqiimeht yd q iocrebkc.jnj vybu.
 
Q29uZ3JhdHVsYXRpb25zIG9uIGRlY29kaW5nIHRoaXMgbGluZSwgdGhlIGZpcnN
0IGxldHRlciBpczogaw==

Xlmtizgfozgrlmh lm wvxlwrmt gsrh ormv, gsv gsriw ovggvi rh: s

67 79 78 71 82 65 84 85 76 65 84 73 79 78 83 79 78 68 69 67 79 68 73 78 71 84 72
73 83 76 73 78 69 84 72 69 78 69 88 84 67 72 65 82 65 67 84 69 82 73 83 50

Charlie Oscar November Golf Romeo Alpha Tango Uniform Lima Alpha Tango
India Oscar November Sierra ... Oscar November ... Delta Echo Charlie Oscar
Delta India November Golf ... Tango Hotel India Sierra ... Lima India November
Echo ... Tango Hotel Echo ... November Echo X-Ray Tango ... Lima Echo Tango
Tango Echo Romeo ... India Sierra ... Juliett

C0N6r47U14710N5 0N D3C0D1N6 7H15 11N3 7H3 N3X7 13773r 15 F

RSOEBLNZAYNDQOT QT IKITREUM OEBO YEUM, NKG AYTN PGSZNMB RT: K
```

##### ✅ Exercise 11
The task at hand was to write a Python program that incorporated the open source PokeAPI, retrieved information on various Pokémon and displayed them once the user entered the name of a Pokémon.

##### ✅ Exercise 12
This exercise is about writing a program that uses SMTP to send email with an attachment. The use of Bash wasn't allowed. I solved this challenge in Python and used `"smtp.office365.com"` as a host.

##### ✅ Exercise 13
This exercise was about **analyzing an executable program**. At first, it's a playable game and the task was to retrieve its password. I used `strings` command to look for printable strings in a file, `objdump -s` to print the complete content of all sections of the file to look for potential password clues and Ghidra, a software reverse engineering (SRE) suite of tools developed by NSA. This was a fun exercise because I mutually shared a lot information with my colleagues in order to discover the solution. 

##### ✅ Exercise 14

By far the hardest exercise of the list! The task was to write a program that generates the Sastantua's pyramids. The program accepts an integer that determines the size of the pyramid and draw it according the provided size parameter. I solved it in Python.

Here's an example of a Sastantua's pyramid when size argument is 5:

![sastantua](https://github.com/ygor-sena/42event-april-fool-2023/assets/102881479/324dcb8b-d8dc-4a4a-af71-121900925b1f)

##### ✅ Exercise 15
This exercise introduced me to the fantastic world of **stenography**! It's like writing in code, except the only people who can decipher it are other stenographers (and maybe Sherlock Holmes), Are you?

Given an image, the student had to find the flag. The whole idea of **stenography** is that a message is embedded into an image by altering the values of some pixels, which are chosen by an encryption algorithm. The websites used to find the flag are listed in the next section.

##### ✅ Exercise 16
Using ChatGPT, generate his best joke. The file cannot exceed 512 characters!

> [!WARNING]
> I assure you, it's a terrible joke...

##### ✅ Exercise 17
This fun exercise introduced me to **zero-width character stenography (ZWSP)**. The idea is to convert a private message into binary data. Then the binary characters space, zero and one are mapped to three different zero-width characters. This will be appended to a public message. The result is that only the public message will be visible.

This exercise asked the students to analyze a tweet print screen image that had a hidden message to be retrieved. Looking closely at the tweet image, it's possible to notice some weird characters formatting. Thus, a series of hexadecimal values were given as a tip to tackle the problem.

To find the hidden message, I had to first convert the given hexadecimal characters to UTF-8 characters. These were the characters used to embed the hidden message. The next step was to write the public tweet message with normal characters and rebuild the weird formatting tweet by looking at the image and attempting insert the special UTF-8 characters on the correct order. To do that, the VSCode editor has an option for rendering whitespaces, which allows users to visually differentiate normal and special characters.

The image below shows the tweet rebuild process using VSCode and [https://holloway.nz/steg/]() to find a hidden message that made sense:

![ex17](https://github.com/ygor-sena/42event-april-fool-2023/assets/102881479/0e55fd3e-5779-4b23-b2fc-8eaaa5a071e1)


### 📖 References 

- For exercise 01:
	- [How to use the yes command on Linux](https://www.howtogeek.com/415535/how-to-use-the-yes-command-on-linux/) by [How-To Geek](https://www.howtogeek.com/)

- For exercise 05:
	- [Taking Input in Perl](https://www.codesdope.com/perl-input/) by [CodesDope](https://www.codesdope.com/)
	- [Case insensitive comparison in Perl](http://www.wellho.net/resources/ex.php?item=p205/sc) by Well House Consultants
	- [Perl | my keyword](https://www.geeksforgeeks.org/perl-my-keyword/) by [GeeksforGeeks](https://www.geeksforgeeks.org/)
	- [What are the use strict and use warnings pragmas in Perl?](https://www.educative.io/answers/what-are-the-use-strict-and-use-warnings-pragmas-in-perl) by [educative](https://www.educative.io/)
	- [Remove a space from a Perl variable](https://stackoverflow.com/questions/17330267/remove-a-space-from-a-perl-variable) by Stack Overflow

- For exercise 06:
	- [How to access N-th element of an array in PHP](https://stackoverflow.com/questions/24825281/how-to-access-n-th-element-of-an-array-in-php) by Stack Overflow
	- [Difference between the (=), (==), and (===) operators in PHP](https://www.educative.io/answers/difference-between-the-and-operators-in-php) by [educative](https://www.educative.io/)
	- [How to read user or console input in PHP?](https://www.geeksforgeeks.org/how-to-read-user-or-console-input-in-php/) by [GeeksforGeeks](https://www.geeksforgeeks.org/)

- For exercise 07:
	- [Tips for golfing in C](https://codegolf.stackexchange.com/questions/2203/tips-for-golfing-in-c) by Stack Exchange

- For exercise 10:
	- Amazing website with many modern cryptography tools: https://www.dcode.fr/tools-list#cryptography
	- Another good one: https://dencode.com/en/

- For exercise 11:
	- [PokeAPI Documentation](https://pokeapi.co/)

- For exercise 12:
	- [O que é SMTP?](https://www.brevo.com/pt/blog/o-que-e-smtp/) by Brevo
	- [Office365 smtp server does not respond to ehlo() in python](https://stackoverflow.com/questions/44763856/office365-smtp-server-does-not-respond-to-ehlo-in-python) by Stack Overflow
	- [How to send email attachments?](https://stackoverflow.com/questions/3362600/how-to-send-email-attachments) by Stack Overflow

- For exercise 13:
	- [Comando objdump no Linux com exemplos](https://acervolima.com/comando-objdump-no-linux-com-exemplos/) by [Acervo Lima](https://acervolima.com/)
	- [Ghidra: a software reverse engineering (SRE) suite of tools](https://ghidra-sre.org/)

- For exercise 15:
	- [Image Steganography: hide images inside other images](https://incoherency.co.uk/image-steganography/#unhide)
	- [Forensically](https://29a.ch/photo-forensics/#pca)

- For exercise 17:
	- About Zero-width Characters Steganography: https://mayadevbe.me/posts/projects/zw_steg/
	- To convert Hex code to UTF-8 chars: https://www.browserling.com/tools/hex-to-utf8
	- To rebuild the tweet and find the hidden message: https://holloway.nz/steg/
	- [Unicode Character (U+200B)](https://www.compart.com/en/unicode/U+200B)
