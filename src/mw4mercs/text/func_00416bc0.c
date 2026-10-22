/*
 * FUN_00416bc0 (33 B) — __thiscall (ECX=this, 1 stack arg) constructor:
 * calls FUN_00415c10(param1), copies param1->data (param1+0xc) into
 * this+0x10, and installs vtable 0x76d510.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415c10(void);

__declspec(naked) void FUN_00416bc0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0xc]
        mov     esi, ecx
        push    edi
        call    FUN_00415c10
        mov     eax, dword ptr [edi+0xc]
        mov     dword ptr [esi+0x10], eax
        pop     edi
        mov     dword ptr [esi], 0x76d510
        mov     eax, esi
        pop     esi
        ret     4
    }
}
