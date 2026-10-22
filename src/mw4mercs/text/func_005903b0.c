/*
 * FUN_005903b0 (extent 0x5903b0-0x59043b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_004f9400(void);
extern void __cdecl FUN_0058fa00(void);
extern void __cdecl FUN_005a7e40(void);
extern void __cdecl FUN_005f5800(void);

__declspec(naked) void FUN_005903b0(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_005f5800
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x20]
        xor    ecx, 0x85739531
        call    FUN_004f9400
        test    al, al
        jne    L_03ff
        mov    ecx, esi
        call    FUN_0058fa00
        mov    esi, dword ptr [esi + 0x418]
        test    esi, esi
        je    L_03ff
        mov    ecx, esi
        call    FUN_005a7e40
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0xb0]
L_03ff:
        pop    esi
        ret    4
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
        push    esi
        push    edi
        mov    edi, ecx
        mov    esi, dword ptr [edi + 0x34c]
L_041a:
        test    esi, esi
        je    L_0438
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_0438
        mov    edx, dword ptr [edi + 0x408]
        mov    eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0xa8]
        jmp    L_041a
L_0438:
        pop    edi
        pop    esi
        ret    
    }
}
