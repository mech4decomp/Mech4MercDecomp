/*
 * FUN_006FF9B0 (190 B) — Game list processor with critical section.
 *
 * __cdecl, no params.
 * Enters critical section, processes game list entries, leaves critical section.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int  __cdecl FUN_006ffbc0(int);
extern int  __cdecl FUN_006f89f0(void);
extern int  __cdecl FUN_006f7700(void);
extern int  __cdecl FUN_006f8430(void);
extern int  __cdecl FUN_006f7970(int, int *);
extern int  __cdecl FUN_006fabf0(const char *, ...);
extern void __cdecl FUN_006ffa70(int);

__declspec(naked) void __cdecl FUN_006FF9B0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    esi
        push    0x8aaa20
        _emit   0xFF
        _emit   0x15
        _emit   0x10
        _emit   0xB1
        _emit   0x76
        _emit   0x00
        _emit   0xA1
        _emit   0x04
        _emit   0xAB
        _emit   0x8A
        _emit   0x00
        push    eax
        call    FUN_006ffbc0
        xor     esi, esi
        _emit   0x89
        _emit   0x35
        _emit   0x04
        _emit   0xAB
        _emit   0x8A
        _emit   0x00
        call    FUN_006f89f0
        test    eax, eax
        jnz     l_have_list
        push    0x8aaa20
        _emit   0xFF
        _emit   0x15
        _emit   0x00
        _emit   0xB1
        _emit   0x76
        _emit   0x00
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret

    l_have_list:
        push    edi
        call    FUN_006f89f0
        mov     edi, [eax + 0x3c]
        mov     ecx, edi
        call    FUN_006f7700
        cmp     eax, esi
        mov     [ebp - 4], eax
        jnz     l_have_id
        mov     ecx, edi
        call    FUN_006f8430
        test    eax, eax
        jle     l_leave
    l_loop:
        lea     ecx, [ebp - 4]
        push    ecx
        push    esi
        mov     ecx, edi
        call    FUN_006f7970
        test    al, al
        jnz     l_call_ffa70
        push    esi
        push    0x7a0f00
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      l_next
        int     3
        jmp     l_next
    l_call_ffa70:
        mov     edx, [ebp - 4]
        push    edx
        call    FUN_006ffa70
    l_next:
        mov     ecx, edi
        inc     esi
        call    FUN_006f8430
        cmp     esi, eax
        jl      l_loop
        push    0x8aaa20
        _emit   0xFF
        _emit   0x15
        _emit   0x00
        _emit   0xB1
        _emit   0x76
        _emit   0x00
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret

    l_have_id:
        push    eax
        call    FUN_006ffa70
    l_leave:
        push    0x8aaa20
        _emit   0xFF
        _emit   0x15
        _emit   0x00
        _emit   0xB1
        _emit   0x76
        _emit   0x00
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
