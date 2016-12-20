#ifndef _SPEEDTEST_SERVERS_
#define _SPEEDTEST_SERVERS_

typedef struct speedtestServer
{
	char *url;
	float lat;
	float lon;
	char *name;
	char *country;
	char *sponsor;
	long distance;

} SPEEDTESTSERVER_T;
SPEEDTESTSERVER_T **getServers(int *serverCount, const char *infraUrl);
char *getServerDownloadUrl(char *serverUrl);

/*
 * url:http://rimouski.speedtest.telus.com/speedtest/
 *
 * Directory: /speedtest/
 *
 * Parent Directory
 * latency.txt	10 bytes	Dec 1, 2014 11:37:53 AM
 * random1000x1000.jpg	1986284 bytes	Dec 1, 2014 11:37:54 AM
 * random1500x1500.jpg	4468241 bytes	Dec 1, 2014 11:37:56 AM
 * random2000x2000.jpg	7907740 bytes	Dec 1, 2014 11:38:03 AM
 * random2500x2500.jpg	12407926 bytes	Dec 1, 2014 11:38:12 AM
 * random3000x3000.jpg	17816816 bytes	Dec 1, 2014 11:38:29 AM
 * random3500x3500.jpg	24262167 bytes	Dec 1, 2014 11:38:55 AM
 * random350x350.jpg	245388 bytes	Dec 1, 2014 11:38:55 AM
 * random4000x4000.jpg	31625365 bytes	Dec 1, 2014 11:39:22 AM
 * random500x500.jpg	505544 bytes	Dec 1, 2014 11:39:23 AM
 * random750x750.jpg	1118012 bytes	Dec 1, 2014 11:39:23 AM
 * upload.asp	387 bytes	Dec 1, 2014 11:39:23 AM
 * upload.aspx	565 bytes	Dec 1, 2014 11:39:23 AM
 * upload.jsp	577 bytes	Dec 1, 2014 11:39:23 AM
 * upload.php	272 bytes	Dec 1, 2014 11:39:23 AM
 */

typedef struct speedtestDownload
{
	char filename[32];
	unsigned int filesize;
} SPEEDTESTDOWNLOAD_T;
#endif
