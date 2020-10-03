# arduino_turns_on_laptop
Arduino and servo motor to press the On button on a laptop when the TV is turned on

# Problem description

My TV setup is like this:
1. TV Panasonic
2. Mixer Yamaha
3. Active Speakers Samson
4. Old Lenovo ThinkPad

My wife likes to press only one button to make things work. She does not want to press the "On" button on 5 devices. Neither do I. I can understand that.  
Incredibly enough the first 3 devices can be turned on and off just with the power socket.
I have a "smart" power socket with remote control over 433MHz similar to [this](  
https://www.amazon.it/deleyCON-prese-radio-Bianco-230-00V/dp/B074VV3T91/ref=pd_day0_79_1/258-7752702-2003723?_encoding=UTF8&pd_rd_i=B074VV3T91&pd_rd_r=bfca3e6c-c195-4fac-bd37-163603320a3d&pd_rd_w=jjQo3&pd_rd_wg=xFWr9&pf_rd_p=7d5a19b1-29b8-4833-bb91-8b454e183d9f&pf_rd_r=HN8XDY11J2Y5AQQVX8ZQ&psc=1&refRID=HN8XDY11J2Y5AQQVX8ZQ).  

ok. I am hoarding them. Don't judge.  
![433MHz](images/433MHz.png)


Great! I can use the remote with only one button on/off.  
But the laptop is the exception. I need to press the "On" button manually.  
That was too much for my wife. Two buttons. No go...  

## Arduino

I am not very good in electronics, I am a programmer. I will not work with transistors, relays, resistors and condensators. I prefer a microcontroller like arduino or a mini PC like RaspberryPi. I feel lucky it is all very affordable.  
