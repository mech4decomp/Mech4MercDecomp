/*
 * FUN_0074B5B0 (extent 0x74B5B0-0x74B620, 112 B) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern int  g_008b7a2c;
extern int  g_008b7a28;
extern int  g_0087c29c;
extern int  g_008b7ad0;
extern int  g_008b8e30;
extern int  g_0085a248;
extern int  g_0074b280;
extern void __cdecl FUN_0074A5E0(void);
extern void __cdecl FUN_0074B3F0(void);

__declspec(naked) void FUN_0074B5B0(void)
{
    __asm {
        push   ebx
        push   esi
        push   edi
        mov    ecx, 0x28
        xor    eax, eax
        mov    edi, offset g_008b7a2c
        mov    dword ptr [g_008b7a28], 0
        mov    dword ptr [g_0087c29c], 0
        mov    edx, offset g_008b7ad0
        rep stosd
    L_da:
        mov    ebx, 2
    L_df:
        mov    esi, 4
    L_e4:
        xor    eax, eax
        mov    edi, edx
        mov    ecx, 0x1f
        rep stosd
        mov    dword ptr [edx], 0x7c
        add    edx, 0x7c
        dec    esi
        jne    L_e4
        dec    ebx
        jne    L_df
        cmp    edx, offset g_008b8e30
        jl     L_da
        push   eax
        mov    eax, dword ptr [g_0085a248]
        push   offset g_0074b280
        push   eax
        call   FUN_0074A5E0
        call   FUN_0074B3F0
        pop    edi
        pop    esi
        pop    ebx
        ret
    }
}
