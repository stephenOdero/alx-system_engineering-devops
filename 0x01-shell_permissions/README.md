0x01: Shell Permissions
In this project, I am learning about working with Shell and the permissions that a user, group or other users can have. 
chmod, chgrp,chown,su,sudo
0-iam_betty: The script switches from the current user to the user 'betty'
1-who_am_i: This script prints the effective uesrname of the current user
2-groups: This script prints all the groups the current user is part of.
3-new_owner: This script changes the owner of the file 'hello' to the user 'betty'
4-empty: This script creates an empty file called hello
5-execute: This script adds execute permission to the owner of the file hello
6-multiple_permissions: This script adds execute permission to the owner and the group owner, and read permission to other users, to the file hello
7-everybody: This script adds execution permission to the owner (u), group owner (g), and the other users (o)
8-James-Bond: A script that sets the permission of the file hello as follows: owner has no permission at all, group has no permission at all while other users have all the permission
9-John_Doe: A script that sets the mode of the file hello to 753 for the user julien
10-mirror_permissions: A script that copies the permissions of one file to the other <chmod --reference=referenceFile fileToChange>
11-directories_permissions: Script that adds execute permissions to all subdirectories of the current directory for the owner, group owner and all users. 
12-directory_permissions
13-change_group: a script that changes the group owner to school for the file hello which is in the working directory
100-change_owner_and_group: A script to change the owner to vincent and the group owner to staff for all the files and directories in the working directoty
101
102-if_only: A script that changes the owner of the file hello to betty only if it is owned by the guillaume.. use chown --if=fromName:toName fileName
103-Star_Wars: A script that will play Star Wars IV episode in terminal
