/*
 * FUN_00603d70 (16 B) — __thiscall accessor. Returns 1 if the flag at +0x1d
 * is clear, else returns the dword at +0x28.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00603d70(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0x1d]
        test    al, al
        mov     eax, 0x1
        jz      loc_603d7f
        mov     eax, dword ptr [ecx + 0x28]
loc_603d7f:
        ret
    }
}
