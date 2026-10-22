/*
 * FUN_005b38b0 (24 B) — __thiscall, RET 4.
 *
 * Initializes an object: zeroes [EAX], [EAX+4], [EAX+8] and stores a
 * byte flag at [EAX+8] from the first byte of the stack param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005b38b0(void *param1)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        mov     dl, byte ptr [edx]
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     byte ptr [eax + 0x8], dl
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], ecx
        ret     4
    }
}
