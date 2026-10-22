/*
 * FUN_005ba810 (21 B) — __thiscall (ECX = this), RET 8 (two stack params).
 *
 * Copies a byte from param1 into this, then copies a dword from param2
 * into this (overwriting the byte).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005ba810(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     dl, byte ptr [ecx]
        mov     ecx, dword ptr [esp + 0x8]
        mov     byte ptr [eax], dl
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        ret     8
    }
}
