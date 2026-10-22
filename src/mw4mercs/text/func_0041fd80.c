/*
 * FUN_0041fd80 (14 B) — __thiscall. Returns the +0xc field of the +0x4 member
 * if the member is non-null, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041fd80(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4]
        test    eax, eax
        jz      LFD8B
        mov     eax, dword ptr [eax + 0xc]
        ret
LFD8B:
        xor     eax, eax
        ret
    }
}
