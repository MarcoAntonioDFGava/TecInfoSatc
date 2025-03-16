/* ************************************************************************

Colégio SATC
Curso Técnico em Informática
Disciplina: Sistemas Embarcados
Turma: 11XX
Professor: Marcos Antonio Jeremias Coelho

Programa: Seleção composta

Autor: Marcos Antonio Jeremias Coelho
Data: 06/03/2023
Versão: 1.0

************************************************************************ */

const int led_vermelho = 5;			//
const int led_verde = 6;			//
const int led_amarelo = 7;			//
char led;					//

void setup() {
  pinMode(led_vermelho, OUTPUT);		//
  pinMode(led_verde, OUTPUT);			//
  pinMode(led_amarelo, OUTPUT);			//
  Serial.begin(115200); 			// Definição da velocide de transmissão em 115200 bps
}

void loop() {
  if (Serial.available()) {			//
    led = Serial.read();			//
    if (led == 'R') { 				// Led vermelho - red
      digitalWrite(led_vermelho, HIGH); 	// Acende led
    }
    else {					//
      if (led == 'r') {				//
        digitalWrite(led_vermelho, LOW); 	// Apaga led
      }
    }
    if (led == 'G') { 				// Led verde - green
      digitalWrite(led_verde, HIGH); 		// Acende led
    }
    else {					//
      if (led == 'g') {				//
        digitalWrite(led_verde, LOW); 		// Apaga led
      }
    }
    if (led == 'Y') { 				// Led amarelo - yellow
      digitalWrite(led_amarelo, HIGH); 		// Acende led
    }
    else {					//
      if (led == 'y') {				//
        digitalWrite(led_amarelo, LOW); 	// Apaga led
      }
    }
  }
}
