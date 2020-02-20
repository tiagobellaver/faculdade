import imaplib
import time
import concurrent
from concurrent.futures import ThreadPoolExecutor

OUTLOOK_SERVER = 'outlook.office365.com'
USERNAME = 'trabalholp4cc2017@outlook.com'
PASSWORD = 'trabalholp4_'


def download_emails(ids):
    client = imaplib.IMAP4_SSL(OUTLOOK_SERVER)
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

number_of_chunks = 10
chunk_size = 10
executor = ThreadPoolExecutor(max_workers=number_of_chunks)
futures = []
for i in range(number_of_chunks):
    chunk = ids[i * chunk_size:(i + 1) * chunk_size]
    futures.append(executor.submit(download_emails, chunk))

for future in concurrent.futures.as_completed(futures):
    pass
print('Tempo:', time.time() - start)