/*
 * FUN_10033af0 (27 B) - __fastcall. Calls virtual method at vtable+0x14
 * of this->0x8 with (this->0x8, this->0xc - 0xc), then tail-jumps to
 * FUN_10033ae0(this).
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10033ae0(void);   /* rel32 jmp */

__declspec(naked) void __fastcall FUN_10033af0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     edx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esi + 8]
        mov     ecx, dword ptr [eax]
        sub     edx, 0xc
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     ecx, esi
        pop     esi
        jmp     FUN_10033ae0
    }
}
