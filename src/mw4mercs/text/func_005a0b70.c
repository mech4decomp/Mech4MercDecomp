/*
 * FUN_005a0b70 (34 B) — Conditional update function.
 * If param1 != this->field_14, calls FUN_005f2ce0 and returns updated field.
 *
 * __thiscall (ECX = this), RET 8 (two params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f2ce0(int param1, int param2);

__declspec(naked) void __fastcall FUN_005a0b70(int this)
{
    __asm {
        push    esi
        mov     esi, ecx

        mov     eax, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [esp + 8]
        cmp     ecx, eax
        jz      skip_call

        mov     eax, dword ptr [esp + 0x0c]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005f2ce0
        mov     eax, dword ptr [esi + 0x14]

skip_call:
        pop     esi
        ret     8
    }
}
