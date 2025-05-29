# Functions and Features.
This text file is used for planning the application structure, and used for ehancing the experience of development, a manual file for Application Functions and Parameters is going to be separated.

**GUI**: There's chance that GUI version is also going to be made. Therefore app's architecture must be abstract enough, and have its main features inside of control functions as interface for controlling layer above.

## Algorithm
**Problem**: User copied a big amount of files, directories and subdirectories to another space and wants to make sure there are no loss.
**Solution**:
- User starts the app with typing `fscm -params ./FileSystemOriginal ./FileSystemCopied`
- Depending on input parameters it does:
- - Scan first FS (Filesystem) in different modes, such as text mode, or file list mode.
- - - Actually, to make app simplier to use, it's going to be very useful to have modes, with increased accuracy, fast mode and others. Depending on their amount, it may be more efficient to keep parameters instead of modes.
- - Then, depending on the point above, it calculates the hash **(learn different algorithms and differences between those**), and use other **(which?)** methods that makes possible to check if the files are similar to both FS-es.
- Then, after scan is completed, it does the same to the second FS, using the same algorithm.
- After it finished, it provides 


## List of parameters:
- v - show each file scanned.
- q - show only different files
- i - Show detailed info on the file, such as size, when created, when last changed.
- t - text mode

## Keep in mind:
1. There may be long names, that cause errors. Find ways of avoiding erros.

---
wip.
List Functions:
