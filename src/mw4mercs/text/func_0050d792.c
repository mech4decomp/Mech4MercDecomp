/*
 * FUN_0050d792 (extent 0x50d792-0x50d833) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b28c;
extern void __cdecl FUN_0050d660(void);
extern void __cdecl FUN_0050d690(void);
extern void __cdecl FUN_0050d760(void);
extern void __cdecl FUN_0050d7a0(void);

__declspec(naked) void FUN_0050d792(void)
{
    __asm {
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
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, dword ptr [esp + 0x10]
        lea    ecx, [eax - 1]
        cmp    edi, ecx
        jge    L_d7dd
        sub    eax, edi
        dec    eax
        imul    eax, dword ptr [esi + 8]
        push    eax
        lea    edx, [edi + 1]
        push    edx
        push    esi
        call    FUN_0050d690
        add    esp, 8
        push    eax
        push    edi
        push    esi
        call    FUN_0050d690
        add    esp, 8
        push    eax
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
L_d7dd:
        mov    eax, dword ptr [esi]
        dec    eax
        pop    edi
        mov    dword ptr [esi], eax
        pop    esi
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
        nop    
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        push    esi
        push    edi
        call    FUN_0050d660
        push    esi
        push    edi
        call    FUN_0050d7a0
        add    esp, 0x10
        pop    edi
        pop    esi
        ret    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        push    esi
        push    edi
        call    FUN_0050d660
        mov    eax, dword ptr [esp + 0x18]
        push    esi
        push    eax
        push    edi
        call    FUN_0050d760
        add    esp, 0x14
        pop    edi
        pop    esi
        ret    
    }
}
