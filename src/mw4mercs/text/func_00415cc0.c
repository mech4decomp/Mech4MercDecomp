/*
 * FUN_00415cc0 (8 B) — __fastcall (ECX=this): tail-calls virtual method at
 * vtable+0x10 of the object at [this+0x4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00415cc0(void)
{
    __asm {
        mov     ecx, dword ptr [ecx+0x4]
        mov     eax, dword ptr [ecx]
        jmp     dword ptr [eax+0x10]
    }
}
