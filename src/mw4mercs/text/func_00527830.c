/*
 * FUN_00527830 (166 B) — String array copy helper.
 *
 * __stdcall (RET 0x8). Takes a struct pointer param_1. Checks/initializes
 * a global count, then loops through an array of string pointers, copying
 * each string via FUN_006f3c80 (strdup-like alloc) and FUN_006f4230 (free).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __stdcall FUN_007224d0(int a);
extern void __stdcall FUN_00722f70(int a, void *b);
extern void __stdcall FUN_006f4230(int ptr);
extern void *__stdcall FUN_006f3c80(int len, int flag);

int DAT_007b439c; /* 0x007b439c */

__declspec(naked) int __stdcall FUN_00527830(int param_1)
{
    __asm {
        mov     eax, dword ptr [DAT_007b439c]
        sub     esp, 8
        cmp     eax, -1
        jnz     l_init_done
        push    0
        call    FUN_007224d0
        mov     dword ptr [DAT_007b439c], eax
    l_init_done:
        mov     ecx, dword ptr [esp + 0x0c]
        push    ebx
        mov     ebx, dword ptr [ecx + 8]
        push    ebp
        xor     ebp, ebp
        test    eax, eax
        jle     l_loop_end
        push    esi
        push    edi
    l_loop:
        lea     edx, [esp + 0x10]
        push    edx
        push    ebp
        call    FUN_00722f70
        mov     eax, dword ptr [ebx]
        test    eax, eax
        jz      l_skip_free
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebx], 0
    l_skip_free:
        mov     edi, dword ptr [esp + 0x10]
        or      ecx, -1
        xor     eax, eax
        repne scasb
        push    0
        not     ecx
        push    ecx
        call    FUN_006f3c80
        mov     edi, dword ptr [esp + 0x10]
        or      ecx, -1
        mov     edx, eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     dword ptr [ebx], edx
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        mov     eax, dword ptr [DAT_007b439c]
        and     ecx, 3
        inc     ebp
        add     ebx, 4
        cmp     ebp, eax
        rep movsb
        jl      l_loop
        pop     edi
        pop     esi
    l_loop_end:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [ecx + 4]
        pop     ebp
        mov     dword ptr [edx], eax
        mov     eax, 1
        pop     ebx
        add     esp, 8
        ret     8
    }
}
