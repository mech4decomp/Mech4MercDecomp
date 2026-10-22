/*
 * FUN_006a35d0 (48 B) - Destructor-style thiscall that tears down three
 * sub-objects (this+0x1c, this+0xc, this) via FUN_006a22e0, then frees
 * `this` via FUN_004084e0 if the low flag bit is set.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: flags).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a22e0(void);
extern void __cdecl FUN_004084e0(void *param);

__declspec(naked) void __stdcall FUN_006a35d0(void *param)
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
        add     esp, 0x4
L_done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
