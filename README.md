# Модули
## Модуль А
### Подключение робота
Настройка wifi
- Переходим в директорию на CD карте
```
/etc/wpa_supplicant/wpa_supplicant.conf
```
- Редактируем файл wpa_supplicant.conf
```
network={
    ssid="WIFI_NETWORK_NAME"
    psk="wifipassword"
}
```
- Редактируем ssid (название сети) и psk (пароль сети)
Изменение имени робота
- Переходим в директорию
```
/etc
```
- В ней находим hostname и редактирем его
```
sudo nano hostname
```
- Изменяем turelbroXX на номер своего робота
### Внесение данных в "Акт о приеме"
- Название дистрибутива Linux и кодовое имя сборки Linux
```
lsb_release -a
```
- Версия библиотеки rospy
```
rosservice rospy
```
- Размер оперативной памяти (Мбайт)
```
free -M
```
- Допустимый диапазон частот подключения робота к сети 5 ГГц
```
iwconfig
```
- Что бы узнать напряжение из топика
```
rostopic echo /bat
```
- IMU датчик работает корректно
```
rstopic echo /imu
```
- Смотрим на показатель *W*
- Для проверки кнопок D22-D25
[переходим по ссылке](https://github.com/voltbro/ws-sro/tree/main/Turtlebro-tester)
- Переходим в скетч Turtlebro-tester.ino
- Копируем его и вставляем в Arduino
