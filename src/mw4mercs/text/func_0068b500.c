/*
 * FUN_0068b500 (15 B) — __thiscall. Returns *this + param*0xc
 * (element pointer arithmetic into a 12-byte-strided array).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0068b500(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        mov     ecx, dword ptr [ecx]
        lea     eax, [eax+eax*2]
        lea     eax, [ecx+eax*4]
        ret     4
    }
}
