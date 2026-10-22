/*
 * FUN_005e68c7 (extent 0x5e68c7-0x5e6a31) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd234;
extern int    g_007f255c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
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

__declspec(naked) void FUN_005e68c7(void)
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
        je    L_6915
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [g_007f255c]
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_004dd220
        mov    eax, dword ptr [esp + 8]
        mov    dword ptr [esi + 0x18], eax
        mov    dword ptr [esi], 0x78922c
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_6915:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        push    esi
        mov    esi, ecx
        call    FUN_004dd1c0
        test    byte ptr [esp + 8], 1
        je    L_6938
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_6938:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        push    ebx
        mov    ebx, ecx
        mov    eax, dword ptr [ebx + 0x14]
        mov    ecx, dword ptr [esp + 8]
        cmp    ecx, eax
        je    L_6a20
        cmp    ecx, 6
        jne    L_6960
        cmp    eax, 7
        jne    L_6960
        pop    ebx
        ret    8
L_6960:
        mov    eax, dword ptr [esp + 0xc]
        push    esi
        mov    esi, dword ptr [ebx + 0x18]
        push    eax
        push    ecx
        mov    ecx, ebx
        call    FUN_005f0430
        sub    eax, 6
        je    L_699b
        dec    eax
        jne    L_6a1c
        mov    ecx, dword ptr [esi + 0x10]
        and    ecx, 0xffffffbf
        push    0
        mov    dword ptr [esi + 0x10], ecx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        mov    eax, dword ptr [ebx + 0x14]
        pop    esi
        pop    ebx
        ret    8
L_699b:
        push    edi
        lea    edi, [esi + 0x214]
        mov    ecx, edi
        call    FUN_0041fcb0
        mov    eax, dword ptr [esi + 0x1e4]
        test    eax, eax
        je    L_69bb
        push    eax
        mov    ecx, edi
        call    FUN_0041fcd0
L_69bb:
        mov    edx, dword ptr [esi + 0x10]
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [g_007dab40]
        or    edx, 0x40
        mov    dword ptr [esi + 0x10], edx
        mov    edx, dword ptr [ecx]
        xor    edx, eax
        mov    ecx, dword ptr [edx]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_004d67d0
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xe4]
        lea    edi, [esi + 0x1a4]
        mov    ecx, edi
        mov    byte ptr [esi + 0x1cc], 1
        call    FUN_0041fd80
        test    eax, eax
        je    L_6a14
        mov    ecx, edi
        call    FUN_0041fd80
        mov    ecx, eax
        call    FUN_005bf940
L_6a14:
        mov    ecx, esi
        call    FUN_005ef7a0
        pop    edi
L_6a1c:
        mov    eax, dword ptr [ebx + 0x14]
        pop    esi
L_6a20:
        pop    ebx
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
        ret    
    }
}
