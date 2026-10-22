/*
 * FUN_006f0270 (296 B) — __cdecl, RET (no stack args cleaned).
 *
 * Dialog-control helper: queries/sets listbox item counts via
 * GetDlgItem (DAT_0076b5a4) + SendMessageA (DAT_0076b560), runs a
 * loop calling FUN_00512510, stores EBP into DAT_007b6998, and fills
 * DAT_00842b10 (0x18 dwords) with -1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_0076b5a4;   /* GetDlgItem */
extern int DAT_0076b560;   /* SendMessageA */
extern int DAT_007b6998;
extern void __cdecl FUN_00512510(int a, int b, void *c);

__declspec(naked) void __cdecl FUN_006f0270(void)
{
    __asm {
        sub     esp, 0x20
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x30]
        push    edi
        mov     edi, dword ptr [DAT_0076b5a4]
        push    0
        push    0
        push    0x147
        push    0x4c5
        push    esi
        call    edi
        mov     ebx, dword ptr [DAT_0076b560]
        push    eax
        call    ebx
        push    0
        push    0
        push    0x147
        push    0x4c6
        push    esi
        mov     dword ptr [esp + 0x48], eax
        call    edi
        push    eax
        call    ebx
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0x34]
        cmp     eax, ebp
        jle     L_02d2
        push    0
        push    eax
        push    0x14e
        push    0x4c6
        push    esi
        mov     ebp, eax
        call    edi
        push    eax
        call    ebx
L_02d2:
        push    0
        push    0
        push    0x147
        lea     eax, [ebp + ebp*4 + 0x14]
        mov     dword ptr [esp + 0x28], eax
        push    0x4c4
        lea     ecx, [esp + 0x24]
        lea     edx, [esp + 0x28]
        lea     eax, [esp + 0x2c]
        push    esi
        mov     dword ptr [esp + 0x28], 0x30
        mov     dword ptr [esp + 0x2c], 3
        mov     dword ptr [esp + 0x34], ecx
        mov     dword ptr [esp + 0x3c], edx
        mov     dword ptr [esp + 0x40], eax
        call    edi
        push    eax
        call    ebx
        push    0
        push    0
        push    0x146
        push    0x4c4
        push    esi
        mov     dword ptr [esp + 0x24], eax
        call    edi
        push    eax
        call    ebx
        mov     ecx, dword ptr [esp + 0x10]
        dec     eax
        cmp     ecx, eax
        jnz     L_036b
        mov     dword ptr [esp + 0x34], 0
L_033f:
        lea     edx, [esp + 0x20]
        push    edx
        push    4
        lea     ecx, [esp + 0x3c]
        push    0
        mov     dword ptr [esp + 0x30], ecx
        call    FUN_00512510
        mov     eax, dword ptr [esp + 0x34]
        inc     eax
        cmp     eax, 8
        mov     dword ptr [esp + 0x34], eax
        jl      L_033f
        mov     dword ptr [DAT_007b6998], ebp
        jmp     L_0381
L_036b:
        lea     ecx, [esp + 0x20]
        push    ecx
        push    4
        lea     eax, [esp + 0x18]
        push    0
        mov     dword ptr [esp + 0x30], eax
        call    FUN_00512510
L_0381:
        mov     ecx, 0x18
        or      eax, 0xffffffff
        mov     edi, 0x842b10
        rep     stosd
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret
    }
}
