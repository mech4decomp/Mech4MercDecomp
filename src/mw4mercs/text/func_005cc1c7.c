/*
 * FUN_005cc1c7 (extent 0x5cc1c7-0x5cc44d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f23c0;
extern int    g_007f2450;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_005cc230(void);
extern void __cdecl FUN_005cd710(void);
extern void __cdecl FUN_005cd820(void);
extern void __cdecl FUN_005dad30(void);
extern void __cdecl FUN_005dafe0(void);
extern void __cdecl FUN_005db6e0(void);
extern void __cdecl FUN_005dcb70(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005cc1c7(void)
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
        mov    eax, dword ptr [g_007f2450]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x39c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_c21b
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f23c0]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005cc230
        mov    esi, eax
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx + 0x48]
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_c21b:
        xor    esi, esi
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx + 0x48]
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 4]
        push    ebx
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    edi
        push    edx
        mov    ecx, esi
        call    FUN_005db6e0
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x20]
        xor    ebx, ebx
        push    ecx
        lea    ecx, [esi + 0x380]
        mov    dword ptr [esi + 0x378], ebx
        mov    dword ptr [esi + 0x37c], ebx
        mov    dword ptr [esp + 0x20], ebx
        call    FUN_005cd710
        mov    edx, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [esi + 0x37c]
        push    ebx
        push    edx
        mov    dword ptr [esi], 0x787d7c
        mov    ecx, dword ptr [esi + 0x378]
        push    ecx
        push    eax
        push    eax
        call    FUN_005cd820
        mov    edx, dword ptr [esi + 0x2d4]
        mov    dword ptr [esi + 0x37c], eax
        mov    eax, dword ptr [edi + 0x64]
        or    ecx, 0xffffffff
        add    esp, 0x14
        cmp    eax, ecx
        mov    byte ptr [edx], bl
        mov    dword ptr [esi + 0x318], ebx
        mov    dword ptr [esi + 0x31c], ebx
        mov    dword ptr [esi + 0x334], ebx
        mov    dword ptr [esi + 0x338], ebx
        mov    dword ptr [esi + 0x320], ecx
        mov    dword ptr [esi + 0x324], ecx
        mov    dword ptr [esi + 0x384], ebx
        mov    dword ptr [esi + 0x388], ebx
        mov    dword ptr [esi + 0x38c], ebx
        mov    dword ptr [esi + 0x390], ebx
        mov    dword ptr [esi + 0x398], 1
        mov    dword ptr [esi + 0x354], ebx
        mov    dword ptr [esi + 0x358], ebx
        mov    dword ptr [esi + 0x35c], ebx
        mov    dword ptr [esi + 0x394], ebx
        je    L_c34e
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x14]
        xor    edx, 0x85739531
        cmp    byte ptr [edx + 0x17fc], bl
        jne    L_c34e
        mov    ecx, dword ptr [ecx + 0x10]
        push    eax
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        push    eax
        mov    ecx, esi
        mov    dword ptr [esi + 0x170], eax
        call    FUN_005dcb70
L_c34e:
        mov    ecx, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [esi + 0x170]
        mov    edx, dword ptr [ecx]
        push    ebx
        push    2
        mov    dword ptr [esi + 0x314], eax
        call    dword ptr [edx + 4]
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    0x10
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
        xor    al, al
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
        xor    al, al
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
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_005dad30
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_005dafe0
        ret    4
    }
}
