/*
 * FUN_005e92bb (extent 0x5e92bb-0x5e95b9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_007dc694;
extern int    g_007dc696;
extern int    g_007dc728;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_0040d030(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00421100(void);
extern void __cdecl FUN_004dae60(void);
extern void __cdecl FUN_004e2f40(void);
extern void __cdecl FUN_004e8dc0(void);
extern void __cdecl FUN_00507f90(void);
extern void __cdecl FUN_005e92f0(void);
extern void __cdecl FUN_005e95c0(void);
extern void __cdecl FUN_00766c60(void);

__declspec(naked) void FUN_005e92bb(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    esi
        lea    eax, [esp + 4]
        mov    esi, ecx
        push    eax
        call    FUN_005e92f0
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx + 0x48]
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_004dae60
        pop    esi
        pop    ecx
        ret    8
        nop    
        nop    
        nop    
        sub    esp, 0xbc
        push    ebx
        mov    bl, byte ptr [g_007dc694]
        push    ebp
        mov    bp, word ptr [g_007dc696]
        push    esi
        mov    esi, ecx
        push    edi
        lea    edi, [esi + 0x174]
        mov    ecx, edi
        mov    byte ptr [esp + 0x10], bl
        mov    word ptr [esp + 0x12], bp
        call    FUN_0041fd80
        test    eax, eax
        jne    L_933d
        mov    eax, dword ptr [esp + 0xd0]
        mov    byte ptr [eax], bl
        mov    word ptr [eax + 2], bp
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xbc
        ret    4
L_933d:
        lea    eax, [esp + 0x60]
        push    eax
        mov    ecx, edi
        call    FUN_0041fd80
        mov    ecx, eax
        call    FUN_00507f90
        mov    ecx, dword ptr [eax + 0xc]
        mov    dword ptr [esp + 0x14], ecx
        mov    edx, dword ptr [eax + 0x1c]
        mov    dword ptr [esp + 0x18], edx
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 0x1c], eax
        mov    al, byte ptr [esi + 0x1c4]
        test    al, al
        jne    L_93cd
        lea    edi, [esi + 0x194]
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je    L_93cd
        mov    ecx, edi
        call    FUN_0041fd80
        mov    eax, dword ptr [eax + 0xd8]
        add    eax, 0x80
        push    eax
        lea    ecx, [esp + 0x64]
        call    FUN_00419460
        lea    ecx, [esp + 0x60]
        push    ecx
        lea    edx, [esi + 0x188]
        push    edx
        lea    ecx, [esi + 0x17c]
        call    FUN_0041c7d0
        mov    ecx, edi
        call    FUN_0041fd80
        mov    cl, byte ptr [eax + 0x14]
        mov    dx, word ptr [eax + 0x16]
        add    eax, 0x14
        mov    byte ptr [esp + 0x10], cl
        mov    word ptr [esp + 0x12], dx
L_93cd:
        fld    dword ptr [esi + 0x17c]
        lea    ecx, [esp + 0x20]
        fsub    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x20]
        fld    dword ptr [esi + 0x180]
        fsub    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x24]
        fld    dword ptr [esi + 0x184]
        fsub    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x28]
        call    FUN_0040cb00
        fsqrt    
        mov    al, byte ptr [esi + 0x1c4]
        test    al, al
        fstp    dword ptr [esi + 0x170]
        jne    L_9542
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x64]
        mov    byte ptr [esi + 0x1c4], 1
        call    FUN_0040c410
        lea    ecx, [esp + 0x20]
        push    ecx
        lea    ecx, [esp + 0x64]
        call    FUN_00766c60
        mov    edx, dword ptr [esi + 0x1bc]
        mov    ebx, dword ptr [esi + 0x1b4]
        mov    dword ptr [esp + 0x78], edx
        lea    ecx, [esp + 0x90]
        lea    edx, [esp + 0x2c]
        lea    eax, [esp + 0x60]
        mov    dword ptr [esp + 0x30], ecx
        mov    ecx, dword ptr [g_007dc728]
        push    edx
        mov    dword ptr [esp + 0x30], eax
        mov    dword ptr [esp + 0x38], 0
        mov    dword ptr [esp + 0x40], ebx
        mov    dword ptr [esp + 0x44], 0x3000
        call    FUN_004e2f40
        mov    ebp, dword ptr [esp + 0x2c]
        push    ebp
        lea    ecx, [esp + 0x48]
        mov    edi, eax
        call    FUN_0040c410
        lea    eax, [ebp + 0xc]
        push    eax
        lea    ecx, [esp + 0x54]
        call    FUN_00421100
        test    edi, edi
        mov    ecx, dword ptr [ebp + 0x18]
        mov    dword ptr [esp + 0x5c], ecx
        je    L_950e
        mov    edx, dword ptr [edi + 4]
        cmp    dword ptr [edx], 0x421
        jne    L_94cb
        test    ebx, ebx
        je    L_950e
        mov    eax, dword ptr [ebx + 0x2fc]
        test    eax, eax
        je    L_950e
        mov    al, byte ptr [ebx + 0xdc]
        test    al, al
        jne    L_950e
L_94cb:
        mov    ecx, dword ptr [esp + 0x2c]
        lea    eax, [esi + 0x17c]
        push    eax
        mov    eax, dword ptr [ecx + 0x18]
        push    eax
        call    FUN_004e8dc0
        mov    cl, byte ptr [esp + 0x38]
        mov    dl, byte ptr [edi + 0x14]
        mov    ax, word ptr [edi + 0x16]
        mov    byte ptr [esi + 0x1b8], cl
        lea    ebp, [esi + 0x194]
        mov    ecx, ebp
        mov    byte ptr [esp + 0x10], dl
        mov    word ptr [esp + 0x12], ax
        call    FUN_0041fcb0
        push    edi
        mov    ecx, ebp
        call    FUN_0041fcd0
L_950e:
        sub    esp, 0x1c
        mov    edi, esp
        lea    ecx, [esp + 0x60]
        push    ecx
        mov    ecx, edi
        call    FUN_0040c5d0
        mov    edx, dword ptr [esp + 0x6c]
        mov    dword ptr [edi + 0xc], edx
        mov    eax, dword ptr [esp + 0x70]
        mov    dword ptr [edi + 0x10], eax
        mov    ecx, dword ptr [esp + 0x74]
        mov    dword ptr [edi + 0x14], ecx
        mov    edx, dword ptr [esp + 0x78]
        mov    ecx, esi
        mov    dword ptr [edi + 0x18], edx
        call    FUN_005e95c0
L_9542:
        push    0x7b9460
        lea    ecx, [esp + 0xa0]
        call    FUN_00419460
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0xa0]
        call    FUN_0040d030
        mov    edi, dword ptr [esi + 0xd8]
        mov    ecx, dword ptr [edi + 0x18]
        mov    edx, dword ptr [edi]
        and    ecx, 0xfffffffe
        or    ecx, 4
        mov    dword ptr [edi + 0x18], ecx
        mov    ecx, edi
        call    dword ptr [edx + 0x10]
        lea    eax, [esp + 0x9c]
        push    eax
        lea    ecx, [edi + 0x20]
        call    FUN_00419460
        mov    eax, dword ptr [esi + 0x10]
        mov    cl, byte ptr [esp + 0x10]
        mov    dx, word ptr [esp + 0x12]
        or    eax, 0x20
        pop    edi
        mov    dword ptr [esi + 0x10], eax
        mov    eax, dword ptr [esp + 0xcc]
        pop    esi
        pop    ebp
        mov    byte ptr [eax], cl
        mov    word ptr [eax + 2], dx
        pop    ebx
        add    esp, 0xbc
        ret    4
    }
}
