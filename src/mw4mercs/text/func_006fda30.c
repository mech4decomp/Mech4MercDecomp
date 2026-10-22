/*
 * FUN_006fda30 (509 B) — gundll save-data loader. Switches (jump table at
 * 0x6fdc30) over the 0x5200..0x5207 command codes in param_2+8, converting
 * wide-string arrays to multibyte via wcstombs (IAT 0x76b384) into the
 * object at param_1 (offsets 0x2bf4/0x1f70/0x3878), and setting the
 * g_0085685c/0x5d/0x4c state flags. Returns 0xc1120008 if param_2+4 is empty.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b6f08;
extern int g_0085684c;
extern int g_0085685d;
extern int g_0085685c;
extern int g_00856860;
extern void * g_0076b384;   /* wcstombs IAT */

__declspec(naked) void FUN_006fda30(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        mov     al, byte ptr [ecx + 0x4]
        mov     edx, dword ptr [ecx + 0x8]
        push    ebx
        xor     ebx, ebx
        cmp     al, bl
        jz      L_da81
        mov     eax, dword ptr [ecx + 0x20]
        push    ebp
        add     edx, 0xffffae00
        cmp     edx, 0x7
        push    esi
        push    edi
        ja      L_dc24
        /* __emit: jump-table dispatch FF 24 95 [edx*4+0x6fdc30]; MSVC6 re-bases via EBX */
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0x30
        __emit 0xDC
        __emit 0x6F
        __emit 0x00
L_da5d:
        cmp     eax, 0xc1121803
        jnz     L_da8a
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [g_007b6f08], 0xffffffff
        mov     dword ptr [g_0085684c], 0x8
        xor     eax, eax
        pop     ebx
        ret     0x8
L_da81:
        mov     eax, 0xc1120008
        pop     ebx
        ret     0x8
L_da8a:
        cmp     eax, ebx
        jge     L_daab
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [g_007b6f08], 0xffffffff
        mov     dword ptr [g_0085684c], 0x4
        xor     eax, eax
        pop     ebx
        ret     0x8
L_daab:
        mov     eax, dword ptr [ecx + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [g_007b6f08], eax
        mov     dword ptr [g_0085684c], 0x2
        xor     eax, eax
        pop     ebx
        ret     0x8
L_dac6:
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [g_0085684c], ebx
        xor     eax, eax
        pop     ebx
        ret     0x8
L_dad5:
        xor     esi, esi
        cmp     eax, ebx
        jl      L_dc24
        jnz     L_dc24
        mov     dl, byte ptr [ecx + 0x4]
        xor     eax, eax
        cmp     dl, bl
        jz      L_daf6
        mov     eax, dword ptr [ecx + 0x24]
        jz      L_daf6
        mov     esi, dword ptr [ecx + 0x28]
L_daf6:
        cmp     eax, ebx
        mov     ebp, dword ptr [esp + 0x14]
        mov     dword ptr [ebp + 0x2bf4], eax
        jle     L_db2a
        lea     edi, [ebp + 0x2bf8]
L_db0a:
        mov     ecx, dword ptr [esi]
        push    0x20
        push    ecx
        push    edi
        call    dword ptr [g_0076b384]
        mov     eax, dword ptr [ebp + 0x2bf4]
        add     esp, 0xc
        inc     ebx
        add     esi, 0x4
        add     edi, 0x20
        cmp     ebx, eax
        jl      L_db0a
L_db2a:
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [g_0085685d], 0x1
        xor     eax, eax
        pop     ebx
        ret     0x8
L_db3a:
        xor     esi, esi
        cmp     eax, ebx
        jl      L_dc24
        jnz     L_dc24
        mov     dl, byte ptr [ecx + 0x4]
        xor     eax, eax
        cmp     dl, bl
        jz      L_db5b
        mov     eax, dword ptr [ecx + 0x24]
        jz      L_db5b
        mov     esi, dword ptr [ecx + 0x28]
L_db5b:
        cmp     eax, ebx
        mov     ebp, dword ptr [esp + 0x14]
        mov     dword ptr [ebp + 0x1f70], eax
        jle     L_db8f
        lea     edi, [ebp + 0x1f74]
L_db6f:
        mov     edx, dword ptr [esi]
        push    0x20
        push    edx
        push    edi
        call    dword ptr [g_0076b384]
        mov     eax, dword ptr [ebp + 0x1f70]
        add     esp, 0xc
        inc     ebx
        add     esi, 0x4
        add     edi, 0x20
        cmp     ebx, eax
        jl      L_db6f
L_db8f:
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [g_0085685c], 0x1
        xor     eax, eax
        pop     ebx
        ret     0x8
L_db9f:
        xor     edi, edi
        xor     ebp, ebp
        xor     esi, esi
        cmp     eax, ebx
        mov     dword ptr [esp + 0x18], ebx
        jl      L_dc24
        jnz     L_dc24
        mov     al, byte ptr [ecx + 0x4]
        cmp     al, bl
        jz      L_dbce
        mov     ebp, dword ptr [ecx + 0x2c]
        jz      L_dbc2
        mov     edx, dword ptr [ecx + 0x28]
        mov     dword ptr [esp + 0x18], edx
L_dbc2:
        cmp     al, bl
        jz      L_dbce
        mov     esi, dword ptr [ecx + 0x24]
        jz      L_dbce
        mov     edi, dword ptr [ecx + 0x30]
L_dbce:
        cmp     ebp, ebx
        mov     ebx, dword ptr [esp + 0x14]
        jbe     L_dc11
        shl     esi, 0x8
L_dbd9:
        mov     eax, dword ptr [edi]
        mov     ecx, dword ptr [g_00856860]
        push    0x100
        push    eax
        lea     edx, [esi + ecx*1 + 0x387c]
        push    edx
        call    dword ptr [g_0076b384]
        mov     eax, dword ptr [ebx + 0x3878]
        add     esp, 0xc
        inc     eax
        add     esi, 0x100
        add     edi, 0x14
        dec     ebp
        mov     dword ptr [ebx + 0x3878], eax
        jnz     L_dbd9
L_dc11:
        mov     eax, dword ptr [esp + 0x18]
        cmp     dword ptr [ebx + 0x3878], eax
        jnz     L_dc24
        mov     byte ptr [ebx + 0x2f47c], 0x1
L_dc24:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0x8
    }
}
