/*
 * FUN_004ADDD0 (37 B) — thunk: calls FUN_004add90 then virtual method at vtable+0x20.
 *
 * __thiscall (ECX = this), RET 0x8 (2 stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004add90(int param1, int param2);

__declspec(naked) void __fastcall FUN_004addd0(int this, int param1, int param2)
{
    __asm {
        mov     eax, [esp + 0x8]
        push    esi
        push    edi
        mov     edi, [esp + 0x0c]
        push    eax
        mov     esi, ecx
        push    edi
        call    FUN_004add90
        mov     edx, [edi]
        push    0x4
        add     esi, 0x8
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        pop     edi
        pop     esi
        ret     0x8
    }
}
