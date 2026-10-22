/*
 * FUN_004cf8d8 (extent 0x4cf8d8-0x4cfb7a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern int    g_0076b2b0;
extern int    g_0076b318;
extern int    g_007db0a0;
extern int    g_00858a44;
extern int    g_00858a48;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00701f20(void);
extern void __cdecl FUN_00707920(void);

__declspec(naked) void FUN_004cf8d8(void)
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
        mov    al, 1
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
        mov    al, 1
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
        mov    eax, 0x771d44
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    eax, dword ptr [eax + 0x10]
        mov    ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 4]
        mov    al, 1
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
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x14]
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        push    esi
        mov    esi, dword ptr [ebx + 0x10]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, dword ptr [esp + 0x28]
        push    edi
        push    ecx
        mov    ecx, dword ptr [esp + 0x24]
        push    edx
        mov    edx, dword ptr [esp + 0x20]
        push    ecx
        push    edx
        push    esi
        call    dword ptr [eax + 8]
        test    al, al
        je    L_f99b
        test    edi, 0x100
        jne    L_f980
        mov    eax, dword ptr [esp + 0x18]
        mov    edi, dword ptr [esi]
        push    0
        push    0
        push    eax
        push    0
        push    0
        push    4
        call    FUN_00701f20
        push    eax
        push    esi
        call    dword ptr [edi + 0x18]
L_f980:
        mov    edi, dword ptr [esi]
        push    0
        call    FUN_00707920
        push    eax
        push    0x79fa54
        push    esi
        call    dword ptr [edi + 0x10]
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        ret    0x1c
L_f99b:
        pop    edi
        pop    esi
        mov    byte ptr [ebx + 4], 1
        xor    al, al
        pop    ebx
        ret    0x1c
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esp + 4]
        mov    eax, dword ptr [eax + 0x10]
        mov    ecx, dword ptr [eax]
        push    0
        push    0
        push    edx
        mov    edx, dword ptr [esp + 0x14]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x18]
        mov    al, 1
        ret    0x10
        mov    edx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esp + 4]
        mov    eax, dword ptr [eax + 0x10]
        mov    ecx, dword ptr [eax]
        push    0
        push    0
        push    edx
        mov    edx, dword ptr [esp + 0x14]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x1c]
        mov    al, 1
        ret    0x10
        mov    edx, dword ptr [esp + 8]
        mov    eax, dword ptr [esp + 4]
        mov    eax, dword ptr [eax + 0x10]
        mov    ecx, dword ptr [eax]
        push    edx
        mov    edx, dword ptr [esp + 0x14]
        push    edx
        mov    edx, dword ptr [esp + 0x14]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov    al, 1
        ret    0x10
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
        mov    edx, dword ptr [esp + 8]
        mov    eax, dword ptr [esp + 4]
        mov    eax, dword ptr [eax + 0x10]
        mov    ecx, dword ptr [eax]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov    al, 1
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
        xor    eax, eax
        ret    
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
        push    ebp
        mov    ebp, dword ptr [g_0076b2ac]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x1c]
        xor    ebx, ebx
        mov    esi, 0x7b3cd0
L_fa65:
        mov    eax, dword ptr [esi]
        push    eax
        push    edi
        call    ebp
        add    esp, 8
        test    eax, eax
        je    L_fab4
        add    esi, 0xc
        inc    ebx
        cmp    esi, 0x7b4318
        jb    L_fa65
        mov    ebx, dword ptr [g_0076b2b0]
        push    8
        push    0x772364
        push    edi
        call    ebx
        add    esp, 0xc
        test    eax, eax
        jne    L_fb13
        push    4
        lea    esi, [edi + 8]
        push    0x77235c
        push    esi
        call    ebx
        add    esp, 0xc
        test    eax, eax
        jne    L_fadb
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [edx], eax
        add    edi, 0xc
        jmp    L_faf9
L_fab4:
        mov    edx, dword ptr [esp + 0x14]
        lea    eax, [ebx + ebx*2]
        shl    eax, 2
        mov    ecx, dword ptr [eax + 0x7b3cd4]
        mov    eax, dword ptr [eax + 0x7b3cd8]
        pop    edi
        pop    esi
        mov    dword ptr [edx], ecx
        mov    ecx, dword ptr [esp + 0x10]
        pop    ebp
        mov    dword ptr [ecx], eax
        mov    al, 1
        pop    ebx
        ret    0xc
L_fadb:
        push    6
        push    0x772354
        push    esi
        call    ebx
        add    esp, 0xc
        test    eax, eax
        jne    L_fb13
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [edx], 1
        add    edi, 0xe
L_faf9:
        push    edi
        call    dword ptr [g_0076b318]
        mov    ecx, dword ptr [esp + 0x1c]
        add    esp, 4
        pop    edi
        pop    esi
        dec    eax
        pop    ebp
        mov    dword ptr [ecx], eax
        mov    al, 1
        pop    ebx
        ret    0xc
L_fb13:
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        xor    eax, eax
        mov    dword ptr [esi + 0x10], eax
        push    0x200
        mov    dword ptr [esi + 0x14], eax
        mov    dword ptr [esi], 0x77237c
        mov    dword ptr [g_007db0a0], esi
        mov    dword ptr [g_00858a44], 0x4cfcb0
        mov    dword ptr [g_00858a48], 0x4cfe40
        mov    dword ptr [esi + 0xc], 0x80
        call    FUN_004084d0
        mov    dword ptr [eax], 0x76b768
        mov    dword ptr [esi + 4], eax
        add    esp, 4
        mov    dword ptr [eax + 4], 0x772370
        mov    dword ptr [esi + 8], 1
        mov    eax, esi
        pop    esi
        ret    
    }
}
