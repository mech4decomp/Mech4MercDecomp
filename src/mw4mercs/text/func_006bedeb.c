/*
 * FUN_006bedeb (extent 0x6bedeb-0x6bef9c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076dd60;
extern float  g_00770168;
extern float  g_007704c0;
extern float  g_0077d084;
extern int    g_007b60b4;
extern int    g_0082f3c8;
extern int    g_00858940;
extern int    g_00858944;
extern void __cdecl FUN_007225b0(void);
extern void __cdecl FUN_00722660(void);
extern void __cdecl FUN_007226f0(void);
extern void __cdecl FUN_00722f70(void);

__declspec(naked) void FUN_006bedeb(void)
{
    __asm {
        nop    
        outsd
        in    eax, dx
        imul    eax, dword ptr [eax], 0x27
        in    eax, dx
        imul    eax, dword ptr [eax], -4
        in    al, dx
        imul    eax, dword ptr [eax], -0x42
        in    al, dx
        imul    eax, dword ptr [eax], -0x23
        in    al, dx
        imul    eax, dword ptr [eax], -0x5f
        mov    ah, 0x60
        jnp    L_ee05
L_ee05:
        sub    esp, 0x10
        push    ebx
        push    esi
        push    0x3d08850a
        push    1
        push    eax
        call    FUN_007226f0
        mov    ecx, dword ptr [g_007b60b4]
        xor    ebx, ebx
        push    ebx
        push    ecx
        call    FUN_007225b0
        fcom    dword ptr [g_007704c0]
        fnstsw  ax
        test    ah, 0x41
        je    L_ee40
        fcom    dword ptr [g_0077d084]
        fnstsw  ax
        test    ah, 1
        je    L_ee6d
L_ee40:
        fmul    dword ptr [g_00770168]
        mov    eax, dword ptr [g_0082f3c8]
        mov    ecx, dword ptr [eax]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 8]
        and    edx, 0x7fffff
        sub    edx, 0x400000
        add    ecx, edx
        mov    dword ptr [eax], ecx
        jmp    L_ee6f
L_ee6d:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_ee6f:
        mov    eax, dword ptr [g_007b60b4]
        push    1
        push    eax
        call    FUN_007225b0
        fcom    dword ptr [g_007704c0]
        mov    ecx, dword ptr [g_0082f3c8]
        fnstsw  ax
        test    ah, 0x41
        je    L_ee9c
        fcom    dword ptr [g_0077d084]
        fnstsw  ax
        test    ah, 1
        je    L_eec6
L_ee9c:
        fmul    dword ptr [g_00770168]
        mov    eax, dword ptr [ecx + 4]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 8]
        and    edx, 0x7fffff
        sub    edx, 0x400000
        add    eax, edx
        mov    dword ptr [ecx + 4], eax
        jmp    L_eec8
L_eec6:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_eec8:
        mov    eax, dword ptr [ecx]
        mov    edx, dword ptr [g_00858940]
        cmp    eax, edx
        jle    L_eed8
        mov    dword ptr [ecx], edx
        jmp    L_eede
L_eed8:
        cmp    eax, ebx
        jge    L_eede
        mov    dword ptr [ecx], ebx
L_eede:
        mov    eax, dword ptr [ecx + 4]
        mov    edx, dword ptr [g_00858944]
        cmp    eax, edx
        jle    L_eef0
        mov    dword ptr [ecx + 4], edx
        jmp    L_eef7
L_eef0:
        cmp    eax, ebx
        jge    L_eef7
        mov    dword ptr [ecx + 4], ebx
L_eef7:
        mov    ecx, dword ptr [g_007b60b4]
        lea    eax, [esp + 0x10]
        push    eax
        push    ecx
        call    FUN_00722f70
        xor    esi, esi
L_ef0a:
        mov    edx, dword ptr [esp + 0x14]
        shr    edx, 0x10
        and    edx, 0x1f
        cmp    esi, edx
        jae    L_ef2a
        mov    eax, dword ptr [g_007b60b4]
        push    esi
        push    eax
        call    FUN_00722660
        mov    byte ptr [esp + esi + 8], al
        jmp    L_ef2e
L_ef2a:
        mov    byte ptr [esp + esi + 8], bl
L_ef2e:
        cmp    byte ptr [esp + esi + 8], bl
        mov    eax, dword ptr [esi*4 + 0x82e258]
        je    L_ef5c
        sub    eax, ebx
        je    L_ef4f
        dec    eax
        jne    L_ef7c
        mov    dword ptr [esi*4 + 0x82e244], 2
        jmp    L_ef7c
L_ef4f:
        mov    dword ptr [esi*4 + 0x82e244], 1
        jmp    L_ef7c
L_ef5c:
        cmp    eax, 3
        ja    L_ef7c
        jmp    dword ptr [eax*4 + 0x6bef9c]
        mov    dword ptr [esi*4 + 0x82e244], ebx
        jmp    L_ef7c
        mov    dword ptr [esi*4 + 0x82e244], 3
L_ef7c:
        mov    ecx, dword ptr [esi*4 + 0x82e244]
        mov    dword ptr [esi*4 + 0x82e258], ecx
        inc    esi
        cmp    esi, 5
        jb    L_ef0a
        pop    esi
        pop    ebx
        add    esp, 0x10
        ret    
        mov    edi, edi
        // jump-table data @ 0x006BEF9C (0 relocated pointers)
    }
}
