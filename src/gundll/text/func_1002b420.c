/*
 * FUN_1002b420 (66 B) — __stdcall, RET 0xC.
 * If param_1 == 0, call FUN_10001d60 on each of param_3 dwords of param_2,
 * then call FUN_10001d60(param_2). Returns 0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_1002b420(void)
{
    __asm {
        mov     al, byte ptr [esp + 0x4]
        test    al, al
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        jnz     L451
        mov     edi, dword ptr [esp + 0x18]
        xor     esi, esi
        test    edi, edi
        jbe     L451
        /* __emit: lea esp,[esp+0] alignment nop; MSVC6 drops the 00 disp byte */
        __emit  0x8D
        __emit  0xA4
        __emit  0x24
        __emit  0x00
        __emit  0x00
        __emit  0x00
        __emit  0x00
    L440:
        mov     eax, dword ptr [ebx + esi*4]
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
        inc     esi
        cmp     esi, edi
        jc      L440
    L451:
        push    ebx
        call    FUN_10001d60
        add     esp, 0x4
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0xC
    }
}
