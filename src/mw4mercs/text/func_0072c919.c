/*
 * FUN_0072c919 (extent 0x72c919-0x72c962) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b36c;
extern int    g_00896c88;
extern void __cdecl FUN_0072d830(void);

__declspec(naked) void FUN_0072c919(void)
{
    __asm {
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        mov    edx, 0x960072c8
        enter    0x72, -0x5c
        enter    0x72, -0x36
        enter    0x72, 0
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ecx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    al, byte ptr [ecx]
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [g_00896c88]
        push    0
        push    0
        push    eax
        push    ecx
        call    FUN_0072d830
        push    eax
        call    dword ptr [g_0076b36c]
        add    esp, 0xc
        ret    4
    }
}
