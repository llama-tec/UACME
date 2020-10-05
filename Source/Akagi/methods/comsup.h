/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2017 - 2020
*
*  TITLE:       COMSUP.H
*
*  VERSION:     3.50
*
*  DATE:        14 Sep 2020
*
*  Prototypes and definitions for COM interfaces and routines.
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/
#pragma once

#ifndef UCM_DEFINE_GUID
#define UCM_DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
     EXTERN_C const GUID DECLSPEC_SELECTANY name \
                = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }  
#endif

UCM_DEFINE_GUID(IID_IColorDataProxy, 0x0A16D195, 0x6F47, 0x4964, 0x92, 0x87, 0x9F, 0x4B, 0xAB, 0x6D, 0x98, 0x27);
UCM_DEFINE_GUID(IID_ICMLuaUtil, 0x6EDD6D74, 0xC007, 0x4E75, 0xB7, 0x6A, 0xE5, 0x74, 0x09, 0x95, 0xE2, 0x4C);
UCM_DEFINE_GUID(IID_ISecurityEditor, 0x14B2C619, 0xD07A, 0x46EF, 0x8B, 0x62, 0x31, 0xB6, 0x4F, 0x3B, 0x84, 0x5C);
UCM_DEFINE_GUID(IID_EditionUpgradeManager, 0xF2DCB80D, 0x0670, 0x44BC, 0x90, 0x02, 0xCD, 0x18, 0x68, 0x87, 0x30, 0xAF);

HRESULT ucmAllocateElevatedObject(
    _In_ LPWSTR lpObjectCLSID,
    _In_ REFIID riid,
    _In_ DWORD dwClassContext,
    _Outptr_ void **ppv);

BOOL ucmMasqueradedCreateSubDirectoryCOM(
    _In_ LPWSTR ParentDirectory,
    _In_ LPWSTR SubDirectory);

BOOL ucmMasqueradedMoveCopyFileCOM(
    _In_ LPWSTR SourceFileName,
    _In_ LPWSTR DestinationDir,
    _In_ BOOL fMove);

BOOL ucmMasqueradedMoveFileCOM(
    _In_ LPWSTR SourceFileName,
    _In_ LPWSTR DestinationDir);

BOOL ucmMasqueradedDeleteDirectoryFileCOM(
    _In_ LPWSTR FileName);

BOOL ucmMasqueradedRenameElementCOM(
    _In_ LPWSTR OldName,
    _In_ LPWSTR NewName);

BOOL ucmMasqueradedGetObjectSecurityCOM(
    _In_ LPWSTR lpTargetObject,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _In_ SE_OBJECT_TYPE ObjectType,
    _Inout_ LPOLESTR *Sddl);

BOOL ucmMasqueradedSetObjectSecurityCOM(
    _In_ LPWSTR lpTargetObject,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _In_ SE_OBJECT_TYPE ObjectType,
    _In_ LPWSTR NewSddl);
