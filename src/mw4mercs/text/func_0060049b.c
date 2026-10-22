/*
 * FUN_0060049b (extent 0x60049b-0x60056d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0078b360;
extern void __cdecl FUN_006055f0(void);
extern void __cdecl FUN_00605700(void);
extern void __cdecl FUN_00605740(void);
extern void __cdecl FUN_00605760(void);
extern void __cdecl FUN_00699160(void);
extern void __cdecl FUN_006991d0(void);
extern void __cdecl FUN_006992f0(void);
extern void __cdecl FUN_00699530(void);

__declspec(naked) void FUN_0060049b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    eax, dword ptr [eax + 0x22c0]
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [esp + 4]
        push    ebx
        fmul    dword ptr [g_0078b360]
        push    ebp
        mov    ebp, ecx
        mov    ebx, dword ptr [ebp + 0x22bc]
        test    ebx, ebx
        fstp    dword ptr [esp + 0xc]
        push    edi
        mov    edi, dword ptr [ebp + 0x22b4]
        je    L_0567
        push    esi
        push    0x3f800000
        mov    ecx, ebx
        call    FUN_006055f0
L_04e4:
        test    edi, edi
        je    L_054d
        mov    esi, dword ptr [edi]
        test    esi, esi
        mov    edi, dword ptr [edi + 4]
        je    L_054d
        mov    eax, dword ptr [esp + 0x14]
        push    eax
        mov    ecx, esi
        call    FUN_00699530
        test    al, al
        je    L_0543
        mov    ecx, esi
        call    FUN_006991d0
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_0528
        mov    ecx, esi
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_00699160
        push    esi
        mov    ecx, ebx
        call    FUN_00605740
        jmp    L_04e4
L_0528:
        mov    ecx, dword ptr [esi + 0x18]
        mov    eax, dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        mov    ecx, esi
        fmul st(0), st(1)
        __emit 0xD9  // fstp dword ptr [esp] — ref uses no-disp form D9 1C 24
__emit 0x1C
__emit 0x24
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_006992f0
L_0543:
        push    esi
        mov    ecx, ebx
        call    FUN_00605740
        jmp    L_04e4
L_054d:
        mov    ecx, ebx
        call    FUN_00605700
        mov    edx, dword ptr [ebp + 0x22c0]
        push    0
        push    0
        push    edx
        mov    ecx, ebx
        call    FUN_00605760
        pop    esi
L_0567:
        pop    edi
        pop    ebp
        pop    ebx
        ret    4
        nop    /* trailing alignment pad (ref 0x60056D = 90) */
    }
}
