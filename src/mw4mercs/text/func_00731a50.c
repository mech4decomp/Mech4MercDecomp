/*
 * FUN_00731a50 (extent 0x731a50-0x731c7d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b06c;
extern int    g_0076b3c4;
extern float  g_0076dd60;
extern int    g_008816cc;
extern float  g_008816d8;
extern char   g_008816dc;
extern int    g_008816ec;
extern int    g_008a997c;
extern void __cdecl FUN_00731c20(void);
extern void __cdecl FUN_007323d0(void);

__declspec(naked) void FUN_00731a50(void)
{
    __asm {
        sub    esp, 0x10
        push    ebx
        mov    ebx, dword ptr [esp + 0x24]
        push    ebp
        mov    ebp, dword ptr [esp + 0x20]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x2c]
        push    0x20
        lea    eax, [esp + 0x2c]
        xor    esi, esi
        push    eax
        lea    ecx, [esp + 0x24]
        push    ecx
        mov    dword ptr [esp + 0x1c], esi
        mov    byte ptr [ebx], 0
        mov    dword ptr [ebp], esi
        mov    dword ptr [edi], esi
        call    FUN_00731c20
        mov    edx, dword ptr [g_008816d8]
        mov    al, byte ptr [g_008816dc]
        mov    ecx, dword ptr [g_008816cc]
        push    esi
        mov    dword ptr [g_008816ec], esi
        mov    esi, dword ptr [esp + 0x28]
        push    esi
        mov    dword ptr [esp + 0x1c], edx
        mov    byte ptr [esp + 0x38], al
        mov    dword ptr [esp + 0x34], ecx
        call    FUN_007323d0
        test    eax, eax
        je    L_1ac8
L_1ab4:
        mov    edx, dword ptr [edi]
        add    esi, eax
        push    0
        add    edx, eax
        push    esi
        mov    dword ptr [edi], edx
        call    FUN_007323d0
        test    eax, eax
        jne    L_1ab4
L_1ac8:
        mov    al, byte ptr [esi]
        cmp    al, 0xd
        jne    L_1aef
        cmp    byte ptr [esi + 1], 0xa
        mov    eax, 1
        mov    dword ptr [ebp], eax
        jne    L_1ae0
        inc    eax
        mov    dword ptr [ebp], eax
L_1ae0:
        pop    edi
        pop    esi
        pop    ebp
        mov    byte ptr [ebx], 1
        xor    eax, eax
        pop    ebx
        add    esp, 0x10
        ret    0x10
L_1aef:
        cmp    al, 0xa
        jne    L_1b09
        pop    edi
        pop    esi
        mov    dword ptr [ebp], 1
        pop    ebp
        mov    byte ptr [ebx], 1
        xor    eax, eax
        pop    ebx
        add    esp, 0x10
        ret    0x10
L_1b09:
        mov    ebx, dword ptr [g_0076b3c4]
L_1b0f:
        mov    al, byte ptr [esi]
        cmp    al, 0x20
        je    L_1bab
        cmp    al, 0xd
        je    L_1be7
        cmp    al, 0xa
        je    L_1be7
        test    al, al
        je    L_1ba8
        cmp    al, 0x2f
        jne    L_1b3d
        push    1
        push    esi
        call    FUN_007323d0
        test    eax, eax
        jne    L_1ba8
L_1b3d:
        xor    eax, eax
        mov    al, byte ptr [esi]
        mov    cl, byte ptr [eax + 0x896b88]
        test    cl, cl
        lea    edi, [eax + 0x896b88]
        je    L_1b5d
        xor    edx, edx
        mov    dl, byte ptr [esi + 1]
        shl    eax, 8
        mov    ecx, edx
        add    eax, ecx
L_1b5d:
        push    eax
        lea    edx, [esp + 0x2c]
        push    edx
        lea    eax, [esp + 0x20]
        push    eax
        call    FUN_00731c20
        mov    eax, dword ptr [ebp]
        xor    ecx, ecx
        mov    cl, byte ptr [edi]
        push    esi
        inc    ecx
        add    eax, ecx
        mov    dword ptr [ebp], eax
        call    ebx
        mov    ecx, dword ptr [g_008816ec]
        mov    esi, eax
        mov    eax, dword ptr [esp + 0x2c]
        add    esp, 4
        cmp    eax, ecx
        jbe    L_1b95
        mov    dword ptr [g_008816ec], eax
L_1b95:
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0x18]
        add    eax, edx
        mov    dword ptr [esp + 0x10], eax
        jmp    L_1b0f
L_1ba8:
        dec    dword ptr [ebp]
L_1bab:
        cmp    byte ptr [esi], 0x20
        mov    eax, dword ptr [esp + 0x10]
        jne    L_1bb8
        add    eax, dword ptr [esp + 0x1c]
L_1bb8:
        mov    ecx, dword ptr [ebp]
        mov    edx, dword ptr [esp + 0x14]
        inc    ecx
        mov    dword ptr [ebp], ecx
        mov    ecx, dword ptr [esp + 0x2c]
        pop    edi
        pop    esi
        mov    dword ptr [g_008816cc], ecx
        mov    cl, byte ptr [esp + 0x28]
        pop    ebp
        mov    dword ptr [g_008816d8], edx
        mov    byte ptr [g_008816dc], cl
        pop    ebx
        add    esp, 0x10
        ret    0x10
L_1be7:
        mov    eax, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x2c]
        mov    cl, byte ptr [esp + 0x30]
        pop    edi
        pop    esi
        pop    ebp
        mov    dword ptr [g_008816d8], eax
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [g_008816cc], edx
        mov    byte ptr [g_008816dc], cl
        pop    ebx
        add    esp, 0x10
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
        sub    esp, 0xc
        mov    ecx, dword ptr [g_008a997c]
        __emit 0x8D  // lea eax, [esp+0] (explicit disp8=0)
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    eax
        mov    eax, dword ptr [esp + 0x1c]
        push    eax
        push    eax
        push    ecx
        call    dword ptr [g_0076b06c]
        fld    dword ptr [g_008816d8]
        mov    edx, dword ptr [esp + 4]
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 0x10]
        add    eax, edx
        __emit 0x8B  // mov edx, [esp+0] (explicit disp8=0)
        __emit 0x54
        __emit 0x24
        __emit 0x00
        fadd    dword ptr [g_0076dd60]
        add    eax, edx
        mov    dword ptr [ecx], eax
        mov    eax, dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x18]
        and    edx, 0x7fffff
        sub    edx, 0x400000
        mov    dword ptr [eax], edx
        add    esp, 0xc
        ret    0xc
    }
}
