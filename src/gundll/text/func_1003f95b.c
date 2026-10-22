/*
 * FUN_1003f95b (290 B) — __cdecl.
 * Config field registration helper: calls FUN_1004388f repeatedly for
 * each struct field (offsets 0xc..0x2f), ORs results, calls
 * FUN_1003fa7d. Reads global word 0x100756e8.
 *
 * CFLAGS: /O1
 */

extern unsigned short g_100756e8;  /* DAT_100756e8 */
extern void __cdecl FUN_1004388f(void);
extern void __cdecl FUN_1003fa7d(void);

__declspec(naked) void func_1003f95b(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        movzx   edi, word ptr [g_100756e8]
        test    esi, esi
        jnz     L_f974
        or      eax, 0xffffffff
        jmp     L_fa7a
    L_f974:
        lea     eax, [esi + 0xc]
        push    ebx
        push    eax
        push    0x15
        push    edi
        push    1
        call    FUN_1004388f
        mov     ebx, eax
        lea     eax, [esi + 0x10]
        push    eax
        push    0x14
        push    edi
        push    1
        call    FUN_1004388f
        or      ebx, eax
        lea     eax, [esi + 0x14]
        push    eax
        push    0x16
        push    edi
        push    1
        call    FUN_1004388f
        or      ebx, eax
        lea     eax, [esi + 0x18]
        push    eax
        push    0x17
        push    edi
        push    1
        call    FUN_1004388f
        add     esp, 0x40
        or      ebx, eax
        lea     eax, [esi + 0x1c]
        push    eax
        push    0x18
        push    edi
        push    1
        call    FUN_1004388f
        push    dword ptr [esi + 0x1c]
        or      ebx, eax
        call    FUN_1003fa7d
        lea     eax, [esi + 0x20]
        push    eax
        push    0x50
        push    edi
        push    1
        call    FUN_1004388f
        or      ebx, eax
        lea     eax, [esi + 0x24]
        push    eax
        push    0x51
        push    edi
        push    1
        call    FUN_1004388f
        or      ebx, eax
        lea     eax, [esi + 0x28]
        push    eax
        push    0x1a
        push    edi
        push    0
        call    FUN_1004388f
        add     esp, 0x44
        or      ebx, eax
        lea     eax, [esi + 0x29]
        push    eax
        push    0x19
        push    edi
        push    0
        call    FUN_1004388f
        or      ebx, eax
        lea     eax, [esi + 0x2a]
        push    eax
        push    0x54
        push    edi
        push    0
        call    FUN_1004388f
        or      ebx, eax
        lea     eax, [esi + 0x2b]
        push    eax
        push    0x55
        push    edi
        push    0
        call    FUN_1004388f
        or      ebx, eax
        lea     eax, [esi + 0x2c]
        push    eax
        push    0x56
        push    edi
        push    0
        call    FUN_1004388f
        add     esp, 0x40
        or      ebx, eax
        lea     eax, [esi + 0x2d]
        push    eax
        push    0x57
        push    edi
        push    0
        call    FUN_1004388f
        or      ebx, eax
        lea     eax, [esi + 0x2e]
        push    eax
        push    0x52
        push    edi
        push    0
        call    FUN_1004388f
        add     esi, 0x2f
        or      ebx, eax
        push    esi
        push    0x53
        push    edi
        push    0
        call    FUN_1004388f
        add     esp, 0x30
        or      eax, ebx
        pop     ebx
    L_fa7a:
        pop     edi
        pop     esi
        ret
    }
}
