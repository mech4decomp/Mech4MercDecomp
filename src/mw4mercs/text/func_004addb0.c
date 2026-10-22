/*
 * FUN_004ADDB0 (32 B) — thunk: calls FUN_004add70 then virtual method at vtable+0x24.
 *
 * __thiscall (ECX = this), RET 0x4 (1 stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004add70(int param1);

__declspec(naked) void __fastcall FUN_004addb0(int this, int param1)
{
    __asm {
        push    esi
        push    edi
        mov     edi, [esp + 0x0c]
        mov     esi, ecx
        push    edi
        call    FUN_004add70
        mov     eax, [edi]
        push    0x4
        add     esi, 0x8
        push    esi
        mov     ecx, edi
        call    dword ptr [eax + 0x24]
        pop     edi
        pop     esi
        ret     0x4
    }
}
