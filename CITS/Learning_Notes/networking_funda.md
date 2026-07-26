1. Computer Software Application

1. Networking Fundamentals:

1.1 OSI Model 

7. Application
6. Presentation Layer 
5. Session Layer
4. Transport Layer
3. Network Layer
2. Data link Layer
1. Physical Layer 
==========================================================================================
1. SMTP : The primary protocol used to transfer and send mail over the internet is SMTP (Simple Mail Transfer Protocol).

Sending/Transferring Mail: SMTP
IMAP : Receiving/Retrieving Mail: IMAP (Internet Message Access Protocol) or POP3 (Post Office Protocol version 3). IMAP leaves emails on the server, while POP3 downloads them directly to your device.

2. FLP :
FLP stands for Fischer, Lynch, and Paterson, and it refers to the FLP Impossibility Theorem
It is used to prove a fundamental rule in computer science: in an asynchronous network (where there is no guarantee on how long a message takes to deliver), it is impossible for a group of computers to reliably agree on a single value (reach consensus) if even just one computer fails or crashes.
FL Studio Project file (.flp): The default format for saving music projects in the FL Studio audio editing software.

3. Yes, Microsoft Access is an example of a DBMS, specifically a Relational Database Management System (RDBMS). It combines a relational database engine with a graphical user interface and software-development tools.

4. The C language includes the header file standard input & output in : A2 : Stdio.h library
Stdio.h library
==========================================================================================
However, Notepad does have a hidden automated command function called .LOG, along with standard keyboard shortcuts for editing and file management.
The Hidden .LOG CommandYou can make Notepad automatically insert the current time and date every single time you open the file.Open a blank Notepad file.
Type .LOG on the very first line (it must be uppercase with the period) [1].Save and close the file.Every time you reopen it, 
Notepad automatically appends the current time and date at the bottom [1].
All Function Key (F-Key) CommandsAside from F5, Notepad uses these other function keys for navigation and editing:
F1: Opens the "Help with Notepad" web page.F3: Finds the next instance of your searched text (Find Next).
Shift + F3: Finds the previous instance of your searched text (Find Previous).Essential 
Shortcut CommandsThese are the primary control shortcuts used to manage and edit text in 
Notepad:Ctrl + N: Open a new window.Ctrl + O: Open an existing document.Ctrl + S: Save the current document.Ctrl + P: Print the document.
Ctrl + F: Open the Find box to search for text.Ctrl + H: Open the Replace box to swap text.Ctrl + G: Go to a specific line number.Ctrl + A:
 Select all text in the document.Ctrl + Z: Undo the last action.Ctrl + Plus (+): Zoom in on the text.Ctrl + Minus (-): Zoom out on the text.
 If you are trying to automate a specific text task, let me know what you want to achieve or if you are looking to learn shortcuts for advanced text editors like Notepad++.
 F3: Find the next instance of text.Shift + F3: Find the previous instance of text.
 F5: Insert current time and date
 F2: rename
 F3 : find
==========================================================================================
Oval (Start) \(\rightarrow \) System boots up
Parallelogram (Input) \(\rightarrow \) User enters their password
Diamond (Decision) \(\rightarrow \) "Is password correct?
Symbol Shape                                  Name                                                                 Primary Use Case / Function
Oval / Capsule                             Terminator															Indicates the absolute Start or End point of a process.
Rectangle								Process / Action													Represents a single step, task, or operation (e.g., "Add 1 to X", "Save File").
Diamond									Decision															Evaluates a condition. It always has one entry point and two or more exit paths (usually labeled Yes/No or True/False).
Parallelogram                          Input / Output														Represents data entering or leaving the system (e.g., "Enter Password", "Print Receipt").
Arrow									Flow 																LineConnects symbols to show the exact sequence and direction of the process.
Small Circle							On-Page Connector													Connects different parts of a complex flowchart on the same page to avoid messy, crossing lines.
======================================================================================================================================================================================
Networking:

Common Components which Anyone should know in Networking:

1. Servers, Switch , Router, Firewall, DHCP, ISP 

ISP -> Internet Service Provider [railwire, airtel, gio, Starlink]

An Internet Service Provider (ISP) is a company that connects you to the internet and manages the network infrastructure needed for that connection.

Provide Internet Access -> Connect homes, businesses, and mobile devices to the internet using fiber, cable, DSL, satellite, or mobile networks.
Assign IP Addresses -> Give your device an IP address so it can send and receive data on the internet.
Route Data -> Transfer data between your device and websites, apps, and online services around the world.
Maintain Network Infrastructure -> 	Build and operate equipment such as fiber-optic cables, cellular towers, routers, satellites, and data links.
Provide Customer Services -> Handle installation, troubleshooting, billing, and technical support.

==================================================================================================================================================================================================
DHCP :  Dynamic Host Configuration Protocol	

Used for Assigning IP addresses to devices.
So DHCP server works at two level either at device level you configure IP for your device or at router level.
At most of the places it is at router level. So whenever router is get set by Local ISP they set router with DHCP server. So that whatever devices get connected with router get a unique
IP addreses.
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
[Shree Ganeshaya Namah]

Networking is used to connect between two devices/laptops/servers so that they can communicate and exchange the information between them. 

Network is system which allow to connect these devices together

various type of Networks:
LAN [home level] Local Area Network
MAN [At city level] Metropolitian Area Network 
WAN [At global level] Wide Area Network [used to connect multiple countries toghther ex internet]

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 OSI [Open System Interconnection]
 
We are going to understand networking in all 7 layer, via understanding communication between two person:

Scenario :

You (Y) are in Russia and send a WhatsApp message:
"Hello X" to your friend X in the USA.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
You (Russia)
    ↓
WhatsApp Servers
    ↓
Friend (USA)

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Actual Way :

Your Phone
   ↓
Russia ISP
   ↓
Internet
   ↓
WhatsApp Server
   ↓
Internet
   ↓
USA ISP
   ↓
Friend Phone
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
OSI Layer 7 - Application Layer

This is where humans interact.

Type : Hello X  and and press Send.

Applications here:

WhatsApp
Chrome
Gmail
YouTube  
[At this layer: ]  At this layer nothing happens but an API call happend over HTTP if u are using protocol has HTTP with request body as Message = "Hello X"
# Till now nothing to deal with ip addreses

OSI Layer 6 - Presentation Layer

This layer prepares data.

WhatsApp performs:

Encryption

WhatsApp uses End-to-End Encryption : Hello X

becomes something like: a7X9@#sK92...

Only your friend can decrypt it.


Presentation Layer handles: Encryption,Compression,Data format conversion, Adding SSL/TLS certification

OSI Layer 5 - Session Layer

This layer manages conversations.
WhatsApp checks:
Am I logged in?, Is session active?, Is user authenticated?
Session Layer maintains: You ↔ WhatsApp :connection state.

Mainly Deals with [session active(as they use websocket for conversation open for long time)]
Your session is authenticated with a long-lived token (logged in once → stay connected).
• If the connection drops (e.g. you enter a tunnel), the Session layer handles reconnection and session resumption.
• TLS handshake coordinates here too — the session is established before any message data flows.

Layer 7,6,5 are under Layer 7 i.e. Application Layer all are working under Application Layer 
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
OSI Layer 4 - Transport Layer

# Now we need reliable delivery.
=================================================================================================================================================================================================
Switch vs AP 

Switch is used for connecting devices within the same network via wired
A Switch connects wired devices. It uses physical Ethernet cables to link computers, servers, printers, and even APs together to create a local network.

AP (Access Point) : It is also used for connecting devices  withing same network via wireless 
An Access Point connects wireless devices. It uses radio waves (Wi-Fi) to connect phones, laptops, and tablets to that exact same local network.

An Access Point cannot work by itself. It does not actually create or manage a network; it just opens a wireless doorway to one.
In a real-world setup:You run a physical Ethernet cable from your Switch and plug it into the back of an Access Point.The Switch feeds data (and often electrical power) to the AP.
The AP broadcasts that data into the room as a Wi-Fi signal.
Your phone connects to the AP's Wi-Fi, which immediately routes your data down the cable, through the switch, and out to the internet.
=================================================================================================================================================================================================
Must Known topics for Networking:
Top 20 Terms Everyone Should Know

If you only learn 20 networking terms first, make them:

IP Address
MAC Address
Switch
Router
Firewall
DNS
DHCP
TCP
UDP
HTTP
HTTPS
Port
NAT
Gateway
Packet
Frame
ARP
Ping
VPN
TCP Three-Way Handshake

These 20 concepts form the foundation upon which almost all networking discussions, interviews, and deeper topics are built.
=================================================================================================================================================================================================
Priority for SDE-1 Interviews

Focus heavily on:

OSI Model
TCP/IP
TCP vs UDP
DNS
HTTP/HTTPS
IP Addressing
NAT
ARP
TCP Handshake
Browser Request Flow
Switch vs Router
Ports
--------------------------------------------------------------------------------------------------------
Priority for GATE Networking Topics

Focus heavily on:

OSI Model
TCP/IP
Subnetting
CIDR
ARP
Routing
TCP Congestion Control
Sliding Window
Error Detection (CRC, Checksum)
DNS
Flow Control
Go-Back-N
Selective Repeat
IP Addressing
MAC Addressing

1. https://cidr.xyz/   
[CIDR : classless inter domain routing is used for as method for dividing or distributing the range of IPs while doing subnetting. I had added link for online calculating the range of Ips available for given CIDR]
=================================================================================================================================================================================================
Type of Bussiness:

B2B -> Buissness to Buissness Model 
Paytm ->
The classification of this payment depends strictly on the origin of the transaction, not the payment gateway (Paytm) or the banks routing it:
If the sender is an individual buying for personal use: It is a B2C (Business-to-Consumer) transaction.
If the sender is a registered business buying for commercial use: It is a B2B (Business-to-Business) transaction.

B2C (Amazon.in): For standard retail shoppers, Amazon Sell to Businesses | Amazon B2B classifies this as a B2C sale, even if the funds are routed via Paytm.
B2B (Amazon Business): If your buyer is an organization that registers for an Amazon Business account Amazon Business: 
India's Largest B2B Online Wholesale Market, Amazon provides automated B2B tax invoices Sell to Businesses | Amazon B2B to allow them to claim input tax credits.

B2C – Business to Consumer
 📍 From a business → To the end consumer
 🧩 Example: Amazon, Swiggy, Flipkart.
 
D2C – Direct to Consumer
 📍 From a brand or manufacturer → To the end consumer (no middlemen)
 🧩 Example: Boat, Mamaearth, Lenskart.
 💬 In short: not just “direct,” but “direct from the brand to the buyer.”

B2G – Business to Government
 📍 From private companies → To government agencies
 🧩 Example: TCS handling digital governance initiatives.
 
C2C – Consumer to Consumer
 📍 From one individual → To another
 🧩 Example: OLX, eBay, Facebook Marketplace.
 
C2B – Consumer to Business
 📍 From individuals → To businesses
 🧩 Example: Freelancers on Fiverr or Upwork.
================================================================================================================================================================================================= 
OSS : Open Source Software
=================================================================================================================================================================================================
                                                                   