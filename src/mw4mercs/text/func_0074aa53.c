/*
 * FUN_0074aa53 (extent 0x74aa53-0x74aaf1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008b7a1c;
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_00740db0(void);
extern void __cdecl FUN_0074aa60(void);

__declspec(naked) void FUN_0074aa53(void)
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
        mov    eax, dword ptr [g_008b7a1c]
        mov    edx, dword ptr [esp + 4]
        cmp    eax, edx
        jne    L_aa7e
        mov    eax, dword ptr [eax + 8]
        push    edx
        mov    dword ptr [g_008b7a1c], eax
        call    FUN_006f4230
        ret    4
L_aa7e:
        test    eax, eax
        je    L_aa9e
L_aa82:
        mov    ecx, dword ptr [eax + 8]
        cmp    ecx, edx
        je    L_aa92
        mov    eax, ecx
        test    eax, eax
        jne    L_aa82
        ret    4
L_aa92:
        mov    ecx, dword ptr [edx + 8]
        push    edx
        mov    dword ptr [eax + 8], ecx
        call    FUN_006f4230
L_aa9e:
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
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    al, byte ptr [esi + 0x17]
        test    al, al
        jne    L_aac9
        mov    eax, dword ptr [esi + 0xc]
        test    eax, eax
        je    L_aac9
        push    eax
        call    FUN_00740db0
L_aac9:
        push    esi
        call    FUN_0074aa60
        pop    esi
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
        push    edi
        mov    ecx, 9
        xor    eax, eax
        mov    edi, 0x8b79f4
        rep stosd
        pop    edi
        ret    
    }
}
