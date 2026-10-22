/*
 * FUN_004AC640 (65 B) — loop: calls virtual method at vtable+0x24 for each index
 * from 0 to field_0xa0-1, then zeroes fields 0xa0 and 0xa4, calls FUN_00494960.
 *
 * __fastcall (ECX = this), RET (no stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00494960(void);

__declspec(naked) void __fastcall FUN_004ac640(int this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, [esi + 0xa0]
        push    edi
        xor     edi, edi
        test    eax, eax
        jle     l_clear
    l_loop:
        mov     eax, [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     eax, [esi + 0xa0]
        inc     edi
        cmp     edi, eax
        jl      l_loop
    l_clear:
        mov     ecx, esi
        mov     dword ptr [esi + 0xa0], 0x0
        mov     dword ptr [esi + 0xa4], 0x0
        call    FUN_00494960
        pop     edi
        pop     esi
        ret
    }
}
