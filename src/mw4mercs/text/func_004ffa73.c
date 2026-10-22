/*
 * FUN_004ffa73 (extent 0x4ffa73-0x4ffd2c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b28c;
extern int    g_0076b298;
extern int    g_0076b2a4;
extern int    g_0076b308;
extern int    g_0076b318;
extern char   g_007dc958;
extern void __cdecl FUN_004ff5e0(void);
extern void __cdecl FUN_004ff9e0(void);
extern void __cdecl FUN_00500040(void);
extern void __cdecl FUN_00500890(void);
extern void __cdecl FUN_0075dfb0(void);
extern void __cdecl FUN_0075dfc8(void);
extern void __cdecl FUN_0075dfce(void);
extern void __cdecl FUN_0075dffe(void);
extern void __cdecl FUN_0075e00a(void);
extern void __cdecl FUN_0075e010(void);
extern void __cdecl FUN_004ffa70(void);

__declspec(naked) void FUN_004ffa73(void)
{
    __asm {
        /* __emit: alignment pad 90 (nop) */
        __emit 0x90
        /* __emit: in-function jump-table DATA (4 dword entries, relocated
           addresses of a prior function at ~0x4FFA52). Inline asm has no `dd`;
           emit the literal patched address bytes (one byte per __emit). */
__emit 0x70
__emit 0xFA
__emit 0x4F
__emit 0x00
__emit 0x52
__emit 0xFA
__emit 0x4F
__emit 0x00
__emit 0x5C
__emit 0xFA
__emit 0x4F
__emit 0x00
__emit 0x66
__emit 0xFA
__emit 0x4F
__emit 0x00
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
        sub    esp, 0x6fc
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x708]
        mov    dword ptr [esp + 0xc], 0
        mov    dword ptr [esp + 0x10], 0
        mov    dword ptr [esp + 8], 0x10
L_fab7:
        mov    esi, dword ptr [edi + 0x88]
        lea    eax, [esp + 0xc]
        push    eax
        push    0
        push    0
        lea    ecx, [esp + 0x30]
        push    ecx
        push    0x40
        mov    dword ptr [esp + 0x3c], esi
        mov    dword ptr [esp + 0x38], 1
        call    FUN_0075dfce
        cmp    eax, -1
        je    L_fb4e
        test    eax, eax
        je    L_fb4e
        lea    edx, [esp + 8]
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        push    0
        push    0x5db
        lea    ecx, [esp + 0x138]
        push    ecx
        push    esi
        call    FUN_0075dfc8
        cmp    eax, -1
        je    L_fab7
        lea    edx, [esp + 0x128]
        push    0x772fec
        push    edx
        call    dword ptr [g_0076b298]
        add    esp, 8
        test    eax, eax
        je    L_fab7
        mov    eax, dword ptr [esp + 0x16]
        push    eax
        call    FUN_0075e010
        mov    ecx, dword ptr [esp + 0x18]
        and    eax, 0xffff
        push    eax
        push    ecx
        call    FUN_0075e00a
        push    eax
        push    edi
        call    FUN_004ff9e0
        add    esp, 0xc
        jmp    L_fab7
L_fb4e:
        call    FUN_00500890
        sub    eax, dword ptr [edi + 0x8c]
        cmp    eax, 0xbb8
        jbe    L_fb81
        mov    edx, dword ptr [edi + 0x88]
        push    edx
        call    FUN_0075dfb0
        push    3
        push    edi
        mov    dword ptr [edi + 0x88], 0xffffffff
        call    FUN_004ff5e0
        add    esp, 8
L_fb81:
        pop    edi
        xor    eax, eax
        pop    esi
        add    esp, 0x6fc
        ret    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x30
        push    ebx
        mov    ebx, dword ptr [esp + 0x38]
        push    ebp
        push    esi
        push    edi
        xor    eax, eax
        or    ecx, 0xffffffff
        mov    edi, 0x7dc958
        repne scasb
        mov    edi, dword ptr [ebx + 0x88]
        not    ecx
        push    eax
        dec    ecx
        mov    esi, ecx
        mov    eax, 0x7ff
        sub    eax, esi
        push    eax
        lea    ecx, [esi + g_007dc958]
        push    ecx
        push    edi
        call    FUN_0075dffe
        cmp    eax, -1
        je    L_fcf7
        test    eax, eax
        je    L_fcf7
        mov    byte ptr [eax + esi + g_007dc958], 0
        mov    al, byte ptr [g_007dc958]
        test    al, al
        mov    ebp, 0x7dc958
        je    L_fca0
L_fbf3:
        cmp    byte ptr [ebp + 1], 0x66
        je    L_fcc5
        mov    eax, dword ptr [ebx + 0x74]
        test    eax, eax
        jne    L_fcc5
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, ebp
        repne scasb
        not    ecx
        dec    ecx
        cmp    ecx, 0xe
        jb    L_fca0
        lea    esi, [ebp + 4]
        push    0x3a
        push    esi
        call    dword ptr [g_0076b308]
        add    esp, 8
        test    eax, eax
        je    L_fca0
        push    0x5c
        push    esi
        call    dword ptr [g_0076b2a4]
        add    esp, 8
        test    eax, eax
        je    L_fca0
        mov    al, byte ptr [esi]
        test    al, al
        lea    ecx, [esp + 0x20]
        je    L_fc59
L_fc4a:
        cmp    al, 0x3a
        je    L_fc59
        mov    byte ptr [ecx], al
        mov    al, byte ptr [esi + 1]
        inc    ecx
        inc    esi
        test    al, al
        jne    L_fc4a
L_fc59:
        mov    al, byte ptr [esi + 1]
        inc    esi
        test    al, al
        mov    byte ptr [ecx], 0
        lea    ecx, [esp + 0x10]
        je    L_fc77
L_fc68:
        cmp    al, 0x5c
        je    L_fc77
        mov    byte ptr [ecx], al
        mov    al, byte ptr [esi + 1]
        inc    ecx
        inc    esi
        test    al, al
        jne    L_fc68
L_fc77:
        lea    edx, [esp + 0x10]
        push    edx
        mov    byte ptr [ecx], 0
        mov    ebp, esi
        call    dword ptr [g_0076b318]
        push    eax
        lea    eax, [esp + 0x28]
        push    eax
        push    ebx
        call    FUN_004ff9e0
        mov    al, byte ptr [esi]
        add    esp, 0x10
        test    al, al
        jne    L_fbf3
L_fca0:
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, ebp
        repne scasb
        not    ecx
        push    ecx
        push    ebp
        push    0x7dc958
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x30
        ret    
L_fcc5:
        mov    ecx, dword ptr [ebx + 0x88]
        push    ecx
        call    FUN_0075dfb0
        push    3
        push    ebx
        mov    dword ptr [ebx + 0x88], 0xffffffff
        mov    byte ptr [g_007dc958], 0
        call    FUN_004ff5e0
        add    esp, 8
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x30
        ret    
L_fcf7:
        push    edi
        call    FUN_0075dfb0
        push    ebx
        mov    dword ptr [ebx + 0x88], 0xffffffff
        mov    byte ptr [g_007dc958], 0
        call    FUN_00500040
        push    3
        push    ebx
        call    FUN_004ff5e0
        add    esp, 0xc
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 3
        pop    ebx
        add    esp, 0x30
        ret    
    }
}
