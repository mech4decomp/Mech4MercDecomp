/*
 * FUN_10045eeb (597 B) — __cdecl.
 * CompareString wrapper: detects W/A via CompareStringW/A probe, then
 * dispatches to CompareStringW/A or MultiByteToWideChar+CompareStringW.
 * SEH-guarded with alloca probes (FUN_10037940).
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10075814;
extern unsigned int g_1007568c;
extern void *g_1004919c;   /* IAT: CompareStringW */
extern void *g_10049198;   /* IAT: CompareStringA */
extern void *g_1004913c;   /* IAT: GetCPInfo */
extern void *g_10049100;   /* IAT: MultiByteToWideChar */
extern void FUN_10046168(void);
extern void FUN_10037940(void);   /* __alloca_probe */

__declspec(naked) void FUN_10045eeb(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    0x1004c100
        push    0x1003eb9c
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x30
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x18], esp
        xor     ebx, ebx
        cmp     dword ptr [g_10075814], ebx
        push    1
        pop     edi
        jnz     L_f5e
        push    edi
        mov     eax, 0x1004b71c
        push    eax
        push    edi
        push    eax
        push    ebx
        push    ebx
        call    dword ptr [g_1004919c]
        test    eax, eax
        jz      L_f3b
        mov     dword ptr [g_10075814], edi
        jmp     L_f5e
    L_f3b:
        push    edi
        mov     eax, 0x1004b718
        push    eax
        push    edi
        push    eax
        push    ebx
        push    ebx
        call    dword ptr [g_10049198]
        test    eax, eax
        jz      L_ret0
        mov     dword ptr [g_10075814], 2
    L_f5e:
        mov     esi, dword ptr [ebp + 0x14]
        cmp     esi, ebx
        jle     L_f75
        push    esi
        push    dword ptr [ebp + 0x10]
        call    FUN_10046168
        pop     ecx
        pop     ecx
        mov     esi, eax
        mov     dword ptr [ebp + 0x14], esi
    L_f75:
        cmp     dword ptr [ebp + 0x1c], ebx
        jle     L_f8a
        push    dword ptr [ebp + 0x1c]
        push    dword ptr [ebp + 0x18]
        call    FUN_10046168
        pop     ecx
        pop     ecx
        mov     dword ptr [ebp + 0x1c], eax
    L_f8a:
        mov     eax, dword ptr [g_10075814]
        cmp     eax, 2
        jnz     L_faf
        push    dword ptr [ebp + 0x1c]
        push    dword ptr [ebp + 0x18]
        push    esi
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    dword ptr [g_10049198]
        jmp     L_epi
    L_faf:
        cmp     eax, edi
        jnz     L_ret0
        cmp     dword ptr [ebp + 0x20], ebx
        jnz     L_fc4
        mov     eax, dword ptr [g_1007568c]
        mov     dword ptr [ebp + 0x20], eax
    L_fc4:
        cmp     esi, ebx
        jz      L_fd1
        cmp     dword ptr [ebp + 0x1c], ebx
        jnz     L_6069
    L_fd1:
        cmp     esi, dword ptr [ebp + 0x1c]
        jnz     L_fde
    L_fd6:
        push    2
    L_fd8:
        pop     eax
        jmp     L_epi
    L_fde:
        cmp     dword ptr [ebp + 0x1c], edi
        jle     L_fea
    L_fe3:
        mov     eax, edi
        jmp     L_epi
    L_fea:
        cmp     esi, edi
        jg      L_602f
        lea     eax, [ebp - 0x3c]
        push    eax
        push    dword ptr [ebp + 0x20]
        call    dword ptr [g_1004913c]
        test    eax, eax
        jz      L_ret0
        cmp     esi, ebx
        jle     L_6033
        cmp     dword ptr [ebp - 0x3c], 2
        jb      L_602f
        lea     eax, [ebp - 0x36]
        cmp     byte ptr [ebp - 0x36], bl
        jz      L_602f
    L_6015:
        mov     dl, byte ptr [eax + 1]
        cmp     dl, bl
        jz      L_602f
        mov     ecx, dword ptr [ebp + 0x10]
        mov     cl, byte ptr [ecx]
        cmp     cl, byte ptr [eax]
        jb      L_6029
        cmp     cl, dl
        jbe     L_fd6
    L_6029:
        inc     eax
        inc     eax
        cmp     byte ptr [eax], bl
        jnz     L_6015
    L_602f:
        push    3
        jmp     L_fd8
    L_6033:
        cmp     dword ptr [ebp + 0x1c], ebx
        jle     L_6069
        cmp     dword ptr [ebp - 0x3c], 2
        jb      L_fe3
        lea     eax, [ebp - 0x36]
        cmp     byte ptr [ebp - 0x36], bl
        jz      L_fe3
    L_6046:
        mov     dl, byte ptr [eax + 1]
        cmp     dl, bl
        jz      L_fe3
        mov     ecx, dword ptr [ebp + 0x18]
        mov     cl, byte ptr [ecx]
        cmp     cl, byte ptr [eax]
        jb      L_605e
        cmp     cl, dl
        jbe     L_fd6
    L_605e:
        inc     eax
        inc     eax
        cmp     byte ptr [eax], bl
        jnz     L_6046
        jmp     L_fe3
    L_6069:
        push    ebx
        push    ebx
        push    esi
        push    dword ptr [ebp + 0x10]
        push    9
        push    dword ptr [ebp + 0x20]
        call    dword ptr [g_10049100]
        mov     dword ptr [ebp - 0x1c], eax
        cmp     eax, ebx
        jz      L_ret0
        mov     dword ptr [ebp - 4], ebx
        add     eax, eax
        add     eax, 3
        and     al, 0xfc
        call    FUN_10037940
        mov     dword ptr [ebp - 0x18], esp
        mov     eax, esp
        mov     dword ptr [ebp - 0x24], eax
        or      dword ptr [ebp - 4], 0xffffffff
        jmp     L_60b8
        push    1
        pop     eax
        ret
        mov     esp, dword ptr [ebp - 0x18]
        xor     ebx, ebx
        mov     dword ptr [ebp - 0x24], ebx
        or      dword ptr [ebp - 4], 0xffffffff
        mov     esi, dword ptr [ebp + 0x14]
        push    1
        pop     edi
    L_60b8:
        cmp     dword ptr [ebp - 0x24], ebx
        jz      L_ret0
        push    dword ptr [ebp - 0x1c]
        push    dword ptr [ebp - 0x24]
        push    esi
        push    dword ptr [ebp + 0x10]
        push    edi
        push    dword ptr [ebp + 0x20]
        mov     esi, dword ptr [g_10049100]
        call    esi
        test    eax, eax
        jz      L_ret0
        push    ebx
        push    ebx
        push    dword ptr [ebp + 0x1c]
        push    dword ptr [ebp + 0x18]
        push    9
        push    dword ptr [ebp + 0x20]
        call    esi
        mov     esi, eax
        mov     dword ptr [ebp - 0x20], esi
        cmp     esi, ebx
        jz      L_ret0
        mov     dword ptr [ebp - 4], edi
        lea     eax, [esi + esi]
        add     eax, 3
        and     al, 0xfc
        call    FUN_10037940
        mov     dword ptr [ebp - 0x18], esp
        mov     edi, esp
        mov     dword ptr [ebp - 0x28], edi
        or      dword ptr [ebp - 4], 0xffffffff
        jmp     L_6123
        push    1
        pop     eax
        ret
        mov     esp, dword ptr [ebp - 0x18]
        xor     ebx, ebx
        xor     edi, edi
        or      dword ptr [ebp - 4], 0xffffffff
        mov     esi, dword ptr [ebp - 0x20]
    L_6123:
        cmp     edi, ebx
        jz      L_ret0
        push    esi
        push    edi
        push    dword ptr [ebp + 0x1c]
        push    dword ptr [ebp + 0x18]
        push    1
        push    dword ptr [ebp + 0x20]
        call    dword ptr [g_10049100]
        test    eax, eax
        jz      L_ret0
        push    esi
        push    edi
        push    dword ptr [ebp - 0x1c]
        push    dword ptr [ebp - 0x24]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    dword ptr [g_1004919c]
        jmp     L_epi
    L_ret0:
        xor     eax, eax
    L_epi:
        lea     esp, [ebp - 0x4c]
        mov     ecx, dword ptr [ebp - 0x10]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
