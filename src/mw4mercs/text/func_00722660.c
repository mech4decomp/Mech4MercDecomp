/*
 * FUN_00722660 (extent 0x722660-0x722725) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0085b4a0;
extern char   g_0087bc34;
extern char   g_0087bc35;
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0070e1b0(void);
extern void __cdecl FUN_0070e220(void);

__declspec(naked) void FUN_00722660(void)
{
    __asm {
        cmp    dword ptr [g_0085b4a0], 1
        jne    L_2692
        mov    al, byte ptr [g_0087bc34]
        test    al, al
        je    L_2680
        mov    al, byte ptr [g_0087bc35]
        test    al, al
        je    L_2680
        xor    al, al
        ret    8
L_2680:
        push    3
        push    1
        call    FUN_0070e220
        neg    eax
        sbb    eax, eax
        neg    eax
        ret    8
L_2692:
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x85815b]
        cmp    ecx, edx
        jb    L_26ab
        xor    al, al
        ret    8
L_26ab:
        shl    eax, 5
        mov    al, byte ptr [eax + ecx + 0x858484]
        push    esi
        and    eax, 0x80
        mov    esi, eax
        mov    al, byte ptr [g_0087bc35]
        test    al, al
        jne    L_26d7
        xor    ecx, ecx
        test    esi, esi
        setne    cl
        push    3
        push    1
        push    ecx
        call    FUN_0070e1b0
L_26d7:
        xor    eax, eax
        test    esi, esi
        setne    al
        pop    esi
        ret    8
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
        cmp    dword ptr [g_0085b4a0], 1
        je    L_2722
        mov    al, byte ptr [esp + 8]
        fld    dword ptr [esp + 0xc]
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    byte ptr [esi + 0x858058], al
        fstp    dword ptr [esi*4 + 0x858068]
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esi*8 + 0x8580a8]
        pop    esi
L_2722:
        ret    0xc
    }
}
