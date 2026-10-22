/*
 * FUN_00554477 (extent 0x554477-0x554613) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b46c4;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_00557f60(void);
extern void __cdecl FUN_0061acf0(void);
extern void __cdecl FUN_0061ad20(void);

__declspec(naked) void FUN_00554477(void)
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
        mov    eax, dword ptr [ecx + 0x384]
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        jne    L_44db
        mov    al, byte ptr [ecx + 0x589]
        test    al, al
        jne    L_44db
        mov    al, byte ptr [ecx + 0x5ac]
        test    al, al
        jne    L_44db
        push    0x8000
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
        test    al, al
        je    L_44db
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax + 0x10]
        test    ecx, ecx
        jle    L_44db
        mov    ecx, dword ptr [g_007b46c4]
        sub    ecx, 2
        neg    ecx
        sbb    ecx, ecx
        and    ecx, 2
        mov    dword ptr [g_007b46c4], ecx
L_44db:
        ret    4
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x384]
        mov    ecx, dword ptr [eax + 0x10]
        shr    ecx, 0x13
        test    cl, 1
        jne    L_460b
        mov    al, byte ptr [esi + 0x589]
        test    al, al
        jne    L_460b
        mov    al, byte ptr [esi + 0x5ac]
        test    al, al
        jne    L_460b
        mov    edx, dword ptr [esp + 8]
        mov    eax, dword ptr [edx + 0x10]
        test    eax, eax
        jle    L_460b
        mov    eax, dword ptr [esi + 0x564]
        test    eax, eax
        je    L_458e
        push    0
        push    0
        mov    ecx, esi
        call    FUN_00557f60
        mov    eax, dword ptr [esi + 0x518]
        mov    ecx, dword ptr [esi + 0x51c]
        mov    edx, dword ptr [esi + 0x520]
        mov    dword ptr [esi + 0x56c], eax
        mov    dword ptr [esi + 0x570], ecx
        mov    eax, dword ptr [esi + 0x528]
        mov    dword ptr [esi + 0x57c], eax
        mov    ecx, dword ptr [esi + 0x524]
        mov    dword ptr [esi + 0x574], edx
        mov    edx, dword ptr [esi + 0x52c]
        mov    dword ptr [esi + 0x578], ecx
        mov    dword ptr [esi + 0x568], 0
        mov    dword ptr [esi + 0x580], edx
        pop    esi
        ret    4
L_458e:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x50]
        mov    ecx, dword ptr [eax + 0x5c]
        test    ecx, ecx
        je    L_460b
        push    0
        push    1
        mov    ecx, esi
        call    FUN_00557f60
        mov    ecx, dword ptr [esi + 0x518]
        mov    edx, dword ptr [esi + 0x51c]
        mov    eax, dword ptr [esi + 0x520]
        mov    dword ptr [esi + 0x56c], ecx
        mov    dword ptr [esi + 0x570], edx
        mov    ecx, dword ptr [esi + 0x528]
        mov    dword ptr [esi + 0x57c], ecx
        mov    edx, dword ptr [esi + 0x524]
        mov    dword ptr [esi + 0x574], eax
        mov    eax, dword ptr [esi + 0x52c]
        mov    dword ptr [esi + 0x578], edx
        mov    dword ptr [esi + 0x568], 1
        mov    dword ptr [esi + 0x580], eax
L_460b:
        pop    esi
        ret    4
        nop    
        ret    4
    }
}
