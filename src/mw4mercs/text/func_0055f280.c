/*
 * FUN_0055f280 (420 B) — Particle system cleanup/reset.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_007b474c;
extern void __cdecl FUN_00713cc8(void);
extern void __cdecl FUN_00713cab(void);
extern void __cdecl FUN_00713ca2(void);
extern void __cdecl FUN_00713c99(void);
extern void __cdecl FUN_00713c90(void);
extern void __cdecl FUN_00713c87(void);
extern void __cdecl FUN_00713c7e(void);
extern void __cdecl FUN_00713c75(void);
extern void __cdecl FUN_00713c6c(void);
extern void __cdecl FUN_00713c63(void);
extern int DAT_007dddc0;
extern void __cdecl FUN_00562a67(void);
extern void __cdecl FUN_00562a9d(void);
extern void __cdecl FUN_00562741(void);
extern void __cdecl FUN_00562b72(void);
extern void __cdecl FUN_00562828(void);
extern void __cdecl FUN_0055f64e(void);
extern void __cdecl FUN_1004083b8(void);
extern void __cdecl FUN_100408388(void);
extern void __cdecl FUN_10040837f(void);
extern int DAT_007ddd88;
extern void __cdecl FUN_10040835c(void);
extern void __cdecl FUN_100408353(void);

__declspec(naked) void FUN_0055f280(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        push    0
        push    6
        mov     dword ptr [DAT_007b474c], 0xffffffff
        call    FUN_00713cc8
        push    1
        push    4
        call    FUN_00713cab
        push    0
        push    5
        call    FUN_00713ca2
        push    0
        push    0xc
        call    FUN_00713c99
        push    0
        push    9
        call    FUN_00713c90
        push    0
        push    0xa
        call    FUN_00713c87
        push    2
        push    0xf
        call    FUN_00713c7e
        push    0
        push    7
        call    FUN_00713c75
        push    0
        push    0x12
        call    FUN_00713c6c
        push    1
        push    0xe
        call    FUN_00713c63
        mov     eax, dword ptr [DAT_007dddc0]
        mov     esi, [eax + 4]
        mov     edi, [eax]
        cmp     edi, esi
        mov     [esp + 8], esi
        jz      l_skip_sort

        mov     ecx, esi
        sub     ecx, edi
        mov     eax, ecx
        sar     eax, 2
        xor     edx, edx
        cmp     eax, 1
        jz      l_count_done
    l_count_loop:
        sar     eax, 1
        inc     edx
        cmp     eax, 1
        jnz     l_count_loop
    l_count_done:
        push    ebx
        and     ecx, 0xfffffffc
        cmp     ecx, 0x40
        push    ebp
        lea     ebp, [edx + edx]
        mov     ebx, esi
        jle     l_sort_tail

    l_sort_outer:
        test    ebp, ebp
        jz      l_sort_fallback
        lea     eax, [ebx - 4]
        push    eax
        mov     eax, ebx
        sub     eax, edi
        sar     eax, 2
        cdq
        sub     eax, edx
        sar     eax, 1
        lea     ecx, [edi + eax * 4]
        push    ecx
        push    edi
        dec     ebp
        call    FUN_00562a67
        mov     edx, [eax]
        push    edx
        push    ebx
        push    edi
        call    FUN_00562a9d
        push    ebp
        push    0
        mov     esi, eax
        push    ebx
        push    esi
        call    FUN_00562741
        mov     ebx, esi
        sub     esi, edi
        and     esi, 0xfffffffc
        add     esp, 0x28
        cmp     esi, 0x40
        mov     esi, [esp + 0x10]
        jg      l_sort_outer
        jmp     l_sort_tail

    l_sort_fallback:
        push    0
        push    ebx
        push    ebx
        push    edi
        call    FUN_00562b72
        add     esp, 0x10

    l_sort_tail:
        push    esi
        push    edi
        call    FUN_00562828
        mov     eax, dword ptr [DAT_007dddc0]
        add     esp, 8
        pop     ebp
        pop     ebx

    l_skip_sort:
        mov     edi, [eax]
        cmp     edi, [eax + 4]
        jz      l_skip_process

    l_process_loop:
        mov     esi, [edi]
        mov     eax, [esi + 0x1c]
        mov     ecx, [esi + 0x18]
        push    0
        push    eax
        push    ecx
        mov     ecx, [esi + 0x20]
        lea     edx, [esi + 0xc]
        push    edx
        push    esi
        call    FUN_0055f64e
        push    esi
        call    FUN_1004083b8
        mov     eax, dword ptr [DAT_007dddc0]
        mov     ecx, [eax + 4]
        mov     dword ptr [edi], 0
        add     edi, 4
        add     esp, 4
        cmp     edi, ecx
        jnz     l_process_loop

    l_skip_process:
        mov     esi, eax
        xor     edi, edi
        cmp     esi, edi
        jz      l_free_container
        mov     eax, [esi]
        cmp     eax, edi
        mov     [esp + 8], eax
        jz      l_free_self
        push    eax
        call    FUN_100408388
        add     esp, 4
    l_free_self:
        push    esi
        call    FUN_10040837f
        add     esp, 4

    l_free_container:
        mov     esi, dword ptr [DAT_007ddd88]
        cmp     esi, edi
        mov     dword ptr [DAT_007dddc0], edi
        jz      l_skip_free2
        mov     eax, [esi]
        cmp     eax, edi
        mov     [esp + 8], eax
        jz      l_free_self2
        push    eax
        call    FUN_10040835c
        add     esp, 4
    l_free_self2:
        push    esi
        call    FUN_100408353
        add     esp, 4
    l_skip_free2:
        mov     dword ptr [DAT_007ddd88], edi
        pop     edi
        pop     esi
        pop     ecx
        ret
    }
}
