#!/bin/sh

ldapwhoami -Q | cut -b 4-35 
