/*
 * FUN_004CF0B0 (22 B) — __stdcall: if arg->0x24 is non-null, invoke its
 * virtual method at vtable+0x1c with arg as the object; returns 1.
 *
 * Match: target 100%
 */

__declspec(naked) void FUN_004CF0B0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     eax, dword ptr [eax + 0x24]
        test    eax, eax
        je      L1
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x1c]
L1:
        mov     al, 1
        ret     4
    }
}
