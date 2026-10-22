/*
 * FUN_004e15fa (extent 0x4e15fa-0x4e1779) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc728;
extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_004c3d50(void);
extern void __cdecl FUN_004e2f40(void);
extern void __cdecl FUN_004f03c0(void);
extern void __cdecl FUN_004f04a0(void);
extern void __cdecl FUN_00723180(void);

__declspec(naked) void FUN_004e15fa(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x54
        push    ebx
        push    esi
        push    edi
        push    0
        push    0
        push    0
        push    0
        lea    eax, [esp + 0x20]
        mov    esi, ecx
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        call    FUN_00723180
        mov    edi, dword ptr [esi + 0x4c]
        mov    edx, dword ptr [edi + 0x18]
        mov    esi, dword ptr [edx + 0x4c]
        lea    ebx, [esi + 0x2b0]
        mov    ecx, ebx
        call    FUN_0041fcb0
        lea    eax, [esp + 0xc]
        push    eax
        lea    ecx, [esp + 0x48]
        push    ecx
        mov    ecx, edi
        call    FUN_004f03c0
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x44]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0xd4]
        lea    ecx, [esp + 0x44]
        lea    eax, [esp + 0x2c]
        mov    dword ptr [esp + 0x2c], ecx
        mov    ecx, dword ptr [g_007dc728]
        lea    edx, [esi + 0x2c4]
        push    eax
        mov    dword ptr [esp + 0x34], edx
        mov    dword ptr [esp + 0x38], 0
        mov    dword ptr [esp + 0x40], 0
        mov    dword ptr [esp + 0x44], 0x2000
        call    FUN_004e2f40
        mov    edi, eax
        test    edi, edi
        je    L_16fe
        push    edi
        mov    ecx, ebx
        call    FUN_0041fcd0
        fld    dword ptr [esp + 0x50]
        fmul    dword ptr [esp + 0x5c]
        mov    ecx, dword ptr [edi + 0xd8]
        fld    dword ptr [esp + 0x54]
        add    ecx, 0x80
        fmul    dword ptr [esp + 0x5c]
        push    ecx
        lea    edx, [esp + 0x24]
        push    edx
        fstp    dword ptr [esp + 0x20]
        lea    ecx, [esi + 0x2b8]
        fld    dword ptr [esp + 0x60]
        fmul    dword ptr [esp + 0x64]
        fstp    dword ptr [esp + 0x24]
        fld    dword ptr [esp + 0x4c]
        fadd st(0), st(1)
        fstp    dword ptr [esp + 0x28]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x50]
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x2c]
        fld    dword ptr [esp + 0x54]
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x30]
        call    FUN_0041c830
L_16fe:
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x54
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
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx + 0x4c]
        push    eax
        push    edx
        call    FUN_004f04a0
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
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        mov    ecx, dword ptr [ecx + 0x4c]
        push    eax
        push    edx
        call    FUN_004f03c0
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
        mov    eax, dword ptr [esp + 4]
        xor    edx, edx
        cmp    eax, edx
        jne    L_1763
        mov    dword ptr [ecx + 0x48], edx
        mov    dword ptr [ecx + 0x4c], edx
        ret    4
L_1763:
        mov    dword ptr [ecx + 0x48], eax
        mov    ecx, dword ptr [ecx + 0x4c]
        cmp    ecx, edx
        je    L_1776
        mov    ecx, dword ptr [ecx + 0x24]
        push    eax
        call    FUN_004c3d50
L_1776:
        ret    4
    }
}
