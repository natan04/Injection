#!/usr/bin/env python
import time
import os
import sys
from scapy.all import *
os.system("insmod 8812au-3.ko")
os.system("iw dev wlan1 set type monitor")
os.system("iw dev wlan1 set channel 64 HT20")  
sended = time.time()
pkts=rdpcap("abcd.pcap")
while True:
	if int(time.time()) > sended:
		sended = int(time.time())	
		os.system("iw dev wlan0 set channel 64 HT20")
		sendp(pkts[0], iface="wlan0",  verbose=0)
	time.sleep(0.05)
	
