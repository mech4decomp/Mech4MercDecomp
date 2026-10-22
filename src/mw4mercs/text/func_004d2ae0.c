/*
 * FUN_004D2AE0 (25 B) — Call FUN_00414A30([this+0x10]), then if
 * [this+0x14] != 0, jmp FUN_00414A30([this+0x14]).
 *
 * __fastcall (ECX = this), RET (no stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00414a30(void);

__declspec(naked) void __fastcall FUN_004d2ae0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x10]
        call    FUN_00414a30
        mov     ecx, dword ptr [esi + 0x14]
        test    ecx, ecx
        pop     esi
        jz      l_skip
        jmp     FUN_00414a30
    l_skip:
        ret
    }
}
