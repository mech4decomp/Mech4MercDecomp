/*
 * FUN_00417640 (34 B) — __thiscall container/iterator node constructor:
 * calls FUN_00415c10(param_1) then copies fields from param_1 into this
 * (+0x10 dword, +0x14 byte). Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415c10(void *p);

__declspec(naked) void FUN_00417640(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0xc]
        mov     esi, ecx
        push    edi
        call    FUN_00415c10
        mov     eax, dword ptr [edi+0x8]
        mov     cl, byte ptr [esp+0x10]
        mov     dword ptr [esi+0x10], eax
        pop     edi
        mov     byte ptr [esi+0x14], cl
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
