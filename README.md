# RabbitCoreServer
Central server responsible for communicating with website and minecraft servers

Whenever the website wants to pull some player's data it sends a message to the core server
where it will access the Mongo database and send it back to the website.

If a minecraft server requires some info outside of its own jurisdiction it will go 
through here.

Moreover, in the future this core server can serve as a global command line for the minecraft
servers if it is required.


Dependencies: MongoDB (libmongoc), RabbitMQ (librabbitmq)
