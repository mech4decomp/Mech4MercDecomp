/*
 * FUN_0040e550 (653 B) — __thiscall, RET 0x10. Engine/loader config-string
 * parser: skips leading whitespace, handles "[...]" section headers vs
 * "key=value" pairs, writes the parsed value into *param_3.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b308;                              /* IAT slot for strchr */

extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_0040edc0(void);
extern void __cdecl FUN_00411b00(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_0040df40(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0040e450(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_0040de20(void);

__declspec(naked) void FUN_0040e550(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x10]
        sub     esp, 0x80
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
loc_40E560:
        mov     cl, byte ptr [eax]
        cmp     cl, 0x20
        jz      loc_40E56C
        cmp     cl, 0x9
        jnz     loc_40E56F
loc_40E56C:
        inc     eax
        jmp     loc_40E560
loc_40E56F:
        mov     cl, byte ptr [eax]
        cmp     cl, 0x5b
        jnz     loc_40E5E9
        lea     esi, [eax+1]
loc_40E579:
        mov     al, byte ptr [esi]
        cmp     al, 0x20
        jz      loc_40E583
        cmp     al, 0x9
        jnz     loc_40E586
loc_40E583:
        inc     esi
        jmp     loc_40E579
loc_40E586:
        push    0x5d
        push    esi
        call    dword ptr [g_76b308]                /* strchr */
        add     esp, 0x8
        test    eax, eax
        jz      loc_40E5A9
loc_40E596:
        dec     eax
        cmp     eax, esi
        jbe     loc_40E5A0
        cmp     byte ptr [eax], 0x20
        jz      loc_40E596
loc_40E5A0:
        cmp     byte ptr [eax], 0x9
        jz      loc_40E596
        mov     byte ptr [eax+1], 0x0
loc_40E5A9:
        mov     al, byte ptr [ebx+5]
        test    al, al
        push    esi
        mov     ecx, ebx
        jz      loc_40E5CE
        call    FUN_0040eda0
        mov     ecx, dword ptr [esp+0x9c]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [ecx], eax
        pop     ebx
        add     esp, 0x80
        ret     0x10
loc_40E5CE:
        call    FUN_0040edc0
        mov     edx, dword ptr [esp+0x9c]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [edx], eax
        pop     ebx
        add     esp, 0x80
        ret     0x10
loc_40E5E9:
        test    cl, cl
        jz      loc_40E7D0
        push    0x3d
        push    eax
        mov     edi, eax
        xor     ebp, ebp
        call    dword ptr [g_76b308]                /* strchr */
        add     esp, 0x8
        test    eax, eax
        jz      loc_40E620
        mov     byte ptr [eax], 0x0
        lea     ebp, [eax+1]
        dec     eax
loc_40E60C:
        mov     cl, byte ptr [eax]
        cmp     cl, 0x20
        jz      loc_40E618
        cmp     cl, 0x9
        jnz     loc_40E620
loc_40E618:
        mov     byte ptr [eax], 0x0
        dec     eax
        cmp     eax, edi
        jnc     loc_40E60C
loc_40E620:
        mov     esi, dword ptr [esp+0x9c]
        cmp     dword ptr [esi], 0x0
        jnz     loc_40E63A
        push    0x76b768
        mov     ecx, ebx
        call    FUN_0040edc0
        mov     dword ptr [esi], eax
loc_40E63A:
        mov     ecx, dword ptr [esi]
        push    edi
        call    FUN_00411b00
        test    ebp, ebp
        mov     edi, eax
        mov     dword ptr [esp+0x14], edi
        jz      loc_40E7D0
        mov     esi, 0x76d15c
        mov     eax, ebp
loc_40E657:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     loc_40E67B
        test    cl, cl
        jz      loc_40E677
        mov     dl, byte ptr [eax+1]
        mov     cl, dl
        cmp     dl, byte ptr [esi+1]
        jnz     loc_40E67B
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     loc_40E657
loc_40E677:
        xor     eax, eax
        jmp     loc_40E680
loc_40E67B:
        sbb     eax, eax
        sbb     eax, -0x1
loc_40E680:
        test    eax, eax
        jz      loc_40E6A4
        push    ebp
        lea     ecx, [edi+0x18]
        call    FUN_00412780
        mov     eax, dword ptr [edi+0x10]
        mov     ecx, dword ptr [eax+0x10]
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [ecx+4], 0x1
        pop     ebx
        add     esp, 0x80
        ret     0x10
loc_40E6A4:
        push    0x0
        lea     ecx, [esp+0x44]
        call    FUN_0040dd50
        mov     edx, dword ptr [esp+0x98]
        mov     eax, dword ptr [esp+0x94]
        mov     bl, byte ptr [ebx+6]
        push    0x1
        push    0x0
        push    edx
        push    eax
        lea     ecx, [esp+0x50]
        mov     byte ptr [esp+0x56], bl
        call    FUN_0040df40
        push    0x5
        lea     ecx, [esp+0x1c]
        call    FUN_0041ee70
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x76d158
        repne   scasb
        not     ecx
        dec     ecx
        jz      loc_40E70D
        mov     edx, dword ptr [esp+0x18]
        or      ecx, 0xffffffff
        mov     edi, 0x76d158
        repne   scasb
        not     ecx
        dec     ecx
        push    ecx
        push    0x76d158
        lea     ecx, [esp+0x20]
        call    dword ptr [edx+0x24]
loc_40E70D:
        test    bl, bl
        jz      loc_40E740
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x76d140
        repne   scasb
        not     ecx
        dec     ecx
        jz      loc_40E740
        or      ecx, 0xffffffff
        mov     edi, 0x76d140
        repne   scasb
        mov     eax, dword ptr [esp+0x18]
        not     ecx
        dec     ecx
        push    ecx
        push    0x76d140
        lea     ecx, [esp+0x20]
        call    dword ptr [eax+0x24]
loc_40E740:
        lea     ecx, [esp+0x18]
        push    ecx
        lea     ecx, [esp+0x44]
        call    FUN_0040e450
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x76d13c
        repne   scasb
        not     ecx
        dec     ecx
        mov     byte ptr [esp+0x13], 0x0
        jnz     loc_40E76A
        lea     eax, [esp+0x18]
        jmp     loc_40E78A
loc_40E76A:
        mov     edx, dword ptr [esp+0x18]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x76d13c
        repne   scasb
        not     ecx
        dec     ecx
        push    ecx
        push    0x76d13c
        lea     ecx, [esp+0x20]
        call    dword ptr [edx+0x24]
loc_40E78A:
        mov     edx, dword ptr [eax]
        push    0x1
        lea     ecx, [esp+0x17]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x24]
        mov     edx, dword ptr [esp+0x18]
        push    0x0
        lea     ecx, [esp+0x1c]
        call    dword ptr [edx+0xc]
        mov     eax, dword ptr [esp+0x2c]
        mov     ecx, dword ptr [esp+0x14]
        push    eax
        add     ecx, 0x18
        mov     dword ptr [esp+0x24], 0xffffffec
        call    FUN_00412780
        lea     ecx, [esp+0x18]
        call    FUN_0041ef60
        lea     ecx, [esp+0x40]
        call    FUN_0040de20
loc_40E7D0:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x80
        ret     0x10
    }
}
