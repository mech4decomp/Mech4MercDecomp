/*
 * FUN_0066d9a2 (extent 0x66d9a2-0x66da62) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_00629290(void);

__declspec(naked) void FUN_0066d9a2(void)
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
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        mov    edx, dword ptr [g_007dab40]
        push    esi
        mov    esi, ecx
        xor    eax, edx
        mov    ecx, dword ptr [eax + 0x40]
        push    0xa
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    dword ptr [esi + 0x8c], eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        mov    eax, dword ptr [ebx]
        xor    ecx, ecx
        xor    edx, edx
        mov    dword ptr [esp + 8], eax
        mov    cl, byte ptr [esp + 0xa]
        mov    dl, ah
        push    esi
        push    edi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x14]
        mov    edi, edx
        mov    edx, eax
        shr    eax, 0x18
        shr    ecx, 0x18
        and    edx, 0xff
        sub    ecx, eax
        je    L_da16
        mov    ecx, 0xfffffffb
L_da16:
        add    eax, ecx
        cmp    esi, 0xff
        jbe    L_da25
        mov    esi, 0xff
L_da25:
        cmp    edi, 0xff
        jbe    L_da32
        mov    edi, 0xff
L_da32:
        cmp    edx, 0xff
        jbe    L_da3f
        mov    edx, 0xff
L_da3f:
        cmp    eax, 0xff
        jbe    L_da4b
        mov    eax, 0xff
L_da4b:
        shl    eax, 8
        add    eax, esi
        shl    eax, 8
        add    eax, edi
        shl    eax, 8
        pop    edi
        add    eax, edx
        pop    esi
        mov    dword ptr [ebx], eax
        pop    ebx
        ret    8
    }
}
