/*
 * FUN_004ADF40 (45 B) — calls FUN_004addb0, then virtual method at vtable+0x24,
 * then virtual method at vtable+0x24 on the returned object.
 *
 * __thiscall (ECX = this), RET 0x4 (1 stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004addb0(int this, int param1);

__declspec(naked) void __fastcall FUN_004adf40(int this, int param1)
{
    __asm {
        push    esi
        push    edi
        mov     edi, [esp + 0x0c]
        mov     esi, ecx
        push    edi
        call    FUN_004addb0
        mov     eax, [edi]
        push    0x4
        lea     ecx, [esi + 0x10]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x24]
        mov     edx, [eax]
        push    0x4
        add     esi, 0x0c
        push    esi
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        pop     edi
        pop     esi
        ret     0x4
    }
}
