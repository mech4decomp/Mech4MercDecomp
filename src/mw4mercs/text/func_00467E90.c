/*
 * FUN_00467E90 (23 B) — __thiscall (RET 0x8). Stores two args into the
 * object at offsets 0x90/0x94.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00467E90(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [ecx + 0x90], eax
        mov     dword ptr [ecx + 0x94], edx
        ret     8
    }
}
