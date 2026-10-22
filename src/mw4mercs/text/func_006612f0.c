/*
 * FUN_006612f0 (48 B) — __thiscall (RET 4, one stack param).
 *
 * Calls FUN_006a22e0 on this+0x1c, this+0xc, and this; if (param_1 & 1)
 * frees this via FUN_004084e0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006a22e0(void);
extern void __stdcall FUN_004084e0(void);

__declspec(naked) void __stdcall FUN_006612f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x1c]
        call    FUN_006a22e0
        lea     ecx, [esi + 0xc]
        call    FUN_006a22e0
        mov     ecx, esi
        call    FUN_006a22e0
        test    byte ptr [esp + 0x8], 0x1
        jz      L_done
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
