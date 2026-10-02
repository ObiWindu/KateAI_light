/****************************************************************************
** Meta object code from reading C++ file 'agentloop.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/agentloop.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'agentloop.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6KateAi9AgentLoopE_t {};
} // unnamed namespace

template <> constexpr inline auto KateAi::AgentLoop::qt_create_metaobjectdata<qt_meta_tag_ZN6KateAi9AgentLoopE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KateAi::AgentLoop",
        "userMessage",
        "",
        "text",
        "assistantDelta",
        "delta",
        "thinkingDelta",
        "thinkingFinished",
        "assistantFinished",
        "planUpdated",
        "QJsonArray",
        "plan",
        "toolStarted",
        "PermissionRequest",
        "request",
        "toolFinished",
        "ToolResult",
        "result",
        "permissionNeeded",
        "statusChanged",
        "status",
        "activityUpdated",
        "failed",
        "error",
        "turnFinished",
        "modelsReceived",
        "Provider",
        "provider",
        "models",
        "modelsFailed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'userMessage'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'assistantDelta'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'thinkingDelta'
        QtMocHelpers::SignalData<void(const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'thinkingFinished'
        QtMocHelpers::SignalData<void(const QString &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'assistantFinished'
        QtMocHelpers::SignalData<void(const QString &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'planUpdated'
        QtMocHelpers::SignalData<void(const QJsonArray &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Signal 'toolStarted'
        QtMocHelpers::SignalData<void(const PermissionRequest &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'toolFinished'
        QtMocHelpers::SignalData<void(const ToolResult &)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 17 },
        }}),
        // Signal 'permissionNeeded'
        QtMocHelpers::SignalData<void(const PermissionRequest &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'statusChanged'
        QtMocHelpers::SignalData<void(const QString &)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 20 },
        }}),
        // Signal 'activityUpdated'
        QtMocHelpers::SignalData<void(const QString &)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'failed'
        QtMocHelpers::SignalData<void(const QString &)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 23 },
        }}),
        // Signal 'turnFinished'
        QtMocHelpers::SignalData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'modelsReceived'
        QtMocHelpers::SignalData<void(Provider, const QStringList &)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 26, 27 }, { QMetaType::QStringList, 28 },
        }}),
        // Signal 'modelsFailed'
        QtMocHelpers::SignalData<void(Provider, const QString &)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 26, 27 }, { QMetaType::QString, 23 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AgentLoop, qt_meta_tag_ZN6KateAi9AgentLoopE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KateAi::AgentLoop::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6KateAi9AgentLoopE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6KateAi9AgentLoopE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6KateAi9AgentLoopE_t>.metaTypes,
    nullptr
} };

void KateAi::AgentLoop::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AgentLoop *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->userMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->assistantDelta((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->thinkingDelta((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->thinkingFinished((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->assistantFinished((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->planUpdated((*reinterpret_cast<std::add_pointer_t<QJsonArray>>(_a[1]))); break;
        case 6: _t->toolStarted((*reinterpret_cast<std::add_pointer_t<PermissionRequest>>(_a[1]))); break;
        case 7: _t->toolFinished((*reinterpret_cast<std::add_pointer_t<ToolResult>>(_a[1]))); break;
        case 8: _t->permissionNeeded((*reinterpret_cast<std::add_pointer_t<PermissionRequest>>(_a[1]))); break;
        case 9: _t->statusChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->activityUpdated((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->failed((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->turnFinished(); break;
        case 13: _t->modelsReceived((*reinterpret_cast<std::add_pointer_t<Provider>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 14: _t->modelsFailed((*reinterpret_cast<std::add_pointer_t<Provider>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AgentLoop::*)(const QString & )>(_a, &AgentLoop::userMessage, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (AgentLoop::*)(const QString & )>(_a, &AgentLoop::assistantDelta, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (AgentLoop::*)(const QString & )>(_a, &AgentLoop::thinkingDelta, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (AgentLoop::*)(const QString & )>(_a, &AgentLoop::thinkingFinished, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (AgentLoop::*)(const QString & )>(_a, &AgentLoop::assistantFinished, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (AgentLoop::*)(const QJsonArray & )>(_a, &AgentLoop::planUpdated, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (AgentLoop::*)(const PermissionRequest & )>(_a, &AgentLoop::toolStarted, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (AgentLoop::*)(const ToolResult & )>(_a, &AgentLoop::toolFinished, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (AgentLoop::*)(const PermissionRequest & )>(_a, &AgentLoop::permissionNeeded, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (AgentLoop::*)(const QString & )>(_a, &AgentLoop::statusChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (AgentLoop::*)(const QString & )>(_a, &AgentLoop::activityUpdated, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (AgentLoop::*)(const QString & )>(_a, &AgentLoop::failed, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (AgentLoop::*)()>(_a, &AgentLoop::turnFinished, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (AgentLoop::*)(Provider , const QStringList & )>(_a, &AgentLoop::modelsReceived, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (AgentLoop::*)(Provider , const QString & )>(_a, &AgentLoop::modelsFailed, 14))
            return;
    }
}

const QMetaObject *KateAi::AgentLoop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KateAi::AgentLoop::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6KateAi9AgentLoopE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KateAi::AgentLoop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void KateAi::AgentLoop::userMessage(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KateAi::AgentLoop::assistantDelta(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void KateAi::AgentLoop::thinkingDelta(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void KateAi::AgentLoop::thinkingFinished(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void KateAi::AgentLoop::assistantFinished(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void KateAi::AgentLoop::planUpdated(const QJsonArray & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void KateAi::AgentLoop::toolStarted(const PermissionRequest & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void KateAi::AgentLoop::toolFinished(const ToolResult & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void KateAi::AgentLoop::permissionNeeded(const PermissionRequest & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void KateAi::AgentLoop::statusChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void KateAi::AgentLoop::activityUpdated(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void KateAi::AgentLoop::failed(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void KateAi::AgentLoop::turnFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void KateAi::AgentLoop::modelsReceived(Provider _t1, const QStringList & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1, _t2);
}

// SIGNAL 14
void KateAi::AgentLoop::modelsFailed(Provider _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1, _t2);
}
QT_WARNING_POP
