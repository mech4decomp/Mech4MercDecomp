/*
 * FUN_004a2146 (extent 0x4a2146-0x4a2410) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00495e30(void);
extern void __cdecl FUN_004a2930(void);
extern void __cdecl FUN_004a32c0(void);
extern void __cdecl FUN_004add90(void);
extern void __cdecl FUN_004addd0(void);
extern void __cdecl FUN_004adf70(void);
extern void __cdecl FUN_004adfb0(void);
extern void __cdecl FUN_004ae3c0(void);
extern void __cdecl FUN_004ae5a0(void);
extern void __cdecl FUN_004aeb30(void);

__declspec(naked) void FUN_004a2146(void)
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
        mov    eax, dword ptr [esp + 4]
        sub    esp, 0x20
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x34]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x38]
        push    ebp
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_004a32c0
        mov    dword ptr [esi + 0x120], 7
        xor    ebx, ebx
        lea    ecx, [esi + 0x12c]
        mov    dword ptr [esi + 0x124], ebx
        call    FUN_004ae3c0
        mov    dword ptr [esi + 0x13c], 7
        lea    ecx, [esi + 0x148]
        mov    dword ptr [esi + 0x140], ebx
        call    FUN_004ae3c0
        lea    ecx, [esi + 0x15c]
        mov    dword ptr [esi + 0x158], 6
        call    FUN_004ae3c0
        mov    dword ptr [esi + 0x168], 2
        mov    dword ptr [esi + 0x180], 0
        lea    ebx, [esi + 0x180]
        mov    dword ptr [esi + 0x188], 0
        mov    dword ptr [esi + 0x190], 0
        push    ebp
        mov    dword ptr [esi + 0x198], 0
        push    edi
        lea    ecx, [esi + 0x124]
        mov    dword ptr [esi], 0x7702cc
        call    FUN_004add90
        push    ebp
        push    edi
        lea    ecx, [esi + 0x12c]
        call    FUN_004ae5a0
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x138]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    edi
        lea    ecx, [esi + 0x140]
        call    FUN_004add90
        push    ebp
        push    edi
        lea    ecx, [esi + 0x148]
        call    FUN_004ae5a0
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x154]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        cmp    ebp, 0xa
        jge    L_2393
        push    0
        lea    ecx, [esi + 0x15c]
        call    FUN_004aeb30
        push    0x3f800000
        lea    ecx, [esi + 0x168]
        call    FUN_004adfb0
        lea    ecx, [esp + 0x14]
        mov    byte ptr [esi + 0x17c], 0
        mov    dword ptr [esp + 0x10], 4
        call    FUN_004ae3c0
        push    ebp
        push    edi
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esp + 0x28], 1
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea    ecx, [esp + 0x28]
        call    FUN_004addd0
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esp + 0x30]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    0
        lea    ecx, [esp + 0x18]
        call    FUN_00495e30
        mov    edx, dword ptr [esp + 0x18]
        lea    ecx, [eax + eax*2]
        fld    dword ptr [edx + ecx*4 + 4]
        lea    eax, [edx + ecx*4]
        fmul    dword ptr [eax]
        fsubr    dword ptr [eax + 8]
        mov    al, byte ptr [esp + 0x2c]
        test    al, al
        je    L_22f0
        fmul    dword ptr [esp + 0x24]
L_22f0:
        push    ebp
        fstp    dword ptr [esi + 0x184]
        push    edi
        lea    ecx, [esp + 0x1c]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea    ecx, [esp + 0x28]
        call    FUN_004addd0
        mov    eax, dword ptr [edi]
        push    1
        lea    ecx, [esp + 0x30]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x20]
        push    0
        lea    ecx, [esp + 0x18]
        call    FUN_00495e30
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [esp + 0x18]
        fld    dword ptr [eax + edx*4 + 4]
        lea    eax, [eax + edx*4]
        fmul    dword ptr [eax]
        fsubr    dword ptr [eax + 8]
        mov    al, byte ptr [esp + 0x2c]
        test    al, al
        je    L_2344
        fmul    dword ptr [esp + 0x24]
L_2344:
        push    ebp
        fstp    dword ptr [esi + 0x18c]
        push    edi
        lea    ecx, [esi + 0x190]
        call    FUN_004add90
        push    ebp
        push    edi
        lea    ecx, [esi + 0x198]
        call    FUN_004add90
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        mov    byte ptr [esi + 0x1a0], 0
        je    L_23fd
        push    eax
        call    FUN_004084e0
        add    esp, 4
        mov    ecx, esi
        call    FUN_004a2930
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x20
        ret    0xc
L_2393:
        push    ebp
        push    edi
        lea    ecx, [esi + 0x15c]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea    ecx, [esi + 0x168]
        call    FUN_004adf70
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x17c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    edi
        mov    ecx, ebx
        call    FUN_004add90
        push    ebp
        push    edi
        lea    ecx, [esi + 0x188]
        call    FUN_004add90
        push    ebp
        push    edi
        lea    ecx, [esi + 0x190]
        call    FUN_004add90
        push    ebp
        push    edi
        lea    ecx, [esi + 0x198]
        call    FUN_004add90
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x1a0]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
L_23fd:
        mov    ecx, esi
        call    FUN_004a2930
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x20
        ret    0xc
    }
}
