/*
 * FUN_006f0150 (288 B) — Dialog handler: reads values from dialog items
 * (0x4c5/0x4c6), clamps/sets a control value, sends messages to a control,
 * and fills a global 0x18-dword table with 0xffffffff.
 *
 * __cdecl, RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *(__stdcall *g_0076b5a4)(void *, int);             /* GetDlgItem IAT */
extern int (__stdcall *g_0076b560)(void *, unsigned int, unsigned int, int); /* SendMessageA IAT */
extern unsigned int g_00848c90;                                /* global result */
extern void __stdcall FUN_00512510(int, int, void *);

__declspec(naked) void FUN_006f0150(void)
{
    __asm {
        sub     esp, 0x20
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x30]
        push    edi
        mov     edi, dword ptr [g_0076b5a4]
        push    0x0
        push    0x0
        push    0x147
        push    0x4c5
        push    esi
        call    edi
        mov     ebx, dword ptr [g_0076b560]
        push    eax
        call    ebx
        push    0x0
        push    0x0
        push    0x147
        push    0x4c6
        push    esi
        mov     ebp, eax
        call    edi
        push    eax
        call    ebx
        cmp     ebp, eax
        jle     L_after_set
        push    0x0
        push    eax
        push    0x14e
        push    0x4c5
        push    esi
        mov     ebp, eax
        call    edi
        push    eax
        call    ebx
L_after_set:
        push    0x0
        push    0x0
        push    0x147
        lea     eax, [ebp + ebp*4 + 0xf]
        mov     dword ptr [esp + 0x28], eax
        push    0x4c4
        lea     ecx, [esp + 0x24]
        lea     edx, [esp + 0x28]
        lea     eax, [esp + 0x2c]
        push    esi
        mov     dword ptr [esp + 0x28], 0x30
        mov     dword ptr [esp + 0x2c], 0x2
        mov     dword ptr [esp + 0x34], ecx
        mov     dword ptr [esp + 0x3c], edx
        mov     dword ptr [esp + 0x40], eax
        call    edi
        push    eax
        call    ebx
        push    0x0
        push    0x0
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
        jnz     L_else
        mov     dword ptr [esp + 0x34], 0x0
L_loop:
        lea     edx, [esp + 0x20]
        push    edx
        push    0x4
        lea     ecx, [esp + 0x3c]
        push    0x0
        mov     dword ptr [esp + 0x30], ecx
        call    FUN_00512510
        mov     eax, dword ptr [esp + 0x34]
        inc     eax
        cmp     eax, 0x8
        mov     dword ptr [esp + 0x34], eax
        jl      L_loop
        mov     dword ptr [g_00848c90], ebp
        jmp     L_end
L_else:
        lea     ecx, [esp + 0x20]
        push    ecx
        push    0x4
        lea     eax, [esp + 0x18]
        push    0x0
        mov     dword ptr [esp + 0x30], eax
        call    FUN_00512510
L_end:
        mov     ecx, 0x18
        or      eax, 0xffffffff
        mov     edi, 0x842b10
        rep stosd
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret
    }
}
