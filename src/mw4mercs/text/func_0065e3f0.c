/*
 * FUN_0065e3f0 (91 B) — __thiscall state-machine helper. Reads a mode
 * field at [this+4]; if 0 sets BL=1, if 2 (and a global pointer chain
 * XOR-matches a magic) reads a byte flag; then compares against a
 * virtual-ish call result and dispatches to one of two helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005fbd40(void);
extern void __cdecl FUN_005fbd00(void);
extern void __cdecl FUN_005fbd30(void);

extern int g_007dab44;   /* DAT_007dab44 */
extern int g_007dab40;   /* DAT_007dab40 */

__declspec(naked) void FUN_0065e3f0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4]
        push    ebx
        xor     bl, bl
        test    eax, eax
        push    esi
        jnz     L3FF
        mov     bl, 0x1
        jmp     L421
L3FF:
        cmp     eax, 0x2
        jnz     L421
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [eax]
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx + 0x20]
        xor     eax, 0x85739531
        jz      L421
        mov     bl, byte ptr [eax + 0x169]
L421:
        mov     eax, dword ptr [ecx]
        mov     esi, dword ptr [eax + 0x170]
        mov     ecx, esi
        call    FUN_005fbd40
        cmp     bl, al
        jz      L448
        cmp     bl, 0x1
        mov     ecx, esi
        jnz     L443
        call    FUN_005fbd00
        pop     esi
        pop     ebx
        ret
L443:
        call    FUN_005fbd30
L448:
        pop     esi
        pop     ebx
        ret
    }
}
