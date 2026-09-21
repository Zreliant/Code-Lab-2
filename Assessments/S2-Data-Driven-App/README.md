# S2. Data Driven App

For this assignment you are tasked with developing an application that makes use of data retrieved from an API. Your application should demonstrate a range of programming techniques introduced over the course of CodeLab I and CodeLab II. The final application should be delivered via a functioning interactive GUI built using openFrameworks. Your application should be accompanied by a development document and walkthrough video.

## The Application
For your Data Driven App project, you should choose from the options below and design and implement a program that addresses the key requirements specified in the description. Throughout development, you should follow best practices in coding conventions (e.g., consistent indentation, meaningful comments, camelCase naming) and version control (e.g., maintaining an organised GitHub repository with regular, descriptive commits).

### Weather App
Build a simple weather application using data from https://www.weatherapi.com/. The app should allow the user to enter a location and display the current weather forecast using information returned by the API. Consider how to present the data clearly and handle cases where a location is not found or API errors occur.

### Currency Converter
Develop a currency converter application using the https://freecurrencyapi.com/ The app should allow the user to select a base currency and a target currency, enter an amount, and then display the converted value. Focus on providing an intuitive interface, ensuring accurate conversion results and appropriate handling of non-numerical inputs or API errors.

### Country Facts
Create an application that provides information about different countries using data from https://restcountries.com/. The app should allow the user to search for a country and display information such as the capital city, population, and currency. Ensure your application presents information clearly and handles cases where a country is not found or API errors occur.

### Film Finder
Create an application that provides information about films using data from https://developer.themoviedb.org/. The app should allow the user to search for a film and display information such as title, release data and plot summary. Consider how to present this information clearly and manage multiple search results, or errors if the API returns them.

### Queue Times
Create an application that provides queue time information using the https://queue-times.com/pages/api. The app should allow the user to view up-to-date ride information from at least one theme park. Consider how to present this information clearly and manage multiple search results, or errors if the API returns them.

## Supporting Documentation
Your Utility App must be accompanied by supporting documentation, consisting of a development document and technical walkthrough video. These components are designed to demonstrate your understanding of the design, implementation, and reflection process behind your project.

### Development Document
The development document should provide a clear overview of your app’s design and include reflections on your learning. It should be approximately 800 -1000 words and include the following sections:

- **Introduction (100 words):** Provide a brief overview of the Data Driven App you have created, including a description of the API you used and the key features your app implements. This section should also include a link to your GitHub repository.
- **Planning (100–150 words):** Present a Gantt Chart that outlines your project timeline, breaking it down into key development milestones. Accompany this with a short explanation of how you structured your plan, why you allocated time as you did, and how this helped guide your development process. If your timeline changed briefly reflect on why and how you adapted.
- **Design (200-250 words):** Evidence the design process behind your app, including both visual and technical elements. This may include (but not limited to) sketches or wireframes of your GUI, flowcharts of program logic, class diagrams or descriptions of your OOP design, pseudocode or justification for your choice of key programming techniques.
- **Testing (200-250 words):** Explain how you tested your application to ensure it worked correctly. Include a test table that documents the key features tested, expected outcomes, and actual results. Discuss any bugs or issues you encountered and how these were resolved.
- **Critical Reflection (250–300 words):** Reflect on your development process and what you learned through building the Data Driven App. Discuss the strengths of your implementation and identify areas for improvement. Consider how use of the SDLC aided the development process, and what you might do differently with more time or knowledge.
- **AI Acknowledgement (not included in word count):** Use of AI tools in the development of your final submission must be acknowledged. For further guidance see the section titled "Use of online sources" below .
- **References (not included in word count):** List of references for any sources used in the development of the Utility App. The reference list should use the Harvard style for formatting.
- **Appendix (not included in word count):** A copy of your code should be included in an appendix at the end of your documentation.

## Technical Walkthrough Video
The technical walkthrough video should provide a demonstration of your app running, followed by a technical breakdown of your code. In this technical breakdown you should explain the programming techniques you used to implement key features and justify your design decisions. You should aim to ensure your explanation is clear, concise and focused on technical aspects of your implementation (e.g. not how the user operates the app). The video should be 5-8 minutes in length. Videos longer than 8 minutes will not be reviewed and may result in a mark penalty.

&nbsp;

## Deadline
The deadline for the Data Driven App App is 15th January, 11:59am

Mark penalties may be applied to late submissions without prior approval of an extension. Please ensure that you prepare and submit your work in good time to allow for any issues that may arise.

## Deliverables
The deliverables for this assignment are as follows:

- **The Data Driven App:** The C++ source file(s) required to run your application and associated assets (fonts, images, etc). This should be submitted to this folder within your repository.
- **The Development Document:** Submitted as a Word/PDF document to the submission portal on Ultra.
- **Technical Walkthrough video:** Submitted to the submission portal on Ultra

&nbsp;
&nbsp;

**Please refer to Ultra for the full brief including submission instructions and marking criteria descriptors.**

&nbsp;
&nbsp;

## Where to save a project

To avoid project build and configuration issues, it is generally recommended that you create your project within the myApps folder of your openFrameworks installation.

However, to meet the repository and version control requirements of this assessment, you should also maintain a copy of your project within your GitHub repository. A recommended workflow is to:

- Develop and test your project in the myApps folder.
- After completing each significant task or milestone, copy your project folder into this GitHub repository.
- Commit your changes with a clear commit message.
- Push your updates to GitHub.

This approach helps minimise build-related problems while ensuring that your repository contains regular evidence of development progress and satisfies the assessment criteria relating to version control and repository management.

If you would prefer to avoid the copy-and-paste workflow described above, it is possible to create and save your openFrameworks project directly within your GitHub repository. If you choose this approach, please ensure that you:

- Keep file paths as short as possible.
- Avoid spaces anywhere in the project file path.
- Ensure there are no spaces in the path where openFrameworks is installed.
- If you are using VS Code, you will need to update the `.code-workspace` file to point to your openFrameworks installation. Typically, this means modifying line 7 to specify the correct path, for example: `"path": "C:\\Users\\hobj2\\dev\\OpenFrameworks"`

&nbsp;
&nbsp;

## Starter Code

Below you will find starter code for each API listed on the brief. This starter code provides a basic example of how to call the API and retrieve data. To use the starter code simply copy/paste the code into the respective ofApp.h and ofApp.cpp files of your project. 

If you have any issues creating the initial project you should contact your tutor in a timely manner.

Jump to:

* [Weather App](#weather-app-starter)
* [Currency Converter](#currency-converter-starter)
* [Country Facts](#country-facts-starter)
* [Film Finder](#film-finder-starter)
* [Queue Times](#queue-times-starter)


&nbsp;
&nbsp;

### Weather App Starter

* You need a key to use this API, access here: https://www.weatherapi.com/my/
* API documentation can be found at: https://www.weatherapi.com/docs/

**ofApp.h**
```C++
#pragma once

#include "ofMain.h"
#include "ofxJSON.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		
        ofxJSONElement json;//stores data from API
		
};
```

**ofApp.cpp**

```C++
#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    /*
     You need an Key to use this API. Sign Up for one here: https://www.weatherapi.com/my/
     API documentation can be found at: https://www.weatherapi.com/docs/
    */
    json.open("http://api.weatherapi.com/v1/current.json?key=YOUR_KEY_HERE&q=London&aqi=no");//returns weather for London
    cout << json.getRawString() << endl;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//-----------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}
```

### Currency Converter Starter

* You need a key to use this API, access here: https://freecurrencyapi.com/
* API documentation can be found at: https://freecurrencyapi.com/docs

**ofApp.h**
```C++
#pragma once

#include "ofMain.h"
#include "ofxJSON.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		
        ofxJSONElement json;//stores data from API
		
};
```

&nbsp;
&nbsp;

**ofApp.cpp**

```C++
#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    /*
     You need an Key to use this API. Sign Up for one here: https://freecurrencyapi.com/
     API documentation can be found at: https://freecurrencyapi.com/docs
    */
    json.open("https://api.freecurrencyapi.com/v1/latest?apikey=YOUR_KEY_HERE&currencies=GBP");//returns Dollar to Pound Conversion
    cout << json.getRawString() << endl;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//-----------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}
```

&nbsp;
&nbsp;

### Country Facts Starter

API documentation can be found at: https://restcountries.com/

**ofApp.h**
```C++
#pragma once

#include "ofMain.h"
#include "ofxJSON.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		
        ofxJSONElement json;//stores data from API
		
};
```

&nbsp;
&nbsp;

**ofApp.cpp**

```C++
#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    /*
     API documentation can be found at: https://restcountries.com/
     */
    json.open("https://restcountries.com/v3.1/name/United%20Kingdom");//returns data on United Kingdom
    cout << json.getRawString() << endl;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//-----------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}
```

&nbsp;
&nbsp;

### Film Finder Starter

* API requires a key can be accessed by signing up at: https://www.themoviedb.org/signup
* Once you have signed up you will need to create an application, you can input test details for this e.g. http://example.com for the app url and "test application" for the description
* API documentation can be found at: https://developer.themoviedb.org/reference/intro/getting-started
* To display images the starting path is: https://image.tmdb.org/t/p/original/

**ofApp.h**
```C++
#pragma once

#include "ofMain.h"
#include "ofxJSON.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		
        ofxJSONElement json;//stores data from API
		
};
```

&nbsp;
&nbsp;

**ofApp.cpp**

```C++
#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    /*
     You will need an api key. This can be accessed by signing up at: https://www.themoviedb.org/signup
     Once you have signed up you will need to create an application, you can input test details for this e.g. http://example.com for the app url and "test application" for the description
     API documentation can be found at: https://developer.themoviedb.org/reference/intro/getting-started
     To display images the starting path is: https://image.tmdb.org/t/p/original/
    */
    json.open("https://api.themoviedb.org/3/movie/550?api_key=YOURKEY");//returns Fight Club
    cout << json.getRawString() << endl;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//-----------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}
```

&nbsp;
&nbsp;

### Queue Times Starter

* API information can be found here: https://queue-times.com/pages/api

**ofApp.h**
```C++
#pragma once

#include "ofMain.h"
#include "ofxJSON.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		
        ofxJSONElement json;//stores data from API
		
};
```

&nbsp;
&nbsp;

**ofApp.cpp**

```C++
#include "ofApp.h"

//--------------------------------------------------------------
//--------------------------------------------------------------
void ofApp::setup(){
    /*
     API Documentation can be found: https://queue-times.com/pages/api
    */
    json.open("https://queue-times.com/parks/2/queue_times.json");//returns Thorpe Park Rides
    cout << json.getRawString() << endl;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//-----------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}
```

