/*
 * FUN_006f03a0 (307 B) — __cdecl, RET.
 *
 * Dialog-control helper: reads an int via GetDlgItemInt
 * (DAT_0076b5a0), clamps it (0x19..0x960 or 0x19..0x640 depending on
 * DAT_007ddd2c), then queries a listbox via GetDlgItem
 * (DAT_0076b5a4) + SendMessageA (DAT_0076b560), runs a loop calling
 * FUN_00512510, stores into DAT_007b69a4, and fills DAT_00842b10
 * (0x18 dwords) with -1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *DAT_0076b5a0;   /* IAT: GetDlgItemInt */
extern char DAT_007ddd2c;
extern int DAT_0076b5a4;    /* GetDlgItem */
extern int DAT_0076b560;    /* SendMessageA */
extern int DAT_007b69a4;
extern void __cdecl FUN_00512510(int a, int b, void *c);

__declspec(naked) void __cdecl FUN_006f03a0(void)
{
    __asm {
        sub     esp, 0x20
        push    ebx
        mov     ebx, dword ptr [esp + 0x28]
        push    esi
        push    edi
        push    0
        push    0
        push    0x420
        push    ebx
        call    dword ptr [DAT_0076b5a0]
        mov     cl, byte ptr [DAT_007ddd2c]
        test    cl, cl
        mov     dword ptr [esp + 0x30], eax
        jz      L_03e8
        cmp     eax, 0x19
        jge     L_03d7
        mov     dword ptr [esp + 0x30], 0x19
        jmp     L_0406
L_03d7:
        cmp     eax, 0x960
        jle     L_0406
        mov     dword ptr [esp + 0x30], 0x960
        jmp     L_0406
L_03e8:
        cmp     eax, 0x19
        jge     L_03f7
        mov     dword ptr [esp + 0x30], 0x19
        jmp     L_0406
L_03f7:
        cmp     eax, 0x640
        jle     L_0406
        mov     dword ptr [esp + 0x30], 0x640
L_0406:
        mov     esi, dword ptr [DAT_0076b5a4]
        push    0
        push    0
        push    0x147
        push    0x4c4
        lea     eax, [esp + 0x24]
        lea     ecx, [esp + 0x28]
        lea     edx, [esp + 0x40]
        push    ebx
        mov     dword ptr [esp + 0x28], 0x30
        mov     dword ptr [esp + 0x2c], 0xb
        mov     dword ptr [esp + 0x30], eax
        mov     dword ptr [esp + 0x38], ecx
        mov     dword ptr [esp + 0x3c], edx
        call    esi
        mov     edi, dword ptr [DAT_0076b560]
        push    eax
        call    edi
        push    0
        push    0
        push    0x146
        push    0x4c4
        push    ebx
        mov     dword ptr [esp + 0x24], eax
        call    esi
        push    eax
        call    edi
        mov     ecx, dword ptr [esp + 0x10]
        dec     eax
        cmp     ecx, eax
        jnz     L_04a7
        mov     dword ptr [esp + 0xc], 0
L_0477:
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    4
        lea     eax, [esp + 0x14]
        push    0
        mov     dword ptr [esp + 0x2c], eax
        call    FUN_00512510
        mov     eax, dword ptr [esp + 0xc]
        inc     eax
        cmp     eax, 8
        mov     dword ptr [esp + 0xc], eax
        jl      L_0477
        mov     edx, dword ptr [esp + 0x30]
        mov     dword ptr [DAT_007b69a4], edx
        jmp     L_04bd
L_04a7:
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    4
        lea     eax, [esp + 0x18]
        push    0
        mov     dword ptr [esp + 0x2c], eax
        call    FUN_00512510
L_04bd:
        mov     ecx, 0x18
        or      eax, 0xffffffff
        mov     edi, 0x842b10
        rep     stosd
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x20
        ret
    }
}
