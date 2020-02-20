import imaplib
import time

OUTLOOK_SERVER = 'outlook.office365.com'
USERNAME = 'trabalholp4cc2017@outlook.com'
PASSWORD = 'trabalholp4_'


def download_emails(ids):
    client = imaplib.IMAP4_SSL(IMAP_SERVER)
    client.login(USERNAME, PASSWORD)
    client.select()
    for i in ids:
        print(f'Fazendo Download do e-mail ID: {i.decode()}')
        _, data = client.fetch(i, '(RFC822)')
        with open(f'emails/{i.decode()}.eml', 'wb') as f:
            f.write(data[0][1])
    client.close()
    print(f'Foram baixados {len(ids)} e-mails!')


start = time.time()

client = imaplib.IMAP4_SSL(OUTLOOK_SERVER)
client.login(USERNAME, PASSWORD)
client.select()
_, ids = client.search(None, 'ALL')
ids = ids[0].split()
ids = ids[:100]
client.close()

download_emails(ids)
print('Tempo:', time.time() - start)