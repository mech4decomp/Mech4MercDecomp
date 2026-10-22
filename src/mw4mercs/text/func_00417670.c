/*
 * FUN_00417670 (36 B) — __thiscall container/iterator node copy-constructor:
 * calls FUN_00415c10(param_1->+0x4) then copies +0x10 dword and +0x14 byte
 * from param_1 into this. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415c10(void *p);

__declspec(naked) void FUN_00417670(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0xc]
        mov     eax, dword ptr [edi+0x4]
        mov     esi, ecx
        push    eax
        call    FUN_00415c10
        mov     ecx, dword ptr [edi+0x10]
        mov     dl, byte ptr [edi+0x14]
        pop     edi
        mov     dword ptr [esi+0x10], ecx
        mov     byte ptr [esi+0x14], dl
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
