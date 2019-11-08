const { app, BrowserWindow } = require('electron');
const native = require('./lib/native');

console.log(native.getNativeMessage());

function createWindow() {
    let win = new BrowserWindow({
        width: 800,
        height: 600,
        webPreferences: {
            nodeIntegration: false,
        },
    });

    win.loadFile('index.html');
}

app.on('ready', createWindow);