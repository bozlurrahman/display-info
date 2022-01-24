# SIMPLE DISPLAY MANAGER
On Windows 7/10 the application manage the device displays and device state

The desired outcomes are as follows:
- Develop a node module
- Using Node NAN
- Add a function that can Enumerate the attached displays
- Add a function that can Request the displays to sleep
- Add a function that can Request the displays to wake
    - Note: This doesn’t work on Windows 8 and above (Can you work around this problem?)
- Add a function that returns the last input time
- Add Unit test for all functions using Jest

## Run and build

#### Clone the project

`git clone THIS_REPO_LINK`

#### Startup project

```shell
npm i
```

You will need to globally install the following node modules:
● windows-build-tools `npm install --global --production windows-build-tools`
● node-gyp `npm install --global --node-gyp`

Open [https://github.com/nodejs/node-gyp](https://github.com/nodejs/node-gyp) to see details about node-gype installation.

#### `npm run build`

```shell
npm run build
```

Builds the app to the `build` folder. and will generate `build/Release/addon.node` with some others files.<br>

#### `npm run start` to run the program
```shell
npm run start
```

#### `npm run test` to test the program
```shell
npm run test
```

### Resources:
| Resource | Links |
| ------ | ------ |
| Node NAN | [https://github.com/nodejs/nan][PlDb] |
|Jest | [https://jestjs.io/docs/en/getting-started][PlDb] |
| Enumerate the number of attached displays | [https://docs.microsoft.com/en-us/windows/desktop/api/winuser/nf-winuser-getsystemmetrics][PlDb] |
| Win32 SendMessage | [https://docs.microsoft.com/en-us/windows/desktop/api/winuser/nf-winuser-sendmessage][PlDb] |
|Display Sleep/Wake | [ https://docs.microsoft.com/en-us/windows/desktop/menurc/wm-syscommand][PlDb] |
|Get last input time | [https://docs.microsoft.com/en-us/windows/desktop/api/winuser/nf-winuser-getlastinputinfo][PlDb] |
