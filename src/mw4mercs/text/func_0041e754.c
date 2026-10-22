/*
 * FUN_0041e754 (extent 0x41e754-0x41e909) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_0076d1b8;
extern char   g_0076d1b9;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_0041e754(void)
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
        push    ecx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        call    dword ptr [eax + 8]
        test    eax, eax
        jbe    L_e787
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [esp + 8]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    eax, dword ptr [esp + 4]
        and    eax, 0xff
        pop    esi
        pop    ecx
        ret    
L_e787:
        or    eax, 0xffffffff
        pop    esi
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 8
        mov    eax, dword ptr [ecx]
        push    ebx
        push    esi
        push    edi
        mov    dword ptr [ebp - 4], ecx
        call    dword ptr [eax + 0x28]
        mov    ebx, eax
        cmp    ebx, -1
        je    L_e83f
        or    ecx, 0xffffffff
        xor    eax, eax
        xor    esi, esi
        mov    edi, 0x76d1b8
        repne scasb
        mov    edi, dword ptr [ebp + 8]
        not    ecx
        dec    ecx
        mov    dword ptr [ebp - 8], ecx
L_e7c3:
        cmp    esi, dword ptr [ebp + 0xc]
        jge    L_e83a
        mov    eax, dword ptr [ebp - 8]
        dec    eax
        mov    byte ptr [esi + edi], bl
        je    L_e80b
        dec    eax
        je    L_e7e8
        push    0x76d7e0
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_e81e
        int 3    
        jmp    L_e81e
L_e7e8:
        cmp    bl, byte ptr [g_0076d1b9]
        jne    L_e800
        test    esi, esi
        jle    L_e800
        mov    cl, byte ptr [esi + edi - 1]
        cmp    cl, byte ptr [g_0076d1b8]
        je    L_e825
L_e800:
        mov    ecx, dword ptr [ebp - 4]
        mov    edx, dword ptr [ecx]
        inc    esi
        call    dword ptr [edx + 0x28]
        jmp    L_e81c
L_e80b:
        cmp    bl, byte ptr [g_0076d1b8]
        je    L_e826
        mov    ecx, dword ptr [ebp - 4]
        mov    eax, dword ptr [ecx]
        inc    esi
        call    dword ptr [eax + 0x28]
L_e81c:
        mov    ebx, eax
L_e81e:
        cmp    ebx, -1
        je    L_e826
        jmp    L_e7c3
L_e825:
        dec    esi
L_e826:
        cmp    esi, dword ptr [ebp + 0xc]
        jge    L_e83a
        mov    byte ptr [esi + edi], 0
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0xc
L_e83a:
        mov    byte ptr [esi + edi - 1], 0
L_e83f:
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [ecx]
        push    edx
        mov    edx, dword ptr [esp + 0x10]
        push    edx
        push    0x7b8f04
        mov    dword ptr [esp + 0xc], 0
        call    dword ptr [eax + 0x2c]
        test    al, al
        je    L_e87f
        push    0x7b8f04
        lea    ecx, [esp + 4]
        call    FUN_00412780
L_e87f:
        __emit 0x8B  // 139 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        test    eax, eax
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    dword ptr [esi], eax
        je    L_e8ac
        inc    byte ptr [eax - 1]
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_e8ac
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_e8ac
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_e8ac:
        mov    eax, esi
        pop    esi
        pop    ecx
        ret    0xc
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
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        push    esi
        mov    edi, ecx
        call    FUN_004084d0
        add    esp, 4
        mov    ebp, eax
        mov    eax, dword ptr [edi]
        push    esi
        push    ebp
        mov    ecx, edi
        call    dword ptr [eax + 0x20]
        xor    eax, eax
        test    esi, esi
        jbe    L_e8f8
        mov    edx, dword ptr [esp + 0x10]
        push    ebx
        lea    ecx, [esi + ebp - 1]
L_e8ec:
        mov    bl, byte ptr [ecx]
        mov    byte ptr [eax + edx], bl
        inc    eax
        dec    ecx
        cmp    eax, esi
        jb    L_e8ec
        pop    ebx
L_e8f8:
        push    ebp
        call    FUN_004084e0
        add    esp, 4
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ebp
        ret    8
    }
}
