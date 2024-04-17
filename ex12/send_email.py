import smtplib
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
from email.mime.image import MIMEImage

def main():
	HOST = "smtp.office365.com"
	PORT = 587

	FROM_EMAIL = <insert_your_email_here>
	TO_EMAIL = input("Please, type your e-mail address: ")
	PASSWORD = <insert_your_password_here>

	msg = MIMEMultipart()

	msg["From"] = FROM_EMAIL
	msg["To"] = TO_EMAIL
	msg["Subject"] = "Image Stenography"

	text = "This embedded image has a secret message for you!"
	msg.attach(MIMEText(text))

	with open("42.jpg", "rb") as f:
		img_data = f.read()
		img = MIMEImage(img_data, name="42.jpg")
		msg.attach(img)

	try:
		smtp = smtplib.SMTP(HOST, PORT)
		smtp.ehlo(HOST)
		smtp.starttls()
		smtp.ehlo(HOST)
		smtp.login(FROM_EMAIL, PASSWORD)
		smtp.sendmail(FROM_EMAIL, TO_EMAIL, msg.as_string())
		smtp.quit()
	except Exception:
		print("Couldn't send e-mail. Check if your email is correct.")

if __name__ == '__main__':
	main()