# Embedded-Linux

<h1>adding new user</h1>
sudo adduser "$username"

<h1>to print user information :</h1> id "$username"	

<h1>adding new ugroup</h1>
sudo groupadd "$groupname"

<h1>to print group information :</h1> getent group "$groupname"

<h1>to add a user to a group</h1>
sudo usermod -aG "$groupname" "$username"
