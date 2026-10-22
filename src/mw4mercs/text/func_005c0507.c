/*
 * FUN_005c0507 (extent 0x5c0507-0x5c063b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f22c0;
extern int    g_007f22c4;
extern int    g_007f22c8;
extern int    g_007f2450;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005c0570(void);
extern void __cdecl FUN_005c0fe0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005c0507(void)
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
        push    0x6a8
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_055b
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f22c8]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005c0570
        mov    esi, eax
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx + 0x48]
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_055b:
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
        push    ecx
        mov    eax, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        push    eax
        mov    eax, dword ptr [esp + 0x14]
        mov    edi, ecx
        mov    ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    edx
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x18], 0
        call    FUN_005c0fe0
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x14]
        xor    eax, 0x85739531
        mov    cl, byte ptr [eax + 0x17fc]
        test    cl, cl
        mov    dword ptr [edi], 0x7876fc
        mov    dword ptr [edi + 0x6a4], 0
        je    L_05d4
        mov    ecx, dword ptr [edi + 0x170]
        mov    dword ptr [edi + 0x6a4], ecx
L_05d4:
        mov    eax, dword ptr [g_007f22c4]
        test    eax, eax
        jne    L_062d
        push    4
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_0623
        mov    dl, byte ptr [esp + 0x1c]
        mov    byte ptr [esi], dl
        push    0xc
        mov    dword ptr [esi], 0
        call    FUN_004084d0
        mov    dword ptr [eax], eax
        mov    dword ptr [esi], eax
        mov    dword ptr [eax + 4], eax
        mov    eax, dword ptr [g_007f22c4]
        add    esp, 4
        inc    eax
        mov    dword ptr [g_007f22c4], eax
        mov    eax, edi
        pop    edi
        mov    dword ptr [g_007f22c0], esi
        pop    esi
        pop    ecx
        ret    0x10
L_0623:
        mov    dword ptr [g_007f22c0], 0
L_062d:
        inc    dword ptr [g_007f22c4]
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ecx
        ret    0x10
    }
}
