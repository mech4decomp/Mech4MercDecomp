/*
 * FUN_006ffeb0 (353 B) — GOS view teardown. If the view is active
 * (param_1+0x30 set, param_1+0x14 non-null, FUN_006f89f0 non-null), reports
 * "ServerInfoStatus" via a virtual call and FUN_006f5ed0/FUN_006f5ee0.
 * Updates g_007b6f10/g_007b6f0c state, resets the view object, frees
 * (IAT 0x76b2d0) its buffers, unlinks it from the g_008567b8/0x8567f8
 * list, and clears the g_00856840 flags.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008567ec;
extern int g_008567c4;
extern int g_0085682c;
extern int g_00856804;
extern int g_007b6f10;
extern int g_007b6f0c;
extern int g_00856840;
extern void * g_0076b2d0;   /* free IAT */
extern int __cdecl FUN_006f89f0(void);
extern int __cdecl FUN_006f5ed0(void);
extern int __cdecl FUN_006f5ee0(void);
extern int __cdecl FUN_006ffe80(void);

__declspec(naked) void FUN_006ffeb0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     al, byte ptr [esi + 0x30]
        xor     ebx, ebx
        cmp     al, bl
        push    edi
        jz      L_fffe
        mov     edi, dword ptr [esi + 0x14]
        cmp     edi, ebx
        jz      L_fffe
        call    FUN_006f89f0
        test    eax, eax
        jz      L_fffe
        call    FUN_006f5ed0
        cmp     byte ptr [esp + 0x18], bl
        mov     ebp, 0x79fb5c
        jnz     L_ffe6
        mov     ebp, 0x79fb58
L_ffe6:
        call    FUN_006f89f0
        mov     edx, dword ptr [eax]
        push    ebp
        push    0x79fae8
        push    edi
        mov     ecx, eax
        call    dword ptr [edx + 0x8]
        call    FUN_006f5ee0
L_fffe:
        cmp     dword ptr [g_008567ec], ebx
        jnz     L_ff0e
        cmp     byte ptr [g_008567c4], bl
        jz      L_ff1e
L_ff0e:
        cmp     dword ptr [g_0085682c], ebx
        jnz     L_ff25
        cmp     byte ptr [g_00856804], bl
        jnz     L_ff25
L_ff1e:
        mov     byte ptr [g_007b6f10], 0x1
L_ff25:
        mov     al, byte ptr [esi + 0x31]
        or      ecx, 0xffffffff
        cmp     al, bl
        jz      L_ff3b
        mov     eax, dword ptr [esi + 0x18]
        cmp     eax, ecx
        jle     L_ff3b
        mov     dword ptr [g_007b6f0c], eax
L_ff3b:
        mov     dword ptr [esi + 0x28], ebx
        mov     dword ptr [esi + 0x20], ebx
        push    esi
        mov     byte ptr [esi + 0xc], bl
        mov     dword ptr [esi + 0x1c], ecx
        mov     dword ptr [esi + 0x18], ecx
        mov     dword ptr [esi + 0x2c], ebx
        mov     byte ptr [esi + 0x30], bl
        mov     byte ptr [esi + 0x31], bl
        mov     dword ptr [esi + 0x24], ebx
        call    FUN_006ffe80
        mov     eax, dword ptr [esi + 0x4]
        cmp     eax, ebx
        jz      L_ff6c
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
        mov     dword ptr [esi + 0x4], ebx
L_ff6c:
        mov     eax, dword ptr [esi + 0x10]
        cmp     eax, ebx
        mov     ebp, dword ptr [g_0076b2d0]
        jz      L_ff82
        push    eax
        call    ebp
        add     esp, 0x4
        mov     dword ptr [esi + 0x10], ebx
L_ff82:
        mov     eax, dword ptr [esi + 0x14]
        cmp     eax, ebx
        jz      L_ff92
        push    eax
        call    ebp
        add     esp, 0x4
        mov     dword ptr [esi + 0x14], ebx
L_ff92:
        cmp     dword ptr [esi], ebx
        mov     edi, 0x8567b8
        jnz     L_ffa0
        mov     edi, 0x8567f8
L_ffa0:
        mov     eax, dword ptr [edi + 0x34]
        cmp     eax, esi
        mov     ecx, edi
        jz      L_ffb6
L_ffa9:
        cmp     eax, ebx
        jz      L_ffb6
        mov     ecx, eax
        mov     eax, dword ptr [ecx + 0x34]
        cmp     eax, esi
        jnz     L_ffa9
L_ffb6:
        cmp     dword ptr [ecx + 0x34], esi
        jnz     L_ffc7
        mov     edx, dword ptr [esi + 0x34]
        push    esi
        mov     dword ptr [ecx + 0x34], edx
        call    ebp
        add     esp, 0x4
L_ffc7:
        cmp     edi, 0x8567f8
        jnz     L_fff3
        cmp     dword ptr [g_0085682c], ebx
        jnz     L_000a
        cmp     byte ptr [g_00856804], bl
        jnz     L_000a
        mov     eax, dword ptr [g_00856840]
        pop     edi
        pop     esi
        and     eax, 0xfffffffb
        pop     ebp
        mov     dword ptr [g_00856840], eax
        pop     ebx
        ret     0x8
L_fff3:
        cmp     dword ptr [g_008567ec], ebx
        jnz     L_000a
        cmp     byte ptr [g_008567c4], bl
        jnz     L_000a
        and     dword ptr [g_00856840], 0xfffffffd
L_000a:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
