/****************************************************************************
** Meta object code from reading C++ file 'optionspageaudioinputoutputpage.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "options/audio/optionspageaudioinputoutputpage.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optionspageaudioinputoutputpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
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
struct qt_meta_tag_ZN7options20PageAudioInputOutputE_t {};
} // unnamed namespace

template <> constexpr inline auto options::PageAudioInputOutput::qt_create_metaobjectdata<qt_meta_tag_ZN7options20PageAudioInputOutputE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "options::PageAudioInputOutput",
        "updateProgress",
        "",
        "percentage",
        "onDeviceSelectionChanged",
        "onDefaultDevice",
        "onDefaultSamplingRate",
        "addDevice",
        "QAudioDevice",
        "info",
        "onDefaultChannel",
        "onDefaultBufferSize"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'updateProgress'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'onDeviceSelectionChanged'
        QtMocHelpers::SlotData<void(int)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'onDefaultDevice'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDefaultSamplingRate'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'addDevice'
        QtMocHelpers::SlotData<void(QAudioDevice)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'onDefaultChannel'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDefaultBufferSize'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PageAudioInputOutput, qt_meta_tag_ZN7options20PageAudioInputOutputE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject options::PageAudioInputOutput::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7options20PageAudioInputOutputE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7options20PageAudioInputOutputE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7options20PageAudioInputOutputE_t>.metaTypes,
    nullptr
} };

void options::PageAudioInputOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PageAudioInputOutput *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updateProgress((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->onDeviceSelectionChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->onDefaultDevice(); break;
        case 3: _t->onDefaultSamplingRate(); break;
        case 4: _t->addDevice((*reinterpret_cast<std::add_pointer_t<QAudioDevice>>(_a[1]))); break;
        case 5: _t->onDefaultChannel(); break;
        case 6: _t->onDefaultBufferSize(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PageAudioInputOutput::*)(int )>(_a, &PageAudioInputOutput::updateProgress, 0))
            return;
    }
}

const QMetaObject *options::PageAudioInputOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *options::PageAudioInputOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7options20PageAudioInputOutputE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ContentsWidgetInterface"))
        return static_cast< ContentsWidgetInterface*>(this);
    return QWidget::qt_metacast(_clname);
}

int options::PageAudioInputOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void options::PageAudioInputOutput::updateProgress(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN7options18DeviceLoaderThreadE_t {};
} // unnamed namespace

template <> constexpr inline auto options::DeviceLoaderThread::qt_create_metaobjectdata<qt_meta_tag_ZN7options18DeviceLoaderThreadE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "options::DeviceLoaderThread",
        "updateProgress",
        "",
        "percentageCompleted",
        "deviceReady",
        "QAudioDevice",
        "device"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'updateProgress'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'deviceReady'
        QtMocHelpers::SignalData<void(QAudioDevice)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DeviceLoaderThread, qt_meta_tag_ZN7options18DeviceLoaderThreadE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject options::DeviceLoaderThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7options18DeviceLoaderThreadE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7options18DeviceLoaderThreadE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7options18DeviceLoaderThreadE_t>.metaTypes,
    nullptr
} };

void options::DeviceLoaderThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DeviceLoaderThread *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updateProgress((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->deviceReady((*reinterpret_cast<std::add_pointer_t<QAudioDevice>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DeviceLoaderThread::*)(int )>(_a, &DeviceLoaderThread::updateProgress, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DeviceLoaderThread::*)(QAudioDevice )>(_a, &DeviceLoaderThread::deviceReady, 1))
            return;
    }
}

const QMetaObject *options::DeviceLoaderThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *options::DeviceLoaderThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7options18DeviceLoaderThreadE_t>.strings))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int options::DeviceLoaderThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void options::DeviceLoaderThread::updateProgress(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void options::DeviceLoaderThread::deviceReady(QAudioDevice _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
