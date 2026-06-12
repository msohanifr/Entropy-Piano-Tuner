/****************************************************************************
** Meta object code from reading C++ file 'calculationprogressgroup.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow/calculationprogressgroup.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calculationprogressgroup.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN24CalculationProgressGroupE_t {};
} // unnamed namespace

template <> constexpr inline auto CalculationProgressGroup::qt_create_metaobjectdata<qt_meta_tag_ZN24CalculationProgressGroupE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CalculationProgressGroup",
        "updateTitle",
        "",
        "onStartCalculation",
        "onCancelCalculation",
        "onResetCalculation",
        "startCancelPressed",
        "showAlgorithmInfo"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'updateTitle'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onStartCalculation'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCancelCalculation'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onResetCalculation'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'startCancelPressed'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showAlgorithmInfo'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CalculationProgressGroup, qt_meta_tag_ZN24CalculationProgressGroupE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CalculationProgressGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<DisplaySizeDependingGroupBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24CalculationProgressGroupE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24CalculationProgressGroupE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN24CalculationProgressGroupE_t>.metaTypes,
    nullptr
} };

void CalculationProgressGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CalculationProgressGroup *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updateTitle(); break;
        case 1: _t->onStartCalculation(); break;
        case 2: _t->onCancelCalculation(); break;
        case 3: _t->onResetCalculation(); break;
        case 4: _t->startCancelPressed(); break;
        case 5: _t->showAlgorithmInfo(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *CalculationProgressGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalculationProgressGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24CalculationProgressGroupE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "MessageListener"))
        return static_cast< MessageListener*>(this);
    if (!strcmp(_clname, "CalculationAdapter"))
        return static_cast< CalculationAdapter*>(this);
    return DisplaySizeDependingGroupBox::qt_metacast(_clname);
}

int CalculationProgressGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DisplaySizeDependingGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
