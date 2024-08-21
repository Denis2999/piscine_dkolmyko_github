#!/bin/bash
#FT_USER = nours
# FT_USER = daemon

#groups $FT_USER | tr ' ' ',' | tr -d '\n'
groups $FT_USER | tr ' ' ','

