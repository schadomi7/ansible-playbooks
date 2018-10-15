{{ ansible_managed|comment }}


# Maybe switch so using unix sockets in the future
# I am not doing it atm, b/c I am lacking a good place to store the socket with the proper permissions
# bind_socket = "/var/lib/rspamd/rspamd-proxy mode=0600 owner=postfix"

# Use self_scan to not be dependend on worker-normal, this seems to improve stability
self_scan = true
