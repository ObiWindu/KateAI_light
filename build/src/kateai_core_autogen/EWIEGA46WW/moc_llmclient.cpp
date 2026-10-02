/****************************************************************************
** Meta object code from reading C++ file 'llmclient.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/llmclient.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'llmclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN6KateAi9LlmClientE_t {};
} // unnamed namespace

template <> constexpr inline auto KateAi::LlmClient::qt_create_metaobjectdata<qt_meta_tag_ZN6KateAi9LlmClientE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KateAi::LlmClient",
        "textDelta",
        "",
        "delta",
        "thinkingDelta",
        "finished",
        "fullText",
        "QList<ToolCall>",
        "toolCalls",
        "failed",
        "error",
        "modelsReceived",
        "Provider",
        "provider",
        "models",
        "modelsFailed",
        "retryStatus",
        "message",
        "attempt",
        "maxAttempts",
        "delaySeconds",
        "retryScheduled"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'textDelta'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'thinkingDelta'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'finished'
        QtMocHelpers::SignalData<void(const QString &, const QList<ToolCall> &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'failed'
        QtMocHelpers::SignalData<void(const QString &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Signal 'modelsReceived'
        QtMocHelpers::SignalData<void(Provider, const QStringList &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 }, { QMetaType::QStringList, 14 },
        }}),
        // Signal 'modelsFailed'
        QtMocHelpers::SignalData<void(Provider, const QString &)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 }, { QMetaType::QString, 10 },
        }}),
        // Signal 'retryStatus'
        QtMocHelpers::SignalData<void(const QString &, int, int, int)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 }, { QMetaType::Int, 18 }, { QMetaType::Int, 19 }, { QMetaType::Int, 20 },
        }}),
        // Signal 'retryScheduled'
        QtMocHelpers::SignalData<void(int, int, int)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 18 }, { QMetaType::Int, 19 }, { QMetaType::Int, 20 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<LlmClient, qt_meta_tag_ZN6KateAi9LlmClientE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KateAi::LlmClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6KateAi9LlmClientE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6KateAi9LlmClientE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6KateAi9LlmClientE_t>.metaTypes,
    nullptr
} };

void KateAi::LlmClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LlmClient *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->textDelta((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->thinkingDelta((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->finished((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QList<ToolCall>>>(_a[2]))); break;
        case 3: _t->failed((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->modelsReceived((*reinterpret_cast<std::add_pointer_t<Provider>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 5: _t->modelsFailed((*reinterpret_cast<std::add_pointer_t<Provider>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->retryStatus((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 7: _t->retryScheduled((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (LlmClient::*)(const QString & )>(_a, &LlmClient::textDelta, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (LlmClient::*)(const QString & )>(_a, &LlmClient::thinkingDelta, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (LlmClient::*)(const QString & , const QList<ToolCall> & )>(_a, &LlmClient::finished, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (LlmClient::*)(const QString & )>(_a, &LlmClient::failed, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (LlmClient::*)(Provider , const QStringList & )>(_a, &LlmClient::modelsReceived, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (LlmClient::*)(Provider , const QString & )>(_a, &LlmClient::modelsFailed, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (LlmClient::*)(const QString & , int , int , int )>(_a, &LlmClient::retryStatus, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (LlmClient::*)(int , int , int )>(_a, &LlmClient::retryScheduled, 7))
            return;
    }
}

const QMetaObject *KateAi::LlmClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KateAi::LlmClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6KateAi9LlmClientE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KateAi::LlmClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void KateAi::LlmClient::textDelta(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KateAi::LlmClient::thinkingDelta(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void KateAi::LlmClient::finished(const QString & _t1, const QList<ToolCall> & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void KateAi::LlmClient::failed(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void KateAi::LlmClient::modelsReceived(Provider _t1, const QStringList & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}

// SIGNAL 5
void KateAi::LlmClient::modelsFailed(Provider _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}

// SIGNAL 6
void KateAi::LlmClient::retryStatus(const QString & _t1, int _t2, int _t3, int _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 7
void KateAi::LlmClient::retryScheduled(int _t1, int _t2, int _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1, _t2, _t3);
}
QT_WARNING_POP
