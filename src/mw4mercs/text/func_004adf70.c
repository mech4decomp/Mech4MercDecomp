/*
 * FUN_004ADF70 (50 B) — calls FUN_004addd0, then virtual method at vtable+0x20,
 * then virtual method at vtable+0x20 on the returned object.
 *
 * __thiscall (ECX = this), RET 0x8 (2 stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004addd0(int this, int param1, int param2);

__declspec(naked) void __fastcall FUN_004adf70(int this, int param1, int param2)
{
    __asm {
        mov     eax, [esp + 0x8]
        push    esi
        push    edi
        mov     edi, [esp + 0x0c]
        push    eax
        mov     esi, ecx
        push    edi
        call    FUN_004addd0
        mov     edx, [edi]
        push    0x4
        lea     eax, [esi + 0x10]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, [eax]
        push    0x4
        add     esi, 0x0c
        push    esi
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        pop     edi
        pop     esi
        ret     0x8
    }
}
