# Digital-Clock-using-Arduino

1.Objective: 
To make a digital clock displaying hours, minutes, seconds, Am/pm and temperature using Arduino UNO Board.

2.Abstract /Introduction:
A clock is a device used to measure, verify, keep, and indicate time. A digital clock is a type of clock that displays the time digitally (i.e. in numerals or other symbols), as opposed to an analogue clock. Digital clocks are often associated with electronic drives, but the "digital" description refers only to the display, not to the drive mechanism. 

 Our Project “Digital clock using Arduino” is a basic daily usage clock which runs by battery or electricity and being processed with Arduino. Arduino is programmed in a way that it displays time in format of hours: minutes: seconds. 

This clock is integrated with Temperature Sensor which makes it possible to display room temperature besides time. The motivation of this project is to enhance our knowledge in the daily basis equipment built by Arduino. So far we are estimating to build the project using the apparatus stated below.

3.Block Diagram/Systamatic Diagram/FLOW CHART/Algorithm (include which is relevant to your topic):
			Step 1: Start
			Step 2: Declare Variables 
			Step 3: Setup or initialize Pins and Lcd
			Step 4: Start an Infinite Loop
      Step 5: Increase seconds and calculate temperature
      Step 6: Print Time and Temperature
      Step 7: wait for 1000 ms
      Step 8: if state1 == 0: Set hours else if state2 == 0 Set minutes
      Step 9: End (loop again starts from Step5)
