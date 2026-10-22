/*
 * FUN_004bc6c5 (extent 0x4bc6c5-0x4bc771) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007daac0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004bc510(void);
extern void __cdecl FUN_004bcf30(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004bc6c5(void)
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
        mov    eax, dword ptr [g_007daac0]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x15c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_c70e
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_004bc510
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_c70e:
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
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        push    esi
        mov    esi, ecx
        push    ebx
        call    FUN_004bcf30
        mov    eax, dword ptr [esi + 0x158]
        test    ax, ax
        jbe    L_c76a
        mov    esi, dword ptr [esi + 0x154]
        push    ebp
        and    eax, 0xffff
        push    edi
        lea    edi, [esi + 4]
        mov    ebp, eax
L_c74b:
        mov    eax, dword ptr [ebx]
        push    4
        push    esi
        mov    ecx, ebx
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        push    edi
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        add    esi, 8
        add    edi, 8
        dec    ebp
        jne    L_c74b
        pop    edi
        pop    ebp
L_c76a:
        pop    esi
        pop    ebx
        ret    4
        nop    
        ret    
    }
}
