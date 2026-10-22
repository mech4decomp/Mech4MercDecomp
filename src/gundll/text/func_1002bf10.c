/*
 * FUN_1002bf10 (66 B) — __stdcall, RET 0xC.
 * If param_1 == 0, call FUN_10001d60 on param_3 dwords (stride 8) of param_2+4,
 * then call FUN_10001d60(param_2). Returns 0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_1002bf10(void)
{
    __asm {
        mov     al, byte ptr [esp + 0x4]
        test    al, al
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    edi
        jnz     L42
        mov     edi, dword ptr [esp + 0x14]
        test    edi, edi
        jbe     L42
        push    esi
        lea     esi, [ebx + 0x4]
        /* __emit: lea ebx,[ebx+0] alignment nop; MSVC6 drops the 00 disp byte */
        __emit  0x8D
        __emit  0x9B
        __emit  0x00
        __emit  0x00
        __emit  0x00
        __emit  0x00
    L30:
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
        add     esi, 0x8
        dec     edi
        jnz     L30
        pop     esi
    L42:
        push    ebx
        call    FUN_10001d60
        add     esp, 0x4
        pop     edi
        xor     eax, eax
        pop     ebx
        ret     0xC
    }
}
