#include<stdio.h>
int main()
{
	int device,code;
	printf("enter device type(1.Laptop,2.SmartPhone,3.Router)?");
	scanf("%d", &device);
	switch(device)
	{
		case 1:
			{
				printf("Enter Symptom code(\n10.Wont turn on,\n11.Overheating,\n12.Slow Performance)");
				scanf("%d", &code);
				switch(code)
				{
					case 10:
						{
							printf("Check power adapter and battery connections.Try a different power outlet.Remove battery and hold power button for 30 seconds.");
							break;
						}
					case 11:
						{
							printf("Clean fans and ensure proper ventilation. Check for dust accumulation. Use a cooling pad. Monitor CPU usage");
							break;
						}
					case 12:
						{
							printf("Run system diagnostics and check resource usage. Scan for malware. Upgrade RAM if necessary. Defragment hard drive");
							break;
						}
				}
				break;
			}
		case 2:
			{
				printf("Enter Symptom code(\n20.Battery drains fast,\n21.No signal,\n22.Touchscreen unresponsive)");
				scanf("%d", &code);
				switch(code)
				{
					case 20:
						{
							printf("Run battery calibration tool and check for background apps. Reduce screen brightness. Disable unnecessary connectivity features.");
							break;
						}
					case 21:
						{
							printf("Check SIM card and network settings. Toggle airplane mode. Update carrier settings. Check for network outages.");
							break;
						}
					case 22:
						{
							printf("Perform screen calibration test. Clean screen surface. Restart device. Check for software updates.");
							break;
						}
				}
				break;
			}
		case 3:
			{
				printf("Enter Symptom code(\n30.No internet connection,\n31.Wi-fi signal weak,\n32.Device cannot connect)");
				scanf("%d", &code);
				switch(code)
				{
					case 30:
						{
							printf("Check ISP status and router cables. Restart modem and router. Check WAN connection settings. Verify internet subscription");
							break;
						}
					case 31:
						{
							printf("Reposition router and check antenna connections. Reduce interference from other devices. Change Wi-Fi channel. Consider range extender");
							break;
						}
					case 32:
						{
							printf("Perform screen calibration test. Clean screen surface. Restart device. Check for software updatesCheck MAC filtering and DHCP settings. Verify Wi-Fi password. Restart connecting device. Check for IP conflicts..");
							break;
						}
				}
				break;
			}
		default:
			{
				printf("Invalid input.");
			}
			
	}
}
