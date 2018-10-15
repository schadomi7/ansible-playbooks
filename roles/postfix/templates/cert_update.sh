#!/bin/bash

{{ ansible_managed|comment }}

systemctl reload postfix.service
