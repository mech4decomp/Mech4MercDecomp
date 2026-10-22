/*
 * FUN_00757410 (37 B) — __thiscall. Zeroes 0x18 dwords at [this+0x10],
 * then calls FUN_00757DE0(this+0x10, this+0xc) after setting
 * *(this+0x10) = 0x60.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00757DE0(void *a, void *b);

__declspec(naked) void FUN_00757410(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        lea     edx, [esi + 0x10]
        xor     eax, eax
        mov     edi, edx
        mov     ecx, 0x18
        rep stosd
        mov     eax, dword ptr [esi + 0xc]
        push    edx
        push    eax
        mov     dword ptr [edx], 0x60
        call    FUN_00757DE0
        pop     edi
        pop     esi
        ret
    }
}
