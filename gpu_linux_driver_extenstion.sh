#!/bin/sh

export myResourceGroup="Majid_HPC_testbed-zs4jjz3kv5cz3g6xkj5pyekcou"
export myVM="execute-z7z73kcew5hyt" 
az vm extension set   --resource-group $myResourceGroup  --vm-name $myVM  --name NvidiaGpuDriverLinux  --publisher Microsoft.HpcCompute  --version 1.2  --settings '{ "updateOS": true, "driverVersion": "9.1.85" }'

