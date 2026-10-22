/*
 * FUN_00747e40 (618 B) — socket/network setup. Creates a socket, binds
 * it, listens, accepts a connection, and runs a handshake loop. Returns
 * 0 on success/failure paths.
 *
 * __stdcall, RET 4 (1 param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  (__cdecl *g_8aaca0)(int, int, int);            /* socket */
extern unsigned short (__cdecl *g_8aaca4)(unsigned short); /* htons */
extern unsigned long  (__cdecl *g_8aaca8)(unsigned long);  /* htonl */
extern int  (__cdecl *g_8aacac)(int, void *, int);         /* bind */
extern int  (__cdecl *g_8aac84)(void);                     /* WSAGetLastError */
extern int  (__cdecl *g_8aacb0)(int, int);                 /* listen */
extern int  (__cdecl *g_8aacb4)(int, void *, void *);      /* accept */
extern int  (__cdecl *g_8aacc8)(int);                      /* closesocket */
extern int  g_76b0f4;   /* function pointer value (Sleep) */
extern int  g_76b0d8;   /* function pointer value */

extern char g_8b294c;
extern int  g_8b2964;
extern char g_87dd0a;
extern char g_8b2970;
extern int  g_8b296c;
extern int  g_8b2974;
extern int  g_8b2950;
extern int  g_8b295c;
extern int  g_8b2968;
extern int  g_8b2780;
extern int  g_8b2778;
extern int  g_8b2784;
extern int  g_8b277c;
extern char g_7aa3bc[];  /* "Failed to create socket!" */
extern char g_7aa3a0[];  /* "Failed to bind socket !?" */

extern int  __cdecl FUN_006fab90(char *);
extern void __cdecl FUN_00707f50(void);
extern void __cdecl FUN_00746c50(void);
extern void __cdecl FUN_00746ce0(void);
extern int  __cdecl FUN_00747dc0(void);

__declspec(naked) int __stdcall FUN_00747e40(int param_1)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x3c
        push    ebx
        push    esi
        push    edi
        xor     ebx, ebx
        push    ebx
        push    0x1
        push    0x2
        mov     byte ptr [g_8b294c], bl
        call    dword ptr [g_8aaca0]
        cmp     eax, -0x1
        mov     dword ptr [g_8b2964], eax
        jnz     L_e7e
        push    offset g_7aa3bc
        mov     byte ptr [g_87dd0a], bl
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_e7e
        int     3
    L_e7e:
        push    0xbb9
        mov     word ptr [ebp - 0x14], 0x2
        call    dword ptr [g_8aaca4]
        push    ebx
        mov     word ptr [ebp - 0x12], ax
        call    dword ptr [g_8aaca8]
        mov     ecx, dword ptr [g_8b2964]
        mov     dword ptr [ebp - 0x10], eax
        push    0x10
        lea     eax, [ebp - 0x14]
        push    eax
        push    ecx
        call    dword ptr [g_8aacac]
        cmp     eax, -0x1
        jnz     L_ede
        call    dword ptr [g_8aac84]
        cmp     eax, 0x2740
        jz      L_09f
        push    offset g_7aa3a0
        mov     byte ptr [g_87dd0a], bl
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_ede
        int     3
    L_ede:
        mov     edx, dword ptr [g_8b2964]
        push    0x3
        push    edx
        call    dword ptr [g_8aacb0]
        cmp     eax, -0x1
        jz      L_099
        cmp     byte ptr [g_8b2970], bl
        jnz     L_09f
        mov     edi, dword ptr [g_76b0f4]
        mov     esi, dword ptr [g_76b0d8]
    L_f0e:
        mov     edx, dword ptr [g_8b2964]
        lea     eax, [ebp - 0x4]
        push    eax
        lea     ecx, [ebp - 0x24]
        push    ecx
        push    edx
        mov     dword ptr [ebp - 0x4], 0x10
        call    dword ptr [g_8aacb4]
        cmp     eax, -0x1
        mov     dword ptr [g_8b296c], eax
        jz      L_099
        cmp     byte ptr [g_8b2970], bl
        mov     dword ptr [g_8b2974], ebx
        jnz     L_06f
    L_f4a:
        cmp     byte ptr [g_8b294c], bl
        jnz     L_06f
        mov     dword ptr [g_8b2950], ebx
    L_f5c:
        cmp     byte ptr [g_8b294c], bl
        jnz     L_06f
        mov     eax, dword ptr [g_8b2974]
        inc     eax
        cmp     eax, 0x6
        mov     dword ptr [g_8b2974], eax
        jg      L_f8f
        mov     eax, dword ptr [g_8b295c]
        push    0x3e8
        push    eax
        call    edi
        cmp     dword ptr [g_8b2950], ebx
        jz      L_f5c
        jmp     L_fa3
    L_f8f:
        mov     ecx, dword ptr [g_8b2968]
        push    ecx
        mov     byte ptr [g_8b294c], 0x1
        call    dword ptr [g_8aacc8]
    L_fa3:
        cmp     byte ptr [g_8b294c], bl
        jnz     L_06f
        mov     dword ptr [g_8b2950], 0x2
        mov     dword ptr [ebp - 0x38], 0xc8
        call    FUN_00707f50
        mov     dword ptr [ebp - 0x34], eax
        mov     dword ptr [ebp - 0x30], edx
        call    FUN_00746c50
        push    0x1f4
        call    esi
        call    FUN_00746ce0
        call    FUN_00707f50
        mov     dword ptr [ebp - 0x2c], eax
        mov     eax, dword ptr [g_8b2780]
        mov     dword ptr [ebp - 0x28], edx
        mov     edx, dword ptr [g_8b2778]
        push    0x18
        add     eax, edx
        mov     edx, dword ptr [g_8b296c]
        lea     ecx, [ebp - 0x3c]
        push    ecx
        push    edx
        mov     dword ptr [ebp - 0x3c], eax
        mov     dword ptr [g_8b2950], 0x3
        call    FUN_00747dc0
        test    al, al
        jz      L_06f
        mov     eax, dword ptr [g_8b2780]
        cmp     eax, ebx
        jbe     L_037
        mov     ecx, dword ptr [g_8b296c]
        push    eax
        mov     eax, dword ptr [g_8b2784]
        push    eax
        push    ecx
        call    FUN_00747dc0
        test    al, al
        jz      L_06f
    L_037:
        mov     eax, dword ptr [g_8b2778]
        cmp     eax, ebx
        jbe     L_057
        mov     edx, dword ptr [g_8b277c]
        push    eax
        mov     eax, dword ptr [g_8b296c]
        push    edx
        push    eax
        call    FUN_00747dc0
        test    al, al
        jz      L_06f
    L_057:
        cmp     byte ptr [g_8b2970], bl
        mov     dword ptr [g_8b2950], ebx
        mov     dword ptr [g_8b2974], ebx
        jz      L_f4a
    L_06f:
        mov     ecx, dword ptr [g_8b296c]
        push    ecx
        mov     byte ptr [g_8b294c], bl
        call    dword ptr [g_8aacc8]
        cmp     byte ptr [g_8b2970], bl
        jz      L_f0e
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    L_099:
        call    dword ptr [g_8aac84]
    L_09f:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
