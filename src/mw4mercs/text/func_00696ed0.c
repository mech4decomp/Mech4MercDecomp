/*
 * FUN_00696ed0 (25 B) — __thiscall: if param1==1 set bit 0 of *this,
 * else clear bit 0 of *this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00696ed0(void)
{
    __asm {
        cmp     byte ptr [esp+4], 1
        mov     eax, dword ptr [ecx]
        jnz     clear
        or      eax, 1
        mov     dword ptr [ecx], eax
        ret     4
clear:
        and     eax, 0xfffffffe
        mov     dword ptr [ecx], eax
        ret     4
    }
}
