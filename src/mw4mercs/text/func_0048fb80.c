/*
 * FUN_0048fb80 (21 B) — __thiscall (ECX = this), RET 4.
 * Calls vtable[2] on param with [this+0x10034] as argument.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_0048fb80(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x04]
        mov     eax, dword ptr [eax + 0x10034]
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x08]
        ret     0x04
    }
}
