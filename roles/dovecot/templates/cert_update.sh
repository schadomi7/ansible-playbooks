#!/bin/bash

{{ ansible_managed|comment }}

systemctl reload dovecot.service
