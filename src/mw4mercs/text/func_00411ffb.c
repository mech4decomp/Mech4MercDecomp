/*
 * FUN_00411ffb (extent 0x411ffb-0x412073) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00411a10(void);
extern void __cdecl FUN_00411b00(void);
extern void __cdecl FUN_0041f430(void);
extern void __cdecl FUN_0041f480(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00411ffb(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_00411b00
        mov    ecx, dword ptr [esp + 8]
        push    ecx
        mov    ecx, eax
        call    FUN_0041f430
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    esi, ecx
        push    edi
        call    FUN_00411a10
        test    eax, eax
        je    L_2047
        mov    ecx, dword ptr [ebp + 0xc]
        push    ecx
        mov    ecx, eax
        call    FUN_0041f480
        pop    edi
        mov    al, 1
        pop    esi
        pop    ebp
        ret    0xc
L_2047:
        mov    al, byte ptr [ebp + 0x10]
        test    al, al
        je    L_206b
        mov    edx, dword ptr [esi + 0x14]
        mov    eax, dword ptr [esi + 0x10]
        mov    ecx, dword ptr [eax]
        push    edi
        push    edx
        push    ecx
        push    0x76d1c4
        call    FUN_006fab90
        add    esp, 0x10
        test    eax, eax
        je    L_206b
        int 3    
L_206b:
        pop    edi
        xor    al, al
        pop    esi
        pop    ebp
        ret    0xc
    }
}
