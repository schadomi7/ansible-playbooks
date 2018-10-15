{{ ansible_managed|comment }}


# Can disable normal worker when proxy worker is using self_scan, wich we do, but
# rspamsc by default uses the normal worker and would need to be invoked with an extra argument
# so i leave this enabled to simplify things, although disabling would conserve resources
# enabled = false
