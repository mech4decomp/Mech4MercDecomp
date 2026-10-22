/*
 * FUN_0046528b (extent 0x46528b-0x465361) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b2210;
extern int    g_007d993c;
extern int    g_007d9940;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004650b0(void);
extern void __cdecl FUN_0047ac10(void);
extern void __cdecl FUN_00491340(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_0046528b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007d9940]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0xa0
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_52d0
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        mov    ecx, dword ptr [g_007d993c]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_004650b0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_52d0:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_0047ac10
        push    edi
        lea    ecx, [esi + 0x74]
        call    FUN_00491340
        mov    eax, dword ptr [edi]
        push    4
        lea    ecx, [esi + 0x90]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esi + 0x94]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esi + 0x98]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        add    esi, 0x9c
        push    esi
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b2210]
        test    eax, eax
        je    L_5356
        mov    al, byte ptr [ecx + 0x68]
        test    al, al
        je    L_5356
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x11]
        ret    
L_5356:
        mov    eax, 1
        ret    
        nop    
        nop    
        nop    
        nop    
        ret    
    }
}
