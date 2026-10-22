/*
 * FUN_0060D800 (27 B) — __thiscall (ECX = this), RET 0x8, 1 stack param.
 * Virtual call [this->vtable + 0x48](param->[4], param->[8]); returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_0060D800(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        push    esi
        mov     esi, dword ptr [eax + 0x8]
        mov     eax, dword ptr [eax + 0x4]
        push    esi
        push    eax
        call    dword ptr [edx + 0x48]
        mov     eax, 0x1
        pop     esi
        ret     0x8
    }
}
