from bs4 import BeautifulSoup

# Lokale Datei laden
with open("page.html", "r", encoding="utf-8") as f:
    html = f.read()

soup = BeautifulSoup(html, "html.parser")

# Alle gewünschten DIVs extrahieren
sender_divs = soup.find_all("div", class_="list-mail-item__sender")

senders = [div.get_text(strip=True) for div in sender_divs]

# Optional: Duplikate filtern
senders = list(set(senders))

# In CSV speichern
with open("mail_senders.csv", "w", encoding="utf-8") as f:
    for sender in senders:
        f.write(sender + "\n")

print("Fertig: mail_senders.csv erstellt.")