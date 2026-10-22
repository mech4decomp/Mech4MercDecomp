/*
 * FUN_00503530 (320 B) — Unknown function.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* Function declarations */
extern int __fastcall FUN_00503250(void *param);
extern int __fastcall FUN_00411d60(void *this, int edx_unused, int a, int b, const char *c);
extern int __fastcall FUN_004122e0(void *this, int edx_unused, int a, int b, const char *c);

/* Global data references */
extern int g_unknown_7dc804;

__declspec(naked) void FUN_00503530(void)
{
    
__asm {
sub     esp, 0x2c
        push    ebx
        push    esi
        push    edi
        mov     edi, [esp + 0x3c]       ; param1
        mov     esi, [edi]              ; esi = *param1
        mov     eax, [esi]
        push    0x28
        mov     ecx, esi
        call    dword ptr [eax + 0x14]  ; virtual call

        push    edi
        call    FUN_00503250

        mov     edi, [edi + 8]
        add     esp, 4
        push    1
        lea     ecx, [esp + 0x40]
        push    ecx
        test    eax, eax
        push    0x7767e4
        mov     ecx, edi
        setne   bl
        call    FUN_00411d60

        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x40]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]  ; virtual call

        push    1
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x7767d4
        mov     ecx, edi
        call    FUN_00411d60

        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]  ; virtual call

        push    1
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0x7767c8
        mov     ecx, edi
        call    FUN_00411d60

        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]  ; virtual call

        push    1
        lea     ecx, [esp + 0x18]
        push    ecx
        push    0x7767c0
        mov     ecx, edi
        call    FUN_00411d60

        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]  ; virtual call

        push    1
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    0x7767b4
        mov     ecx, edi
        mov     dword ptr [esp + 0x2c], 0xbf800000
        mov     dword ptr [esp + 0x28], 0xbf800000
        mov     dword ptr [esp + 0x24], 0xbf800000
        mov     dword ptr [esp + 0x30], 0xbf800000
        call    FUN_004122e0

        mov     edx, [esi]
        push    0x10
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]  ; virtual call

        mov     dword ptr [esp + 0x30], 0xbf800000
        mov     dword ptr [esp + 0x2c], 0xbf800000
        push    1
        lea     ecx, [esp + 0x2c]
        push    ecx
        push    0x7767a8
        mov     ecx, edi
        mov     dword ptr [esp + 0x34], 0xbf800000
        mov     dword ptr [esp + 0x40], 0xbf800000
        call    FUN_004122e0

        mov     edx, [esi]
        push    0x10
        lea     eax, [esp + 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]  ; virtual call

        mov     eax, dword ptr [g_unknown_7dc804]
        neg     bl
        pop     edi
        pop     esi
        sbb     ebx, ebx
        and     ebx, eax
        mov     eax, ebx
        pop     ebx
        add     esp, 0x2c
        ret
    }


}
