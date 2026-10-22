/*
 * FUN_004AE490 (40 B) — init struct: sets fields to 3,0,0 then calls FUN_004ae5a0.
 *
 * __thiscall (ECX = this), RET 0x8 (2 stack params).
 * Returns this pointer in EAX.
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004ae5a0(int param1, int param2);

__declspec(naked) void *__fastcall FUN_004ae490(int this, int param1, int param2)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, [esp + 0x8]
        xor     eax, eax
        mov     dword ptr [esi], 0x3
        mov     [esi + 0x4], eax
        mov     [esi + 0x8], eax
        mov     eax, [esp + 0x0c]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_004ae5a0
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
