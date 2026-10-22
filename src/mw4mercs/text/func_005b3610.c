/*
 * FUN_005b3610 (18 B) — __thiscall, RET 8.
 *
 * Initializes a small object: stores a byte flag at [EAX] and a dword
 * at [EAX+4] from two stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005b3610(void *param1, void *param2)
{
    __asm {
        mov     dl, byte ptr [esp + 0x8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [eax + 0x4], ecx
        mov     byte ptr [eax], dl
        ret     8
    }
}
