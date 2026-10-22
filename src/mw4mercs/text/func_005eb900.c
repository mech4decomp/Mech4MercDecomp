/*
 * FUN_005EB900 (238 B) — __cdecl, no args. One-time global init:
 * allocates a Decal object (FUN_00501a20), lazily builds a
 * "Stuff::SortedChainOf" chain (FUN_00415d70), and initializes a
 * final object (FUN_00416990) storing its vtable.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void *__cdecl FUN_004084c0(int size, void *param);
extern void *__cdecl FUN_00501a20(void);
extern void *__cdecl FUN_00415d70(void);
extern void *__cdecl FUN_00416110(void);
extern void *__cdecl FUN_00416990(void);

extern int DAT_007dc8cc;
extern int DAT_007dc690;
extern int DAT_007f2588;
extern int DAT_007f2594;
extern int DAT_007b8810;
extern int DAT_007b8c14;
extern int DAT_007f2590;
extern int DAT_007f258c;

__declspec(naked) void FUN_005eb900(void)
{
    __asm {
        push    0xa4
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_alloc_fail
        mov     ecx, dword ptr [DAT_007dc8cc]
        mov     edx, dword ptr [DAT_007dc690]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0
        push    0x501eb0
        push    ecx
        push    0x501b70
        push    0x5eba40
        push    0
        push    0
        push    edx
        push    0x789a28
        push    0x469
        mov     ecx, eax
        call    FUN_00501a20
        mov     dword ptr [DAT_007f2588], eax
        jmp     l_after_alloc
    l_alloc_fail:
        mov     dword ptr [DAT_007f2588], 0
    l_after_alloc:
        mov     eax, dword ptr [DAT_007f2594]
        mov     ecx, eax
        inc     eax
        test    ecx, ecx
        push    esi
        mov     dword ptr [DAT_007f2594], eax
        jnz     l_skip_chain
        mov     edx, dword ptr [DAT_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov     esi, eax
        add     esp, 8
        test    esi, esi
        jz      l_chain_fail
        mov     eax, dword ptr [DAT_007b8c14]
        push    eax
        push    0x76ce98
        push    0x64
        push    0x64
        push    0x14
        mov     ecx, esi
        call    FUN_00415d70
        mov     dword ptr [DAT_007f2590], esi
        jmp     l_skip_chain
    l_chain_fail:
        mov     dword ptr [DAT_007f2590], 0
    l_skip_chain:
        mov     ecx, dword ptr [DAT_007f2590]
        call    FUN_00416110
        mov     esi, eax
        test    esi, esi
        jz      l_final_fail
        push    0
        push    0
        mov     ecx, esi
        call    FUN_00416990
        mov     dword ptr [esi], 0x7899fc
        mov     dword ptr [DAT_007f258c], esi
        pop     esi
        ret
    l_final_fail:
        mov     dword ptr [DAT_007f258c], 0
        pop     esi
        ret
    }
}
