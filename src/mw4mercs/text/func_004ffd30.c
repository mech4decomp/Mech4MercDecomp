/*
 * FUN_004ffd30 (729 B) — MLR/Adept network poll/connect loop. Builds an
 * fd_set from the object's socket array, select()s, recv()s from ready
 * sockets, parses "\\final\\" and reports via FUN_00500430 / a virtual
 * callback at +0x78. Then times out stale sockets and connects new peers
 * (FUN_0050d690 / connect / send "\\status\\").
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b298;                 /* strstr IAT */
extern char g_00772fec[];                /* "\\final\\" */
extern char g_007761c0[];                /* "\\status\\" */
extern int __cdecl FUN_0075dfce(void);   /* select */
extern int __cdecl FUN_0075e016(void);   /* __WSAFDIsSet */
extern int __cdecl FUN_0075dffe(void);   /* recv */
extern int __cdecl FUN_00500890(void);   /* GetTickCount */
extern void __cdecl FUN_00500430(void);
extern int __cdecl FUN_0050d680(void);
extern void *__cdecl FUN_0050d690(void);
extern void *__cdecl FUN_00500520(void);
extern void *__cdecl FUN_0075dfe0(void); /* inet_addr */
extern int __cdecl FUN_00500530(void);
extern int __cdecl FUN_0075dfe6(void);   /* htons */
extern int __cdecl FUN_0075dfd4(void);   /* connect */
extern int __cdecl FUN_0075dff2(void);   /* send */
extern void __cdecl FUN_00500010(void);
extern void __cdecl FUN_004ff5e0(void);

__declspec(naked) void FUN_004ffd30(void)
{
    __asm {
        sub     esp, 0x700
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp+0x70c]
        mov     eax, dword ptr [ebp+0x6c]
        push    esi
        xor     esi, esi
        push    edi
        xor     edi, edi
        xor     edx, edx
        cmp     eax, esi
        mov     dword ptr [esp+0x10], edi
        mov     dword ptr [esp+0x18], esi
        mov     dword ptr [esp+0x1c], esi
        mov     dword ptr [esp+0x30], edx
        jle     L_sel
        mov     ecx, dword ptr [ebp+0x8]
L_fdloop:
        cmp     dword ptr [ecx+0x4], esi
        jz      L_fdnext
        inc     edi
        cmp     edx, 0x40
        jnc     L_fdnext
        mov     ebx, dword ptr [ecx]
        mov     dword ptr [esp+edx*4+0x34], ebx
        mov     edx, dword ptr [esp+0x30]
        inc     edx
        mov     dword ptr [esp+0x30], edx
L_fdnext:
        add     ecx, 0xc
        dec     eax
        jnz     L_fdloop
        cmp     edi, esi
        mov     dword ptr [esp+0x10], edi
        jle     L_sel
        lea     eax, [esp+0x18]
        push    eax
        push    esi
        push    esi
        lea     ecx, [esp+0x3c]
        push    ecx
        push    0x40
        call    FUN_0075dfce
        cmp     eax, -0x1
        jz      L_sel
        cmp     eax, esi
        jz      L_sel
        mov     dword ptr [esp+0x14], esi
        xor     edi, edi
L_loop1:
        mov     eax, dword ptr [ebp+0x8]
        mov     ecx, dword ptr [edi+eax+0x4]
        test    ecx, ecx
        lea     ebx, [edi+eax+0x4]
        jz      L_cont1
        mov     esi, dword ptr [edi+eax]
        lea     edx, [esp+0x30]
        push    edx
        push    esi
        call    FUN_0075e016
        test    eax, eax
        jz      L_cont1
        push    0x0
        push    0x5db
        lea     eax, [esp+0x13c]
        push    eax
        push    esi
        call    FUN_0075dffe
        cmp     eax, -0x1
        jz      L_recvfail
        lea     ecx, [esp+0x134]
        push    offset g_00772fec
        push    ecx
        mov     byte ptr [esp+eax+0x13c], 0x0
        call    dword ptr [g_0076b298]
        mov     ebx, dword ptr [ebx]
        mov     esi, eax
        mov     eax, dword ptr [ebx+0x14]
        add     esp, 0x8
        neg     esi
        sbb     esi, esi
        neg     esi
        cmp     eax, 0x270f
        jnz     L_skip1
        call    FUN_00500890
        mov     edx, eax
        mov     eax, dword ptr [ebp+0x8]
        sub     edx, dword ptr [edi+eax+0x8]
        mov     dword ptr [ebx+0x14], edx
L_skip1:
        lea     eax, [esp+0x134]
        push    eax
        push    ebx
        call    FUN_00500430
        add     esp, 0x8
        test    esi, esi
        jz      L_cont1
        mov     ecx, dword ptr [ebp+0x4]
        push    ecx
        call    FUN_0050d680
        mov     ecx, eax
        mov     eax, dword ptr [ebp+0x70]
        lea     eax, [eax+eax*4]
        lea     eax, [eax+eax*4]
        shl     eax, 0x2
        cdq
        idiv    ecx
        mov     edx, dword ptr [ebp+0x7c]
        push    eax
        push    ebx
        push    edx
        push    0x2
        push    ebp
        call    dword ptr [ebp+0x78]
        mov     eax, dword ptr [ebp+0x8]
        add     esp, 0x18
        mov     dword ptr [edi+eax+0x4], 0x0
        jmp     L_cont1
L_recvfail:
        mov     dword ptr [ebx], 0x0
L_cont1:
        mov     eax, dword ptr [esp+0x14]
        mov     ecx, dword ptr [ebp+0x6c]
        inc     eax
        add     edi, 0xc
        cmp     eax, ecx
        mov     dword ptr [esp+0x14], eax
        jl      L_loop1
        mov     edi, dword ptr [esp+0x10]
        xor     esi, esi
L_sel:
        mov     eax, dword ptr [ebp+0x6c]
        cmp     eax, esi
        jle     L_after2
        mov     esi, dword ptr [ebp+0x8]
        add     esi, 0x4
        mov     ebx, eax
L_loop2:
        cmp     dword ptr [esi], 0x0
        jz      L_loop2next
        call    FUN_00500890
        sub     eax, dword ptr [esi+0x4]
        cmp     eax, 0xbb8
        jbe     L_loop2next
        mov     dword ptr [esi], 0x0
L_loop2next:
        add     esi, 0xc
        dec     ebx
        jnz     L_loop2
        xor     esi, esi
L_after2:
        cmp     dword ptr [ebp+0x74], esi
        jnz     L_else
        mov     eax, dword ptr [ebp+0x4]
        push    eax
        call    FUN_0050d680
        mov     ecx, dword ptr [ebp+0x70]
        add     esp, 0x4
        cmp     ecx, eax
        jl      L_connect
        cmp     edi, esi
        jz      L_else
L_connect:
        cmp     dword ptr [ebp+0x6c], esi
        mov     dword ptr [esp+0x14], esi
        jle     L_done
        mov     dword ptr [esp+0x10], esi
L_loop3:
        mov     esi, dword ptr [ebp+0x4]
        mov     edi, dword ptr [ebp+0x70]
        push    esi
        call    FUN_0050d680
        add     esp, 0x4
        cmp     edi, eax
        jge     L_done
        mov     eax, dword ptr [ebp+0x8]
        mov     ecx, dword ptr [esp+0x10]
        lea     ebx, [eax+ecx]
        mov     eax, dword ptr [ebx+0x4]
        test    eax, eax
        jnz     L_cont3
        push    edi
        push    esi
        call    FUN_0050d690
        mov     esi, dword ptr [eax]
        inc     edi
        mov     dword ptr [ebx+0x4], esi
        push    esi
        mov     dword ptr [ebp+0x70], edi
        mov     word ptr [esp+0x2c], 0x2
        call    FUN_00500520
        add     esp, 0xc
        push    eax
        call    FUN_0075dfe0
        push    esi
        mov     dword ptr [esp+0x28], eax
        call    FUN_00500530
        add     esp, 0x4
        push    eax
        call    FUN_0075dfe6
        push    0x10
        lea     edx, [esp+0x24]
        mov     word ptr [esp+0x26], ax
        mov     esi, dword ptr [ebx]
        push    edx
        push    esi
        call    FUN_0075dfd4
        test    eax, eax
        jz      L_connectok
        mov     dword ptr [ebx+0x4], 0x0
        jmp     L_cont3
L_connectok:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_007761c0
        repne scasb
        push    0x0
        not     ecx
        dec     ecx
        push    ecx
        push    offset g_007761c0
        push    esi
        call    FUN_0075dff2
        call    FUN_00500890
        mov     dword ptr [ebx+0x8], eax
L_cont3:
        mov     eax, dword ptr [esp+0x14]
        mov     edx, dword ptr [esp+0x10]
        mov     ecx, dword ptr [ebp+0x6c]
        inc     eax
        add     edx, 0xc
        cmp     eax, ecx
        mov     dword ptr [esp+0x14], eax
        mov     dword ptr [esp+0x10], edx
        jl      L_loop3
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x700
        ret
L_else:
        push    ebp
        call    FUN_00500010
        push    esi
        push    ebp
        call    FUN_004ff5e0
        add     esp, 0xc
L_done:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x700
        ret
    }
}
