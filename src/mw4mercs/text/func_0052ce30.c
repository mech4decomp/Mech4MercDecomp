/*
 * FUN_0052ce30 (637 B) — Server config write function (__thiscall).
 * Writes server settings from a config structure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_004d3350(int param);
extern int __fastcall FUN_0040eda0(char *str);
extern void __fastcall FUN_00411d10(char *str, int val);
extern void __fastcall FUN_00411e70(char *str, int val);

__declspec(naked) void __fastcall FUN_0052ce30(void *param1)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, ecx
        push    edi
        call    FUN_004d3350
        push    0x7727b4
        mov     ecx, edi
        call    FUN_0040eda0
        mov     edi, eax
        mov     eax, dword ptr [esi + 0x20]
        push    eax
        push    0x77acac
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esi + 0x24]
        push    ecx
        push    0x77ac94
        mov     ecx, edi
        call    FUN_00411d10
        mov     edx, dword ptr [esi + 0x28]
        push    edx
        push    0x77ac78
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 0x2c]
        push    eax
        push    0x77ac70
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esi + 0x44]
        push    ecx
        push    0x77ac0c
        mov     ecx, edi
        call    FUN_00411d10
        mov     edx, dword ptr [esi + 0x48]
        push    edx
        push    0x77ac00
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 0x4c]
        push    eax
        push    0x77abec
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esi + 0x50]
        push    ecx
        push    0x77abdc
        mov     ecx, edi
        call    FUN_00411d10
        mov     edx, dword ptr [esi + 0x54]
        push    edx
        push    0x77abc4
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 0x58]
        push    eax
        push    0x77abb8
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esi + 0x5c]
        push    ecx
        push    0x77aba8
        mov     ecx, edi
        call    FUN_00411d10
        mov     edx, dword ptr [esi + 0x64]
        push    edx
        push    0x77ab98
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 0x74]
        push    eax
        push    0x77ab70
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esi + 0x98]
        push    ecx
        push    0x77ab44
        mov     ecx, edi
        call    FUN_00411d10
        mov     edx, dword ptr [esi + 0x9c]
        push    edx
        push    0x77ab34
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 0xa0]
        push    eax
        push    0x77ab20
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esi + 0xa8]
        push    ecx
        push    0x77ab10
        mov     ecx, edi
        call    FUN_00411d10
        mov     edx, dword ptr [esi + 0xac]
        push    edx
        push    0x77aaf4
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 0xa4]
        push    eax
        push    0x77aae8
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esi + 0xb0]
        push    ecx
        push    0x77aabc
        mov     ecx, edi
        call    FUN_00411d10
        mov     edx, dword ptr [esi + 0xb4]
        push    edx
        push    0x77aab0
        mov     ecx, edi
        call    FUN_00411d10
        mov     ebx, dword ptr [esi + 0x36c]
        push    ebx
        push    0x77aaa4
        mov     ecx, edi
        call    FUN_00411d10
        cmp     dword ptr [esi + 0x370], ebx
        jle     l_skip_clamp
        mov     dword ptr [esi + 0x370], ebx

    l_skip_clamp:
        mov     eax, dword ptr [esi + 0x370]
        push    eax
        push    0x77aa9c
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esi + 0xbc]
        push    ecx
        push    0x77a9ac
        mov     ecx, edi
        call    FUN_00411e70
        mov     edx, dword ptr [esi + 0xc0]
        push    edx
        push    0x77a99c
        mov     ecx, edi
        call    FUN_00411e70
        mov     eax, dword ptr [esi + 0xc4]
        push    eax
        push    0x77a98c
        mov     ecx, edi
        call    FUN_00411e70
        mov     ecx, dword ptr [esi + 0xc8]
        push    ecx
        push    0x77a97c
        mov     ecx, edi
        call    FUN_00411e70
        mov     edx, dword ptr [esi + 0xcc]
        push    edx
        push    0x77a96c
        mov     ecx, edi
        call    FUN_00411e70
        mov     eax, dword ptr [esi + 0xd0]
        push    eax
        push    0x77a95c
        mov     ecx, edi
        call    FUN_00411e70
        mov     ecx, dword ptr [esi + 0xd4]
        push    ecx
        push    0x77a948
        mov     ecx, edi
        call    FUN_00411e70
        mov     edx, dword ptr [esi + 0xd8]
        push    edx
        push    0x77a934
        mov     ecx, edi
        call    FUN_00411e70
        mov     eax, dword ptr [esi + 0xdc]
        push    eax
        push    0x77a920
        mov     ecx, edi
        call    FUN_00411e70
        mov     ecx, dword ptr [esi + 0xe0]
        push    ecx
        push    0x77a90c
        mov     ecx, edi
        call    FUN_00411e70
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
