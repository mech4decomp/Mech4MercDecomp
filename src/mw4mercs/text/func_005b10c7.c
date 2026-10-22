/*
 * FUN_005b10c7 (extent 0x5b10c7-0x5b11ca) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd234;
extern int    g_007f20f0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_005b1140(void);
extern void __cdecl FUN_005b12c0(void);
extern void __cdecl FUN_005b4200(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005b10c7(void)
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
        push    0x5dc
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_110b
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f20f0]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005b1140
        mov    esi, eax
        jmp    L_110d
L_110b:
        xor    esi, esi
L_110d:
        call    FUN_006f49a0
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 4]
        mov    eax, esi
        pop    esi
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
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 4]
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    ebx
        push    edx
        mov    ecx, esi
        call    FUN_005b4200
        lea    edi, [esi + 0x5ac]
        push    0
        mov    ecx, edi
        call    FUN_0041fc80
        mov    dword ptr [edi], 0x77ceac
        lea    edi, [esi + 0x5b4]
        push    0
        mov    ecx, edi
        call    FUN_0041fc80
        mov    dword ptr [edi], 0x77ceac
        lea    edi, [esi + 0x5bc]
        push    0
        mov    ecx, edi
        call    FUN_0041fc80
        mov    dword ptr [edi], 0x77ceac
        lea    edi, [esi + 0x5c4]
        push    0
        mov    ecx, edi
        call    FUN_0041fc80
        mov    dword ptr [edi], 0x77ceac
        push    ebx
        mov    ecx, esi
        mov    dword ptr [esi], 0x785f4c
        call    FUN_005b12c0
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    0x10
    }
}
