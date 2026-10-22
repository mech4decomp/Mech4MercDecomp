/*
 * FUN_004152b0 (16 B) — archive/database registered-class subsystem:
 * __thiscall list-link helper. Sets arg[0xc] = this[8] (next), then
 * this[8] = arg (prepend to sibling list). this=ECX, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_004152b0(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x8]
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [eax + 0xc], edx
        mov     dword ptr [ecx + 0x8], eax
        ret     4
    }
}
