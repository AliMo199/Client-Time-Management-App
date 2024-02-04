# Client Time Management Application

## Description
This project is a Client Time Management Application designed to facilitate the tracking of client information, projects, and timesheets. It provides functionalities to add new clients, add projects for clients, add timesheets for projects, display timesheets, clients, and projects.

![UML design](https://i.imgur.com/wtYpczY.png)

## Features
1. **Add New Clients:** Allows users to add new clients to the system.
2. **Add New Projects:** Enables users to add new projects for existing clients.
3. **Add Timesheet for a Client on a Project:** Facilitates the addition of timesheets for specific clients and projects.
4. **Display Timesheet for a Client on a Project:** Provides functionality to display timesheets for a particular client and project.
5. **Display All Clients:** Allows users to view all the clients stored in the system.
6. **Display All Projects:** Enables users to view all the projects associated with clients.

## Files
1. **main.cpp:** Contains the main function and the menu-driven interface for the application.
2. **client.h:** Header file declaring the `client` class and its member functions.
3. **project.h:** Header file declaring the `project` class.
4. **timesheet.h:** Header file declaring the `timesheet` class.
5. **date.h:** Header file declaring the `Date` class.
6. **timeh.h:** Header file declaring the `Time` class.

## Compilation and Execution
To compile and execute the application, use any C++ compiler. Compile all the source files together and execute the resulting executable file.

## Usage
1. Upon running the application, a menu will be displayed with different services numbered from 1 to 6, with an option to quit (0).
2. Choose a service by entering the corresponding service number.
3. Follow the prompts and instructions to perform desired actions such as adding clients, adding projects, adding timesheets, or displaying client/project information.
4. Use the application until finished, then choose the option to quit.

## Note
1. Ensure proper inclusion of necessary header files during compilation.
2. The application may need modifications or adjustments based on specific requirements or platform differences.
