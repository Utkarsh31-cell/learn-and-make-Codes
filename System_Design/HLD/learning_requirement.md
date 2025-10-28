===================================================>Shree Ganeshaya Namah<====================================================

HLD => (High Level Design)

Roadmap : Basically what are the keypoints we need to focus on while learning the HLD (High Level Design Part)

Their are few keytopics which we need to cover for HLD:
HLD -> mainly deals with trade-offs of the things which we are using (i.e when do we have to use particular thing) and what is use of that particular thing.

1. Fundamentals :

    1.1 Serverless vs Serverful 
    1.2 Horizontal vs Vertical scaling 
    1.3 Threads
    1.4 Pages
    1.5 How does internet works? (Request Response cycle, DNS etc)

2. Databases (DBs):

   2.1 SQL vs NOSQL DBs
   2.2 In-memory DBs
   2.3 Data Replication & Migration
   2.4 Data Partitioning
   2.5 Sharding (Horizontal Partitioning of Data)

3. Consistency and Avaialability 

   3.1 Data consistency and it's levels
   3.2 Isolation and it's levels 
   3.3 CAP theorum (Consistency, Availability and Partitioning) [consistency (here we preferred SQL) : we must have very latest 
       correct data (Netflix payment)  && in Availability (preferred NOSQL) something need to send weather it is very current or not (ex whatsapp using consistency when we doing messaging) ]

4. Cache 

   4.1 What is Cache? (Redis, Memacached) (at very low latency or most popular data we want to send is store under cached)
   4.2 write Policies : write back, through & around 
   4.3 Replacement policies: LFU, LRU, Segmented LRU etc
   4.4 Content Delivery Network (CDN) [these are mostly used when we have to prefered/choose nearby location data center of
                                        cloud so that have low latency of static data (example some netflix show are store in particular location for showing the user in that location)]


5. Networking 

   5.1 TCP vs UDP
   5.2 what is http(1/2/3) & https
   5.3 web sockets
   5.4 webRTC & video streaming (zoom or google meet designing)

6. Load Balancer

   6.1 Load Balancing Algorithms(stateles & stateful)
   6.2 Consistent Hashing 
   6.3 Proxy vs Reverse Proxy 
   6.4 Rate Limiting (used for preventing from DDOS attack)

7. Message Queues

   7.1 Asynchronous Processing (Kafka, RabbitMQ) =>{these are messaging services also used for streaming} (ex whatsapp me
                                                    message kiya then we get single tick now weather we will get double tick or blue i.e. weather it is read by user it doesn't matter if single tick not happend it will  retry to do it again and if you send another message it will go again independent of it is seen by reciever or not )
   7.2 Pub-Sub (Publisher-Subscriber Model)

8. Monoliths vs Microservice 

   8.1 What is Microservice 
   8.2 Concept of 'single point of failure'
   8.3 Avoiding cascading type failure 
   8.4 Containerization (Docker)
   8.5 Migrating to Microservice

9. Monitoring and Logging 

   9.1 Logging events & monitoring metrics
   9.2 Anomaly Detection (AWS cloudwatch, Graffana, Prometheus) used for observing logs 

10. Security 

    10.1 Token for auth
    10.2 SSO & OAuth
    10.3 Access Control Lists & Rules Engines
    10.4 Encryption

11. System Design Tradeoffs

    11.1 Push vs Pull Architecture
    11.2 Consistency vs Availability
    11.3 SQL vs NOSQL DBs
    11.4 Memory vs Latency
    11.5 Throughput vs Latency 
    11.6 Accuracy vs Latency 

12. practice & practice

    12.1 Youtube
    12.2 Twitter
    12.3 Whatsapp
    12.4 Uber
    12.5 Amazon
    12.6 DropBox/ Google Drive
    12.7 Netflix
    12.8 Instagram
    12.9 Zoom
    12.10 Airbnb/Booking.com