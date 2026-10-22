/*
 * FUN_006f0930 (371 B) — Dialog list-population helper.
 *
 * Sends GetDlgItem/SendMessageA (via fn-ptr globals 0x76b5a4/0x76b560)
 * to query and update list controls, iterates a string table
 * (0x848c7c) comparing entries with strncmp (IAT 0x76b2e0), and
 * records matched indices into 0x848c88.
 *
 * __cdecl, 1 arg (HWND), returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0072d830(void);

extern void *g_76b5a4;   /* GetDlgItem fn ptr */
extern void *g_76b560;   /* SendMessageA fn ptr */
extern void *g_76b2e0;   /* strncmp IAT */

extern int g_848c84;
extern int g_7dd268;
extern int g_848c7c;
extern int g_848c80;
extern int g_841768;
extern int g_848c88;

__declspec(naked) void __cdecl FUN_006f0930(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [g_76b5a4]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        push    edi
        xor     edi, edi
        push    edi
        push    edi
        push    0x14B
        push    0x428
        push    esi
        call    ebx
        mov     ebp, dword ptr [g_76b560]
        push    eax
        call    ebp
        push    edi
        push    edi
        push    0x147
        push    0x427
        push    esi
        call    ebx
        push    eax
        call    ebp
        cmp     eax, edi
        jnz     L6F0996
        push    edi
        push    1
        push    0x14E
        push    0x427
        push    esi
        call    ebx
        push    eax
        call    ebp
        push    edi
        push    edi
        push    0x147
        push    0x427
        push    esi
        call    ebx
        push    eax
        call    ebp
L6F0996:
        mov     ecx, dword ptr [g_848c84]
        mov     edx, dword ptr [ecx + eax*4]
        mov     eax, dword ptr [g_7dd268]
        cmp     dword ptr [eax + 0x409A0], edi
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x1C], edi
        jle     L6F0A87
L6F09BC:
        mov     ecx, dword ptr [g_848c7c]
        mov     edx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ecx + edx*4]
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        mov     eax, dword ptr [g_848c7c]
        not     ecx
        dec     ecx
        push    ecx
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [eax + ecx*4]
        push    eax
        push    edx
        call    dword ptr [g_76b2e0]
        add     esp, 0xC
        test    eax, eax
        jnz     L6F0A6A
        mov     ecx, dword ptr [g_848c80]
        mov     edx, dword ptr [esp + 0x1C]
        cmp     dword ptr [ecx + edx*4], 0
        jz      L6F0A16
        mov     eax, dword ptr [g_841768]
        push    0x692
        push    eax
        call    FUN_0072d830
        push    eax
        push    0
        jmp     L6F0A3E
L6F0A16:
        mov     edx, dword ptr [g_848c7c]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edi, dword ptr [edx + ecx*4]
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        repne   scasb
        mov     eax, dword ptr [esp + 0x1C]
        mov     edx, dword ptr [edx + eax*4]
        not     ecx
        dec     ecx
        lea     eax, [ecx + edx*1 + 1]
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
L6F0A3E:
        push    0x14A
        push    0x428
        push    esi
        call    ebx
        push    eax
        call    ebp
        mov     edx, dword ptr [esp + 0x1C]
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [g_848c88]
        sub     edx, edi
        mov     dword ptr [ecx + eax*4], edx
        inc     eax
        mov     dword ptr [esp + 0x14], eax
L6F0A6A:
        mov     eax, dword ptr [esp + 0x1C]
        mov     edx, dword ptr [g_7dd268]
        mov     ecx, dword ptr [edx + 0x409A0]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x1C], eax
        jl      L6F09BC
L6F0A87:
        push    0
        push    0
        push    0x14E
        push    0x428
        push    esi
        call    ebx
        push    eax
        call    ebp
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret
    }
}
