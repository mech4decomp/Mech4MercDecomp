/*
 * FUN_00713a70 (extent 0x713a70-0x713ad8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0085a248;
extern char   g_0087c254;
extern int    g_0087e694;
extern void __cdecl FUN_00713de0(void);

__declspec(naked) void FUN_00713a70(void)
{
    __asm {
        mov    al, byte ptr [g_0087c254]
        test    al, al
        je    L_3a7e
        call    FUN_00713de0
L_3a7e:
        mov    edx, dword ptr [esp + 8]
        mov    eax, dword ptr [g_0085a248]
        mov    ecx, dword ptr [eax]
        push    0
        push    edx
        mov    edx, dword ptr [esp + 0xc]
        push    edx
        push    0x1c4
        push    2
        push    eax
        call    dword ptr [ecx + 0x64]
        ret    8
        nop    
        mov    eax, dword ptr [g_0087e694]
        test    eax, eax
        jne    L_3abc
        mov    al, byte ptr [g_0087c254]
        test    al, al
        je    L_3ab7
        call    FUN_00713de0
L_3ab7:
        mov    eax, dword ptr [g_0085a248]
L_3abc:
        mov    edx, dword ptr [esp + 8]
        mov    ecx, dword ptr [eax]
        push    0
        push    edx
        mov    edx, dword ptr [esp + 0xc]
        push    edx
        push    0x1c4
        push    4
        push    eax
        call    dword ptr [ecx + 0x64]
        ret    8
    }
}
