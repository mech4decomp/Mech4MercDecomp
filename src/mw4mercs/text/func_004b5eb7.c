/*
 * FUN_004b5eb7 (extent 0x4b5eb7-0x4b5fa3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da9e8;
extern int    g_007daa0c;
extern int    g_007daa10;
extern int    g_007daa14;
extern int    g_007dab18;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_0070f090(void);

__declspec(naked) void FUN_004b5eb7(void)
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
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        mov    eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 4]
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
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 4]
        test    ecx, ecx
        je    L_5eee
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_5eee:
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
        nop    
        nop    
        mov    eax, dword ptr [g_007da9e8]
        push    esi
        push    eax
        push    0
        push    0x76ff50
        call    FUN_006f4710
        push    0x18
        mov    dword ptr [g_007daa10], eax
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_5f4f
        mov    ecx, dword ptr [g_007dab18]
        push    ecx
        push    0x7707e4
        push    0x8e
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0x4b6100
        mov    dword ptr [g_007daa14], esi
        jmp    L_5f59
L_5f4f:
        mov    dword ptr [g_007daa14], 0
L_5f59:
        push    0
        push    0
        push    0x4b5f90
        push    0x4b5f80
        push    0x7707b8
        call    FUN_0070f090
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
        mov    ecx, dword ptr [g_007daa0c]
        xor    eax, eax
        test    ecx, ecx
        setne    al
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [g_007daa0c]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        mov    dword ptr [g_007daa0c], eax
        ret    
    }
}
