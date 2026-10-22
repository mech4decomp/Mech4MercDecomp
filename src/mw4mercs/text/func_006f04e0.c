/*
 * FUN_006f04e0 (275 B) — Dialog handler: reads a value from a dialog item
 * (0x4d0), computes (val*5+10)*200000 (or 2000000 if zero), sends messages
 * to a control, and fills a global 0x18-dword table with 0xffffffff.
 *
 * __cdecl, RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *(__stdcall *g_0076b5a4)(void *, int);             /* GetDlgItem IAT */
extern int (__stdcall *g_0076b560)(void *, unsigned int, unsigned int, int); /* SendMessageA IAT */
extern unsigned int g_007b699c;                                /* global result */
extern void __stdcall FUN_00512510(int, int, void *);

__declspec(naked) void FUN_006f04e0(void)
{
    __asm {
        sub     esp, 0x20
        push    ebx
        mov     ebx, dword ptr [g_0076b5a4]
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x34]
        push    0x0
        push    0x0
        push    0x147
        push    0x4d0
        push    edi
        call    ebx
        mov     ebp, dword ptr [g_0076b560]
        push    eax
        call    ebp
        mov     esi, eax
        test    esi, esi
        jnz     L1
        mov     dword ptr [esp + 0x10], 0x1e8480
        jmp     L2
L1:
        lea     eax, [esi + esi*4 + 0xa]
        lea     eax, [eax + eax*4]
        lea     eax, [eax + eax*4]
        lea     eax, [eax + eax*4]
        lea     eax, [eax + eax*4]
        lea     eax, [eax + eax*4]
        shl     eax, 0x6
        mov     dword ptr [esp + 0x10], eax
L2:
        push    0x0
        push    0x0
        push    0x147
        push    0x4c4
        lea     ecx, [esp + 0x28]
        lea     edx, [esp + 0x2c]
        lea     eax, [esp + 0x20]
        push    edi
        mov     dword ptr [esp + 0x2c], 0x30
        mov     dword ptr [esp + 0x30], 0xc
        mov     dword ptr [esp + 0x34], ecx
        mov     dword ptr [esp + 0x3c], edx
        mov     dword ptr [esp + 0x40], eax
        call    ebx
        push    eax
        call    ebp
        push    0x0
        push    0x0
        push    0x146
        push    0x4c4
        push    edi
        mov     dword ptr [esp + 0x28], eax
        call    ebx
        push    eax
        call    ebp
        mov     ecx, dword ptr [esp + 0x14]
        dec     eax
        cmp     ecx, eax
        jnz     L3
        mov     dword ptr [esp + 0x34], 0x0
L4:
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
        jl      L4
        mov     dword ptr [g_007b699c], esi
        jmp     L5
L3:
        lea     ecx, [esp + 0x20]
        push    ecx
        push    0x4
        lea     eax, [esp + 0x1c]
        push    0x0
        mov     dword ptr [esp + 0x30], eax
        call    FUN_00512510
L5:
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
