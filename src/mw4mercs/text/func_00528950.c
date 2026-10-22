/*
 * FUN_00528950 (188 B) — Control mapping string copy helper.
 *
 * __stdcall. Reads a global pointer, XOR-decrypts it, looks up a selector
 * value, dispatches to one of 4 string constants, copies the string to a
 * destination buffer via rep movsd/movsb. Loops 3 times with incrementing
 * destination offset.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) int __stdcall FUN_00528950(int param_1)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [esp + 4]
        mov     eax, dword ptr [edx + 4]
        mov     edx, dword ptr [eax]
        push    ebx
        push    ebp
        push    esi
        xor ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [ecx + 0x0c]
        lea     ebp, [ecx + 0x0c]
        mov     ecx, dword ptr [ebp]
        xor     ecx, 0x85739531
        xor     eax, 0x85739531
        mov     dword ptr [ecx + 0x3508], edx
        push    edi
        mov     ebx, 3
        lea     edx, [eax + 0x20c744]

    l_loop_top:
        test    ebx, ebx
        jl      l_fail
        cmp     ebx, 0x18
        jge     l_fail
        mov     eax, dword ptr [ebp]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x3508]
        sub     eax, 0
        jz      l_case0
        dec     eax
        jz      l_case1
        dec     eax
        jz      l_case2
        mov     edi, 0x77a1e4
        jmp     l_got_str

    l_case2:
        mov     edi, 0x77a208
        jmp     l_got_str

    l_case1:
        mov     edi, 0x77a234
        jmp     l_got_str

    l_case0:
        mov     edi, 0x77a25c

    l_got_str:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        add     edx, 0x22ac
        inc     ebx
        rep     movsb
        lea     ecx, [ebx - 3]
        cmp     ecx, 3
        jl      l_loop_top
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        ret     8

    l_fail:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     8
    }


}
