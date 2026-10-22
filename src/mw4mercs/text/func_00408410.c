/*
 * FUN_00408410 (19 B) — __thiscall: initializes a list node from ECX.
 * Reads the head pointer, zeroes fields, and links the node into itself.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00408410(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        mov     dword ptr [eax + 0x4], 0
        mov     dword ptr [eax + 0x8], eax
        mov     byte ptr [eax], 0
        mov     dword ptr [eax + 0xc], eax
        ret
    }
}
