printf "It's recommended you run these steps manually.\n"
printf "If you want to run the full script, open it in\n"
printf "an editor and remove 'exit 1' from below.\n"
exit 1
/usr/bin/python3 -m pip uninstall growhat
cp /home/pi/Pimoroni/config-backups/config.preinstall-growhat-2023-01-20-09-59-33.txt /boot/config.txt
rm -r /home/pi/Pimoroni/growhat
rm /usr/bin/grow
rm -r /usr/share/grow-monitor
rm /etc/default/grow
