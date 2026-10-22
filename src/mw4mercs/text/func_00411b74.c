/*
 * FUN_00411b74 (extent 0x411b74-0x411beb) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00411a10(void);
extern void __cdecl FUN_00411b00(void);

__declspec(naked) void FUN_00411b74(void)
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
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00411a10
        test    eax, eax
        jne    L_1b9a
        push    edi
        mov    ecx, esi
        call    FUN_00411b00
L_1b9a:
        pop    edi
        pop    esi
        ret    4
        nop    
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_00411a10
        test    eax, eax
        je    L_1bc0
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx]
        mov    eax, dword ptr [esi + 0x10]
        mov    byte ptr [eax + 4], 1
L_1bc0:
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
    }
}
