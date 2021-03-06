/*
 * TIPOS DE FORMA DE ONDA, NO TOCAR
 */
#define SIN         1       // SENOIDAL
#define SAW         2       // DIENTE DE SIERRA
#define TRI         3       // TRIANGULAR
#define SQR         4       // CUADRADA

/*
 * DEFINICION DE LA ONDA, TOCAR AQUI
 */
#define HZ          2.00    // NECESARIO ESTABLECER CON DOS DECIMALES
#define VOL         1.00    // VALOR ENTRE 0.00 y 1.00, ESTABLECER CON DOS DECIMALES
#define WAVEFORM    SIN     // ELEGIR: SIN, SAW, TRI, SQR
//#define OSCOPE              // PERMITE VER LA ONDA DE SALIDA USANDO EL SERIAL_PLOTTER
                            //   PUEDE AFECTAR A LA FRECUENCIA, DESCOMENTAR PARA USAR

/*
 * DEFINES GENERALES, NO TOCAR
 */
#define STBY        8
#define APWM        3
#define AIN1        6
#define AIN2        5
#define BPWM        11
#define BIN1        9
#define BIN2        10
#define FW_L        A0
#define TRG_L       A1
#define ADJ_L       A2
#define FW_R        A3
#define TRG_R       A4
#define ADJ_R       A5
#define DEBUG       2
#define DELAY       (1000000/(512*HZ))

//https://www.daycounter.com/Calculators/Sine-Generator-Calculator2.phtml
const unsigned char sinPWM[]={0,0,0,1,1,1,2,2,3,4,4,5,6,7,8,9,
11,12,13,15,16,18,20,21,23,25,27,29,31,33,35,37,
39,42,44,46,49,51,54,56,59,62,64,67,70,73,76,79,
81,84,87,90,93,96,99,103,106,109,112,115,118,121,124,128,
128,131,134,137,140,143,146,149,152,156,159,162,165,168,171,174,
176,179,182,185,188,191,193,196,199,201,204,206,209,211,213,216,
218,220,222,224,226,228,230,232,234,235,237,239,240,242,243,244,
246,247,248,249,250,251,251,252,253,253,254,254,254,255,255,255,
255,255,255,255,254,254,253,253,252,252,251,250,249,248,247,246,
245,244,242,241,239,238,236,235,233,231,229,227,225,223,221,219,
217,215,212,210,207,205,202,200,197,195,192,189,186,184,181,178,
175,172,169,166,163,160,157,154,151,148,145,142,138,135,132,129,
126,123,120,117,113,110,107,104,101,98,95,92,89,86,83,80,
77,74,71,69,66,63,60,58,55,53,50,48,45,43,40,38,
36,34,32,30,28,26,24,22,20,19,17,16,14,13,11,10,
9,8,7,6,5,4,3,3,2,2,1,1,0,0,0,0};

const unsigned char sawPWM[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,
32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,
48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,
64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,
80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,
96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,
112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,
128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,
160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,
176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,
192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,
208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,
224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,
240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255};

const unsigned char triPWM[]={0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,
32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,
64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,94,
96,98,100,102,104,106,108,110,112,114,116,118,120,122,124,126,
128,130,132,134,136,138,140,142,144,146,148,150,152,154,156,158,
160,162,164,166,168,170,172,174,176,178,180,182,184,186,188,190,
192,194,196,198,200,202,204,206,208,210,212,214,216,218,220,222,
224,226,228,230,232,234,236,238,240,242,244,246,248,250,252,254,
254,252,250,248,246,244,242,240,238,236,234,232,230,228,226,224,
222,220,218,216,214,212,210,208,206,204,202,200,198,196,194,192,
190,188,186,184,182,180,178,176,174,172,170,168,166,164,162,160,
158,156,154,152,150,148,146,144,142,140,138,136,134,132,130,128,
126,124,122,120,118,116,114,112,110,108,106,104,102,100,98,96,
94,92,90,88,86,84,82,80,78,76,74,72,70,68,66,64,
62,60,58,56,54,52,50,48,46,44,42,40,38,36,34,32,
30,28,26,24,22,20,18,16,14,12,10,8,6,4,4,0};

const unsigned char sqrPWM[]={0,127,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
255,255,255,255,255,255,255,255,255,255,255,255,255,255,127,0};

void setup() {
    analogReference(EXTERNAL);
    pinMode(STBY, OUTPUT);
    pinMode(APWM, OUTPUT);
    pinMode(AIN1, OUTPUT);
    pinMode(AIN2, OUTPUT);
    pinMode(BPWM, OUTPUT);
    pinMode(BIN1, OUTPUT);
    pinMode(BIN2, OUTPUT);
    pinMode(DEBUG, OUTPUT);
    pinMode(TRG_L, INPUT);
    pinMode(TRG_R, INPUT);
    TCCR2B = TCCR2B & B11111000 | B00000001;    // set timer 2 divisor to 1 for PWM frequency of 31372.55 Hz
#ifdef OSCOPE
    Serial.begin(115200);
#endif
}

void loop() {
    static boolean polarity = false;
    unsigned char sample = 0;

    digitalWrite(DEBUG, polarity);
    digitalWrite(STBY, HIGH);
    digitalWrite(AIN1, !polarity);
    digitalWrite(AIN2, polarity);
    digitalWrite(BIN1, !polarity);
    digitalWrite(BIN2, polarity);
    for (unsigned char i = 0; i < 255; i++) {
#if WAVEFORM == SIN
        sample = sinPWM[i] * VOL;
#elif WAVEFORM == SAW
        sample = sawPWM[i] * VOL;
#elif WAVEFORM == TRI
        sample = triPWM[i] * VOL;
#elif WAVEFORM == SQR
        sample = sqrPWM[i] * VOL;
#endif
#ifdef OSCOPE
        if (polarity) Serial.println(sample);
        else Serial.println(-sample);
#endif
        analogWrite(APWM, sample);
        analogWrite(BPWM, sample);
        delayMicroseconds(DELAY);
    }
    polarity = !polarity;
}
