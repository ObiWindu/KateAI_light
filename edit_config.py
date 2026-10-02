with open('/tmp/configpage.cpp', 'r') as f:
    content = f.read()
old = '    form->addRow(i18n("Command timeout:"), m_timeout);'
new = old + '\n\n    m_messageSpeed = new QComboBox(this);\n    m_messageSpeed->addItem(i18n("Slow"), 500);\n    m_messageSpeed->addItem(i18n("Medium"), 200);\n    m_messageSpeed->addItem(i18n("Fast"), 50);\n    form->addRow(i18n("Message writing speed:"), m_messageSpeed);'
content = content.replace(old, new)
with open('/tmp/configpage.cpp', 'w') as f:
    f.write(content)
