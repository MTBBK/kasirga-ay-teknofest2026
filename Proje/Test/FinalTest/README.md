Environment'e giriş yapın.
source .venv/bin/activate

Eğer Environment yoksa oluşturun ve gerekli kütüphaneleri yükleyin.
python3 -m venv .venv
pip install -r requirements.txt

Ana test betiğini çalıştırın.
python3 main_test.py

