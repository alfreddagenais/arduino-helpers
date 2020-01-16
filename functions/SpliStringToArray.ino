/**
 * This function allow to get value from string
 * slip the string to an array
 * and finaly get the index
 *
 * Examples : 
 * 
 *  String splitString = "hi this is a split test";
 *  String word3 = getValue(splitString, ' ', 2);
 *  Serial.println(word3);
 *  
 *  String splitString = "blabla;yes;january";
 *  String part01 = getValue(splitString,';',0);
 *  String part02 = getValue(splitString,';',1);
 *  String part03 = getValue(splitString,';',2);
 */
String getValue(String data, char separator, int index)
{
  int found = 0;
  int strIndex[] = {0, -1};
  int maxIndex = data.length()-1;

  for(int i=0; i<=maxIndex && found<=index; i++){
    if(data.charAt(i)==separator || i==maxIndex){
        found++;
        strIndex[0] = strIndex[1]+1;
        strIndex[1] = (i == maxIndex) ? i+1 : i;
    }
  }

  return found>index ? data.substring(strIndex[0], strIndex[1]) : "";
}
