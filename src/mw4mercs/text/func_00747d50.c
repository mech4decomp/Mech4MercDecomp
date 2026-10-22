/*
 * FUN_00747d50 (extent 0x747d50-0x747dfb) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008aacbc;
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00747d00(void);

__declspec(naked) void FUN_00747d50(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        push    esi
        mov    esi, dword ptr [ebp + 0xc]
        push    edi
        mov    edi, dword ptr [ebp + 8]
        push    8
        push    esi
        push    edi
        call    FUN_00747d00
        test    al, al
        jne    L_7d6e
        pop    edi
        pop    esi
        pop    ebp
        ret    8
L_7d6e:
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_7dab
        lea    ecx, [eax + 8]
        cmp    ecx, 0x6c
        jbe    L_7d96
        push    0x7aa370
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_7d8e
        int 3    
L_7d8e:
        pop    edi
        xor    al, al
        pop    esi
        pop    ebp
        ret    8
L_7d96:
        push    eax
        add    esi, 8
        push    esi
        push    edi
        call    FUN_00747d00
        test    al, al
        jne    L_7dab
        pop    edi
        pop    esi
        pop    ebp
        ret    8
L_7dab:
        pop    edi
        mov    al, 1
        pop    esi
        pop    ebp
        ret    8
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
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        test    esi, esi
        push    edi
        jle    L_7deb
        mov    ebx, dword ptr [esp + 0x10]
        mov    edi, dword ptr [esp + 0x14]
L_7dd3:
        push    0
        push    esi
        push    edi
        push    ebx
        call    dword ptr [g_008aacbc]
        cmp    eax, -1
        je    L_7df3
        sub    esi, eax
        add    edi, eax
        test    esi, esi
        jg    L_7dd3
L_7deb:
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        ret    0xc
L_7df3:
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        ret    0xc
    }
}
