/*
 * FUN_005b7620 (131 B) — __cdecl. Loads a function pointer from global
 * 0x0076b2ac and calls it with a slot-name string + param; returns the
 * slot index (0..3) on success, -1 on failure (assert via FUN_006fabf0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int FUN_006fabf0(const char *, const char *);

__declspec(naked) int __cdecl FUN_005b7620(int param_1)
{
    

extern int DAT_0076b2ac;
__asm {
push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        push    edi
        mov edi, dword ptr [DAT_0076b2ac]
        push    0x786884
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_7641
        pop     edi
        pop     esi
        pop     ebp
        ret
    L_7641:
        push    0x786874
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_7659
        pop     edi
        mov     eax, 0x1
        pop     esi
        pop     ebp
        ret
    L_7659:
        push    0x786868
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_7671
        pop     edi
        mov     eax, 0x2
        pop     esi
        pop     ebp
        ret
    L_7671:
        push    0x78685c
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_7689
        pop     edi
        mov     eax, 0x3
        pop     esi
        pop     ebp
        ret
    L_7689:
        push    esi
        push    0x786890
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_769c
        int     3
    L_769c:
        pop     edi
        or      eax, 0xffffffff
        pop     esi
        pop     ebp
        ret
    }


}
