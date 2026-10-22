/*
 * FUN_0070796a (extent 0x70796a-0x707a62) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b220;
extern int    g_00858afc;
extern int    g_00858b00;
extern int    g_00858b04;
extern int    g_00858b28;
extern int    g_00858b2c;
extern int    g_00858b30;
extern int    g_00858b34;
extern int    g_00858b40;
extern int    g_00858b44;
extern int    g_00858b50;
extern int    g_00858b54;
extern int    g_00858b60;
extern int    g_00858b68;
extern int    g_00858b6c;
extern int    g_00858b70;
extern int    g_00858b74;
extern int    g_00858b78;
extern int    g_00858b7c;
extern int    g_00858b80;
extern int    g_00858b84;
extern int    g_00858b88;
extern int    g_00858b8c;
extern int    g_00859b48;
extern int    g_00859b4c;
extern int    g_00859b50;
extern int    g_00859b54;
extern void __cdecl FUN_00707f50(void);

__declspec(naked) void FUN_0070796a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0x858b38
        call    dword ptr [g_0076b220]
        call    FUN_00707f50
        mov    dword ptr [g_00858b30], eax
        mov    dword ptr [g_00858b34], edx
        mov    dword ptr [g_00859b48], eax
        mov    dword ptr [g_00859b4c], edx
        mov    ecx, dword ptr [g_00859b48]
        mov    esi, dword ptr [g_00859b4c]
        mov    dword ptr [g_00859b50], ecx
        mov    dword ptr [g_00859b54], esi
        mov    ecx, dword ptr [g_00859b50]
        mov    esi, dword ptr [g_00859b54]
        mov    dword ptr [g_00858b50], ecx
        mov    ecx, 0
        add    eax, 1
        adc    edx, ecx
        mov    dword ptr [g_00858b54], esi
        mov    dword ptr [g_00858b04], 0
        mov    dword ptr [g_00858b40], eax
        mov    dword ptr [g_00858b44], edx
        mov    dword ptr [g_00858b80], ecx
        mov    dword ptr [g_00858b84], ecx
        mov    dword ptr [g_00858b78], ecx
        mov    dword ptr [g_00858b7c], ecx
        mov    dword ptr [g_00858b68], ecx
        mov    dword ptr [g_00858b6c], ecx
        mov    dword ptr [g_00858b70], ecx
        mov    dword ptr [g_00858b74], ecx
        mov    dword ptr [g_00858b88], ecx
        mov    dword ptr [g_00858b8c], ecx
        mov    dword ptr [g_00858afc], ecx
        mov    dword ptr [g_00858b28], ecx
        mov    dword ptr [g_00858b2c], ecx
        mov    dword ptr [g_00858b00], ecx
        mov    dword ptr [g_00858b60], ecx
        pop    esi
        ret    
    }
}
