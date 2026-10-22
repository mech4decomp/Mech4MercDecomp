/*
 * FUN_00411bc4 (extent 0x411bc4-0x411c40) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00411a10(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00411bc4(void)
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
        push    esi
        mov    esi, dword ptr [ecx + 0x18]
L_1bd4:
        test    esi, esi
        je    L_1be9
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_1be9
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        jmp    L_1bd4
L_1be9:
        pop    esi
        ret    
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
        je    L_1c14
        mov    eax, dword ptr [eax + 0x18]
        mov    ecx, dword ptr [ebp + 0xc]
        pop    edi
        mov    dword ptr [ecx], eax
        mov    al, 1
        pop    esi
        pop    ebp
        ret    0xc
L_1c14:
        mov    al, byte ptr [ebp + 0x10]
        test    al, al
        je    L_1c38
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
        je    L_1c38
        int 3    
L_1c38:
        pop    edi
        xor    al, al
        pop    esi
        pop    ebp
        ret    0xc
    }
}
