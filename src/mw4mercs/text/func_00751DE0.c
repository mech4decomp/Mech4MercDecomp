/*
 * FUN_00751DE0 (1068 B true extent; 1072 B block w/ trailing nop pad) —
 * __stdcall, 1 arg (ret 4). Builds a string into the global buffer at
 * 0x8b9450 and emits a series of formatted log lines (via the function
 * pointer at 0x76b420) based on flag bits in the argument object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00751100(void);

extern unsigned char g_8B9450[];
extern void *g_76B420;

__declspec(naked) void FUN_00751DE0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        push    esi
        push    edi
        mov     byte ptr [g_8B9450], 0
        jne     l_751E1E
        or      ecx, 0xffffffff
        mov     edi, 0x76b9a0
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, 0x8b9450
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        pop     edi
        mov     eax, 0x8b9450
        pop     esi
        ret     4
    l_751E1E:
        cmp     dword ptr [eax], 0x6c
        je      l_751E2D
        pop     edi
        mov     eax, 0x7ad50c
        pop     esi
        ret     4
    l_751E2D:
        mov     esi, dword ptr [g_76B420]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [eax + 4]
        mov     ebx, ebp
        and     ebx, 1
        je      l_751E6B
        mov     ecx, dword ptr [eax + 0x68]
        test    ch, 2
        je      l_751E6B
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9450
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9450
        push    0x7ad520
        push    ecx
        call    esi
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 8
    l_751E6B:
        test    ebx, ebx
        je      l_751EC9
        mov     ecx, dword ptr [eax + 0x68]
        test    ch, 0x10
        je      l_751E9B
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9450
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9450
        push    0x7ad38c
        push    ecx
        call    esi
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 8
    l_751E9B:
        test    ebx, ebx
        je      l_751EC9
        test    byte ptr [eax + 0x68], 0x40
        je      l_751EC9
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9450
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9450
        push    0x7ad37c
        push    ecx
        call    esi
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 8
    l_751EC9:
        mov     ecx, ebp
        and     ecx, 6
        cmp     cl, 6
        jne     l_751EFF
        mov     edx, dword ptr [eax + 8]
        mov     eax, dword ptr [eax + 0xc]
        push    edx
        push    eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9450
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9450
        push    0x7a3f18
        push    ecx
        call    esi
        mov     eax, dword ptr [esp + 0x24]
        add     esp, 0x10
    l_751EFF:
        test    ebp, 0x1000
        je      l_751F35
        add     eax, 0x48
        push    eax
        call    FUN_00751100
        push    eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9450
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9450
        push    0x76c690
        push    ecx
        call    esi
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 0xc
    l_751F35:
        mov     ebx, dword ptr [eax + 4]
        test    bl, 0x80
        je      l_751F75
        mov     ecx, dword ptr [eax + 0x1c]
        cmp     ecx, 1
        mov     eax, 0x76b768
        je      l_751F4F
        mov     eax, 0x78ce88
    l_751F4F:
        push    eax
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9450
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9450
        push    0x7ad4f4
        push    ecx
        call    esi
        mov     eax, dword ptr [esp + 0x24]
        add     esp, 0x10
    l_751F75:
        test    bl, 0x20
        je      l_751FB2
        mov     ecx, dword ptr [eax + 0x14]
        cmp     ecx, 1
        mov     eax, 0x76b768
        je      l_751F8C
        mov     eax, 0x78ce88
    l_751F8C:
        push    ecx
        push    eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9450
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9450
        push    0x7ad4e0
        push    ecx
        call    esi
        mov     eax, dword ptr [esp + 0x24]
        add     esp, 0x10
    l_751FB2:
        test    bl, 8
        je      l_751FDF
        mov     ecx, dword ptr [eax + 0x10]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9450
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9450
        push    0x7ad4d4
        push    ecx
        call    esi
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 0xc
    l_751FDF:
        test    ebx, 0x20000
        je      l_75201F
        mov     ecx, dword ptr [eax + 0x18]
        cmp     ecx, 1
        mov     eax, 0x76b768
        je      l_751FF9
        mov     eax, 0x78ce88
    l_751FF9:
        push    ecx
        push    eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9450
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9450
        push    0x7ad4c4
        push    ecx
        call    esi
        mov     eax, dword ptr [esp + 0x24]
        add     esp, 0x10
    l_75201F:
        test    bh, 0x40
        je      l_752048
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9450
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9450
        push    0x7ad4b4
        push    ecx
        call    esi
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 8
    l_752048:
        test    ebx, 0x10000
        je      l_752074
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9450
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9450
        push    0x7ad4a0
        push    ecx
        call    esi
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 8
    l_752074:
        and     ebx, 1
        je      l_7520A5
        mov     ecx, dword ptr [eax + 0x68]
        test    ch, 0x20
        je      l_7520A5
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9450
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9450
        push    0x7ad460
        push    ecx
        call    esi
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 8
    l_7520A5:
        test    ebx, ebx
        je      l_7521D3
        test    byte ptr [eax + 0x68], 8
        je      l_7520D7
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9450
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9450
        push    0x7ad454
        push    ecx
        call    esi
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 8
    l_7520D7:
        test    ebx, ebx
        je      l_7521D3
        test    byte ptr [eax + 0x68], 0x10
        je      l_752109
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9450
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9450
        push    0x7ad400
        push    ecx
        call    esi
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 8
    l_752109:
        test    ebx, ebx
        je      l_7521D3
        test    dword ptr [eax + 0x68], 0x10000000
        je      l_75213E
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9450
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9450
        push    0x7ad3ec
        push    ecx
        call    esi
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 8
    l_75213E:
        test    ebx, ebx
        je      l_7521D3
        test    dword ptr [eax + 0x68], 0x20000000
        je      l_752173
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9450
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9450
        push    0x7ad3d4
        push    ecx
        call    esi
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 8
    l_752173:
        test    ebx, ebx
        je      l_7521D3
        mov     ecx, dword ptr [eax + 0x68]
        test    ch, 0x40
        je      l_7521A3
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9450
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9450
        push    0x7ad3c4
        push    ecx
        call    esi
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 8
    l_7521A3:
        test    ebx, ebx
        je      l_7521D3
        mov     ecx, dword ptr [eax + 0x68]
        test    ch, 8
        je      l_7521D3
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9450
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9450
        push    0x7ad3b4
        push    ecx
        call    esi
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 8
    l_7521D3:
        pop     ebp
        test    ebx, ebx
        pop     ebx
        je      l_752202
        test    dword ptr [eax + 0x68], 0x4000000
        je      l_752202
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9450
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9450
        push    0x7ad3a4
        push    ecx
        call    esi
        add     esp, 8
    l_752202:
        pop     edi
        mov     eax, 0x8b9450
        pop     esi
        ret     4
    }
}
