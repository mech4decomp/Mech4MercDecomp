/*
 * FUN_004D2A90 (25 B) — Call FUN_00414970([this+0x10]), then if
 * [this+0x14] != 0, jmp FUN_00414970([this+0x14]).
 *
 * __fastcall (ECX = this), RET (no stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00414970(void);

__declspec(naked) void __fastcall FUN_004d2a90(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x10]
        call    FUN_00414970
        mov     ecx, dword ptr [esi + 0x14]
        test    ecx, ecx
        pop     esi
        jz      l_skip
        jmp     FUN_00414970
    l_skip:
        ret
    }
}
