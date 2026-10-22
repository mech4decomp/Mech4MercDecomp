/*
 * FUN_004AFBD0 (82 B) — __fastcall iterator with conditional dispatch.
 *   Iterates [ecx+0x188] entries, calls FUN_004C1950 or FUN_004C1A10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern char __stdcall FUN_004c1950(void);
extern char __stdcall FUN_004c1a10(int a, int b);

__declspec(naked) char __fastcall FUN_004afbd0(int param1)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ebx, dword ptr [esi + 0x188]
        push    edi
        xor     edi, edi
        test    ebx, ebx
        jle     l_return_1
    l_loop:
        mov     eax, dword ptr [esi + 0x18]
        mov     edx, dword ptr [esi + 0x184]
        shr     eax, 5
        not     al
        lea     ecx, [esi + 0xb0]
        test    al, 1
        mov     eax, dword ptr [edx + edi * 4]
        push    ecx
        push    eax
        jz      l_call_c1a10
        call    FUN_004c1950
        jmp     l_check_result
    l_call_c1a10:
        call    FUN_004c1a10
    l_check_result:
        add     esp, 8
        test    al, al
        jz      l_return_0
        inc     edi
        cmp     edi, ebx
        jl      l_loop
    l_return_1:
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
    l_return_0:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        ret
    }
}
