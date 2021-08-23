
#include<stdio.h>
main()
{
int n;
char *highers[=["Lakh Crores","Lakh Crore","Hundred Crores","Hundred Crore","Crores","Crore","Lakhs","Lakh","Thousands","Thousand","Hundred","Hundred and"]
tens=[" "," ","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"]
units=[" ","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"]

printf("\n*********************** Numericals To Words ***************************\n\n")
printf("Enter a Number you want to convert to Words : Minimum =0 Maximum = 9900009999999.\n\n This Program can help you within this limit only : "))//Take input in numerical
scanf("%d",&n);

highers=["Lakh Crores","Lakh Crore","Hundred Crores","Hundred Crore","Crores","Crore","Lakhs","Lakh","Thousands","Thousand","Hundred","Hundred and"]
tens=[" "," ","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"]
units=[" ","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"]
lakhCrores=(n//100000000000)%100
hundredCrores=(n//1000000000)%100
crore=(n//10000000)%100#Check Number of Crores
lakh=((n//100000)%100)#Check Number of Lakhs
thousand=((n//1000)%100)#Check Number of Thousands
hundred=((n//100)%10)#Check Number of Hundreds
rest=(n%100)#Check for Tens
finalWord=""#To Store the result word

#My Main Logic Starts Here

if(lakhCrores>0):
  if(lakhCrores>9 and lakhCrores<=19):
  	finalWord=finalWord+" "+units[lakhCrores]+" "+highers[0]
  elif(lakhCrores>19):
  	finalWord=finalWord+" "+tens[lakhCrores//10]+" "+units[lakhCrores%10]+" "+highers[0]
  else:
  	finalWord=finalWord+" "+units[lakhCrores]+" "+highers[1]

if(hundredCrores>0):
  if(hundredCrores>9 and hundredCrores<=19):
  	finalWord=finalWord+" "+units[hundredCrores]+" "+highers[2]
  elif(hundredCrores>19):
  	finalWord=finalWord+" "+tens[hundredCrores//10]+" "+units[hundredCrores%10]+" "+highers[2]
  else:
  	finalWord=finalWord+" "+units[hundredCrores]+" "+highers[3]

if(crore>0):
  if(crore>9 and thousand<=19):
  	finalWord=finalWord+" "+units[crore]+" "+highers[4]
  elif(crore>19):
  	finalWord=finalWord+" "+tens[crore//10]+" "+units[crore%10]+" "+highers[4]
  else:
  	finalWord=finalWord+" "+units[crore]+" "+highers[5]


if(lakh>0):
  if(lakh>9 and lakh<=19):
  	finalWord=finalWord+" "+units[lakh]+" "+highers[6]
