#!/bin/bash

echo "First answer:"
awk -f first.awk < first.data

echo
echo "Second answer:"
awk -f second.awk < first.data
