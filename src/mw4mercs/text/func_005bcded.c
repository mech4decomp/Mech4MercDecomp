/*
 * FUN_005bcded (extent 0x5bcded-0x5bceba) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2270;
extern int    g_007f2274;
extern int    g_007f2278;
extern int    g_007f227c;
extern int    g_007f2280;
extern int    g_007f2284;
extern int    g_007f2288;
extern int    g_007f228c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d6230(void);
extern void __cdecl FUN_005bcd90(void);
extern void __cdecl FUN_005bcdc0(void);
extern void __cdecl FUN_0067dd80(void);

__declspec(naked) void FUN_005bcded(void)
{
    __asm {
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    ebp
        mov    ebp, dword ptr [esp + 0xc]
        push    esi
        mov    esi, dword ptr [esp + 0x1c]
        push    edi
        mov    edi, dword ptr [esp + 0x1c]
        push    esi
        push    edi
        push    ebx
        push    ebp
        call    FUN_005bcd90
        add    esp, 0x10
        test    al, al
        jne    L_ce29
        push    esi
        push    edi
        push    ebx
        push    ebp
        call    FUN_005bcdc0
        add    esp, 0x10
        test    al, al
        jne    L_ce29
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    
L_ce29:
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        ret    
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    esi
        call    FUN_004d6230
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0xc4]
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        xor    eax, eax
        mov    dword ptr [g_007f2288], eax
        mov    dword ptr [g_007f228c], eax
        mov    dword ptr [g_007f2280], eax
        mov    dword ptr [g_007f2284], eax
        mov    dword ptr [g_007f2278], eax
        mov    dword ptr [g_007f227c], eax
        mov    dword ptr [g_007f2270], eax
        mov    dword ptr [g_007f2274], eax
        ret    
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
        push    0x4c
        mov    esi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_ceb0
        mov    ecx, eax
        call    FUN_0067dd80
        mov    dword ptr [esi + 0x930], eax
        pop    esi
        ret    
L_ceb0:
        xor    eax, eax
        mov    dword ptr [esi + 0x930], eax
        pop    esi
        ret    
    }
}
