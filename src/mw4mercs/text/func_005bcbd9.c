/*
 * FUN_005bcbd9 (extent 0x5bcbd9-0x5bcd41) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dad9c;
extern int    g_007dada4;
extern int    g_007dada8;
extern int    g_007dadac;
extern int    g_007dadb0;
extern int    g_007dadb4;
extern int    g_007dadb8;
extern int    g_007dc144;
extern int    g_007f2290;
extern int    g_007f2294;
extern int    g_0080dab8;
extern int    g_0080dabc;
extern int    g_0080dac0;
extern int    g_0080dac4;
extern int    g_0080dac8;
extern int    g_0080dacc;
extern int    g_0080dad0;
extern int    g_0080dad4;
extern int    g_0080dad8;
extern int    g_0080dadc;
extern int    g_0080dae0;
extern int    g_0080dae4;
extern int    g_0080dae8;
extern int    g_0080daec;
extern int    g_0080daf0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_004e1780(void);
extern void __cdecl FUN_00630f70(void);
extern void __cdecl FUN_00630fa0(void);
extern void __cdecl FUN_00637ef0(void);
extern void __cdecl FUN_0063bfc0(void);
extern void __cdecl FUN_0063bfe0(void);

__declspec(naked) void FUN_005bcbd9(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        test    edi, edi
        mov    ebx, ecx
        je    L_cc27
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx + 0x40]
        xor    eax, 0x85739531
        je    L_cc4c
        mov    ecx, dword ptr [eax + 0x50]
        push    esi
        mov    esi, dword ptr [edi + 0x24]
        push    esi
        call    FUN_00630f70
        push    esi
        call    FUN_0063bfc0
        add    esp, 4
        pop    esi
        push    edi
        mov    ecx, ebx
        call    FUN_004e1780
        pop    edi
        pop    ebx
        ret    4
L_cc27:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax + 0x40]
        xor    eax, 0x85739531
        je    L_cc4c
        mov    ecx, dword ptr [eax + 0x50]
        call    FUN_00630fa0
        call    FUN_0063bfe0
L_cc4c:
        push    edi
        mov    ecx, ebx
        call    FUN_004e1780
        pop    edi
        pop    ebx
        ret    4
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
        push    esi
        xor    esi, esi
        push    0x14
        mov    dword ptr [g_0080daf0], esi
        mov    dword ptr [g_0080daec], esi
        mov    dword ptr [g_0080dae4], esi
        mov    dword ptr [g_0080dae8], esi
        mov    dword ptr [g_0080dae0], esi
        mov    dword ptr [g_0080dadc], esi
        mov    dword ptr [g_0080dad8], esi
        mov    dword ptr [g_0080dad4], esi
        mov    dword ptr [g_0080dad0], esi
        mov    dword ptr [g_0080dac0], esi
        mov    dword ptr [g_0080dabc], esi
        mov    dword ptr [g_0080dacc], esi
        mov    dword ptr [g_0080dac8], esi
        mov    dword ptr [g_0080dac4], esi
        mov    dword ptr [g_0080dab8], esi
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, esi
        je    L_ccfa
        mov    ecx, dword ptr [g_007dc144]
        push    ecx
        push    0x78712c
        push    0x47e
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007f2294], eax
        jmp    L_cd00
L_ccfa:
        mov    dword ptr [g_007f2294], esi
L_cd00:
        call    FUN_00637ef0
        push    0x400
        call    FUN_004084d0
        mov    dword ptr [g_007f2290], eax
        mov    eax, 2
        add    esp, 4
        mov    dword ptr [g_007dad9c], eax
        mov    dword ptr [g_007dada4], eax
        mov    dword ptr [g_007dada8], eax
        mov    dword ptr [g_007dadac], eax
        mov    dword ptr [g_007dadb0], eax
        mov    dword ptr [g_007dadb4], eax
        mov    dword ptr [g_007dadb8], eax
        pop    esi
        ret    
    }
}
