#pragma once
#include "Internal.h"

/*******************************************
 NTDLL IMPORT
*******************************************/
typedef NTSTATUS(NTAPI* NTOPENKEY)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES);
typedef NTSTATUS(NTAPI* NTQUERYVALUEKEY)(HANDLE, PUNICODE_STRING, KEY_VALUE_INFORMATION_CLASS, PVOID, ULONG, PULONG);
typedef NTSTATUS(NTAPI* NTCLOSE)(HANDLE);
typedef NTSTATUS(NTAPI* NTQUERYINFORMATIONPROCESS)(HANDLE, PROCESSINFOCLASS, PVOID, ULONG, PULONG);
typedef NTSTATUS(NTAPI* NTQUERYSYSTEMINFORMATION)(SYSTEM_INFORMATION_CLASS, PVOID, ULONG, PULONG);
typedef ULONG(NTAPI* RTLNTSTATUSTODOSERROR)(NTSTATUS);
typedef NTSTATUS(NTAPI* NTCREATEUSERPROCESS)(PHANDLE,PHANDLE, ACCESS_MASK, ACCESS_MASK, POBJECT_ATTRIBUTES, POBJECT_ATTRIBUTES, ULONG, ULONG, PRTL_USER_PROCESS_PARAMETERS, PPS_CREATE_INFO, PPS_ATTRIBUTE_LIST);
typedef NTSTATUS(NTAPI* RTLCREATEPROCESSPARAMETERSEX)(PRTL_USER_PROCESS_PARAMETERS*, PUNICODE_STRING, PUNICODE_STRING, PUNICODE_STRING,	PUNICODE_STRING, PVOID,	PUNICODE_STRING, PUNICODE_STRING, PUNICODE_STRING, PUNICODE_STRING, ULONG);
typedef NTSTATUS(NTAPI* RTLDESTROYPROCESSPARAMETERS)(PRTL_USER_PROCESS_PARAMETERS);
typedef NTSTATUS(NTAPI* RTLENTERCRITICALSECTION)(PRTL_CRITICAL_SECTION);
typedef NTSTATUS(NTAPI* RTLLEAVECRITICALSECTION)(PRTL_CRITICAL_SECTION);



/*******************************************
 KERNEL32 IMPORT
*******************************************/
typedef DWORD(WINAPI* CSRGETPROCESSID)(VOID);



/*******************************************
 MSI IMPORT
*******************************************/
typedef UINT(WINAPI* MSIGETFILEHASHW)(LPCWSTR, DWORD, PMSIFILEHASHINFO);
typedef UINT(WINAPI* MSIGETFILEHASHA)(LPCSTR, DWORD, PMSIFILEHASHINFO);



/*******************************************
 DSCLIENT IMPORT
*******************************************/
typedef HRESULT(WINAPI* DSCREATESHAREDFILETOKEN)(LPCWSTR, PDATA_SHARE_CTRL, INT, INT, WCHAR**);
typedef HRESULT(WINAPI* DSCOPYFROMSHAREDFILE)(LPCWSTR, LPCWSTR);



/*******************************************
 SHLWAPI IMPORT
*******************************************/
typedef LPWSTR(WINAPI* PATHCOMBINEA)(LPCSTR, LPCSTR, LPCSTR);
typedef LPWSTR(WINAPI* PATHCOMBINEW)(LPCWSTR, LPCWSTR, LPCWSTR);
typedef HRESULT(WINAPI* IUNKNOWN_QUERYSERVICE)(IUnknown*, REFGUID, REFIID, PVOID*);
typedef VOID(WINAPI* PATHSTRIPPATHW)(LPWSTR);



/*******************************************
 URLMON IMPORT
*******************************************/
typedef HRESULT(WINAPI* URLDOWNLOADFILEA)(LPUNKNOWN, LPCSTR, LPCSTR, DWORD, LPBINDSTATUSCALLBACK);
typedef HRESULT(WINAPI* URLDOWNLOADFILEW)(LPUNKNOWN, LPCTSTR, LPCTSTR, DWORD, LPBINDSTATUSCALLBACK);



/*******************************************
 SHELL32 IMPORT
*******************************************/
typedef HRESULT(WINAPI* DLLGETCLASSOBJECT)(REFCLSID, REFIID, LPVOID*);



/*******************************************
 WTSAPI32 IMPORT
*******************************************/
typedef BOOL(WINAPI* WTSENUMERATEPROCESSES)(HANDLE, DWORD, DWORD, PWTS_PROCESS_INFOW*, PDWORD);
typedef VOID(WINAPI* WTSFREEMEMORY)(PVOID);



/*******************************************
 ADVAPI32 IMPORT
*******************************************/
typedef BOOL(WINAPI* CONVERTSIDTOSTRINGSIDW)(PSID, LPWSTR*);
typedef BOOL(WINAPI* CONVERTSIDTOSTRINGSIDA)(PSID, LPSTR*);
typedef SC_HANDLE(WINAPI* OPENSCMANAGERW)(LPCWSTR, LPCWSTR, DWORD);
typedef SC_HANDLE(WINAPI* OPENSERVICEW)(SC_HANDLE, LPCWSTR, DWORD);
typedef SC_HANDLE(WINAPI* QUERYSERVICESTATUSEX)(SC_HANDLE, SC_STATUS_TYPE, LPBYTE, DWORD, LPDWORD);
typedef BOOL(WINAPI* CLOSESERVICEHANDLE)(SC_HANDLE);