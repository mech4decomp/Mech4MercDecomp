/*
 * FUN_0075CB40 (96 B) — appends a string to a growing buffer, calling an
 * IAT helper; falls back to a static string when the buffer is full.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern char g_8bc9b4;
extern unsigned long g_8bc9bc;
extern unsigned long g_8bc9b8;
extern char g_8bd2bf[];
extern char g_8bc9c0[];
extern void *g_76b394;
extern char g_7af9b0[];
extern void __cdecl FUN_0075c8e0(void);

__declspec(naked) void FUN_0075CB40(void)
{
    __asm {
        mov     al, byte ptr [g_8bc9b4]
        test    al, al
        jne     l_3
        mov     ecx, dword ptr [g_8bc9bc]
        cmp     ecx, 0x3e
        je      l_2
        mov     eax, dword ptr [g_8bc9b8]
        mov     edx, offset g_8bd2bf
        sub     edx, eax
        je      l_2
        mov     dword ptr [ecx*4 + g_8bc9c0], eax
        inc     ecx
        mov     dword ptr [g_8bc9bc], ecx
        lea     ecx, [esp + 8]
        push    ecx
        mov     ecx, dword ptr [esp + 8]
        push    ecx
        push    edx
        push    eax
        call    dword ptr [g_76b394]
        mov     edx, dword ptr [g_8bc9b8]
        lea     eax, [edx + eax + 1]
        add     esp, 0x10
        mov     dword ptr [g_8bc9b8], eax
        ret
    l_2:
        push    offset g_7af9b0
        call    FUN_0075c8e0
    l_3:
        ret
    }
}
