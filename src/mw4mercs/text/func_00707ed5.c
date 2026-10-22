/*
 * FUN_00707ed5 (extent 0x707ed5-0x707f75) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b220;
extern int    g_00858a94;
extern int    g_00858ae8;
extern int    g_00858aec;
extern int    g_00858b30;
extern int    g_00858b34;
extern int    g_00858b38;
extern int    g_00858b3c;
extern float  g_00858b48;
extern float  g_00858b58;
extern void __cdecl FUN_00707f50(void);
extern void __cdecl FUN_00707f75(void);

__declspec(naked) void FUN_00707ed5(void)
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
        nop    
        nop    
        sub    esp, 0x10
        lea    eax, [esp + 8]
        push    eax
        call    dword ptr [g_0076b220]
        call    FUN_00707f50
        sub    eax, dword ptr [g_00858b30]
        sbb    edx, dword ptr [g_00858b34]
        mov    dword ptr [esp + 4], edx
        __emit 0x89  // mov dword ptr [esp], eax
__emit 0x44
__emit 0x24
__emit 0x00
__emit 0xDF  // fild qword ptr [esp] (explicit disp8=0)
__emit 0x6C
__emit 0x24
__emit 0x00
        mov    ecx, dword ptr [esp + 8]
        fild    qword ptr [g_00858b58]
        mov    edx, dword ptr [g_00858b38]
        mov    eax, dword ptr [g_00858b3c]
        sub    ecx, edx
        fdivp st(1), st(0)
        mov    edx, dword ptr [esp + 0xc]
        sbb    edx, eax
        mov    dword ptr [esp + 8], ecx
        mov    dword ptr [esp + 0xc], edx
        fild    qword ptr [esp + 8]
        fild    qword ptr [g_00858b48]
        fdivp st(1), st(0)
        fsubp st(1), st(0)
        add    esp, 0x10
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
        mov    eax, dword ptr [g_00858a94]
        test    eax, eax
        je    L_7f5e
        rdtsc    
        ret    
        __emit 0xEB  /* jmp FUN_00707f75 (short EB 17; MSVC6 would emit near E9) */
        __emit 0x17
L_7f5e:
        push    0x858ae8
        call    dword ptr [g_0076b220]
        mov    eax, dword ptr [g_00858ae8]
        mov    edx, dword ptr [g_00858aec]
        ret    
    }
}
