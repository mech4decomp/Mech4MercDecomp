/*
 * FUN_00528e70 (480 B) — Joystick throttle calibration config helper.
 *
 * __stdcall. Reads a float difference from a global, compares against a
 * threshold, and writes joystick throttle calibration values (bi-throttle
 * vs single-throttle) to an options.ini file.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_0040dca0(const char *path, int a, int b);
extern int __stdcall FUN_0040ecc0(const char *key);
extern int __stdcall FUN_00411d60(const char *key, void *val, int a);
extern int __stdcall FUN_0050b1c0(int a, int b);
extern int __stdcall FUN_0050b1e0(int a, int b);
extern int __stdcall FUN_0050b200(int a, int b);
extern void __stdcall FUN_0040de20(void);

__declspec(naked) int __stdcall FUN_00528e70(void)
{
    

extern int DAT_007dd230;
extern int DAT_007b220c;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
        mov eax, dword ptr [DAT_007dd230]
        fld     dword ptr [eax + 0x30]
        sub     esp, 0x5c
        fsub    dword ptr [eax + 0x34]
        push    esi
        push    1
        fabs
        push    0
        fld dword ptr [DAT_007b220c]
        push    0x77826c
        fcompp
        fnstsw ax
        test ah, 0x1
        jnz     l_single_throttle

        lea     ecx, [esp + 0x1c]
        call    FUN_0040dca0
        push    0x77792c
        lea     ecx, [esp + 0x14]
        call    FUN_0040ecc0
        mov     esi, eax
        push    0
        lea     eax, [esp + 8]
        push    eax
        push    0x777958
        mov     ecx, esi
        call    FUN_00411d60
        push    0
        lea     ecx, [esp + 0x0c]
        push    ecx
        push    0x777948
        mov     ecx, esi
        call    FUN_00411d60
        push    0
        lea     edx, [esp + 0x10]
        push    edx
        push    0x777938
        mov     ecx, esi
        call    FUN_00411d60
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        mov edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [esp + 4]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x2c]
        mov ecx, dword ptr [DAT_007dd230]
        xor     edx, 0x85739531
        push    edx
        push    eax
        call    FUN_0050b1c0
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        mov esi, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [esp + 8]
        xor     edx, esi
        mov     eax, dword ptr [edx + 0x2c]
        xor     eax, 0x85739531
        push    eax
        push    ecx
        mov ecx, dword ptr [DAT_007dd230]
        call    FUN_0050b1e0
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        mov ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [esp + 0x0c]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x2c]
        xor     ecx, 0x85739531
        push    ecx
        mov ecx, dword ptr [DAT_007dd230]
        push    edx
        call    FUN_0050b200
        lea     ecx, [esp + 0x10]
        call    FUN_0040de20
        mov     eax, 1
        pop     esi
        add     esp, 0x5c
        ret     8

    l_single_throttle:
        lea     ecx, [esp + 0x1c]
        call    FUN_0040dca0
        push    0x77792c
        lea     ecx, [esp + 0x14]
        call    FUN_0040ecc0
        mov     esi, eax
        push    0
        lea     eax, [esp + 8]
        push    eax
        push    0x77797c
        mov     ecx, esi
        call    FUN_00411d60
        push    0
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x77796c
        mov     ecx, esi
        call    FUN_00411d60
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        mov esi, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [esp + 4]
        xor     eax, esi
        mov     ecx, dword ptr [eax + 0x2c]
        xor     ecx, 0x85739531
        push    ecx
        mov ecx, dword ptr [DAT_007dd230]
        push    edx
        call    FUN_0050b1c0
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        mov edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [esp + 4]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x2c]
        mov ecx, dword ptr [DAT_007dd230]
        xor     edx, 0x85739531
        push    edx
        push    eax
        call    FUN_0050b1e0
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        mov esi, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [esp + 0x0c]
        xor     edx, esi
        mov     eax, dword ptr [edx + 0x2c]
        xor     eax, 0x85739531
        push    eax
        push    ecx
        mov ecx, dword ptr [DAT_007dd230]
        call    FUN_0050b200
        lea     ecx, [esp + 0x10]
        call    FUN_0040de20
        mov     eax, 1
        pop     esi
        add     esp, 0x5c
        ret     8
    }


}
