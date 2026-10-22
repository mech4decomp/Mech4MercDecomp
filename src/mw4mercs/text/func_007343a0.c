/*
 * FUN_007343a0 (extent 0x7343a0-0x734406) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_008aa288;
extern void __cdecl FUN_0075b040(void);
extern void __cdecl FUN_0075b4d0(void);

__declspec(naked) void FUN_007343a0(void)
{
    __asm {
        mov    eax, dword ptr [ecx + 4]
        test    eax, eax
        je    L_43ca
        mov    dl, byte ptr [g_008aa288]
        test    dl, dl
        jne    L_43ca
        mov    edx, 3
        push    0
        push    eax
        mov    dword ptr [ecx + 0xac], edx
        mov    dword ptr [ecx + 0xa8], edx
        call    FUN_0075b040
L_43ca:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0xa8]
        cmp    eax, 4
        je    L_4405
        cmp    eax, 3
        je    L_4405
        mov    al, byte ptr [g_008aa288]
        test    al, al
        jne    L_4405
        mov    dword ptr [ecx + 0xa8], 4
        mov    ecx, dword ptr [ecx + 0xc]
        test    ecx, ecx
        je    L_4405
        push    0xffffd8f0
        push    ecx
        call    FUN_0075b4d0
L_4405:
        ret    
    }
}
