/*
 * FUN_00597126 (extent 0x597126-0x5971ab) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_00597126(void)
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
        push    ebp
        mov    ebp, esp
        push    esi
        mov    esi, dword ptr [ebp + 8]
        push    edi
        mov    edi, dword ptr [g_0076b2ac]
        push    0x78315c
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_7161
        pop    edi
        pop    esi
        pop    ebp
        ret    
L_7161:
        push    0x783150
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_7179
        pop    edi
        mov    eax, 1
        pop    esi
        pop    ebp
        ret    
L_7179:
        push    0x783144
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_7191
        pop    edi
        mov    eax, 2
        pop    esi
        pop    ebp
        ret    
L_7191:
        push    esi
        push    0x78311c
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_71a4
        int 3    
L_71a4:
        pop    edi
        or    eax, 0xffffffff
        pop    esi
        pop    ebp
        ret    
    }
}
