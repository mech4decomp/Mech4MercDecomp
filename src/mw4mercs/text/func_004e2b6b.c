/*
 * FUN_004e2b6b (extent 0x4e2b6b-0x4e2bd4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004d1ee0(void);
extern void __cdecl FUN_00500950(void);

__declspec(naked) void FUN_004e2b6b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        add    esi, edx
        push    ecx
        push    esi
        call    FUN_004d1ee0
        add    esp, 0xc
        test    al, al
        jne    L_2ba9
        mov    eax, dword ptr [esp + 0xc]
        mov    dx, word ptr [esi]
        mov    cx, word ptr [esi + 2]
        mov    word ptr [eax], dx
        mov    word ptr [eax + 2], cx
        mov    al, 1
        pop    esi
        ret    0x10
L_2ba9:
        xor    al, al
        pop    esi
        ret    0x10
        nop    
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x773cd0
        call    FUN_00500950
        test    byte ptr [esp + 8], 1
        je    L_2bce
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2bce:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
