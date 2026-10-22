/*
 * FUN_00660bb0 (60 B) — __thiscall destructor (RET 0x4).
 *
 * Destroys three sub-objects at [this+0x24+0x1c], [this+0x24+0xc],
 * [this+0x24], then FUN_00661e50(this), and frees this via FUN_004084e0()
 * if (arg & 1). Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a22e0(void);
extern void __cdecl FUN_00661e50(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void *FUN_00660bb0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x24]
        lea     ecx, [edi + 0x1c]
        call    FUN_006a22e0
        lea     ecx, [edi + 0xc]
        call    FUN_006a22e0
        mov     ecx, edi
        call    FUN_006a22e0
        mov     ecx, esi
        call    FUN_00661e50
        test    byte ptr [esp + 0xc], 0x1
        jz      L_skip
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_skip:
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
