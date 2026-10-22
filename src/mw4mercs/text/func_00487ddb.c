/*
 * FUN_00487ddb (extent 0x487ddb-0x4880cf) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b9590;
extern int    g_007da5fc;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00487ce0(void);
extern void __cdecl FUN_00487e30(void);
extern void __cdecl FUN_00487e40(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00487ddb(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x1c]
        push    ebp
        xor    ebp, ebp
        test    eax, eax
        jle    L_7e2c
        push    ebx
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x14]
        mov    ebx, eax
L_7df4:
        mov    eax, dword ptr [g_007da5fc]
        mov    esi, dword ptr [edi]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_7e10
        xor    eax, eax
        mov    ax, word ptr [esi + 0x54]
        jmp    L_7e16
L_7e10:
        xor    eax, eax
        mov    ax, word ptr [esi + 0xa]
L_7e16:
        cmp    eax, 0xffff
        je    L_7e1f
        add    ebp, eax
L_7e1f:
        add    edi, 4
        dec    ebx
        jne    L_7df4
        pop    edi
        pop    esi
        pop    ebx
        mov    eax, ebp
        pop    ebp
        ret    
L_7e2c:
        mov    eax, ebp
        pop    ebp
        ret    
        mov    eax, dword ptr [ecx + 0x14]
        mov    ecx, dword ptr [esp + 4]
        mov    eax, dword ptr [eax + ecx*4]
        ret    4
        nop    
        nop    
        nop    
        xor    edx, edx
        mov    dl, byte ptr [ecx + 0x1c]
        push    esi
        xor    eax, eax
        test    edx, edx
        jle    L_7e5f
        mov    ecx, dword ptr [ecx + 0x14]
        mov    esi, dword ptr [esp + 8]
L_7e53:
        cmp    dword ptr [ecx], esi
        je    L_7e62
        inc    eax
        add    ecx, 4
        cmp    eax, edx
        jl    L_7e53
L_7e5f:
        or    eax, 0xffffffff
L_7e62:
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
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    edi
        mov    edi, ecx
        push    esi
        call    FUN_00487e40
        mov    ebx, eax
        test    ebx, ebx
        jl    L_7eb4
        dec    word ptr [esi + 8]
        mov    ax, word ptr [esi + 8]
        test    ax, ax
        jne    L_7e9e
        test    esi, esi
        je    L_7e9e
        mov    eax, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [eax]
L_7e9e:
        mov    ecx, dword ptr [edi + 0x14]
        mov    eax, dword ptr [esp + 0x14]
        inc    word ptr [eax + 8]
        pop    edi
        mov    dword ptr [ecx + ebx*4], eax
        pop    esi
        mov    al, 1
        pop    ebx
        ret    8
L_7eb4:
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        ret    8
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        push    esi
        mov    esi, ecx
        push    ebx
        call    FUN_00487e40
        test    eax, eax
        jge    L_7ed9
        pop    esi
        xor    eax, eax
        pop    ebx
        ret    4
L_7ed9:
        xor    edx, edx
        mov    dl, byte ptr [esi + 0x1c]
        mov    ecx, edx
        and    ecx, 0xff
        dec    ecx
        cmp    eax, ecx
        jge    L_7f04
        push    ebp
        push    edi
        mov    edi, dword ptr [esi + 0x14]
        sub    ecx, eax
        lea    edi, [edi + eax*4]
        add    eax, ecx
L_7ef7:
        mov    ebp, dword ptr [edi + 4]
        mov    dword ptr [edi], ebp
        add    edi, 4
        dec    ecx
        jne    L_7ef7
        pop    edi
        pop    ebp
L_7f04:
        mov    ecx, dword ptr [esi + 0x14]
        dec    dl
        dec    word ptr [ebx + 8]
        cmp    word ptr [ebx + 8], 0
        mov    dword ptr [ecx + eax*4], 0
        mov    byte ptr [esi + 0x1c], dl
        jne    L_7f2a
        test    ebx, ebx
        je    L_7f2a
        mov    edx, dword ptr [ebx]
        push    1
        mov    ecx, ebx
        call    dword ptr [edx]
L_7f2a:
        pop    esi
        mov    eax, ebx
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    edi
        mov    edi, ecx
        push    esi
        call    FUN_00487e30
        test    esi, esi
        mov    ebx, eax
        jl    L_7faf
        xor    edx, edx
        mov    dl, byte ptr [edi + 0x1c]
        mov    eax, edx
        and    eax, 0xff
        cmp    esi, eax
        jge    L_7faf
        dec    eax
        cmp    esi, eax
        jge    L_7f81
        mov    ecx, dword ptr [edi + 0x14]
        sub    eax, esi
        lea    ecx, [ecx + esi*4]
        push    ebp
        add    esi, eax
L_7f75:
        mov    ebp, dword ptr [ecx + 4]
        mov    dword ptr [ecx], ebp
        add    ecx, 4
        dec    eax
        jne    L_7f75
        pop    ebp
L_7f81:
        mov    eax, dword ptr [edi + 0x14]
        dec    dl
        dec    word ptr [ebx + 8]
        cmp    word ptr [ebx + 8], 0
        mov    dword ptr [eax + esi*4], 0
        mov    byte ptr [edi + 0x1c], dl
        jne    L_7fa7
        test    ebx, ebx
        je    L_7fa7
        mov    edx, dword ptr [ebx]
        push    1
        mov    ecx, ebx
        call    dword ptr [edx]
L_7fa7:
        pop    edi
        pop    esi
        mov    eax, ebx
        pop    ebx
        ret    4
L_7faf:
        pop    edi
        pop    esi
        xor    eax, eax
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
        push    ecx
        push    ebx
        push    esi
        xor    ebx, ebx
        mov    esi, ecx
        mov    bl, byte ptr [esi + 0x1c]
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        and    ebx, 0xff
        cmp    edi, ebx
        mov    dword ptr [esp + 0xc], ebx
        jl    L_7ff3
        mov    eax, dword ptr [esp + 0x14]
        push    eax
        call    FUN_00487ce0
        xor    eax, eax
        mov    al, byte ptr [esi + 0x1c]
        pop    edi
        pop    esi
        pop    ebx
        pop    ecx
        ret    8
L_7ff3:
        mov    eax, dword ptr [esi + 0x18]
        cmp    ebx, eax
        jae    L_8002
        test    eax, eax
        jne    L_808e
L_8002:
        mov    ecx, dword ptr [g_007b9590]
        push    ebp
        push    ecx
        call    FUN_006f4950
        mov    eax, dword ptr [esi + 0x18]
        lea    ebp, [ebx + 4]
        cmp    ebp, eax
        je    L_8088
        test    ebp, ebp
        jbe    L_8072
        lea    edx, [ebp*4]
        push    edx
        call    FUN_004084d0
        mov    edx, dword ptr [esi + 0x14]
        add    esp, 4
        test    edx, edx
        mov    edi, eax
        je    L_8069
        mov    ecx, dword ptr [esi + 0x18]
        cmp    ebp, ecx
        jae    L_803f
        mov    ecx, ebp
L_803f:
        mov    eax, ecx
        dec    ecx
        test    eax, eax
        je    L_805d
        lea    eax, [edi + ecx*4]
        sub    edx, edi
        inc    ecx
L_804c:
        mov    ebx, dword ptr [edx + eax]
        mov    dword ptr [eax], ebx
        dec    ecx
        sub    eax, 4
        test    ecx, ecx
        ja    L_804c
        mov    ebx, dword ptr [esp + 0x10]
L_805d:
        mov    eax, dword ptr [esi + 0x14]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_8069:
        mov    dword ptr [esi + 0x14], edi
        mov    edi, dword ptr [esp + 0x1c]
        jmp    L_8085
L_8072:
        mov    ecx, dword ptr [esi + 0x14]
        push    ecx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [esi + 0x14], 0
L_8085:
        mov    dword ptr [esi + 0x18], ebp
L_8088:
        call    FUN_006f49a0
        pop    ebp
L_808e:
        mov    eax, ebx
        cmp    eax, edi
        jle    L_80ab
        mov    edx, dword ptr [esi + 0x14]
        mov    ecx, eax
        sub    ecx, edi
        lea    edx, [edx + eax*4]
        sub    eax, ecx
L_80a0:
        mov    edi, dword ptr [edx - 4]
        mov    dword ptr [edx], edi
        add    edx, -4
        dec    ecx
        jne    L_80a0
L_80ab:
        mov    edx, dword ptr [esi + 0x14]
        mov    ecx, dword ptr [esp + 0x14]
        inc    word ptr [ecx + 8]
        mov    dword ptr [edx + eax*4], ecx
        xor    eax, eax
        mov    al, byte ptr [esi + 0x1c]
        inc    al
        pop    edi
        mov    byte ptr [esi + 0x1c], al
        pop    esi
        pop    ebx
        and    eax, 0xff
        pop    ecx
        ret    8
    }
}
