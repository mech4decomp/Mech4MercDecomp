/*
 * FUN_006f0600 (267 B) — Dialog handler: reads an int from a dialog item,
 * clamps it to [2000000, 500000000], sends messages to a control, and
 * fills a global 0x18-dword table with 0xffffffff.
 *
 * __cdecl, RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__stdcall *g_0076b5a0)(void *, int, int *, int);   /* GetDlgItemInt IAT */
extern void *(__stdcall *g_0076b5a4)(void *, int);             /* GetDlgItem IAT */
extern int (__stdcall *g_0076b560)(void *, unsigned int, unsigned int, int); /* SendMessageA IAT */
extern unsigned int g_007b69a0;                                /* global clamp result */
extern void __stdcall FUN_00512510(int, int, void *);

__declspec(naked) void FUN_006f0600(void)
{
    __asm {
        sub     esp, 0x20
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x2c]
        push    edi
        push    0x0
        push    0x0
        push    0x423
        push    esi
        call    dword ptr [g_0076b5a0]
        cmp     eax, 0x1e8480
        mov     dword ptr [esp + 0x30], eax
        jge     L1
        mov     dword ptr [esp + 0x30], 0x1e8480
        jmp     L2
L1:
        cmp     eax, 0x1dcd6500
        jle     L2
        mov     dword ptr [esp + 0x30], 0x1dcd6500
L2:
        mov     edi, dword ptr [g_0076b5a4]
        push    0x0
        push    0x0
        push    0x147
        push    0x4c4
        lea     eax, [esp + 0x24]
        lea     ecx, [esp + 0x28]
        lea     edx, [esp + 0x40]
        push    esi
        mov     dword ptr [esp + 0x28], 0x30
        mov     dword ptr [esp + 0x2c], 0xd
        mov     dword ptr [esp + 0x30], eax
        mov     dword ptr [esp + 0x38], ecx
        mov     dword ptr [esp + 0x3c], edx
        call    edi
        mov     ebx, dword ptr [g_0076b560]
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
        jnz     L3
        mov     dword ptr [esp + 0xc], 0x0
L4:
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    0x4
        lea     eax, [esp + 0x14]
        push    0x0
        mov     dword ptr [esp + 0x2c], eax
        call    FUN_00512510
        mov     eax, dword ptr [esp + 0xc]
        inc     eax
        cmp     eax, 0x8
        mov     dword ptr [esp + 0xc], eax
        jl      L4
        mov     edx, dword ptr [esp + 0x30]
        mov     dword ptr [g_007b69a0], edx
        jmp     L5
L3:
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    0x4
        lea     eax, [esp + 0x18]
        push    0x0
        mov     dword ptr [esp + 0x2c], eax
        call    FUN_00512510
L5:
        mov     ecx, 0x18
        or      eax, 0xffffffff
        mov     edi, 0x842b10
        rep stosd
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x20
        ret
    }
}
