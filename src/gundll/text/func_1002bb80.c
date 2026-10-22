/*
 * FUN_1002bb80 (75 B) — __stdcall, RET 0xC.
 * Calls FUN_10001d60 on pairs of dwords from param_2 (param_3 iterations),
 * then once on param_2 itself. Returns 0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_1002bb80(void)
{
    __asm {
        mov     al, byte ptr [esp + 0x4]
        test    al, al
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    edi
        jnz     tail
        mov     edi, dword ptr [esp + 0x14]
        test    edi, edi
        jbe     tail
        push    esi
        mov     esi, ebx
        __emit 0x8D  /* __emit: 7-byte alignment NOP (lea esp,[esp+0] SIB form) not encodable natively */
        __emit 0xA4
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
    loop1:
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_10001d60
        mov     ecx, dword ptr [esi + 0x4]
        push    ecx
        call    FUN_10001d60
        add     esp, 0x8
        add     esi, 0x14
        dec     edi
        jnz     loop1
        pop     esi
    tail:
        push    ebx
        call    FUN_10001d60
        add     esp, 0x4
        pop     edi
        xor     eax, eax
        pop     ebx
        ret     0xc
    }
}
