// Inclide library's
  #include <Phpoc.h>
  #include<Servo.h>
// Start PHP webserver op poort 80
  PhpocServer server(80);
// Maak servo's aan en geef ze een naam.
  Servo rechterservo;
  Servo linkerservo;

// Het declareen van publieke constanten
// Rechter Servo
  int const rsvl =  87;       // rechter servo vooruit langzaam
  int const rsvs =   0;       // rechter servo vooruit snel
  int const rsal = 101;       // rechter servo achteruit langzaam 
  int const rsas = 180;       // rechter servo achteruit snel
  int const rsst =  90;       // rechter servo stop
// Linker Servo  
  int const lsvl = 100;       // linker servo vooruit langzaam
  int const lsvs = 180;       // linker servo vooruit snel
  int const lsal =  85;       // linker servo achteruit langzaam
  int const lsas =   0;       // linker servo achteruit snel
  int const lsst =  90;       // linker servo stop

// Variable knoppen (kijken of het ingedrukt is geweest ->Als dit er niet is doet hij niet ingedrukt altijd en hierdoor loopt het vast en rijd ie vanzelf achteruit etc.)
  int KnopA = 0; // 0 is niet ingedrukt geweest - 1 is ingedrukt geweest
  int KnopB = 0; // 0 is niet ingedrukt geweest - 1 is ingedrukt geweest
  int KnopC = 0; // 0 is niet ingedrukt geweest - 1 is ingedrukt geweest
  int KnopD = 0; // 0 is niet ingedrukt geweest - 1 is ingedrukt geweest
  int KnopE = 0; // 0 is niet ingedrukt geweest - 1 is ingedrukt geweest
  int KnopF = 0; // 0 is niet ingedrukt geweest - 1 is ingedrukt geweest
  int KnopG = 0; // 0 is niet ingedrukt geweest - 1 is ingedrukt geweest
  int KnopH = 0; // 0 is niet ingedrukt geweest - 1 is ingedrukt geweest  
  int KnopI = 0; // 0 is niet ingedrukt geweest - 1 is ingedrukt geweest

// Void Setup -> Wat doet de Arduino wanneer hij opstart.
  void setup() {
    //Serial monitor beginnen op 9600
      Serial.begin(9600);
      while(!Serial);
      
    // initialize PHPoC [WiFi] Shield:
      Phpoc.begin(PF_LOG_SPI | PF_LOG_NET);
      //Phpoc.begin();
      
    // start WebSocket server
      server.beginWebSocket("remote_push");  

    // print IP address of PHPoC [WiFi] Shield to serial monitor ( via hier kan je de Webapp benaderen):
      Serial.print("WebSocket server address : ");
      Serial.println(Phpoc.localIP());

    // Verbind pinnen aan de servo
      rechterservo.attach(9);
      linkerservo.attach(8);

    // Verbind pin aan de buzzer en geef het door als een output -> Voor de Claxon    
      pinMode(6, OUTPUT);
  }

// Void Loop -> Dit word non stop gerunt. Zodra het afgelopen is begint het weer opnieuw.
  void loop() {
    // wait for a new client:
      PhpocClient client = server.available();    
      if (client) {
      // Kijken of de client beschikbaar is
        if (client.available() > 0) {
          // read a byte incoming from the client:
            char keuze = client.read();    
            // letters doorgegeven (A tm I)
            
            // de code voor de letter A is 65 (nodig voor de if omdat char een array is)
              if(keuze == 65){
                // Set KnopA naar 1
                  KnopA = 1;
                // Geef melding dat knop is ingedrukt
                  Serial.println("A ingedrukt, niets doen");
              } else {
                // Kijken of KnopA was ingedrukt.
                  if(KnopA == 1){
                    // KnopA resetten zodat het nogmaals gebruikt kan worden
                      KnopA = 0;
                    // Geef melding dat knop is losgelaten
                      Serial.println("A is losgelaten, niets doen");
                  } // Einde van de Knop == 1
              } // Einde van de else statement  

            // de code voor de letter B is 66 (nodig voor de if omdat char een array is)
              if(keuze == 66){
                // Set variable KnopB naar 1
                  KnopB = 1;
                // Geef melding dat knop is ingedrukt                  
                  Serial.println("B ingedrukt, ga vooruit");
                // Versnel naar langzaam voor beide servo's in vooruit richting
                  rechterservo.write(rsvl);
                  linkerservo.write(lsvl);
                // Korte pauze
                  delay(250);
                // Versnel naar maximaal voor beide servo's in vooruitrichting
                  rechterservo.write(rsvs);
                  linkerservo.write(lsvs);
              } else {
                // Kijken of KnopA was ingedrukt.
                  if(KnopB == 1){
                    // KnopB resetten zodat het nogmaals gebruikt kan worden
                      KnopB = 0;
                    // Geef melding dat knop is losgelaten
                      Serial.println("B is losgelaten, breng de robot to stilstand");
                    // Versnel naar langzaam voor beide servo's in vooruit richting
                      rechterservo.write(rsvl);
                      linkerservo.write(lsvl); 
                    // Korte pauze
                      delay(250);
                    // Versnel naar stilstand voor beide servo's in vooruitrichting
                      rechterservo.write(rsst);
                      linkerservo.write(lsst);
                  } // Einde van de Knop == 1
              } // Einde van de else statement  
              
            // de code voor de letter C is 67 (nodig voor de if omdat char een array is)
              if(keuze == 67){
                // Set KnopC naar 1
                  KnopC = 1;
                // Geef melding dat knop is ingedrukt
                  Serial.println("C ingedrukt, niets doen");
              } else {
                // Kijken of KnopC was ingedrukt.
                  if(KnopC == 1){
                    // KnopC resetten zodat het nogmaals gebruikt kan worden
                      KnopC = 0;
                    // Geef melding dat knop is losgelaten
                      Serial.println("C is losgelaten, niets doen");
                  } // Einde van de Knop == 1
              } // Einde van de else statement  

            // De code voor de letter D is 68 (nodig voor de if omdat char een array is)
              if(keuze == 68){
                // Zet KnopD naar 1
                  KnopD = 1;
                // Geef een melding dat de knop is ingedrukt
                  Serial.println("D ingedrukt, links draaien");
                // Activeer de rechter Srevo langzaam
                  rechterservo.write(rsvl);
              } else {
                // Kijken of KnopA was ingedrukt.
                  if(KnopD == 1){
                    // KnopD resetten zodat het nogmaals gebruikt kan worden
                      KnopD = 0;
                    // Geef melding dat knop is losgelaten
                      Serial.println("D is losgelaten, breng de servo tot stil stand");
                    // Breng de rechter Servo tot stilstand
                      rechterservo.write(rsst);
                  } // Einde van de Knop == 1
              } // Einde van de else statement      

            // De code voor de letter E is 69 (nodig voor de if omdat char een array is)
              if(keuze == 69){
                // Zet KnopE naar 1
                  KnopE = 1;
                // Geef een melding dat de knop is ingedrukt
                  Serial.println("E ingedrukt, activeer de claxon");
                // Laat de buzzer op 750 afgaan
                  tone(6, 750);
              } else {
                // Kijken of KnopE was ingedrukt.
                if(KnopE == 1){
                  // KnopE resetten zodat het nogmaals gebruikt kan worden
                    KnopE = 0;
                  // Geef een melding dat de knop is losgelaten
                    Serial.println("E losgelaten, deactiveer de claxon");
                  // Laat de buzzer stoppen met een tone afspelen
                    noTone(6);
                  } // Einde van de Knop == 1
              } // Einde van de else statement  

            // De code voor de letter F is 70 (nodig voor de if omdat char een array is)
              if(keuze == 70){
                // Zet knop F naar 1
                  KnopF = 1;
                // Geef een melding dat de knop is ingedrukt
                  Serial.println("F ingedrukt, rechts draaien");
                // Activeer linker servo op de snelheid langzaam
                  linkerservo.write(lsvl);
              } else {
                if(KnopF == 1){
                  // KnopA resetten zodat het nogmaals gebruikt kan worden
                    KnopF = 0;
                  // Geef melding dat knop is losgelaten
                    Serial.println("D is losgelaten, breng de servo tot stil stand");
                  // Breng de linker Servo tot stilstand
                    linkerservo.write(rsst);
                  } // Einde van de Knop == 1
              } // Einde van de else statement  

            // De code voor de letter G is 71 (nodig voor de if omdat char een array is)
              if(keuze == 71){
                // Zet KnopG naar 1
                  KnopG = 1;
                // Geef een melding dat de knop is ingedrukt
                  Serial.println("G ingedrukt, niets doen");
              } else {
                // Kijken of KnopG was ingedrukt.
                  if(KnopG == 1){
                    // KnopG resetten zodat het nogmaals gebruikt kan worden
                      KnopG = 0;
                    // Geef melding dat knop is losgelaten
                      Serial.println("G is losgelaten, niets doen");
                  } // Einde van de Knop == 1
              } // Einde van de else statement  
             
            // de code voor de letter H is 72
              if(keuze == 72){
                // Zet KnopH naar 1
                  KnopH = 1;
                // Geef een melding dat de knop is ingedrukt
                  Serial.println("H ingedrukt, achteruit");
                // Versnel naar ultra langzaam voor beide servo's in achteruit richting
                  rechterservo.write(88);
                  linkerservo.write(95);
                // Korte Pauze
                  delay(250);
                // Versnel naar langzaam voor beide servo's in achteruit richting
                  rechterservo.write(rsal);
                  linkerservo.write(lsal);
                // Korte pauze
                  delay(250);
                // Versnel naar maximaal voor beide servo's in achteruit richting
                  rechterservo.write(rsas);
                  linkerservo.write(lsas);
              } else {
                // Kijken of KnopA was ingedrukt.
                  if(KnopH == 1){
                    // KnopH resetten zodat het nogmaals gebruikt kan worden
                      KnopH = 0;
                    // Geef melding dat knop is losgelaten
                      Serial.println("H is losgelaten, laat de servo's tot stilstand komen");
                    // Versnel naar langzaam voor beide servo's in achteruit richting
                      rechterservo.write(rsal);
                      linkerservo.write(lsal);
                    // Korte pauze
                      delay(250); 
                    // Versnel naar stilstand voor beide servo's
                      rechterservo.write(rsst);
                      linkerservo.write(lsst);
                  } // Einde van de Knop == 1
              } // Einde van de else statement  
      
            // De code voor de letter I is 73 (nodig voor de if omdat char een array is)
              if(keuze == 73){
                // Zet KnopI naar 1
                  KnopI = 1;
                // Geef een melding dat de knop is ingedrukt
                  Serial.println("I ingedrukt, niets doen");
              } else {
                // Kijken of KnopI was ingedrukt.
                  if(KnopI == 1){
                    // KnopA resetten zodat het nogmaals gebruikt kan worden
                      KnopI = 0;
                    // Geef melding dat knop is losgelaten
                      Serial.println("I is losgelaten, niets doen");
                  } // Einde van de Knop == 1
              } // Einde van de else statement              
      } // Afsluiten van de if client.avaible
    } // Afsluiten van de if client
  }// Afsluiten van de loop
