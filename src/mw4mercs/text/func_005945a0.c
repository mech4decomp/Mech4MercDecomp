/*
 * FUN_005945A0 (258 B) — String formatting / object deserializer.
 * Reads MovieName, Type, j, Delay, TriggerName fields via stream.
 *
 * __stdcall, RET 0 (no stack cleanup in this frame).
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __stdcall FUN_00411bf0(void *, void *, void *);
extern void __stdcall FUN_00412780(void *, void *);
extern void __stdcall FUN_00412a50(void *, void *);
extern int __stdcall FUN_00594700(void *);
extern void __stdcall FUN_00411cb0(void *, void *, void *, int);
extern void __stdcall FUN_004084e0(void *);

__declspec(naked) void __stdcall FUN_005945A0(void)
{
    
__asm {
sub     esp, 0x10
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        push    1
        lea     eax, [esp + 0xc]
        push    eax
        push    0x782d64
        mov     ecx, edi
        mov     dword ptr [esp + 0x18], 0
        call    FUN_00411bf0
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        lea     ecx, [esp + 0x10]
        call    FUN_00412780
        mov     esi, dword ptr [esp + 0x20]
        lea     edx, [esp + 0xc]
        push    edx
        push    esi
        call    FUN_00412a50
        add     esp, 8
        push    1
        lea     eax, [esp + 0xc]
        push    eax
        push    0x773784
        mov     ecx, edi
        call    FUN_00411bf0
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        call    FUN_00594700
        mov     edx, dword ptr [esi]
        add     esp, 4
        mov     dword ptr [esp + 0x14], eax
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    0
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0x782d5c
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x24], 0
        call    dword ptr [edx + 0x24]
        push    1
        lea     ecx, [esp + 0xc]
        push    ecx
        push    0x782d50
        mov     ecx, edi
        call    FUN_00411bf0
        mov     edx, dword ptr [esp + 0x8]
        push    edx
        lea     ecx, [esp + 0x10]
        call    FUN_00412780
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        call    FUN_00412a50
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 8
        test    eax, eax
        pop     edi
        pop     esi
        je      label_done
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     label_done
        push    eax
        call    FUN_004084e0
        add     esp, 4

label_done:
        add     esp, 0x10
        ret
    }


}
