/*
 * FUN_004AC9D0 (52 B) — calls FUN_004ae5a0, FUN_004addd0, then virtual method at vtable+0x20.
 *
 * __thiscall (ECX = this), RET 0x8 (2 stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004ae5a0(int param1, int param2);
extern void __fastcall FUN_004addd0(int this, int param1, int param2);

__declspec(naked) void __fastcall FUN_004ac9d0(int this, int param1, int param2)
{
    __asm {
        push    ebx
        mov     ebx, [esp + 0x0c]
        push    esi
        push    edi
        mov     edi, [esp + 0x10]
        mov     esi, ecx
        push    ebx
        push    edi
        lea     ecx, [esi + 0x4]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea     ecx, [esi + 0x10]
        call    FUN_004addd0
        mov     eax, [edi]
        push    0x1
        add     esi, 0x1c
        push    esi
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        pop     edi
        pop     esi
        pop     ebx
        ret     0x8
    }
}
