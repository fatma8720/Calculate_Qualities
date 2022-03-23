data <- read.table(file="qu.txt")
data
boxplot( data,main="Qualities boxplot", outline=TRUE,col = "red")
boxplot( data[,1],main="Qualities boxplot for first cell", outline=TRUE,col = "red")
boxplot( data[,2],main="Qualities boxplot for last cell", outline=TRUE,col = "red")
