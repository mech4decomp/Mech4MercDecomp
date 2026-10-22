/*
 * FUN_005ebd97 (extent 0x5ebd97-0x5ebed1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd234;
extern int    g_007f2598;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004d67d0(void);
extern void __cdecl FUN_004dd1c0(void);
extern void __cdecl FUN_004dd220(void);
extern void __cdecl FUN_005bf940(void);
extern void __cdecl FUN_005ef7a0(void);
extern void __cdecl FUN_005f0430(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005ebd97(void)
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
        mov    eax, dword ptr [g_007dd234]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x1c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_bde5
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [g_007f2598]
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_004dd220
        mov    eax, dword ptr [esp + 8]
        mov    dword ptr [esi + 0x18], eax
        mov    dword ptr [esi], 0x789b54
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_bde5:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        push    esi
        mov    esi, ecx
        call    FUN_004dd1c0
        test    byte ptr [esp + 8], 1
        je    L_be08
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_be08:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x14]
        mov    ecx, dword ptr [esp + 8]
        cmp    ecx, eax
        je    L_bec4
        cmp    ecx, 6
        jne    L_be30
        cmp    eax, 7
        jne    L_be30
        pop    edi
        ret    8
L_be30:
        mov    eax, dword ptr [esp + 0xc]
        push    esi
        mov    esi, dword ptr [edi + 0x18]
        push    eax
        push    ecx
        mov    ecx, edi
        call    FUN_005f0430
        dec    eax
        je    L_bec0
        sub    eax, 4
        je    L_bec0
        dec    eax
        je    L_be5b
        mov    eax, dword ptr [edi + 0x18]
        and    dword ptr [eax + 0x10], 0xffffffbf
        mov    eax, dword ptr [edi + 0x14]
        pop    esi
        pop    edi
        ret    8
L_be5b:
        mov    edx, dword ptr [esi + 0x10]
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [g_007dab40]
        or    edx, 0x40
        mov    dword ptr [esi + 0x10], edx
        mov    edx, dword ptr [ecx]
        xor    edx, eax
        mov    ecx, dword ptr [edx]
        push    ebx
        push    esi
        xor    ecx, 0x85739531
        call    FUN_004d67d0
        push    0
        mov    dword ptr [esi + 0x1c8], 1
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        lea    ebx, [esi + 0x1a4]
        mov    ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        je    L_beb8
        mov    ecx, ebx
        call    FUN_0041fd80
        mov    ecx, eax
        call    FUN_005bf940
L_beb8:
        mov    ecx, esi
        call    FUN_005ef7a0
        pop    ebx
L_bec0:
        mov    eax, dword ptr [edi + 0x14]
        pop    esi
L_bec4:
        pop    edi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        ret    
    }
}
