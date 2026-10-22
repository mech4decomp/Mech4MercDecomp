/*
 * FUN_0055f5b0 (437 B) — Particle spawn/insert (__thiscall).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_007b220c;
extern float DAT_007dddb4;
extern float DAT_0076c5b0;
extern int DAT_007dddbc;
extern void __cdecl FUN_0055f6e2(void);
extern void *__cdecl FUN_100408434(int size);
extern int DAT_007dddc0;
extern void *__cdecl FUN_100408395(int size);
extern void __cdecl FUN_00562adf(void);
extern void __cdecl FUN_00562080(void);
extern void __cdecl FUN_10040834f(void *p);

__declspec(naked) void FUN_0055f5b0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, [esp + 0x14]
        fld     dword ptr [esi]
        push    edi
        fabs
        fld     dword ptr [DAT_007b220c]
        mov     ebx, ecx
        fcompp
        fnstsw  ax
        test    ah, 1
        jz      l_ret_early

        fld     dword ptr [esi + 4]
        fabs
        fld     dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 1
        jz      l_ret_early

        fld     dword ptr [DAT_007dddb4]
        mov     edi, [esp + 0x1c]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     l_skip_alpha

        mov     ebp, dword ptr [DAT_007dddbc]
        mov     eax, edi
        shr     eax, 0x18
        sub     eax, ebp
        and     edi, 0xffffff
        test    eax, eax
        jge     l_alpha_clamp_ge
        xor     eax, eax
        jmp     l_alpha_clamp_done
    l_alpha_clamp_ge:
        cmp     eax, 0xff
        jle     l_alpha_clamp_done
        mov     eax, 0xff
    l_alpha_clamp_done:
        shl     eax, 0x18
        or      edi, eax

    l_skip_alpha:
        mov     eax, [esp + 0x24]
        test    al, al
        jz      l_alloc_new

        mov     ecx, [esp + 0x14]
        push    eax
        mov     eax, [esp + 0x24]
        push    eax
        push    edi
        push    esi
        push    ecx
        mov     ecx, ebx
        call    FUN_0055f6e2
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x14

    l_alloc_new:
        push    0x24
        call    FUN_100408434
        add     esp, 4
        test    eax, eax
        jz      l_alloc_fail

        mov     ecx, [esp + 0x14]
        mov     edx, [ecx]
        mov     [eax], edx
        mov     edx, [ecx + 4]
        mov     ecx, [ecx + 8]
        mov     [eax + 4], edx
        mov     edx, [esi]
        mov     [eax + 8], ecx
        mov     ecx, [esi + 4]
        mov     [eax + 0xc], edx
        mov     edx, [esi + 8]
        mov     [eax + 0x10], ecx
        mov     ecx, [esp + 0x20]
        mov     [eax + 0x20], ebx
        mov     [eax + 0x14], edx
        mov     [eax + 0x18], edi
        mov     [eax + 0x1c], ecx
        jmp     l_alloc_done
    l_alloc_fail:
        xor     eax, eax
    l_alloc_done:
        mov     edi, dword ptr [DAT_007dddc0]
        mov     [esp + 0x1c], eax
        mov     esi, [edi + 4]
        cmp     esi, [edi + 8]
        mov     [esp + 0x18], edi
        jz      l_grow

        test    esi, esi
        jz      l_store_skip
        mov     [esi], eax
    l_store_skip:
        add     esi, 4
        mov     [edi + 4], esi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x14

    l_grow:
        mov     ebx, [edi]
        mov     eax, esi
        sub     eax, ebx
        sar     eax, 2
        cmp     eax, 1
        mov     dword ptr [esp + 0x14], 1
        mov     [esp + 0x20], eax
        lea     ecx, [esp + 0x14]
        jc      l_use_one
        lea     ecx, [esp + 0x20]
    l_use_one:
        mov     ecx, [ecx]
        add     ecx, eax
        mov     [esp + 0x14], ecx
        jz      l_alloc_zero
        lea     edx, [ecx * 4]
        push    edx
        call    FUN_100408395
        add     esp, 4
        mov     ebp, eax
        jmp     l_alloc_done2
    l_alloc_zero:
        xor     ebp, ebp
    l_alloc_done2:
        mov     eax, [esp + 0x1c]
        push    eax
        push    ebp
        push    esi
        push    ebx
        call    FUN_00562adf
        add     esp, 0x10
        test    eax, eax
        jz      l_skip_store2
        mov     ecx, [esp + 0x1c]
        mov     [eax], ecx
    l_skip_store2:
        add     eax, 4
        cmp     esi, esi
        mov     ebx, eax
        jz      l_free_old

        mov     edi, esi
    l_copy_loop:
        push    edi
        push    ebx
        call    FUN_00562080
        add     edi, 4
        add     esp, 8
        add     ebx, 4
        cmp     edi, esi
        jnz     l_copy_loop
        mov     edi, [esp + 0x18]

    l_free_old:
        mov     eax, [edi]
        test    eax, eax
        mov     [esp + 0x20], eax
        jz      l_skip_free
        push    eax
        call    FUN_10040834f
        add     esp, 4
    l_skip_free:
        mov     edx, [esp + 0x14]
        lea     eax, [ebp + edx * 4]
        mov     [edi], ebp
        mov     [edi + 4], ebx
        mov     [edi + 8], eax

    l_ret_early:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x14
    }
}
