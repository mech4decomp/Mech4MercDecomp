/*
 * FUN_004c183f (extent 0x4c183f-0x4c1911) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007daaec;
extern int    g_007daaf0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00421ec0(void);
extern void __cdecl FUN_004c1470(void);
extern void __cdecl FUN_004c6960(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004c183f(void)
{
    __asm {
        nop    
        mov    eax, dword ptr [g_007daaec]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x178
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_1885
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    edx
        mov    edx, dword ptr [g_007daaf0]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_004c1470
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_1885:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        push    ecx
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    ebx, ecx
        push    esi
        call    FUN_004c6960
        push    esi
        call    FUN_00421ec0
        mov    eax, dword ptr [esi]
        add    esp, 4
        push    4
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], 0
        call    dword ptr [eax + 0x24]
        mov    ecx, dword ptr [ebx + 0x174]
        mov    edi, dword ptr [esi + 0x14]
        mov    eax, dword ptr [esi + 0x10]
        mov    edx, dword ptr [ecx]
        push    esi
        sub    edi, eax
        call    dword ptr [edx + 4]
        mov    edx, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 0x14]
        sub    eax, edx
        mov    edx, dword ptr [esi]
        sub    eax, edi
        mov    dword ptr [esp + 0x14], eax
        add    eax, 4
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x1c]
        mov    eax, dword ptr [esi]
        push    4
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        mov    eax, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esi]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x18]
        pop    edi
        pop    esi
        pop    ebx
        pop    ecx
        ret    4
        nop    
        nop    
        nop    
        ret    
    }
}
