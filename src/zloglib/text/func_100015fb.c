/*
 * ZlogLib.dll - FUN_100015fb (0x100015FB, 171 B, __stdcall)
 * Log filename uniquifier: strips the extension and appends a numeric
 * suffix until a non-colliding name is found.
 * Transcribed from ZlogLib.dll reference bytes.
 */

#include <windows.h>

extern void (*g_10003040)(void);
extern void (*g_10003074)(void);
extern char g_10004d07;

extern char *__cdecl FUN_10002931(void);
extern int __cdecl FUN_100016a6(void);

__declspec(naked) void FUN_100015fb(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x808
        and     dword ptr [ebp + -0x4], 0x0
        push    ebx
        push    esi
        mov     esi, dword ptr [g_10003040]
        push    edi
        push    0x7ff
        mov     edi, 0x10004908
        lea     eax, [ebp + 0xfffff7f8]
        push    edi
        push    eax
        call    esi
        and     byte ptr [ebp + -0x9], 0x0
        lea     eax, [ebp + 0xfffff7f8]
        push    0x2e
        push    eax
        call    dword ptr [g_10003074]
        mov     ebx, eax
        add     esp, 0x14
        test    ebx, ebx
        jz      l_10001663
        and     byte ptr [ebx], 0x0
        inc     ebx
    l_10001645:
        test    ebx, ebx
        jz      l_10001663
    l_10001649:
        push    ebx
        push    dword ptr [ebp + -0x4]
        lea     eax, [ebp + 0xfffff7f8]
        push    eax
        push    0x100040cc
        call    FUN_10002931
        add     esp, 0x10
        jmp     l_1000167a
    l_10001663:
        push    dword ptr [ebp + -0x4]
        lea     eax, [ebp + 0xfffff7f8]
        push    eax
        push    0x100040c4
        call    FUN_10002931
        add     esp, 0xc
    l_1000167a:
        inc     dword ptr [ebp + -0x4]
        push    eax
        mov     dword ptr [ebp + -0x8], eax
        call    FUN_100016a6
        cmp     eax, 0x1
        pop     ecx
        jz      l_10001645
        push    0x3ff
        push    dword ptr [ebp + -0x8]
        push    edi
        call    esi
        add     esp, 0xc
        and     byte ptr [g_10004d07], 0x0
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
