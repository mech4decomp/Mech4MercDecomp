/*
 * FUN_0066BD40 (34 B) — __thiscall initializer.
 *
 * Sets this+0x04..0x10 to -1.0f (0xBF800000), this+0x00 to -1,
 * and this+0x14/+0x15 bytes to 0. RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0066bd40(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, 0xbf800000
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax + 0x10], ecx
        xor     cl, cl
        mov     dword ptr [eax], 0xffffffff
        mov     byte ptr [eax + 0x14], cl
        mov     byte ptr [eax + 0x15], cl
        ret
    }
}
