if [ -z $UPSTREAM_REPO ]
then
  echo "Cloning main Repository"
  git clone https://github.com/Janasaikat13/file_filters_bot.git /file_filters_bot
else
  echo "Cloning Custom Repo from $UPSTREAM_REPO "
  git clone $UPSTREAM_REPO /file_filters_bot
fi
cd /file_filters_bot
pip3 install -U -r requirements.txt
echo "Starting Bot....💥"
python3 bot.py
