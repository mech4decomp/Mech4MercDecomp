/*
 * FUN_0069cbaf (extent 0x69cbaf-0x69cd8a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern float  g_0076d048;
extern float  g_007748c8;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007ddde0;
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_005603e0(void);
extern void __cdecl FUN_00560400(void);
extern void __cdecl FUN_00560420(void);
extern void __cdecl FUN_00561430(void);
extern void __cdecl FUN_005b7e60(void);
extern void __cdecl FUN_006100a0(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_0072dcf0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_0069cbaf(void)
{
    __asm {
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        sub    esp, 0x210
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x20]
        mov    eax, dword ptr [edi + 0x50]
        lea    edx, [eax + eax*2]
        xor    ecx, 0x85739531
        shl    edx, 4
        lea    ecx, [ecx + edx + 0x1bb8]
        mov    ebp, 0x76b768
        call    FUN_006100a0
        call    FUN_0075db4a
        mov    ecx, dword ptr [edi + 0x54]
        sub    ecx, eax
        jns    L_cbf9
        neg    ecx
L_cbf9:
        mov    eax, ecx
        cdq    
        mov    esi, 0x3c
        idiv    esi
        mov    eax, 0x88888889
        push    edx
        imul    ecx
        add    edx, ecx
        sar    edx, 5
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        push    edx
        push    0xffff
        call    FUN_0072dcf0
        mov    ecx, dword ptr [edi + 0x58]
        test    ecx, ecx
        mov    esi, eax
        je    L_cc34
        push    1
        call    FUN_005b7e60
        mov    ebp, eax
L_cc34:
        mov    al, byte ptr [edi + 0x5c]
        test    al, al
        je    L_cc49
        push    ebp
        push    esi
        push    0x7999fc
        lea    ecx, [esp + 0x34]
        push    ecx
        jmp    L_cc55
L_cc49:
        push    esi
        push    ebp
        push    0x7999fc
        lea    edx, [esp + 0x34]
        push    edx
L_cc55:
        call    dword ptr [g_0076b420]
        add    esp, 0x10
        push    esi
        call    FUN_006f4230
        mov    esi, dword ptr [edi + 0x60]
        push    0
        push    0
        lea    eax, [esp + 0x30]
        push    eax
        mov    ecx, esi
        call    FUN_00560420
        push    0x3f800000
        push    0x43960000
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], 0x43c80000
        mov    dword ptr [esp + 0x1c], 0x3f666666
        mov    dword ptr [esp + 0x18], 0x40400000
        call    FUN_005603e0
        fld    dword ptr [esp + 0x10]
        fadd    dword ptr [g_007748c8]
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld    dword ptr [esp + 0x14]
        mov    ecx, esi
        fadd    dword ptr [g_0076d048]
        fstp    dword ptr [esp]
        call    FUN_00560400
        mov    ecx, dword ptr [edi + 0x34]
        mov    edx, dword ptr [esi]
        mov    dword ptr [esi + 0x104], ecx
        lea    eax, [esp + 0x24]
        push    eax
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esi + 0x10c], 0
        call    dword ptr [edx + 0xc]
        mov    edx, dword ptr [esp + 0x18]
        shr    edx, 1
        mov    dword ptr [esp + 0x1c], edx
        mov    dword ptr [esp + 0x20], 0
        fild    qword ptr [esp + 0x1c]
        push    1
        sub    esp, 0xc
        lea    eax, [esp + 0x1c]
        fsubr    dword ptr [esp + 0x1c]
        mov    ecx, esp
        push    eax
        fstp    dword ptr [esp + 0x20]
        mov    edi, dword ptr [esi]
        call    FUN_00551870
        mov    ecx, esi
        call    dword ptr [edi + 0x14]
        pop    edi
        pop    esi
        pop    ebp
        add    esp, 0x210
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
        push    ecx
        mov    eax, dword ptr [g_007ddde0]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_00561430
        mov    cl, byte ptr [esp + 7]
        xor    eax, eax
        mov    dword ptr [esi + 0x50], eax
        mov    byte ptr [esi + 0x58], cl
        mov    dword ptr [esi + 0x58], eax
        mov    dword ptr [esi + 0x54], eax
        mov    eax, 0x3f666666
        mov    dword ptr [esi], 0x799a08
        mov    dword ptr [esi + 0x1c], eax
        mov    dword ptr [esi + 0x14], 0x43720000
        mov    dword ptr [esi + 0x18], 0x429c0000
        mov    dword ptr [esi + 0x28], eax
        mov    dword ptr [esi + 0x20], 0x439e0000
        mov    dword ptr [esi + 0x24], 0x43160000
        mov    dword ptr [esi + 0x34], 0xfa007d00
        mov    eax, esi
        pop    esi
        pop    ecx
        ret    
    }
}
