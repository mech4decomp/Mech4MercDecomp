/*
 * FUN_005558d4 (extent 0x5558d4-0x555a93) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0054c4d0(void);
extern void __cdecl FUN_00559be0(void);
extern void __cdecl FUN_0061acf0(void);
extern void __cdecl FUN_0061ad20(void);

__declspec(naked) void FUN_005558d4(void)
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
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        jle    L_5924
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        mov    al, byte ptr [edx + 0x17]
        test    al, al
        jne    L_5924
        mov    al, byte ptr [ecx + 0x5ac]
        test    al, al
        jne    L_5924
        push    0x8000
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
L_5924:
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
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        jle    L_5974
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        mov    al, byte ptr [edx + 0x17]
        test    al, al
        jne    L_5974
        mov    al, byte ptr [ecx + 0x5ac]
        test    al, al
        jne    L_5974
        push    0x8000
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
L_5974:
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
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax + 0x10]
        test    ecx, ecx
        jle    L_59b9
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0xc]
        xor    eax, 0x85739531
        mov    cl, byte ptr [eax + 0x17]
        test    cl, cl
        jne    L_59b9
        push    0x8000
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
L_59b9:
        ret    4
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x384]
        mov    ecx, dword ptr [eax + 0x10]
        shr    ecx, 0x13
        test    cl, 1
        jne    L_5a52
        mov    al, byte ptr [esi + 0x589]
        test    al, al
        jne    L_5a52
        mov    al, byte ptr [esi + 0x5ac]
        test    al, al
        jne    L_5a52
        push    0x8000
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
        test    al, al
        je    L_5a52
        mov    edx, dword ptr [esp + 8]
        mov    eax, dword ptr [edx + 0x10]
        test    eax, eax
        mov    ecx, dword ptr [esi + 0x488]
        jle    L_5a29
        inc    ecx
        mov    eax, ecx
        cmp    eax, 1
        mov    dword ptr [esi + 0x488], ecx
        jne    L_5a52
        push    4
        mov    ecx, esi
        call    FUN_0054c4d0
        pop    esi
        ret    4
L_5a29:
        dec    ecx
        mov    eax, ecx
        test    eax, eax
        mov    dword ptr [esi + 0x488], ecx
        jg    L_5a52
        push    5
        mov    ecx, esi
        mov    dword ptr [esi + 0x488], 0
        call    FUN_0054c4d0
        push    0x1b
        mov    ecx, esi
        call    FUN_00559be0
L_5a52:
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
    }
}
