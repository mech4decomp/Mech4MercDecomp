/*
 * FUN_0074a9dc (extent 0x74a9dc-0x74aad3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00849308;
extern int    g_008b7a1c;
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_00740db0(void);
extern void __cdecl FUN_0074a8f0(void);
extern void __cdecl FUN_0074aa60(void);

__declspec(naked) void FUN_0074a9dc(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00849308]
        push    esi
        push    eax
        push    0x1c
        call    FUN_006f3c80
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    ecx
        mov    esi, eax
        mov    eax, dword ptr [esp + 0xc]
        push    edx
        push    eax
        push    esi
        call    FUN_0074a8f0
        mov    ecx, dword ptr [g_008b7a1c]
        mov    dword ptr [esi + 8], ecx
        mov    dword ptr [g_008b7a1c], esi
        mov    eax, esi
        pop    esi
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [g_008b7a1c]
        test    esi, esi
        je    L_aa51
        push    edi
L_aa2c:
        mov    eax, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 0x10]
        mov    edi, dword ptr [esi + 8]
        xor    ecx, ecx
        mov    cl, byte ptr [esi + 0x15]
        push    eax
        push    ecx
        push    edx
        push    esi
        call    FUN_0074a8f0
        test    edi, edi
        mov    byte ptr [esi + 0x17], 1
        mov    dword ptr [esi + 8], edi
        mov    esi, edi
        jne    L_aa2c
        pop    edi
L_aa51:
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
    }
}
