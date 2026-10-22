/*
 * FUN_0060D570 (30 B) — __thiscall (ECX = this), RET 0x8, 1 stack param.
 * Virtual call [this->vtable + 0x40](param->[4], param->[8], param->[0xc]);
 * returns *(param->[0xc]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_0060D570(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        push    esi
        mov     esi, dword ptr [eax + 0xc]
        push    edi
        mov     edi, dword ptr [eax + 0x8]
        mov     eax, dword ptr [eax + 0x4]
        push    esi
        push    edi
        push    eax
        call    dword ptr [edx + 0x40]
        mov     eax, dword ptr [esi]
        pop     edi
        pop     esi
        ret     0x8
    }
}
