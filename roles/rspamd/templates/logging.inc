{{ ansible_managed|comment }}

type = "syslog";
systemd = true;
debug_modules = ["dkim_signing"];
level = "info";
# level = "warning";
