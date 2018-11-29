# IOT Project 11 ITM: *Arducheeso*

### About
*One Webinterface, two Arduinos. One server, two clients. Cheese!*

Client + NFC-sensor is sending a "cheese-request" to the server. The server will log this request and trigger an actor (LED, Sound, etc.).

---
### Menu
* #### **I. Workspace Setup**
* #### **II. Organization Notes**
* #### **III. Code Documentation**
* #### **IV. Arduino Circuit Diagram**
---


## I. Workspace Setup

Everything you need to know to setup your workspace.
You'll require a **Windows** or **Mac** operating system for setting up this workspace.

**Just go through it step by step**

We're using the [GitHub Desktop](https://desktop.github.com/) client for our *version control* and [Atom](http://atom.io/) in combination with the [PlatformIO IDE](https://platformio.org/install/ide?install=atom) for our programming work.

### Used Software 

* [Atom](http://atom.io/)
* [GitHub Desktop](https://desktop.github.com/)
* [PlatformIO IDE](https://platformio.org/install/ide?install=atom)

---
### Setup GitHub Desktop
**1.** Download and install the [GitHub Desktop](https://desktop.github.com/) client<br>
**2.** Open the client and **log in** to your GitHub account<br>
**3.** Choose **clone repository** and clone the Arducheeso repo<br>
**4.** Select the branch you want to work with<br>
**5.** Hit the **fetch** button right beside the branch menu to download the branch<br>

---
### Setup Atom
This step is quite easy. Just visit [atom.io](http://atom.io/), hit the download button and install it.

---
### Setup PlatformIO

###### Part 1
***Installation***

**1.** Open Atom and go to the **settings** view (*ctrl+comma*)<br>
**2.** Click on **install** (down left in the settings view)<br>
**3.** Type in '*platformio-ide*' in the search-form<br>
**4.** Install the **PlatformIO IDE** **-** *if needed: [offical instruction](https://platformio.org/install/ide?install=atom)* <br>

###### Part 2

***After PlatformIO is installed you can see a additional leftmenu in Atom***

**1.** Click on the *house* to get to the PlatformIO **home**<br>
**2.** Click on **Boards** and type in '*Huzzah*'<br>
**3.** You should see the Adafruit Huzzah. Click on **Espressif 8266** in the platform column<br>
**4.** Then hit the **install** button to add the platform to your PlatformIO IDE<br>
**5.** *Additional hint*: In the libaries section you can add the download the libaries you need <br>

###### Part 3

***Include the project***

**1.** Go to the PlatformIO **home** again <br>
**2.** Click on **open project** <br>
**3.** Navigate to the GitHub folder, you should find it in your computer's document section <br>
**4.** If you want to work on the **server**, open the **server folder** in the *Arducheeso repository* <br>
**5.** If you want to work on the **client**, open the **client folder** in the *Arducheeso repository* <br>
* you can **not** just open the *Arducheeso* folder since you will run into problems with *PlatformIO* doing that. <br>

**6.** **DONE! You're ready to rumble.**



---
## II. Organization Notes

The **coordination** of our programming work is based on the **Git Version Control System**.
It allows us to work independently on our stuff and avoids problems like a destroyed stable version.

We always have one **master** branch and one **nightly** branch.
The **master** branch is the absolutely **stable** version while the **nightly** branch is the **most actual** *but also working* version of our code.

To **fix issues**, we checkout a **working branch** from the nightly branch **seperately** for every issue.

---

### Using GitHub

Since the PlatformIO IDE doesn't have a native git integration, the GitHub Desktop client helps us to simplify our organization a lot.

**So how does it work?**

The GitHub client creates it's own folder where it saves every repository locally. We can create one and push it on GitHub, but since we already have our Arducheeso repository online. We just need to clone it. Have a look at the Workspace Setup instructions if you haven't done this yet.

After cloning and fetching we have a local copy of our repository in the GitHub folder. The client allows us to switch between different branches and will update our local copy based on our branch selection.
While we're working on a branch, the GitHub client will recognize every change we make. **Fixed an Issue?** Then you just need to switch to your GitHub client, review your changes and commit them (Don't forget to write an accurate description!)

**Naming Scheme**

Beside our master and nightly branches we're also in need some working branches.
*As I mentioned before:* To keep everything organized, we'll checkout a seperated branch for every new issue which we're going to work on.
To do so, just create a new branch in the GitHub client and name it after the following scheme:

**issue-#x- - -server/client-issue-description**

If you're not already assigned to the issue you chose, go to [github.com](https://github.com/kesecode/Arducheeso/issues) and assign yourself to the issue to keep everyone in touch. 
As soon as you actively start working on an issue, change add a *work in progress* lable to the issue.

---
### PlatformIO Project Structure

Basically our main programm is still the same thing as the **sketch** we know from the classic *Arduino IDE*.
But *PlatformIO* gives us some **additional features** in terms of our **project structure**.

**[*WORK IN PROGRESS*]**

---
## III. Code Documentation [*WORK IN PROGRESS*]

### Server
---
### Client
---
### Web Interface
---
## IV. Arduino Circuit Diagram [*WORK IN PROGRESS*]

### Server
---
### Client
---
