/*
 * FUN_004619C0 (23 B) — __thiscall (RET 0x8). Stores two args into the
 * object at offsets 0xa0/0xa4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004619C0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [ecx + 0xa0], eax
        mov     dword ptr [ecx + 0xa4], edx
        ret     8
    }
}
