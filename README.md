# AirCrashAnalysis
Programming Assignment for Data Visualization by UIUC on Coursera.

* MiningData.java accesses an online database and obtains the needed data (actually more than needed as of this commit). Exports a .csv file. 

* The file is then supposed to be cleaned up in Excel. 

* processFrame.R then converts the date vs. deaths data to year-only vs. deaths data. 

* output.csv contains only the #deaths column from the original .csv file. 

* output.txt is supposed to contain that as well as the dates corresponding to each incident, except that I couldn't get it to work properly in R when both these values are included. Therefore, I only used the dates from output.txt (from the original .csv file as well, of course). 

* Finally, deathsPerYear.R maps each year to the number of deaths in that year in a matrix, which is exported as yet another .csv file.

* Then we make the scatter plot - Historica Air-Safety Data.png

## About the quality of the database

It's pretty good. The data seems to be accurate, and even somewhat comprehensive. The scatter plot does look quite a bit like this one - https://en.wikipedia.org/wiki/Aviation_accidents_and_incidents#/media/File:ACRO_fatalities_1918-2009.svg.