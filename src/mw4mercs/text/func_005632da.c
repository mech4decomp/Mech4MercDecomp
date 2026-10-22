/*
 * FUN_005632da (extent 0x5632da-0x563466) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern char   g_007de634;
extern void __cdecl FUN_004fcc00(void);
extern void __cdecl FUN_00547ba0(void);
extern void __cdecl FUN_005480c0(void);
extern void __cdecl FUN_00563480(void);
extern void __cdecl FUN_005634e0(void);
extern void __cdecl FUN_00563520(void);

__declspec(naked) void FUN_005632da(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
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
        nop    
        nop    
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
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        push    ebx
        push    esi
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        push    edi
        jne    L_3364
        mov    esi, dword ptr [esp + 0x10]
        lea    edx, [esp + 0x14]
        xor    ebx, ebx
        push    edx
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esi + 8]
        mov    dword ptr [esi], ebx
        mov    dword ptr [esi + 4], ebx
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_00547ba0
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, 0x76b768
        repne scasb
        not    ecx
        dec    ecx
        add    ecx, 0x76b768
        push    ecx
        push    0x76b768
        mov    ecx, esi
        call    FUN_005480c0
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    
L_3364:
        mov    ecx, dword ptr [esp + 0x14]
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcc00
        xor    ebx, ebx
        cmp    eax, ebx
        jne    L_33c9
        mov    esi, dword ptr [esp + 0x10]
        lea    edx, [esp + 0x14]
        push    edx
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esi + 8]
        mov    dword ptr [esi], ebx
        mov    dword ptr [esi + 4], ebx
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_00547ba0
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, 0x76b768
        repne scasb
        not    ecx
        dec    ecx
        add    ecx, 0x76b768
        push    ecx
        push    0x76b768
        mov    ecx, esi
        call    FUN_00563480
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    
L_33c9:
        mov    esi, dword ptr [esp + 0x10]
        mov    dl, byte ptr [esp + 0x10]
        push    ebp
        mov    ebp, dword ptr [eax + 0x10]
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, ebp
        repne scasb
        not    ecx
        dec    ecx
        mov    edi, ecx
        add    edi, ebp
        mov    eax, edi
        sub    eax, ebp
        mov    dword ptr [esi], ebx
        inc    eax
        mov    byte ptr [esi + 8], dl
        push    eax
        mov    ecx, esi
        mov    dword ptr [esi + 4], ebx
        mov    dword ptr [esi + 8], ebx
        call    FUN_005634e0
        mov    ecx, dword ptr [esi]
        push    ecx
        push    edi
        push    ebp
        call    FUN_00563520
        add    esp, 0xc
        pop    ebp
        mov    dword ptr [esi + 4], eax
        mov    byte ptr [eax], bl
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
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
        nop    
        nop    
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
        nop    
        nop    
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
        nop    
        nop    
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
        nop    
        nop    
        mov    al, byte ptr [g_007de634]
        ret    
    }
}
