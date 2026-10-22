/*
 * FUN_006430b0 (43 B) — __thiscall setter.
 *
 * Stores 4 dwords into this+0x90/0x94/0x98/0x9c from the 4 stack args.
 * RET 0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006430b0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [ecx + 0x90], eax
        mov     eax, dword ptr [esp + 0x8]
        mov     dword ptr [ecx + 0x94], edx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx + 0x98], eax
        mov     dword ptr [ecx + 0x9c], edx
        ret     0x10
    }
}
