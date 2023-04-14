

<!DOCTYPE html>
<html>
<head>
</head>
<body>
	<h1> Weather-Monitor-with-OLED-Display</h1>
	<p>This project is a smart weather station that measures temperature, humidity, and sunlight intensity. It also calculates the "feels like" temperature and displays a comment on the weather. The data is displayed on an OLED display.</p>
<h2>Getting Started</h2>
<h3>Prerequisites</h3>
<ul>
	<li>Arduino IDE</li>
	<li>DHT11 sensor library</li>
	<li>Adafruit SH1106 OLED display library</li>
</ul>

<h3>Hardware Requirements</h3>
<ul>
	<li>Arduino Uno</li>
	<li>DHT11 sensor</li>
	<li>LDR sensor</li>
	<li>OLED display</li>
</ul>

<h3>Installing</h3>
<ol>
	<li>Download and install the Arduino IDE from the official website.</li>
	<li>Open the Arduino IDE and go to <strong>Sketch &gt; Include Library &gt; Manage Libraries</strong>.</li>
	<li>Search for and install the following libraries:
		<ul>
			<li>DHT11 sensor library</li>
			<li>Adafruit SH1106 OLED display library</li>
		</ul>
	</li>
	<li>Connect the DHT11 sensor and LDR sensor to the Arduino Uno as shown in the circuit diagram.</li>
	<li>Connect the OLED display to the Arduino Uno as shown in the circuit diagram.</li>
	<li>Upload the code to the Arduino Uno.</li>
</ol>

<h3>Prototype</h3>
<p align="center">
  <img src="https://drive.google.com/uc?id=1TOFRs_JpmNWkyWuSHHfhEuhFWg_WzJhI" alt="Project Image">
</p>

<h2>Usage</h2>
<p>After uploading the code to the Arduino Uno, the weather data will be displayed on the OLED display. The "Feels like" temperature will be used to display a comment on the weather, which will be either "It is hot today" or "The weather is okay" depending on the temperature.</p>

<h2>Contributing</h2>
<p>This project is a personal project and contributions are not expected.</p>

<h2>License</h2>
<p>This project is licensed under the MIT License - see the <a href="LICENSE">LICENSE</a> file for details.</p>
</body>
</html>

