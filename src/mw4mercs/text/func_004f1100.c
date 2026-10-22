/*
 * FUN_004F1100 (19 B) — Virtual call: calls method at vtable+8 on
 * this->field_24, passing param_1->field_24.
 *
 * __fastcall (ECX = this), RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004f1100(void)
{
    __asm {
        mov     edx, [esp + 4]
        mov     ecx, [ecx + 0x24]
        mov     edx, [edx + 0x24]
        mov     eax, [ecx]
        push    edx
        call    dword ptr [eax + 8]
        ret     4
    }
}
