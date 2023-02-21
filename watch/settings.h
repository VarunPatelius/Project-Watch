const char* ssid          = "XXXXXXXXXX";
const char* password      = "XXXXXXXXXX";

const String weatherToken = "XXXXXXXXXX";
const String newsToken    = "XXXXXXXXXX";

const String weatherURL   = "http://api.openweathermap.org/data/2.5/weather?q=tampa,us&units=imperial&APPID=" + weatherToken;
const String newsURL      = "http://newsapi.org/v2/top-headlines?country=us&category=technology&pageSize=1&apiKey=" + newsToken;