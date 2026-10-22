/*
 * FUN_00696c10 (21 B) — __thiscall HUD element ctor helper:
 * copies a byte from param1 and a dword from param2 into the object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00696c10(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp+4]
        mov     dl, byte ptr [ecx]
        mov     ecx, dword ptr [esp+8]
        mov     byte ptr [eax], dl
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        ret     8
    }
}
