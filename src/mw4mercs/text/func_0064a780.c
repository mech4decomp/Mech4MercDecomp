/*
 * FUN_0064a780 (extent 0x64a780-0x64a834) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_007b5a38;
extern int    g_008058e0;
extern int    g_00805918;
extern char   g_00805958;
extern char   g_0080d969;
extern char   g_0080d96a;
extern int    g_0080d998;
extern void __cdecl FUN_0064a5d0(void);
extern void __cdecl FUN_0064a620(void);
extern void __cdecl FUN_0064edf0(void);
extern void __cdecl FUN_0064ff50(void);

__declspec(naked) void FUN_0064a780(void)
{
    __asm {
        push    ebp
        mov    ebp, dword ptr [g_008058e0]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x10]
        push    edi
        mov    dword ptr [g_008058e0], edi
        call    FUN_0064a5d0
        mov    al, byte ptr [g_00805958]
        add    esp, 4
        xor    esi, esi
        test    al, al
        je    L_a7d9
        mov    eax, dword ptr [edi + 0x30]
        push    eax
        push    0x792a70
        mov    byte ptr [g_00805958], 0
        call    FUN_0064ff50
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_a7d9
        push    esi
        call    FUN_0064edf0
        mov    eax, dword ptr [g_00805918]
        add    esp, 4
        dec    eax
        mov    dword ptr [g_00805918], eax
L_a7d9:
        mov    eax, dword ptr [esp + 0x14]
        cmp    esi, eax
        je    L_a7f5
        push    eax
        call    FUN_0064edf0
        mov    eax, dword ptr [g_00805918]
        add    esp, 4
        dec    eax
        mov    dword ptr [g_00805918], eax
L_a7f5:
        push    edi
        mov    byte ptr [g_0080d969], 0
        mov    byte ptr [g_0080d96a], 0
        call    FUN_0064a620
        add    esp, 4
        pop    edi
        pop    esi
        mov    dword ptr [g_008058e0], ebp
        pop    ebp
        ret    
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
        mov    al, byte ptr [g_007b5a38]
        test    al, al
        je    L_a833
        mov    dword ptr [g_0080d998], 0
L_a833:
        ret    
    }
}
