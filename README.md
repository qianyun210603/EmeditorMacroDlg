### Emeditor��������ڡ��Ű�ű����������桱�ĵ���ʽ�Ի���

���÷�ʽ��
���Ȱ���װ����ķ�����װ"EmeditorMacroDlg.dll"��     
Ȼ����Emeditor�������
```javascript
var buffer = precomment + new Array(1024 - precomment.length + 1).join( "*" );
var bufferFlag = editor.ExecutePlugin(
    "EmeditorMacroDlg.dll",
    eePluginUserMessage,
    inputFlag,
    buffer
);
```

������
`inputFlag`: �������͡����롣��ʾ���ȣ�bit 1-15�����Ƿ�����༶���⣨bit 16�������������������С��bit 17+����
`buffer`��String���͡�����/�����������ʾ���֣�������н��������ʽ����`\n`�ָ���

����ֵ��
��ƥ�����ġ���ѡ��״̬��bit 1����������ָ����Ѱ�������ѡ��״̬��bit 2�������н��������ʽ���Ⱥͣ�bit 3+