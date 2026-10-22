/*
 * FUN_0046BEC0 (23 B) — __thiscall (RET 0x8). Stores two args into the
 * object at offsets 0x88/0x8c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0046BEC0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [ecx + 0x88], eax
        mov     dword ptr [ecx + 0x8c], edx
        ret     8
    }
}
