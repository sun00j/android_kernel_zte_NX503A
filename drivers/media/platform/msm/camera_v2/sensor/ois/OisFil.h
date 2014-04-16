/*Filter Calculator Version 4.02*/
/*the time and date : 2013/10/22 15:56:03*/
/*FC filename : 20130515_01_NLMT7*/
/*fs,23438Hz*/
/*LSI No.,LC898111_A*/
/*Comment,*/

/* 8bit */
OISINI__ const struct STHALREG	CsHalReg[]	= {
		{ 0x000E, 0x00},	/*00,000E*/
		{ 0x000F, 0x00},	/*00,000F,0dB*/
		{ 0x0086, 0x00},	/*00,0086,0dB*/
		{ 0x0087, 0x00},	/*00,0087,0dB*/
		{ 0x0088, 0x33},	/*33,0088,18dB*/
		{ 0x0089, 0x00},	/*00,0089*/
		{ 0x008A, 0x00},	/*00,008A,LPF,400Hz,0dB,fs/1,invert=0*/
		{ 0x008B, 0x40},	/*40,008B,Through,0dB,fs/1,invert=0*/
		{ 0x008C, 0x04},	/*04,008C,LBF,10Hz,20Hz,0dB,fs/1,invert=0*/
		{ 0x0090, 0x00},	/*00,0090,0dB*/
		{ 0x0091, 0x00},	/*00,0091,0dB*/
		{ 0x0092, 0x33},	/*33,0092,18dB*/
		{ 0x0093, 0x00},	/*00,0093*/
		{ 0x0094, 0x00},	/*00,0094,LPF,400Hz,0dB,fs/1,invert=0*/
		{ 0x0095, 0x40},	/*40,0095,Through,0dB,fs/1,invert=0*/
		{ 0x0096, 0x04},	/*04,0096,LBF,10Hz,20Hz,0dB,fs/1,invert=0*/
		{ 0x00A0, 0x00},	/*00,00A0,0dB*/
		{ 0x00A1, 0x00},	/*00,00A1*/
		{ 0x00B4, 0x00},	/*00,00B4*/
		{ 0x00B5, 0x00},	/*00,00B5,0dB*/
		{ 0x00B6, 0x00},	/*00,00B6,Through,0dB,fs/1,invert=0*/
		{ 0x00BB, 0x00},	/*00,00BB*/
		{ 0x00BC, 0x00},	/*00,00BC,0dB*/
		{ 0x00BD, 0x00},	/*00,00BD,Through,0dB,fs/1,invert=0*/
		{ 0x00C1, 0x00},	/*00,00C1,Through,0dB,fs/1,invert=0*/
		{ 0x00C5, 0x00},	/*00,00C5,Through,0dB,fs/1,invert=0*/
		{ 0x00C8, 0x00},	/*00,00C8*/
		{ 0x0110, 0x00},	/*00,0110*/
		{ 0x0111, 0x00},	/*00,0111*/
		{ 0x0112, 0x00},	/*00,0112*/
		{ 0x017D, 0x00},	/*00,017D*/
		{ 0xFFFF , 0xFF }
	} ;
/* 16bit */
OISINI__ const struct STHALFIL	CsHalFil[]	= {
		{ 0x1128, 0x7FFF},	/*7FFF,1128,0dB,invert=0*/
		{ 0x1168, 0x7FFF},	/*7FFF,1168,0dB,invert=0*/
		{ 0x11E0, 0x7FFF},	/*7FFF,11E0,0dB,invert=0*/
		{ 0x11E1, 0x7FFF},	/*7FFF,11E1,0dB,invert=0*/
		{ 0x11E2, 0x7FFF},	/*7FFF,11E2,0dB,invert=0*/
		{ 0x11E3, 0x7FFF},	/*7FFF,11E3,0dB,invert=0*/
		{ 0x11E4, 0x7FFF},	/*7FFF,11E4,0dB,invert=0*/
		{ 0x11E5, 0x7FFF},	/*7FFF,11E5,0dB,invert=0*/
		{ 0x12E0, 0x7FFF},	/*7FFF,12E0,Through,0dB,fs/1,invert=0*/
		{ 0x12E1, 0x0000},	/*0000,12E1,Through,0dB,fs/1,invert=0*/
		{ 0x12E2, 0x0000},	/*0000,12E2,Through,0dB,fs/1,invert=0*/
		{ 0x12E3, 0x7FFF},	/*7FFF,12E3,Through,0dB,fs/1,invert=0*/
		{ 0x12E4, 0x0000},	/*0000,12E4,Through,0dB,fs/1,invert=0*/
		{ 0x12E5, 0x0000},	/*0000,12E5,Through,0dB,fs/1,invert=0*/
		{ 0x12E6, 0x7FFF},	/*7FFF,12E6,0dB,invert=0*/
		{ 0x1301, 0x7FFF},	/*7FFF,1301,0dB,invert=0*/
		{ 0x1302, 0x7FFF},	/*7FFF,1302,0dB,invert=0*/
		{ 0x1305, 0x1B0F},	/*1B0F,1305,LPF,2000Hz,0dB,fs/1,invert=0*/
		{ 0x1306, 0x1B0F},	/*1B0F,1306,LPF,2000Hz,0dB,fs/1,invert=0*/
		{ 0x1307, 0x49E1},	/*49E1,1307,LPF,2000Hz,0dB,fs/1,invert=0*/
		{ 0x1308, 0x0000},	/*0000,1308,Cutoff,invert=0*/
		{ 0x1309, 0x4027},	/*4027,1309,-6dB,invert=0*/
		{ 0x130A, 0x0000},	/*0000,130A,Cutoff,invert=0*/
		{ 0x130B, 0x0000},	/*0000,130B,Cutoff,invert=0*/
		{ 0x130C, 0x7FFF},	/*7FFF,130C,0dB,invert=0*/
		{ 0x130D, 0x4ADF},	/*4ADF,130D,HBF,30Hz,600Hz,2dB,fs/1,invert=0*/
		{ 0x130E, 0xB5B9},	/*B5B9,130E,HBF,30Hz,600Hz,2dB,fs/1,invert=0*/
		{ 0x130F, 0x3679},	/*3679,130F,HBF,30Hz,600Hz,2dB,fs/1,invert=0*/
		{ 0x1310, 0x0000},	/*0000,1310,HBF,30Hz,600Hz,2dB,fs/1,invert=0*/
		{ 0x1311, 0x0000},	/*0000,1311,HBF,30Hz,600Hz,2dB,fs/1,invert=0*/
		{ 0x1312, 0x7FFF},	/*7FFF,1312,Through,0dB,fs/1,invert=0*/
		{ 0x1313, 0x0000},	/*0000,1313,Through,0dB,fs/1,invert=0*/
		{ 0x1314, 0x0000},	/*0000,1314,Through,0dB,fs/1,invert=0*/
		{ 0x1315, 0x0000},	/*0000,1315,Through,0dB,fs/1,invert=0*/
		{ 0x1316, 0x0000},	/*0000,1316,Through,0dB,fs/1,invert=0*/
		{ 0x1317, 0x7FFF},	/*7FFF,1317,0dB,invert=0*/
		{ 0x1318, 0x47FB},	/*47FB,1318,-5dB,invert=0*/
		{ 0x1319, 0x7FFF},	/*7FFF,1319,0dB,invert=0*/
		{ 0x131A, 0x0683},	/*0683,131A,LPF,400Hz,0dB,fs/1,invert=0*/
		{ 0x131B, 0x0683},	/*0683,131B,LPF,400Hz,0dB,fs/1,invert=0*/
		{ 0x131C, 0x72F9},	/*72F9,131C,LPF,400Hz,0dB,fs/1,invert=0*/
		{ 0x131D, 0x0000},	/*0000,131D,LPF,400Hz,0dB,fs/1,invert=0*/
		{ 0x131E, 0x0000},	/*0000,131E,LPF,400Hz,0dB,fs/1,invert=0*/
		{ 0x131F, 0x07AE},	/*07AE,131F,LPF,0.5Hz,47dB,fs/4,invert=0*/
		{ 0x1320, 0x07AE},	/*07AE,1320,LPF,0.5Hz,47dB,fs/4,invert=0*/
		{ 0x1321, 0x7FEF},	/*7FEF,1321,LPF,0.5Hz,47dB,fs/4,invert=0*/
		{ 0x1322, 0x0000},	/*0000,1322,LPF,0.5Hz,47dB,fs/4,invert=0*/
		{ 0x1323, 0x0000},	/*0000,1323,LPF,0.5Hz,47dB,fs/4,invert=0*/
		{ 0x1324, 0x4015},	/*4015,1324,LBF,10Hz,20Hz,0dB,fs/1,invert=0*/
		{ 0x1325, 0xC041},	/*C041,1325,LBF,10Hz,20Hz,0dB,fs/1,invert=0*/
		{ 0x1326, 0x7FA9},	/*7FA9,1326,LBF,10Hz,20Hz,0dB,fs/1,invert=0*/
		{ 0x1327, 0x0000},	/*0000,1327,LBF,10Hz,20Hz,0dB,fs/1,invert=0*/
		{ 0x1328, 0x0000},	/*0000,1328,LBF,10Hz,20Hz,0dB,fs/1,invert=0*/
		{ 0x1329, 0x7FFF},	/*7FFF,1329,0dB,invert=0*/
		{ 0x132A, 0x32F5},	/*32F5,132A,-8dB,invert=0*/
		{ 0x132B, 0x0000},	/*0000,132B,Cutoff,invert=0*/
		{ 0x132C, 0x0000},	/*0000,132C,Cutoff,invert=0*/
		{ 0x132D, 0x0000},	/*0000,132D,Cutoff,invert=0*/
		{ 0x132E, 0x0000},	/*0000,132E,Cutoff,invert=0*/
		{ 0x132F, 0x169B},	/*169B,132F,LPF,1600Hz,0dB,fs/1,invert=0*/
		{ 0x1330, 0x169B},	/*169B,1330,LPF,1600Hz,0dB,fs/1,invert=0*/
		{ 0x1331, 0x52CB},	/*52CB,1331,LPF,1600Hz,0dB,fs/1,invert=0*/
		{ 0x1332, 0x7FFF},	/*7FFF,1332,Through,0dB,fs/1,invert=0*/
		{ 0x1333, 0x0000},	/*0000,1333,Through,0dB,fs/1,invert=0*/
		{ 0x1334, 0x0000},	/*0000,1334,Through,0dB,fs/1,invert=0*/
		{ 0x1335, 0x0000},	/*0000,1335,Through,0dB,fs/1,invert=0*/
		{ 0x1336, 0x0000},	/*0000,1336,Through,0dB,fs/1,invert=0*/
		{ 0x1337, 0x7FFF},	/*7FFF,1337,Through,0dB,fs/1,invert=0*/
		{ 0x1338, 0x0000},	/*0000,1338,Through,0dB,fs/1,invert=0*/
		{ 0x1339, 0x0000},	/*0000,1339,Through,0dB,fs/1,invert=0*/
		{ 0x133A, 0x0000},	/*0000,133A,Through,0dB,fs/1,invert=0*/
		{ 0x133B, 0x0000},	/*0000,133B,Through,0dB,fs/1,invert=0*/
		{ 0x133C, 0x7FFF},	/*7FFF,133C,0dB,invert=0*/
		{ 0x133D, 0x0000},	/*0000,133D,Cutoff,invert=0*/
		{ 0x133E, 0x0000},	/*0000,133E,Cutoff,invert=0*/
		{ 0x133F, 0x7FFF},	/*7FFF,133F,0dB,invert=0*/
		{ 0x1341, 0x7FFF},	/*7FFF,1341,0dB,invert=0*/
		{ 0x1342, 0x7FFF},	/*7FFF,1342,0dB,invert=0*/
		{ 0x1345, 0x1B0F},	/*1B0F,1345,LPF,2000Hz,0dB,fs/1,invert=0*/
		{ 0x1346, 0x1B0F},	/*1B0F,1346,LPF,2000Hz,0dB,fs/1,invert=0*/
		{ 0x1347, 0x49E1},	/*49E1,1347,LPF,2000Hz,0dB,fs/1,invert=0*/
		{ 0x1348, 0x0000},	/*0000,1348,Cutoff,invert=0*/
		{ 0x1349, 0x4027},	/*4027,1349,-6dB,invert=0*/
		{ 0x134A, 0x0000},	/*0000,134A,Cutoff,invert=0*/
		{ 0x134B, 0x0000},	/*0000,134B,Cutoff,invert=0*/
		{ 0x134C, 0x7FFF},	/*7FFF,134C,0dB,invert=0*/
		{ 0x134D, 0x4ADF},	/*4ADF,134D,HBF,30Hz,600Hz,2dB,fs/1,invert=0*/
		{ 0x134E, 0xB5B9},	/*B5B9,134E,HBF,30Hz,600Hz,2dB,fs/1,invert=0*/
		{ 0x134F, 0x3679},	/*3679,134F,HBF,30Hz,600Hz,2dB,fs/1,invert=0*/
		{ 0x1350, 0x0000},	/*0000,1350,HBF,30Hz,600Hz,2dB,fs/1,invert=0*/
		{ 0x1351, 0x0000},	/*0000,1351,HBF,30Hz,600Hz,2dB,fs/1,invert=0*/
		{ 0x1352, 0x7FFF},	/*7FFF,1352,Through,0dB,fs/1,invert=0*/
		{ 0x1353, 0x0000},	/*0000,1353,Through,0dB,fs/1,invert=0*/
		{ 0x1354, 0x0000},	/*0000,1354,Through,0dB,fs/1,invert=0*/
		{ 0x1355, 0x0000},	/*0000,1355,Through,0dB,fs/1,invert=0*/
		{ 0x1356, 0x0000},	/*0000,1356,Through,0dB,fs/1,invert=0*/
		{ 0x1357, 0x7FFF},	/*7FFF,1357,0dB,invert=0*/
		{ 0x1358, 0x47FB},	/*47FB,1358,-5dB,invert=0*/
		{ 0x1359, 0x7FFF},	/*7FFF,1359,0dB,invert=0*/
		{ 0x135A, 0x0683},	/*0683,135A,LPF,400Hz,0dB,fs/1,invert=0*/
		{ 0x135B, 0x0683},	/*0683,135B,LPF,400Hz,0dB,fs/1,invert=0*/
		{ 0x135C, 0x72F9},	/*72F9,135C,LPF,400Hz,0dB,fs/1,invert=0*/
		{ 0x135D, 0x0000},	/*0000,135D,LPF,400Hz,0dB,fs/1,invert=0*/
		{ 0x135E, 0x0000},	/*0000,135E,LPF,400Hz,0dB,fs/1,invert=0*/
		{ 0x135F, 0x07AE},	/*07AE,135F,LPF,0.5Hz,47dB,fs/4,invert=0*/
		{ 0x1360, 0x07AE},	/*07AE,1360,LPF,0.5Hz,47dB,fs/4,invert=0*/
		{ 0x1361, 0x7FEF},	/*7FEF,1361,LPF,0.5Hz,47dB,fs/4,invert=0*/
		{ 0x1362, 0x0000},	/*0000,1362,LPF,0.5Hz,47dB,fs/4,invert=0*/
		{ 0x1363, 0x0000},	/*0000,1363,LPF,0.5Hz,47dB,fs/4,invert=0*/
		{ 0x1364, 0x4015},	/*4015,1364,LBF,10Hz,20Hz,0dB,fs/1,invert=0*/
		{ 0x1365, 0xC041},	/*C041,1365,LBF,10Hz,20Hz,0dB,fs/1,invert=0*/
		{ 0x1366, 0x7FA9},	/*7FA9,1366,LBF,10Hz,20Hz,0dB,fs/1,invert=0*/
		{ 0x1367, 0x0000},	/*0000,1367,LBF,10Hz,20Hz,0dB,fs/1,invert=0*/
		{ 0x1368, 0x0000},	/*0000,1368,LBF,10Hz,20Hz,0dB,fs/1,invert=0*/
		{ 0x1369, 0x7FFF},	/*7FFF,1369,0dB,invert=0*/
		{ 0x136A, 0x32F5},	/*32F5,136A,-8dB,invert=0*/
		{ 0x136B, 0x0000},	/*0000,136B,Cutoff,invert=0*/
		{ 0x136C, 0x0000},	/*0000,136C,Cutoff,invert=0*/
		{ 0x136D, 0x0000},	/*0000,136D,Cutoff,invert=0*/
		{ 0x136E, 0x0000},	/*0000,136E,Cutoff,invert=0*/
		{ 0x136F, 0x169B},	/*169B,136F,LPF,1600Hz,0dB,fs/1,invert=0*/
		{ 0x1370, 0x169B},	/*169B,1370,LPF,1600Hz,0dB,fs/1,invert=0*/
		{ 0x1371, 0x52CB},	/*52CB,1371,LPF,1600Hz,0dB,fs/1,invert=0*/
		{ 0x1372, 0x7FFF},	/*7FFF,1372,Through,0dB,fs/1,invert=0*/
		{ 0x1373, 0x0000},	/*0000,1373,Through,0dB,fs/1,invert=0*/
		{ 0x1374, 0x0000},	/*0000,1374,Through,0dB,fs/1,invert=0*/
		{ 0x1375, 0x0000},	/*0000,1375,Through,0dB,fs/1,invert=0*/
		{ 0x1376, 0x0000},	/*0000,1376,Through,0dB,fs/1,invert=0*/
		{ 0x1377, 0x7FFF},	/*7FFF,1377,Through,0dB,fs/1,invert=0*/
		{ 0x1378, 0x0000},	/*0000,1378,Through,0dB,fs/1,invert=0*/
		{ 0x1379, 0x0000},	/*0000,1379,Through,0dB,fs/1,invert=0*/
		{ 0x137A, 0x0000},	/*0000,137A,Through,0dB,fs/1,invert=0*/
		{ 0x137B, 0x0000},	/*0000,137B,Through,0dB,fs/1,invert=0*/
		{ 0x137C, 0x7FFF},	/*7FFF,137C,0dB,invert=0*/
		{ 0x137D, 0x0000},	/*0000,137D,Cutoff,invert=0*/
		{ 0x137E, 0x0000},	/*0000,137E,Cutoff,invert=0*/
		{ 0x137F, 0x7FFF},	/*7FFF,137F,0dB,invert=0*/
		{ 0x1380, 0x7FFF},	/*7FFF,1380,0dB,invert=0*/
		{ 0x1381, 0x7FFF},	/*7FFF,1381,Through,0dB,fs/1,invert=0*/
		{ 0x1382, 0x0000},	/*0000,1382,Through,0dB,fs/1,invert=0*/
		{ 0x1383, 0x0000},	/*0000,1383,Through,0dB,fs/1,invert=0*/
		{ 0x1384, 0x7FFF},	/*7FFF,1384,Through,0dB,fs/1,invert=0*/
		{ 0x1385, 0x0000},	/*0000,1385,Through,0dB,fs/1,invert=0*/
		{ 0x1386, 0x0000},	/*0000,1386,Through,0dB,fs/1,invert=0*/
		{ 0x1387, 0x7FFF},	/*7FFF,1387,0dB,invert=0*/
		{ 0x1388, 0x7FFF},	/*7FFF,1388,Through,0dB,fs/1,invert=0*/
		{ 0x1389, 0x0000},	/*0000,1389,Through,0dB,fs/1,invert=0*/
		{ 0x138A, 0x0000},	/*0000,138A,Through,0dB,fs/1,invert=0*/
		{ 0x138B, 0x7FFF},	/*7FFF,138B,Through,0dB,fs/4,invert=0*/
		{ 0x138C, 0x0000},	/*0000,138C,Through,0dB,fs/4,invert=0*/
		{ 0x138D, 0x0000},	/*0000,138D,Through,0dB,fs/4,invert=0*/
		{ 0x138E, 0x7FFF},	/*7FFF,138E,Through,0dB,fs/1,invert=0*/
		{ 0x138F, 0x0000},	/*0000,138F,Through,0dB,fs/1,invert=0*/
		{ 0x1390, 0x0000},	/*0000,1390,Through,0dB,fs/1,invert=0*/
		{ 0x1391, 0x7FFF},	/*7FFF,1391,0dB,invert=0*/
		{ 0x1392, 0x7FFF},	/*7FFF,1392,0dB,invert=0*/
		{ 0x1393, 0x7FFF},	/*7FFF,1393,Through,0dB,fs/1,invert=0*/
		{ 0x1394, 0x0000},	/*0000,1394,Through,0dB,fs/1,invert=0*/
		{ 0x1395, 0x0000},	/*0000,1395,Through,0dB,fs/1,invert=0*/
		{ 0x1396, 0x7FFF},	/*7FFF,1396,0dB,invert=0*/
		{ 0x1397, 0x7FFF},	/*7FFF,1397,Through,0dB,fs/1,invert=0*/
		{ 0x1398, 0x0000},	/*0000,1398,Through,0dB,fs/1,invert=0*/
		{ 0x1399, 0x0000},	/*0000,1399,Through,0dB,fs/1,invert=0*/
		{ 0x139A, 0x0000},	/*0000,139A,Through,0dB,fs/1,invert=0*/
		{ 0x139B, 0x0000},	/*0000,139B,Through,0dB,fs/1,invert=0*/
		{ 0x139C, 0x7FFF},	/*7FFF,139C,Through,0dB,fs/1,invert=0*/
		{ 0x139D, 0x0000},	/*0000,139D,Through,0dB,fs/1,invert=0*/
		{ 0x139E, 0x0000},	/*0000,139E,Through,0dB,fs/1,invert=0*/
		{ 0x139F, 0x0000},	/*0000,139F,Through,0dB,fs/1,invert=0*/
		{ 0x13A0, 0x0000},	/*0000,13A0,Through,0dB,fs/1,invert=0*/
		{ 0x13A1, 0x7FFF},	/*7FFF,13A1,0dB,invert=0*/
		{ 0x13A2, 0x0000},	/*0000,13A2,Cutoff,invert=0*/
		{ 0x13A3, 0x7FFF},	/*7FFF,13A3,0dB,invert=0*/
		{ 0x13A4, 0x7FFF},	/*7FFF,13A4,Through,0dB,fs/1,invert=0*/
		{ 0x13A5, 0x0000},	/*0000,13A5,Through,0dB,fs/1,invert=0*/
		{ 0x13A6, 0x0000},	/*0000,13A6,Through,0dB,fs/1,invert=0*/
		{ 0x13A7, 0x0000},	/*0000,13A7,Through,0dB,fs/1,invert=0*/
		{ 0x13A8, 0x0000},	/*0000,13A8,Through,0dB,fs/1,invert=0*/
		{ 0x13A9, 0x7FFF},	/*7FFF,13A9,Through,0dB,fs/1,invert=0*/
		{ 0x13AA, 0x0000},	/*0000,13AA,Through,0dB,fs/1,invert=0*/
		{ 0x13AB, 0x0000},	/*0000,13AB,Through,0dB,fs/1,invert=0*/
		{ 0x13AC, 0x0000},	/*0000,13AC,Through,0dB,fs/1,invert=0*/
		{ 0x13AD, 0x0000},	/*0000,13AD,Through,0dB,fs/1,invert=0*/
		{ 0x13AE, 0x7FFF},	/*7FFF,13AE,0dB,invert=0*/
		{ 0x13AF, 0x7FFF},	/*7FFF,13AF,Through,0dB,fs/1,invert=0*/
		{ 0x13B0, 0x0000},	/*0000,13B0,Through,0dB,fs/1,invert=0*/
		{ 0x13B1, 0x0000},	/*0000,13B1,Through,0dB,fs/1,invert=0*/
		{ 0x13B2, 0x0000},	/*0000,13B2,Through,0dB,fs/1,invert=0*/
		{ 0x13B3, 0x0000},	/*0000,13B3,Through,0dB,fs/1,invert=0*/
		{ 0x13B4, 0x7FFF},	/*7FFF,13B4,Through,0dB,fs/1,invert=0*/
		{ 0x13B5, 0x0000},	/*0000,13B5,Through,0dB,fs/1,invert=0*/
		{ 0x13B6, 0x0000},	/*0000,13B6,Through,0dB,fs/1,invert=0*/
		{ 0x13B7, 0x0000},	/*0000,13B7,Through,0dB,fs/1,invert=0*/
		{ 0x13B8, 0x0000},	/*0000,13B8,Through,0dB,fs/1,invert=0*/
		{ 0x13B9, 0x7FFF},	/*7FFF,13B9,Through,0dB,fs/1,invert=0*/
		{ 0x13BA, 0x0000},	/*0000,13BA,Through,0dB,fs/1,invert=0*/
		{ 0x13BB, 0x0000},	/*0000,13BB,Through,0dB,fs/1,invert=0*/
		{ 0x13BC, 0x0000},	/*0000,13BC,Through,0dB,fs/1,invert=0*/
		{ 0x13BD, 0x0000},	/*0000,13BD,Through,0dB,fs/1,invert=0*/
		{ 0x13BE, 0x7FFF},	/*7FFF,13BE,Through,0dB,fs/1,invert=0*/
		{ 0x13BF, 0x0000},	/*0000,13BF,Through,0dB,fs/1,invert=0*/
		{ 0x13C0, 0x0000},	/*0000,13C0,Through,0dB,fs/1,invert=0*/
		{ 0x13C1, 0x0000},	/*0000,13C1,Through,0dB,fs/1,invert=0*/
		{ 0x13C2, 0x0000},	/*0000,13C2,Through,0dB,fs/1,invert=0*/
		{ 0x13C3, 0x7FFF},	/*7FFF,13C3,0dB,invert=0*/
		{ 0x13C4, 0x7FFF},	/*7FFF,13C4,0dB,invert=0*/
		{ 0x13C7, 0x7FFF},	/*7FFF,13C7,0dB,invert=0*/
		{ 0x13CA, 0x0000},	/*0000,13CA,Cutoff,invert=0*/
		{ 0x13CB, 0x4027},	/*4027,13CB,-6dB,invert=0*/
		{ 0x13CC, 0x4ADF},	/*4ADF,13CC,HBF,30Hz,600Hz,2dB,fs/1,invert=0*/
		{ 0x13CD, 0xB5B9},	/*B5B9,13CD,HBF,30Hz,600Hz,2dB,fs/1,invert=0*/
		{ 0x13CE, 0x3679},	/*3679,13CE,HBF,30Hz,600Hz,2dB,fs/1,invert=0*/
		{ 0x13CF, 0x0000},	/*0000,13CF,HBF,30Hz,600Hz,2dB,fs/1,invert=0*/
		{ 0x13D0, 0x0000},	/*0000,13D0,HBF,30Hz,600Hz,2dB,fs/1,invert=0*/
		{ 0x13D1, 0x7FFF},	/*7FFF,13D1,Through,0dB,fs/1,invert=0*/
		{ 0x13D2, 0x0000},	/*0000,13D2,Through,0dB,fs/1,invert=0*/
		{ 0x13D3, 0x0000},	/*0000,13D3,Through,0dB,fs/1,invert=0*/
		{ 0x13D4, 0x0000},	/*0000,13D4,Through,0dB,fs/1,invert=0*/
		{ 0x13D5, 0x0000},	/*0000,13D5,Through,0dB,fs/1,invert=0*/
		{ 0x13D6, 0x7FFF},	/*7FFF,13D6,0dB,invert=0*/
		{ 0x13D7, 0x7FFF},	/*7FFF,13D7,0dB,invert=0*/
		{ 0x13D8, 0x07AE},	/*07AE,13D8,LPF,0.5Hz,47dB,fs/4,invert=0*/
		{ 0x13D9, 0x07AE},	/*07AE,13D9,LPF,0.5Hz,47dB,fs/4,invert=0*/
		{ 0x13DA, 0x7FEF},	/*7FEF,13DA,LPF,0.5Hz,47dB,fs/4,invert=0*/
		{ 0x13DB, 0x0000},	/*0000,13DB,LPF,0.5Hz,47dB,fs/4,invert=0*/
		{ 0x13DC, 0x0000},	/*0000,13DC,LPF,0.5Hz,47dB,fs/4,invert=0*/
		{ 0x13DD, 0x4015},	/*4015,13DD,LBF,10Hz,20Hz,0dB,fs/1,invert=0*/
		{ 0x13DE, 0xC041},	/*C041,13DE,LBF,10Hz,20Hz,0dB,fs/1,invert=0*/
		{ 0x13DF, 0x7FA9},	/*7FA9,13DF,LBF,10Hz,20Hz,0dB,fs/1,invert=0*/
		{ 0x13E0, 0x0000},	/*0000,13E0,LBF,10Hz,20Hz,0dB,fs/1,invert=0*/
		{ 0x13E1, 0x0000},	/*0000,13E1,LBF,10Hz,20Hz,0dB,fs/1,invert=0*/
		{ 0x13E2, 0x7FFF},	/*7FFF,13E2,0dB,invert=0*/
		{ 0x13E3, 0x32F5},	/*32F5,13E3,-8dB,invert=0*/
		{ 0x13E5, 0x0000},	/*0000,13E5,Cutoff,invert=0*/
		{ 0x13E6, 0x4027},	/*4027,13E6,-6dB,invert=0*/
		{ 0x13E7, 0x4ADF},	/*4ADF,13E7,HBF,30Hz,600Hz,2dB,fs/1,invert=0*/
		{ 0x13E8, 0xB5B9},	/*B5B9,13E8,HBF,30Hz,600Hz,2dB,fs/1,invert=0*/
		{ 0x13E9, 0x3679},	/*3679,13E9,HBF,30Hz,600Hz,2dB,fs/1,invert=0*/
		{ 0x13EA, 0x0000},	/*0000,13EA,HBF,30Hz,600Hz,2dB,fs/1,invert=0*/
		{ 0x13EB, 0x0000},	/*0000,13EB,HBF,30Hz,600Hz,2dB,fs/1,invert=0*/
		{ 0x13EC, 0x7FFF},	/*7FFF,13EC,Through,0dB,fs/1,invert=0*/
		{ 0x13ED, 0x0000},	/*0000,13ED,Through,0dB,fs/1,invert=0*/
		{ 0x13EE, 0x0000},	/*0000,13EE,Through,0dB,fs/1,invert=0*/
		{ 0x13EF, 0x0000},	/*0000,13EF,Through,0dB,fs/1,invert=0*/
		{ 0x13F0, 0x0000},	/*0000,13F0,Through,0dB,fs/1,invert=0*/
		{ 0x13F1, 0x7FFF},	/*7FFF,13F1,0dB,invert=0*/
		{ 0x13F2, 0x7FFF},	/*7FFF,13F2,0dB,invert=0*/
		{ 0x13F3, 0x07AE},	/*07AE,13F3,LPF,0.5Hz,47dB,fs/4,invert=0*/
		{ 0x13F4, 0x07AE},	/*07AE,13F4,LPF,0.5Hz,47dB,fs/4,invert=0*/
		{ 0x13F5, 0x7FEF},	/*7FEF,13F5,LPF,0.5Hz,47dB,fs/4,invert=0*/
		{ 0x13F6, 0x0000},	/*0000,13F6,LPF,0.5Hz,47dB,fs/4,invert=0*/
		{ 0x13F7, 0x0000},	/*0000,13F7,LPF,0.5Hz,47dB,fs/4,invert=0*/
		{ 0x13F8, 0x4015},	/*4015,13F8,LBF,10Hz,20Hz,0dB,fs/1,invert=0*/
		{ 0x13F9, 0xC041},	/*C041,13F9,LBF,10Hz,20Hz,0dB,fs/1,invert=0*/
		{ 0x13FA, 0x7FA9},	/*7FA9,13FA,LBF,10Hz,20Hz,0dB,fs/1,invert=0*/
		{ 0x13FB, 0x0000},	/*0000,13FB,LBF,10Hz,20Hz,0dB,fs/1,invert=0*/
		{ 0x13FC, 0x0000},	/*0000,13FC,LBF,10Hz,20Hz,0dB,fs/1,invert=0*/
		{ 0x13FD, 0x7FFF},	/*7FFF,13FD,0dB,invert=0*/
		{ 0x13FE, 0x32F5},	/*32F5,13FE,-8dB,invert=0*/
		{ 0xFFFF , 0xFFFF }
	} ;
/* 32bit */
OISINI__ const struct STGYRFIL	CsGyrFil[]	= {
		{ 0x1800, 0x3F800000},	/*3F800000,1800,0dB,invert=0*/
		{ 0x1801, 0x3F800000},	/*3F800000,1801,Through,0dB,fs/1,invert=0*/
		{ 0x1802, 0x00000000},	/*00000000,1802,Through,0dB,fs/1,invert=0*/
		{ 0x1803, 0x3BAE05B0},	/*3BAE05B0,1803,LPF,0.25Hz,44dB,fs/1,invert=0*/
		{ 0x1804, 0x3BAE05B0},	/*3BAE05B0,1804,LPF,0.25Hz,44dB,fs/1,invert=0*/
		{ 0x1805, 0x3F7FFB9C},	/*3F7FFB9C,1805,LPF,0.25Hz,44dB,fs/1,invert=0*/
		{ 0x1806, 0x00000000},	/*00000000,1806,Through,0dB,fs/1,invert=0*/
		{ 0x1807, 0x00000000},	/*00000000,1807,Cutoff,invert=0*/
		{ 0x180A, 0x346303DA},	/*346303DA,180A,LPF,0.25Hz,-44dB,fs/1,invert=0*/
		{ 0x180B, 0x346303DA},	/*346303DA,180B,LPF,0.25Hz,-44dB,fs/1,invert=0*/
		{ 0x180C, 0x3F7FFB9C},	/*3F7FFB9C,180C,LPF,0.25Hz,-44dB,fs/1,invert=0*/
		{ 0x180D, 0x3F800000},	/*3F800000,180D,0dB,invert=0*/
		{ 0x180E, 0xBF800000},	/*BF800000,180E,0dB,invert=1*/
		{ 0x180F, 0x3F800000},	/*3F800000,180F,0dB,invert=0*/
		{ 0x1810, 0x3F800000},	/*3F800000,1810,0dB,invert=0*/
		{ 0x1811, 0x3F800000},	/*3F800000,1811,0dB,invert=0*/
		{ 0x1812, 0x3DA2ADAD},	/*3DA2ADAD,1812,Free,fs/1,invert=0*/
		{ 0x1813, 0x00000000},	/*00000000,1813,Free,fs/1,invert=0*/
		{ 0x1814, 0x3F7FFD00},	/*3F7FFD00,1814,Free,fs/1,invert=0*/
		{ 0x1815, 0x3F7CA2E1},	/*3F7CA2E1,1815,HBF,50Hz,150Hz,0dB,fs/1,invert=0*/
		{ 0x1816, 0xBF7945C2},	/*BF7945C2,1816,HBF,50Hz,150Hz,0dB,fs/1,invert=0*/
		{ 0x1817, 0x3F75E8A3},	/*3F75E8A3,1817,HBF,50Hz,150Hz,0dB,fs/1,invert=0*/
		{ 0x1818, 0x3F82BA19},	/*3F82BA19,1818,LBF,0.027Hz,0.21Hz,18dB,fs/1,invert=0*/
		{ 0x1819, 0xBF82B836},	/*BF82B836,1819,LBF,0.027Hz,0.21Hz,18dB,fs/1,invert=0*/
		{ 0x181A, 0x3F7FFF87},	/*3F7FFF87,181A,LBF,0.027Hz,0.21Hz,18dB,fs/1,invert=0*/
		{ 0x181B, 0x00000000},	/*00000000,181B,Cutoff,invert=0*/
		{ 0x181C, 0x3F800000},	/*3F800000,181C,0dB,invert=0*/
		{ 0x181D, 0x3F800000},	/*3F800000,181D,Through,0dB,fs/1,invert=0*/
		{ 0x181E, 0x00000000},	/*00000000,181E,Through,0dB,fs/1,invert=0*/
		{ 0x181F, 0x00000000},	/*00000000,181F,Through,0dB,fs/1,invert=0*/
		{ 0x1820, 0x3F800000},	/*3F800000,1820,Through,0dB,fs/1,invert=0*/
		{ 0x1821, 0x00000000},	/*00000000,1821,Through,0dB,fs/1,invert=0*/
		{ 0x1822, 0x00000000},	/*00000000,1822,Through,0dB,fs/1,invert=0*/
		{ 0x1823, 0x3F800000},	/*3F800000,1823,Through,0dB,fs/1,invert=0*/
		{ 0x1824, 0x00000000},	/*00000000,1824,Through,0dB,fs/1,invert=0*/
		{ 0x1825, 0x00000000},	/*00000000,1825,Through,0dB,fs/1,invert=0*/
		{ 0x1826, 0x3F800000},	/*3F800000,1826,0dB,invert=0*/
		{ 0x1827, 0x00000000},	/*00000000,1827,Cutoff,invert=1*/
		{ 0x1828, 0x3F800000},	/*3F800000,1828,0dB,invert=0*/
		{ 0x1829, 0x3F800000},	/*3F800000,1829,0dB,invert=0*/
		{ 0x182A, 0x3F800000},	/*3F800000,182A,0dB,invert=0*/
		{ 0x182B, 0x3F800000},	/*3F800000,182B,0dB,invert=0*/
		{ 0x182C, 0x00000000},	/*00000000,182C,Cutoff,invert=0*/
		{ 0x1830, 0x3F800000},	/*3F800000,1830,Through,0dB,fs/1,invert=0*/
		{ 0x1831, 0x00000000},	/*00000000,1831,Through,0dB,fs/1,invert=0*/
		{ 0x1832, 0x00000000},	/*00000000,1832,Through,0dB,fs/1,invert=0*/
		{ 0x1833, 0x00000000},	/*00000000,1833,Through,0dB,fs/1,invert=0*/
		{ 0x1834, 0x00000000},	/*00000000,1834,Through,0dB,fs/1,invert=0*/
		{ 0x1835, 0x00000000},	/*00000000,1835,Cutoff,invert=0*/
		{ 0x1838, 0x3F800000},	/*3F800000,1838,0dB,invert=0*/
		{ 0x1839, 0x3C58B432},	/*3C58B432,1839,LPF,100Hz,0dB,fs/1,invert=0*/
		{ 0x183A, 0x3C58B432},	/*3C58B432,183A,LPF,100Hz,0dB,fs/1,invert=0*/
		{ 0x183B, 0x3F793A5E},	/*3F793A5E,183B,LPF,100Hz,0dB,fs/1,invert=0*/
		{ 0x183C, 0x3C58B432},	/*3C58B432,183C,LPF,100Hz,0dB,fs/1,invert=0*/
		{ 0x183D, 0x3C58B432},	/*3C58B432,183D,LPF,100Hz,0dB,fs/1,invert=0*/
		{ 0x183E, 0x3F793A5E},	/*3F793A5E,183E,LPF,100Hz,0dB,fs/1,invert=0*/
		{ 0x1840, 0x3BAE05B0},	/*3BAE05B0,1840,LPF,0.25Hz,44dB,fs/1,invert=0*/
		{ 0x1841, 0x3BAE05B0},	/*3BAE05B0,1841,LPF,0.25Hz,44dB,fs/1,invert=0*/
		{ 0x1842, 0x3F7FFB9C},	/*3F7FFB9C,1842,LPF,0.25Hz,44dB,fs/1,invert=0*/
		{ 0x1843, 0x3DADEF4F},	/*3DADEF4F,1843,LPF,4Hz,44dB,fs/1,invert=0*/
		{ 0x1844, 0x3DADEF4F},	/*3DADEF4F,1844,LPF,4Hz,44dB,fs/1,invert=0*/
		{ 0x1845, 0x3F7FB9C3},	/*3F7FB9C3,1845,LPF,4Hz,44dB,fs/1,invert=0*/
		{ 0x1846, 0x3C2E0432},	/*3C2E0432,1846,LPF,0.5Hz,44dB,fs/1,invert=0*/
		{ 0x1847, 0x3C2E0432},	/*3C2E0432,1847,LPF,0.5Hz,44dB,fs/1,invert=0*/
		{ 0x1848, 0x3F7FF737},	/*3F7FF737,1848,LPF,0.5Hz,44dB,fs/1,invert=0*/
		{ 0x1849, 0x3CAE0136},	/*3CAE0136,1849,LPF,1Hz,44dB,fs/1,invert=0*/
		{ 0x184A, 0x3CAE0136},	/*3CAE0136,184A,LPF,1Hz,44dB,fs/1,invert=0*/
		{ 0x184B, 0x3F7FEE6F},	/*3F7FEE6F,184B,LPF,1Hz,44dB,fs/1,invert=0*/
		{ 0x184C, 0x3D8277F5},	/*3D8277F5,184C,LPF,3Hz,44dB,fs/1,invert=0*/
		{ 0x184D, 0x3D8277F5},	/*3D8277F5,184D,LPF,3Hz,44dB,fs/1,invert=0*/
		{ 0x184E, 0x3F7FCB51},	/*3F7FCB51,184E,LPF,3Hz,44dB,fs/1,invert=0*/
		{ 0x1850, 0x346303DA},	/*346303DA,1850,LPF,0.25Hz,-44dB,fs/1,invert=0*/
		{ 0x1851, 0x346303DA},	/*346303DA,1851,LPF,0.25Hz,-44dB,fs/1,invert=0*/
		{ 0x1852, 0x3F7FFB9C},	/*3F7FFB9C,1852,LPF,0.25Hz,-44dB,fs/1,invert=0*/
		{ 0x1853, 0x3662E6A8},	/*3662E6A8,1853,LPF,4Hz,-44dB,fs/1,invert=0*/
		{ 0x1854, 0x3662E6A8},	/*3662E6A8,1854,LPF,4Hz,-44dB,fs/1,invert=0*/
		{ 0x1855, 0x3F7FB9C3},	/*3F7FB9C3,1855,LPF,4Hz,-44dB,fs/1,invert=0*/
		{ 0x1856, 0x34E301E8},	/*34E301E8,1856,LPF,0.5Hz,-44dB,fs/1,invert=0*/
		{ 0x1857, 0x34E301E8},	/*34E301E8,1857,LPF,0.5Hz,-44dB,fs/1,invert=0*/
		{ 0x1858, 0x3F7FF737},	/*3F7FF737,1858,LPF,0.5Hz,-44dB,fs/1,invert=0*/
		{ 0x1859, 0x3562FE03},	/*3562FE03,1859,LPF,1Hz,-44dB,fs/1,invert=0*/
		{ 0x185A, 0x3562FE03},	/*3562FE03,185A,LPF,1Hz,-44dB,fs/1,invert=0*/
		{ 0x185B, 0x3F7FEE6F},	/*3F7FEE6F,185B,LPF,1Hz,-44dB,fs/1,invert=0*/
		{ 0x185C, 0x362A32D4},	/*362A32D4,185C,LPF,3Hz,-44dB,fs/1,invert=0*/
		{ 0x185D, 0x362A32D4},	/*362A32D4,185D,LPF,3Hz,-44dB,fs/1,invert=0*/
		{ 0x185E, 0x3F7FCB51},	/*3F7FCB51,185E,LPF,3Hz,-44dB,fs/1,invert=0*/
		{ 0x1860, 0x3F800000},	/*3F800000,1860,Through,0dB,fs/1,invert=0*/
		{ 0x1861, 0x00000000},	/*00000000,1861,Through,0dB,fs/1,invert=0*/
		{ 0x1862, 0x00000000},	/*00000000,1862,Through,0dB,fs/1,invert=0*/
		{ 0x1863, 0x3F800000},	/*3F800000,1863,Through,0dB,fs/1,invert=0*/
		{ 0x1864, 0x00000000},	/*00000000,1864,Through,0dB,fs/1,invert=0*/
		{ 0x1865, 0x00000000},	/*00000000,1865,Through,0dB,fs/1,invert=0*/
		{ 0x1866, 0x3F800000},	/*3F800000,1866,Through,0dB,fs/1,invert=0*/
		{ 0x1867, 0x00000000},	/*00000000,1867,Through,0dB,fs/1,invert=0*/
		{ 0x1868, 0x00000000},	/*00000000,1868,Through,0dB,fs/1,invert=0*/
		{ 0x1869, 0x3F800000},	/*3F800000,1869,Through,0dB,fs/1,invert=0*/
		{ 0x186A, 0x00000000},	/*00000000,186A,Through,0dB,fs/1,invert=0*/
		{ 0x186B, 0x00000000},	/*00000000,186B,Through,0dB,fs/1,invert=0*/
		{ 0x186C, 0x3F800000},	/*3F800000,186C,Through,0dB,fs/1,invert=0*/
		{ 0x186D, 0x00000000},	/*00000000,186D,Through,0dB,fs/1,invert=0*/
		{ 0x186E, 0x00000000},	/*00000000,186E,Through,0dB,fs/1,invert=0*/
		{ 0x1870, 0x3F800000},	/*3F800000,1870,Through,0dB,fs/1,invert=0*/
		{ 0x1871, 0x00000000},	/*00000000,1871,Through,0dB,fs/1,invert=0*/
		{ 0x1872, 0x00000000},	/*00000000,1872,Through,0dB,fs/1,invert=0*/
		{ 0x1873, 0x3F800000},	/*3F800000,1873,Through,0dB,fs/1,invert=0*/
		{ 0x1874, 0x00000000},	/*00000000,1874,Through,0dB,fs/1,invert=0*/
		{ 0x1875, 0x00000000},	/*00000000,1875,Through,0dB,fs/1,invert=0*/
		{ 0x1876, 0x3F800000},	/*3F800000,1876,Through,0dB,fs/1,invert=0*/
		{ 0x1877, 0x00000000},	/*00000000,1877,Through,0dB,fs/1,invert=0*/
		{ 0x1878, 0x00000000},	/*00000000,1878,Through,0dB,fs/1,invert=0*/
		{ 0x1879, 0x3F800000},	/*3F800000,1879,Through,0dB,fs/1,invert=0*/
		{ 0x187A, 0x00000000},	/*00000000,187A,Through,0dB,fs/1,invert=0*/
		{ 0x187B, 0x00000000},	/*00000000,187B,Through,0dB,fs/1,invert=0*/
		{ 0x187C, 0x3F800000},	/*3F800000,187C,Through,0dB,fs/1,invert=0*/
		{ 0x187D, 0x00000000},	/*00000000,187D,Through,0dB,fs/1,invert=0*/
		{ 0x187E, 0x00000000},	/*00000000,187E,Through,0dB,fs/1,invert=0*/
		{ 0x1880, 0x3F800000},	/*3F800000,1880,Through,0dB,fs/1,invert=0*/
		{ 0x1881, 0x00000000},	/*00000000,1881,Through,0dB,fs/1,invert=0*/
		{ 0x1882, 0x00000000},	/*00000000,1882,Through,0dB,fs/1,invert=0*/
		{ 0x1883, 0x3F800000},	/*3F800000,1883,Through,0dB,fs/1,invert=0*/
		{ 0x1884, 0x00000000},	/*00000000,1884,Through,0dB,fs/1,invert=0*/
		{ 0x1885, 0x00000000},	/*00000000,1885,Through,0dB,fs/1,invert=0*/
		{ 0x1886, 0x3F800000},	/*3F800000,1886,Through,0dB,fs/1,invert=0*/
		{ 0x1887, 0x00000000},	/*00000000,1887,Through,0dB,fs/1,invert=0*/
		{ 0x1888, 0x00000000},	/*00000000,1888,Through,0dB,fs/1,invert=0*/
		{ 0x1889, 0x3F800000},	/*3F800000,1889,Through,0dB,fs/1,invert=0*/
		{ 0x188A, 0x00000000},	/*00000000,188A,Through,0dB,fs/1,invert=0*/
		{ 0x188B, 0x00000000},	/*00000000,188B,Through,0dB,fs/1,invert=0*/
		{ 0x188C, 0x3F800000},	/*3F800000,188C,Through,0dB,fs/1,invert=0*/
		{ 0x188D, 0x00000000},	/*00000000,188D,Through,0dB,fs/1,invert=0*/
		{ 0x188E, 0x00000000},	/*00000000,188E,Through,0dB,fs/1,invert=0*/
		{ 0x1890, 0x3F800000},	/*3F800000,1890,0dB,invert=0*/
		{ 0x1891, 0x3F800000},	/*3F800000,1891,0dB,invert=0*/
		{ 0x1892, 0x00000000},	/*00000000,1892,Cutoff,invert=0*/
		{ 0x1893, 0x3F800000},	/*3F800000,1893,0dB,invert=0*/
		{ 0x1894, 0x00000000},	/*00000000,1894,Cutoff,invert=0*/
		{ 0x1895, 0x38D1B717},	/*38D1B717,1895,-80dB,invert=0*/
		{ 0x1896, 0x3F800000},	/*3F800000,1896,0dB,invert=0*/
		{ 0x1897, 0x3F004DCE},	/*3F004DCE,1897,-6dB,invert=0*/
		{ 0x1898, 0x00000000},	/*00000000,1898,Cutoff,invert=0*/
		{ 0x1899, 0x3F800000},	/*3F800000,1899,0dB,invert=0*/
		{ 0x189A, 0x3F800000},	/*3F800000,189A,0dB,invert=0*/
		{ 0x189B, 0x00000000},	/*00000000,189B,Cutoff,invert=0*/
		{ 0x189C, 0x3F800000},	/*3F800000,189C,0dB,invert=0*/
		{ 0x189D, 0x3F800000},	/*3F800000,189D,0dB,invert=0*/
		{ 0x189E, 0x00000000},	/*00000000,189E,Cutoff,invert=0*/
		{ 0x18A0, 0x3DA2ADAD},	/*3DA2ADAD,18A0,Free,fs/1,invert=0*/
		{ 0x18A1, 0x00000000},	/*00000000,18A1,Free,fs/1,invert=0*/
		{ 0x18A2, 0x3F7FFD00},	/*3F7FFD00,18A2,Free,fs/1,invert=0*/
		{ 0x18A3, 0x3F7CA2E1},	/*3F7CA2E1,18A3,HBF,50Hz,150Hz,0dB,fs/1,invert=0*/
		{ 0x18A4, 0xBF7945C2},	/*BF7945C2,18A4,HBF,50Hz,150Hz,0dB,fs/1,invert=0*/
		{ 0x18A5, 0x3F75E8A3},	/*3F75E8A3,18A5,HBF,50Hz,150Hz,0dB,fs/1,invert=0*/
		{ 0x18A6, 0x00000000},	/*00000000,18A6,Cutoff,invert=0*/
		{ 0x18A7, 0x00000000},	/*00000000,18A7,Cutoff,invert=0*/
		{ 0x18A8, 0x00000000},	/*00000000,18A8,Cutoff,invert=0*/
		{ 0x18AA, 0x3F800000},	/*3F800000,18AA,0dB,invert=0*/
		{ 0x18AB, 0x3F800000},	/*3F800000,18AB,0dB,invert=0*/
		{ 0x18B7, 0x3BDA2585},	/*3BDA2585,18B7,LPF,50Hz,0dB,fs/1,invert=0*/
		{ 0x18B8, 0x3BDA2585},	/*3BDA2585,18B8,LPF,50Hz,0dB,fs/1,invert=0*/
		{ 0x18B9, 0x3F7C976A},	/*3F7C976A,18B9,LPF,50Hz,0dB,fs/1,invert=0*/
		{ 0x1900, 0x3F800000},	/*3F800000,1900,0dB,invert=0*/
		{ 0x1901, 0x3F800000},	/*3F800000,1901,Through,0dB,fs/1,invert=0*/
		{ 0x1902, 0x00000000},	/*00000000,1902,Through,0dB,fs/1,invert=0*/
		{ 0x1903, 0x3BAE05B0},	/*3BAE05B0,1903,LPF,0.25Hz,44dB,fs/1,invert=0*/
		{ 0x1904, 0x3BAE05B0},	/*3BAE05B0,1904,LPF,0.25Hz,44dB,fs/1,invert=0*/
		{ 0x1905, 0x3F7FFB9C},	/*3F7FFB9C,1905,LPF,0.25Hz,44dB,fs/1,invert=0*/
		{ 0x1906, 0x00000000},	/*00000000,1906,Through,0dB,fs/1,invert=0*/
		{ 0x1907, 0x00000000},	/*00000000,1907,Cutoff,invert=0*/
		{ 0x190A, 0x346303DA},	/*346303DA,190A,LPF,0.25Hz,-44dB,fs/1,invert=0*/
		{ 0x190B, 0x346303DA},	/*346303DA,190B,LPF,0.25Hz,-44dB,fs/1,invert=0*/
		{ 0x190C, 0x3F7FFB9C},	/*3F7FFB9C,190C,LPF,0.25Hz,-44dB,fs/1,invert=0*/
		{ 0x190D, 0x3F800000},	/*3F800000,190D,0dB,invert=0*/
		{ 0x190E, 0xBF800000},	/*BF800000,190E,0dB,invert=1*/
		{ 0x190F, 0x3F800000},	/*3F800000,190F,0dB,invert=0*/
		{ 0x1910, 0x3F800000},	/*3F800000,1910,0dB,invert=0*/
		{ 0x1911, 0x3F800000},	/*3F800000,1911,0dB,invert=0*/
		{ 0x1912, 0x3DA2ADAD},	/*3DA2ADAD,1912,Free,fs/1,invert=0*/
		{ 0x1913, 0x00000000},	/*00000000,1913,Free,fs/1,invert=0*/
		{ 0x1914, 0x3F7FFD00},	/*3F7FFD00,1914,Free,fs/1,invert=0*/
		{ 0x1915, 0x3F7CA2E1},	/*3F7CA2E1,1915,HBF,50Hz,150Hz,0dB,fs/1,invert=0*/
		{ 0x1916, 0xBF7945C2},	/*BF7945C2,1916,HBF,50Hz,150Hz,0dB,fs/1,invert=0*/
		{ 0x1917, 0x3F75E8A3},	/*3F75E8A3,1917,HBF,50Hz,150Hz,0dB,fs/1,invert=0*/
		{ 0x1918, 0x3F82BA19},	/*3F82BA19,1918,LBF,0.027Hz,0.21Hz,18dB,fs/1,invert=0*/
		{ 0x1919, 0xBF82B836},	/*BF82B836,1919,LBF,0.027Hz,0.21Hz,18dB,fs/1,invert=0*/
		{ 0x191A, 0x3F7FFF87},	/*3F7FFF87,191A,LBF,0.027Hz,0.21Hz,18dB,fs/1,invert=0*/
		{ 0x191B, 0x00000000},	/*00000000,191B,Cutoff,invert=0*/
		{ 0x191C, 0x3F800000},	/*3F800000,191C,0dB,invert=0*/
		{ 0x191D, 0x3F800000},	/*3F800000,191D,Through,0dB,fs/1,invert=0*/
		{ 0x191E, 0x00000000},	/*00000000,191E,Through,0dB,fs/1,invert=0*/
		{ 0x191F, 0x00000000},	/*00000000,191F,Through,0dB,fs/1,invert=0*/
		{ 0x1920, 0x3F800000},	/*3F800000,1920,Through,0dB,fs/1,invert=0*/
		{ 0x1921, 0x00000000},	/*00000000,1921,Through,0dB,fs/1,invert=0*/
		{ 0x1922, 0x00000000},	/*00000000,1922,Through,0dB,fs/1,invert=0*/
		{ 0x1923, 0x3F800000},	/*3F800000,1923,Through,0dB,fs/1,invert=0*/
		{ 0x1924, 0x00000000},	/*00000000,1924,Through,0dB,fs/1,invert=0*/
		{ 0x1925, 0x00000000},	/*00000000,1925,Through,0dB,fs/1,invert=0*/
		{ 0x1926, 0x3F800000},	/*3F800000,1926,0dB,invert=0*/
		{ 0x1927, 0x00000000},	/*00000000,1927,Cutoff,invert=1*/
		{ 0x1928, 0x3F800000},	/*3F800000,1928,0dB,invert=0*/
		{ 0x1929, 0x3F800000},	/*3F800000,1929,0dB,invert=0*/
		{ 0x192A, 0x3F800000},	/*3F800000,192A,0dB,invert=0*/
		{ 0x192B, 0x3F800000},	/*3F800000,192B,0dB,invert=0*/
		{ 0x192C, 0x00000000},	/*00000000,192C,Cutoff,invert=0*/
		{ 0x1930, 0x3F800000},	/*3F800000,1930,Through,0dB,fs/1,invert=0*/
		{ 0x1931, 0x00000000},	/*00000000,1931,Through,0dB,fs/1,invert=0*/
		{ 0x1932, 0x00000000},	/*00000000,1932,Through,0dB,fs/1,invert=0*/
		{ 0x1933, 0x00000000},	/*00000000,1933,Through,0dB,fs/1,invert=0*/
		{ 0x1934, 0x00000000},	/*00000000,1934,Through,0dB,fs/1,invert=0*/
		{ 0x1935, 0x00000000},	/*00000000,1935,Cutoff,invert=0*/
		{ 0x1938, 0x3F800000},	/*3F800000,1938,0dB,invert=0*/
		{ 0x1939, 0x3C58B432},	/*3C58B432,1939,LPF,100Hz,0dB,fs/1,invert=0*/
		{ 0x193A, 0x3C58B432},	/*3C58B432,193A,LPF,100Hz,0dB,fs/1,invert=0*/
		{ 0x193B, 0x3F793A5E},	/*3F793A5E,193B,LPF,100Hz,0dB,fs/1,invert=0*/
		{ 0x193C, 0x3C58B432},	/*3C58B432,193C,LPF,100Hz,0dB,fs/1,invert=0*/
		{ 0x193D, 0x3C58B432},	/*3C58B432,193D,LPF,100Hz,0dB,fs/1,invert=0*/
		{ 0x193E, 0x3F793A5E},	/*3F793A5E,193E,LPF,100Hz,0dB,fs/1,invert=0*/
		{ 0x1940, 0x3BAE05B0},	/*3BAE05B0,1940,LPF,0.25Hz,44dB,fs/1,invert=0*/
		{ 0x1941, 0x3BAE05B0},	/*3BAE05B0,1941,LPF,0.25Hz,44dB,fs/1,invert=0*/
		{ 0x1942, 0x3F7FFB9C},	/*3F7FFB9C,1942,LPF,0.25Hz,44dB,fs/1,invert=0*/
		{ 0x1943, 0x3DADEF4F},	/*3DADEF4F,1943,LPF,4Hz,44dB,fs/1,invert=0*/
		{ 0x1944, 0x3DADEF4F},	/*3DADEF4F,1944,LPF,4Hz,44dB,fs/1,invert=0*/
		{ 0x1945, 0x3F7FB9C3},	/*3F7FB9C3,1945,LPF,4Hz,44dB,fs/1,invert=0*/
		{ 0x1946, 0x3C2E0432},	/*3C2E0432,1946,LPF,0.5Hz,44dB,fs/1,invert=0*/
		{ 0x1947, 0x3C2E0432},	/*3C2E0432,1947,LPF,0.5Hz,44dB,fs/1,invert=0*/
		{ 0x1948, 0x3F7FF737},	/*3F7FF737,1948,LPF,0.5Hz,44dB,fs/1,invert=0*/
		{ 0x1949, 0x3CAE0136},	/*3CAE0136,1949,LPF,1Hz,44dB,fs/1,invert=0*/
		{ 0x194A, 0x3CAE0136},	/*3CAE0136,194A,LPF,1Hz,44dB,fs/1,invert=0*/
		{ 0x194B, 0x3F7FEE6F},	/*3F7FEE6F,194B,LPF,1Hz,44dB,fs/1,invert=0*/
		{ 0x194C, 0x3D8277F5},	/*3D8277F5,194C,LPF,3Hz,44dB,fs/1,invert=0*/
		{ 0x194D, 0x3D8277F5},	/*3D8277F5,194D,LPF,3Hz,44dB,fs/1,invert=0*/
		{ 0x194E, 0x3F7FCB51},	/*3F7FCB51,194E,LPF,3Hz,44dB,fs/1,invert=0*/
		{ 0x1950, 0x346303DA},	/*346303DA,1950,LPF,0.25Hz,-44dB,fs/1,invert=0*/
		{ 0x1951, 0x346303DA},	/*346303DA,1951,LPF,0.25Hz,-44dB,fs/1,invert=0*/
		{ 0x1952, 0x3F7FFB9C},	/*3F7FFB9C,1952,LPF,0.25Hz,-44dB,fs/1,invert=0*/
		{ 0x1953, 0x3662E6A8},	/*3662E6A8,1953,LPF,4Hz,-44dB,fs/1,invert=0*/
		{ 0x1954, 0x3662E6A8},	/*3662E6A8,1954,LPF,4Hz,-44dB,fs/1,invert=0*/
		{ 0x1955, 0x3F7FB9C3},	/*3F7FB9C3,1955,LPF,4Hz,-44dB,fs/1,invert=0*/
		{ 0x1956, 0x34E301E8},	/*34E301E8,1956,LPF,0.5Hz,-44dB,fs/1,invert=0*/
		{ 0x1957, 0x34E301E8},	/*34E301E8,1957,LPF,0.5Hz,-44dB,fs/1,invert=0*/
		{ 0x1958, 0x3F7FF737},	/*3F7FF737,1958,LPF,0.5Hz,-44dB,fs/1,invert=0*/
		{ 0x1959, 0x3562FE03},	/*3562FE03,1959,LPF,1Hz,-44dB,fs/1,invert=0*/
		{ 0x195A, 0x3562FE03},	/*3562FE03,195A,LPF,1Hz,-44dB,fs/1,invert=0*/
		{ 0x195B, 0x3F7FEE6F},	/*3F7FEE6F,195B,LPF,1Hz,-44dB,fs/1,invert=0*/
		{ 0x195C, 0x362A32D4},	/*362A32D4,195C,LPF,3Hz,-44dB,fs/1,invert=0*/
		{ 0x195D, 0x362A32D4},	/*362A32D4,195D,LPF,3Hz,-44dB,fs/1,invert=0*/
		{ 0x195E, 0x3F7FCB51},	/*3F7FCB51,195E,LPF,3Hz,-44dB,fs/1,invert=0*/
		{ 0x1960, 0x3F800000},	/*3F800000,1960,Through,0dB,fs/1,invert=0*/
		{ 0x1961, 0x00000000},	/*00000000,1961,Through,0dB,fs/1,invert=0*/
		{ 0x1962, 0x00000000},	/*00000000,1962,Through,0dB,fs/1,invert=0*/
		{ 0x1963, 0x3F800000},	/*3F800000,1963,Through,0dB,fs/1,invert=0*/
		{ 0x1964, 0x00000000},	/*00000000,1964,Through,0dB,fs/1,invert=0*/
		{ 0x1965, 0x00000000},	/*00000000,1965,Through,0dB,fs/1,invert=0*/
		{ 0x1966, 0x3F800000},	/*3F800000,1966,Through,0dB,fs/1,invert=0*/
		{ 0x1967, 0x00000000},	/*00000000,1967,Through,0dB,fs/1,invert=0*/
		{ 0x1968, 0x00000000},	/*00000000,1968,Through,0dB,fs/1,invert=0*/
		{ 0x1969, 0x3F800000},	/*3F800000,1969,Through,0dB,fs/1,invert=0*/
		{ 0x196A, 0x00000000},	/*00000000,196A,Through,0dB,fs/1,invert=0*/
		{ 0x196B, 0x00000000},	/*00000000,196B,Through,0dB,fs/1,invert=0*/
		{ 0x196C, 0x3F800000},	/*3F800000,196C,Through,0dB,fs/1,invert=0*/
		{ 0x196D, 0x00000000},	/*00000000,196D,Through,0dB,fs/1,invert=0*/
		{ 0x196E, 0x00000000},	/*00000000,196E,Through,0dB,fs/1,invert=0*/
		{ 0x1970, 0x3F800000},	/*3F800000,1970,Through,0dB,fs/1,invert=0*/
		{ 0x1971, 0x00000000},	/*00000000,1971,Through,0dB,fs/1,invert=0*/
		{ 0x1972, 0x00000000},	/*00000000,1972,Through,0dB,fs/1,invert=0*/
		{ 0x1973, 0x3F800000},	/*3F800000,1973,Through,0dB,fs/1,invert=0*/
		{ 0x1974, 0x00000000},	/*00000000,1974,Through,0dB,fs/1,invert=0*/
		{ 0x1975, 0x00000000},	/*00000000,1975,Through,0dB,fs/1,invert=0*/
		{ 0x1976, 0x3F800000},	/*3F800000,1976,Through,0dB,fs/1,invert=0*/
		{ 0x1977, 0x00000000},	/*00000000,1977,Through,0dB,fs/1,invert=0*/
		{ 0x1978, 0x00000000},	/*00000000,1978,Through,0dB,fs/1,invert=0*/
		{ 0x1979, 0x3F800000},	/*3F800000,1979,Through,0dB,fs/1,invert=0*/
		{ 0x197A, 0x00000000},	/*00000000,197A,Through,0dB,fs/1,invert=0*/
		{ 0x197B, 0x00000000},	/*00000000,197B,Through,0dB,fs/1,invert=0*/
		{ 0x197C, 0x3F800000},	/*3F800000,197C,Through,0dB,fs/1,invert=0*/
		{ 0x197D, 0x00000000},	/*00000000,197D,Through,0dB,fs/1,invert=0*/
		{ 0x197E, 0x00000000},	/*00000000,197E,Through,0dB,fs/1,invert=0*/
		{ 0x1980, 0x3F800000},	/*3F800000,1980,Through,0dB,fs/1,invert=0*/
		{ 0x1981, 0x00000000},	/*00000000,1981,Through,0dB,fs/1,invert=0*/
		{ 0x1982, 0x00000000},	/*00000000,1982,Through,0dB,fs/1,invert=0*/
		{ 0x1983, 0x3F800000},	/*3F800000,1983,Through,0dB,fs/1,invert=0*/
		{ 0x1984, 0x00000000},	/*00000000,1984,Through,0dB,fs/1,invert=0*/
		{ 0x1985, 0x00000000},	/*00000000,1985,Through,0dB,fs/1,invert=0*/
		{ 0x1986, 0x3F800000},	/*3F800000,1986,Through,0dB,fs/1,invert=0*/
		{ 0x1987, 0x00000000},	/*00000000,1987,Through,0dB,fs/1,invert=0*/
		{ 0x1988, 0x00000000},	/*00000000,1988,Through,0dB,fs/1,invert=0*/
		{ 0x1989, 0x3F800000},	/*3F800000,1989,Through,0dB,fs/1,invert=0*/
		{ 0x198A, 0x00000000},	/*00000000,198A,Through,0dB,fs/1,invert=0*/
		{ 0x198B, 0x00000000},	/*00000000,198B,Through,0dB,fs/1,invert=0*/
		{ 0x198C, 0x3F800000},	/*3F800000,198C,Through,0dB,fs/1,invert=0*/
		{ 0x198D, 0x00000000},	/*00000000,198D,Through,0dB,fs/1,invert=0*/
		{ 0x198E, 0x00000000},	/*00000000,198E,Through,0dB,fs/1,invert=0*/
		{ 0x1990, 0x3F800000},	/*3F800000,1990,0dB,invert=0*/
		{ 0x1991, 0x3F800000},	/*3F800000,1991,0dB,invert=0*/
		{ 0x1992, 0x00000000},	/*00000000,1992,Cutoff,invert=0*/
		{ 0x1993, 0x3F800000},	/*3F800000,1993,0dB,invert=0*/
		{ 0x1994, 0x00000000},	/*00000000,1994,Cutoff,invert=0*/
		{ 0x1995, 0x38D1B717},	/*38D1B717,1995,-80dB,invert=0*/
		{ 0x1996, 0x3F800000},	/*3F800000,1996,0dB,invert=0*/
		{ 0x1997, 0x3F004DCE},	/*3F004DCE,1997,-6dB,invert=0*/
		{ 0x1998, 0x00000000},	/*00000000,1998,Cutoff,invert=0*/
		{ 0x1999, 0x3F800000},	/*3F800000,1999,0dB,invert=0*/
		{ 0x199A, 0x3F800000},	/*3F800000,199A,0dB,invert=0*/
		{ 0x199B, 0x00000000},	/*00000000,199B,Cutoff,invert=0*/
		{ 0x199C, 0x3F800000},	/*3F800000,199C,0dB,invert=0*/
		{ 0x199D, 0x3F800000},	/*3F800000,199D,0dB,invert=0*/
		{ 0x199E, 0x00000000},	/*00000000,199E,Cutoff,invert=0*/
		{ 0x19A0, 0x3DA2ADAD},	/*3DA2ADAD,19A0,Free,fs/1,invert=0*/
		{ 0x19A1, 0x00000000},	/*00000000,19A1,Free,fs/1,invert=0*/
		{ 0x19A2, 0x3F7FFD00},	/*3F7FFD00,19A2,Free,fs/1,invert=0*/
		{ 0x19A3, 0x3F7CA2E1},	/*3F7CA2E1,19A3,HBF,50Hz,150Hz,0dB,fs/1,invert=0*/
		{ 0x19A4, 0xBF7945C2},	/*BF7945C2,19A4,HBF,50Hz,150Hz,0dB,fs/1,invert=0*/
		{ 0x19A5, 0x3F75E8A3},	/*3F75E8A3,19A5,HBF,50Hz,150Hz,0dB,fs/1,invert=0*/
		{ 0x19A6, 0x00000000},	/*00000000,19A6,Cutoff,invert=0*/
		{ 0x19A7, 0x00000000},	/*00000000,19A7,Cutoff,invert=0*/
		{ 0x19A8, 0x00000000},	/*00000000,19A8,Cutoff,invert=0*/
		{ 0x19AA, 0x3F800000},	/*3F800000,19AA,0dB,invert=0*/
		{ 0x19AB, 0x3F800000},	/*3F800000,19AB,0dB,invert=0*/
		{ 0x19B7, 0x3BDA2585},	/*3BDA2585,19B7,LPF,50Hz,0dB,fs/1,invert=0*/
		{ 0x19B8, 0x3BDA2585},	/*3BDA2585,19B8,LPF,50Hz,0dB,fs/1,invert=0*/
		{ 0x19B9, 0x3F7C976A},	/*3F7C976A,19B9,LPF,50Hz,0dB,fs/1,invert=0*/
		{ 0xFFFF , 0xFFFFFFFF }
	} ;
