/*
 * FUN_0041db70 (8 B) — __fastcall virtual tail-call thunk. Jumps to the
 * virtual method at vtable+0x10 of the child object at [ECX+0x34].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041db70(void)
{
    __asm {
        mov     ecx, dword ptr [ecx+0x34]
        mov     eax, dword ptr [ecx]
        jmp     dword ptr [eax+0x10]
    }
}
