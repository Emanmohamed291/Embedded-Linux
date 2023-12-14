# Embedded-Linux

<h3>adding new user</h3>
sudo adduser "$username"

<h3>to print user information :</h3> id "$username"	

<h3>adding new ugroup</h3>
sudo groupadd "$groupname"

<h3>to print group information :</h3> getent group "$groupname"

<h3>to add a user to a group</h3>
sudo usermod -aG "$groupname" "$username"
