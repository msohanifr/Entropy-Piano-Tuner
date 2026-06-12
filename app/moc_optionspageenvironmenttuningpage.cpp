/****************************************************************************
** Meta object code from reading C++ file 'optionspageenvironmenttuningpage.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "options/environment/optionspageenvironmenttuningpage.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optionspageenvironmenttuningpage.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7options21PageEnvironmentTuningE_t {};
} // unnamed namespace

template <> constexpr inline auto options::PageEnvironmentTuning::qt_create_metaobjectdata<qt_meta_tag_ZN7options21PageEnvironmentTuningE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "options::PageEnvironmentTuning"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PageEnvironmentTuning, qt_meta_tag_ZN7options21PageEnvironmentTuningE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject options::PageEnvironmentTuning::staticMetaObject = { {
    QMetaObject::SuperData::link<OptionsTabContentsVScrollArea::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7options21PageEnvironmentTuningE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7options21PageEnvironmentTuningE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7options21PageEnvironmentTuningE_t>.metaTypes,
    nullptr
} };

void options::PageEnvironmentTuning::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PageEnvironmentTuning *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *options::PageEnvironmentTuning::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *options::PageEnvironmentTuning::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7options21PageEnvironmentTuningE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ContentsWidgetInterface"))
        return static_cast< ContentsWidgetInterface*>(this);
    return OptionsTabContentsVScrollArea::qt_metacast(_clname);
}

int options::PageEnvironmentTuning::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OptionsTabContentsVScrollArea::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
