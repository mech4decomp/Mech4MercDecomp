/*
 * FUN_0045DC90 (23 B) — __thiscall (RET 0x8). Stores two args into the
 * object at offsets 0xa8/0xac.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0045DC90(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [ecx + 0xa8], eax
        mov     dword ptr [ecx + 0xac], edx
        ret     8
    }
}
