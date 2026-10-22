/*
 * FUN_007175e8 (extent 0x7175e8-0x717644) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00859d90;
extern int    g_00859d94;
extern int    g_00859d98;
extern int    g_00859d9c;
extern int    g_00859da0;
extern int    g_00859da4;
extern int    g_0085a248;
extern char   g_0087c5b2;
extern void __cdecl FUN_0074a4a0(void);

__declspec(naked) void FUN_007175e8(void)
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
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 0xc]
        mov    dword ptr [g_00859d90], eax
        mov    eax, dword ptr [esp + 0x10]
        mov    dword ptr [g_00859d9c], eax
        mov    eax, dword ptr [g_0085a248]
        mov    dword ptr [g_00859d94], ecx
        mov    ecx, dword ptr [esp + 0x14]
        mov    dword ptr [g_00859d98], edx
        mov    edx, dword ptr [esp + 0x18]
        push    0x859d90
        push    eax
        mov    dword ptr [g_00859da0], ecx
        mov    dword ptr [g_00859da4], edx
        call    FUN_0074a4a0
        mov    byte ptr [g_0087c5b2], 1
        ret    0x18
    }
}
