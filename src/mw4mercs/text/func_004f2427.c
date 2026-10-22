/*
 * FUN_004f2427 (extent 0x4f2427-0x4f24f7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b4358;
extern int    g_007b435c;
extern int    g_007dc130;
extern int    g_007dc864;
extern int    g_007dc86c;
extern int    g_007dc878;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);
extern void __cdecl FUN_004ec2e0(void);
extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_00725080(void);

__declspec(naked) void FUN_004f2427(void)
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
        push    esi
        mov    esi, dword ptr [ecx + 8]
L_2434:
        test    esi, esi
        je    L_2448
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_2448
        call    FUN_004ec2e0
        jmp    L_2434
L_2448:
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [ecx + 8]
L_2454:
        test    esi, esi
        je    L_246e
        mov    eax, dword ptr [esi]
        test    eax, eax
        mov    esi, dword ptr [esi + 4]
        je    L_246e
        mov    eax, dword ptr [eax + 0x18]
        push    2
        push    eax
        call    FUN_00725080
        jmp    L_2454
L_246e:
        pop    esi
        ret    
        push    esi
        mov    esi, dword ptr [ecx + 8]
L_2474:
        test    esi, esi
        je    L_248e
        mov    eax, dword ptr [esi]
        test    eax, eax
        mov    esi, dword ptr [esi + 4]
        je    L_248e
        mov    eax, dword ptr [eax + 0x18]
        push    3
        push    eax
        call    FUN_00725080
        jmp    L_2474
L_248e:
        pop    esi
        ret    
        mov    eax, dword ptr [g_007dc130]
        push    eax
        push    0
        push    0x775010
        call    FUN_006f4710
        push    0x20
        mov    dword ptr [g_007dc86c], eax
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_24d8
        mov    ecx, dword ptr [g_007dc878]
        push    0
        push    0
        push    ecx
        push    0x774ff8
        push    0x1e4
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007dc864], eax
        jmp    L_24e2
L_24d8:
        mov    dword ptr [g_007dc864], 0
L_24e2:
        mov    dword ptr [g_007b4358], 0x3f800000
        mov    dword ptr [g_007b435c], 0x3f800000
        ret    
    }
}
