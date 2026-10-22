/*
 * FUN_004cc94e (extent 0x4cc94e-0x4cc9fc) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00701f20(void);

__declspec(naked) void FUN_004cc94e(void)
{
    __asm {
        nop    
        nop    
        push    ebx
        mov    bl, byte ptr [esp + 8]
        test    bl, 2
        push    esi
        mov    esi, ecx
        je    L_c9b8
        mov    ecx, dword ptr [esi - 4]
        push    edi
        lea    edi, [esi - 4]
        mov    eax, ecx
        shl    eax, 8
        add    eax, ecx
        dec    ecx
        lea    eax, [eax + eax*2]
        lea    eax, [esi + eax*4]
        js    L_c9a2
        push    ebp
        lea    esi, [eax + 4]
        lea    ebp, [ecx + 1]
L_c97b:
        mov    eax, dword ptr [esi - 0xc0c]
        sub    esi, 0xc0c
        test    eax, eax
        je    L_c99e
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_c99e
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_c99e:
        dec    ebp
        jne    L_c97b
        pop    ebp
L_c9a2:
        test    bl, 1
        je    L_c9b0
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_c9b0:
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ebx
        ret    4
L_c9b8:
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        je    L_c9d2
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_c9d2
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_c9d2:
        test    bl, 1
        je    L_c9e0
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_c9e0:
        mov    eax, esi
        pop    esi
        pop    ebx
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
        push    0
        push    0
        push    0x1e
        call    FUN_00701f20
        ret    
    }
}
