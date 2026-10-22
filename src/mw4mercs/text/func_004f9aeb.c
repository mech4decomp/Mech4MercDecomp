/*
 * FUN_004f9aeb (extent 0x4f9aeb-0x4f9c15) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00775c18;
extern int    g_007dc130;
extern int    g_007dc6b4;
extern int    g_007dc8c0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_004d9db0(void);
extern void __cdecl FUN_004de060(void);
extern void __cdecl FUN_004f9c40(void);
extern void __cdecl FUN_004fa060(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004f9aeb(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dc130]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x2d0
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_9b32
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007dc8c0]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_004f9c40
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_9b32:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x775b3c
        call    FUN_004fa060
        mov    ecx, dword ptr [g_007dc6b4]
        call    FUN_004de060
        lea    ecx, [esi + 0x2b0]
        call    FUN_0041fc90
        mov    ecx, esi
        call    FUN_004d9db0
        pop    esi
        ret    
        nop    
        nop    
        nop    
        mov    al, byte ptr [esp + 4]
        mov    byte ptr [ecx + 0x175], al
        ret    4
        nop    
        nop    
        nop    
        fld    dword ptr [esp + 4]
        fmul    dword ptr [g_00775c18]
        fstp    dword ptr [ecx + 0x178]
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
        mov    al, byte ptr [esp + 4]
        mov    byte ptr [ecx + 0x17c], al
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [ecx + 0x180], eax
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [ecx + 0x184], eax
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [ecx + 0x188], eax
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [ecx + 0x18c], eax
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [ecx + 0x190], eax
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [ecx + 0x194], eax
        ret    4
        nop    
        nop    
        nop    
        mov    al, 1
        ret    4
    }
}
