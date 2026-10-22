/*
 * FUN_00415a90 (58 B) — __fastcall (ECX=this, one stack arg): BST iterator
 * that walks the tree (via FUN_004159a0/FUN_004159e0) up to a count limit.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004159a0(void);
extern void __cdecl FUN_00415a80(void);
extern void __cdecl FUN_004159e0(void);

__declspec(naked) void FUN_00415a90(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        xor     edi, edi
        call    FUN_004159a0
        mov     ecx, esi
        call    FUN_00415a80
        test    eax, eax
        jz      L_zero
        mov     ebx, dword ptr [esp+0x10]
    L_loop:
        cmp     edi, ebx
        jz      L_done
        mov     ecx, esi
        call    FUN_004159e0
        mov     ecx, esi
        inc     edi
        call    FUN_00415a80
        test    eax, eax
        jnz     L_loop
    L_zero:
        xor     eax, eax
    L_done:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
