/*
 * FUN_006268ba (extent 0x6268ba-0x62696d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f2114;
extern int    g_00858940;
extern void __cdecl FUN_005b8190(void);
extern void __cdecl FUN_00628330(void);
extern void __cdecl FUN_006286f0(void);
extern void __cdecl FUN_00628aa0(void);
extern void __cdecl FUN_00630cd0(void);
extern void __cdecl FUN_0063b9e0(void);
extern void __cdecl FUN_0063d4e0(void);
extern void __cdecl FUN_006f32c0(void);

__declspec(naked) void FUN_006268ba(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x2c]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x55c]
        test    eax, eax
        jne    L_6940
        mov    ecx, esi
        call    FUN_006f32c0
        mov    ecx, dword ptr [esi + 0x50]
        call    FUN_00630cd0
        mov    eax, dword ptr [g_00858940]
        cmp    dword ptr [esi + 0x38], eax
        je    L_6909
        mov    ecx, dword ptr [esi + 0x54]
        mov    dword ptr [esi + 0x38], eax
        call    FUN_0063b9e0
L_6909:
        mov    eax, dword ptr [esi + 0x3c]
        test    eax, eax
        je    L_692b
        mov    ecx, dword ptr [g_007f2114]
        call    FUN_005b8190
        mov    ecx, esi
        call    FUN_006286f0
        mov    ecx, esi
        call    FUN_00628aa0
        pop    esi
        ret    
L_692b:
        mov    ecx, esi
        call    FUN_00628330
        mov    ecx, esi
        call    FUN_006286f0
        mov    ecx, esi
        call    FUN_00628aa0
L_6940:
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
        mov    eax, dword ptr [ecx + 0x4c]
        mov    edx, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx + 0x130]
        mov    dword ptr [eax + 0x10], edx
        mov    eax, dword ptr [esp + 8]
        push    eax
        call    FUN_0063d4e0
        ret    8
    }
}
