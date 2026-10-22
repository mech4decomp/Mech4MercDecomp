/*
 * FUN_005d9fe0 (21 B) — __thiscall (ECX = this), RET 8. Copies a byte
 * from param1 into [this], then a dword from param2 into [this].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005d9fe0(void *p1, void *p2)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     dl, byte ptr [ecx]
        mov     ecx, dword ptr [esp + 8]
        mov     byte ptr [eax], dl
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        ret     8
    }
}
