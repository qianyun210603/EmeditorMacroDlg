### Emeditor插件：用于“排版脚本自由与分享版”的弹出式对话框

调用方式：
```javascript
var buffer = precomment + new Array(1024 - precomment.length + 1).join( "*" );
var bufferFlag = editor.ExecutePlugin(
    "EmeditorMacroDlg.dll",
    eePluginUserMessage,
    inputFlag,
    buffer
);
```

参数：
`inputFlag`: 整数类型。输入。提示长度（bit 1-15）、是否允许多级标题（bit 16）和输入输出缓冲区大小（bit 17+）。
`buffer`：String类型。输入/输出。输入提示文字；输出所有结果正则表达式，以`\n`分隔。

返回值：
“匹配内文”复选框状态（bit 1）、“标题分隔符已包含”复选框状态（bit 2）、所有结果正则表达式长度和（bit 3+）