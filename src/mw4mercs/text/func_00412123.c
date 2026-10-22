/*
 * FUN_00412123 (extent 0x412123-0x4121d3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00411a10(void);
extern void __cdecl FUN_00411b00(void);
extern void __cdecl FUN_0041f600(void);
extern void __cdecl FUN_0041f680(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00412123(void)
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
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00411a10
        test    eax, eax
        jne    L_214a
        push    edi
        mov    ecx, esi
        call    FUN_00411b00
L_214a:
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        mov    ecx, eax
        call    FUN_0041f600
        pop    edi
        pop    esi
        ret    8
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
        call    FUN_0041f600
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
        je    L_21a7
        mov    ecx, dword ptr [ebp + 0xc]
        push    ecx
        mov    ecx, eax
        call    FUN_0041f680
        pop    edi
        mov    al, 1
        pop    esi
        pop    ebp
        ret    0xc
L_21a7:
        mov    al, byte ptr [ebp + 0x10]
        test    al, al
        je    L_21cb
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
        je    L_21cb
        int 3    
L_21cb:
        pop    edi
        xor    al, al
        pop    esi
        pop    ebp
        ret    0xc
    }
}
