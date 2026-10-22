/*
 * FUN_0074af19 (extent 0x74af19-0x74afc9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00849308;
extern char   g_0085895c;
extern char   g_0085a1dc;
extern int    g_0085a214;
extern int    g_0085a234;
extern int    g_0085a23c;
extern int    g_0085a240;
extern int    g_0085a248;
extern int    g_008b7a20;
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_007355d0(void);
extern void __cdecl FUN_0074a280(void);
extern void __cdecl FUN_0074a2c0(void);

__declspec(naked) void FUN_0074af19(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_0085a1dc]
        test    al, al
        setne    al
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_0085a248]
        push    eax
        call    FUN_0074a2c0
        mov    ecx, dword ptr [g_0085a214]
        mov    edx, dword ptr [g_0085a23c]
        push    0
        push    0x1000000
        push    0
        push    ecx
        push    0
        push    edx
        call    FUN_007355d0
        test    byte ptr [g_0085895c], 2
        je    L_af7f
        mov    eax, dword ptr [g_0085a234]
        mov    ecx, dword ptr [g_0085a240]
        push    0
        push    0x1000000
        push    0
        push    eax
        push    0
        push    ecx
        call    FUN_007355d0
L_af7f:
        mov    edx, dword ptr [g_0085a248]
        push    edx
        call    FUN_0074a280
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00849308]
        push    eax
        push    0x14
        call    FUN_006f3c80
        mov    ecx, dword ptr [g_008b7a20]
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 4], edx
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [eax + 0xc], ecx
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 0x10], ecx
        mov    dword ptr [g_008b7a20], eax
        ret    0x10
    }
}
