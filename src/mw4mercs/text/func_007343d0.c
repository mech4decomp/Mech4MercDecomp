/*
 * FUN_007343d0 (extent 0x7343d0-0x734470) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_008aa288;
extern char   g_008aa289;
extern void __cdecl FUN_007344e0(void);
extern void __cdecl FUN_0075b4a0(void);
extern void __cdecl FUN_0075b4d0(void);

__declspec(naked) void FUN_007343d0(void)
{
    __asm {
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
        mov    esi, ecx
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        push    edi
        je    L_446d
        mov    al, byte ptr [g_008aa288]
        test    al, al
        jne    L_446d
        mov    edi, dword ptr [esi + 0xac]
        cmp    edi, 3
        je    L_446d
        cmp    dword ptr [esi + 0xa8], 4
        je    L_4441
        mov    al, byte ptr [g_008aa289]
        test    al, al
        je    L_446d
L_4441:
        mov    eax, dword ptr [esi + 0x18]
        test    eax, eax
        je    L_4456
        push    0
        push    0
        push    0
        push    0
        push    eax
        call    FUN_0075b4a0
L_4456:
        mov    eax, dword ptr [esi + 0xe0]
        push    0
        push    eax
        push    8
        push    esi
        mov    dword ptr [esi + 0xa8], edi
        call    FUN_007344e0
L_446d:
        pop    edi
        pop    esi
        ret    
    }
}
