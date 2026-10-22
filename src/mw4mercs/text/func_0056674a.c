/*
 * FUN_0056674a (extent 0x56674a-0x5668a9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern char   g_007dde2c;
extern int    g_007f2524;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_0080592c;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_0064c950(void);
extern void __cdecl FUN_0064d3d0(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_0056674a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
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
        nop    
        nop    
        sub    esp, 0xc
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax]
        add    eax, 4
        push    2
        push    ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064d3d0
        push    eax
        call    FUN_0064c950
        mov    ecx, dword ptr [g_0080592c]
        mov    eax, dword ptr [ecx]
        fild    dword ptr [eax]
        sub    ecx, 4
        fild    dword ptr [eax + 4]
        mov    dword ptr [g_0080592c], ecx
        fild    dword ptr [eax + 8]
        mov    eax, dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x14]
        fxch    st(1)
        mov    dword ptr [eax + 8], edx
        fstp    dword ptr [eax]
        fstp    dword ptr [eax + 4]
        add    esp, 0x18
        ret    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        mov    al, byte ptr [g_007dde2c]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    esi, edi
        sar    esi, 0x18
        test    al, al
        je    L_6818
        test    esi, esi
        jge    L_67f2
        push    0x77f708
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_67f2
        int 3    
L_67f2:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_6818
        cmp    esi, 0x12
        jl    L_6818
        push    0x77f708
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_6818
        int 3    
L_6818:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x10]
        push    edi
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_6890
        test    esi, esi
        jne    L_685d
        push    0x77f708
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_685d
        int 3    
L_685d:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_6890
        mov    eax, dword ptr [g_007f2524]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_6890
        push    0x77f68c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_6890
        int 3    
L_6890:
        test    esi, esi
        jne    L_689a
        pop    edi
        xor    eax, eax
        pop    esi
        pop    ebp
        ret    
L_689a:
        xor    eax, eax
        cmp    esi, -1
        sete    al
        pop    edi
        dec    eax
        and    eax, esi
        pop    esi
        pop    ebp
        ret    
    }
}
