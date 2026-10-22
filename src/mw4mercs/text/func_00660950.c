/*
 * FUN_00660950 (76 B) — __thiscall (ECX = this), RET 0x4 destructor.
 *
 * Calls FUN_006a22e0() on 5 sub-objects at [this+0x24+{0x30,0x28,0x1c,0xc}]
 * and [this+0x24], then FUN_00661e50(this). If (arg & 1) frees this via
 * FUN_004084e0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a22e0(void);
extern void __cdecl FUN_00661e50(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_00660950(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        lea     esi, [edi + 0x24]
        lea     ecx, [esi + 0x30]
        call    FUN_006a22e0
        lea     ecx, [esi + 0x28]
        call    FUN_006a22e0
        lea     ecx, [esi + 0x1c]
        call    FUN_006a22e0
        lea     ecx, [esi + 0xc]
        call    FUN_006a22e0
        mov     ecx, esi
        call    FUN_006a22e0
        mov     ecx, edi
        call    FUN_00661e50
        test    byte ptr [esp + 0xc], 0x1
        jz      L_95
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_95:
        mov     eax, edi
        pop     edi
        pop     esi
        ret     0x4
    }
}
