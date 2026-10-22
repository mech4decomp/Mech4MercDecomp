/*
 * FUN_004ff490 (322 B) — MLR/Adept network handshake. recv()s a challenge,
 * checks for "\\secure\\", builds a query string via sprintf and sends it,
 * then sends a "\\list\\gamename\\..." query. Returns 0 on success,
 * 3/5 on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b298;                 /* strstr IAT */
extern void *g_0076b420;                 /* sprintf IAT */
extern char g_007761b4[];                /* "\\secure\\" */
extern char g_00773040[];                /* gamever value */
extern char g_00776170[];                /* query format */
extern char g_00776154[];                /* "\\list\\gamename\\%s\\final\\" */
extern int __cdecl FUN_0075dffe(void);   /* recv */
extern int __cdecl FUN_0050dab0(void);
extern int __cdecl FUN_0050da00(void);
extern int __cdecl FUN_0075dff2(void);   /* send */
extern void __cdecl FUN_004ff5e0(void);

__declspec(naked) void FUN_004ff490(void)
{
    __asm {
        sub     esp, 0x140
        push    ebx
        push    esi
        mov     esi, dword ptr [esp+0x14c]
        mov     ecx, dword ptr [esi+0x88]
        push    edi
        push    0x0
        push    0xff
        lea     eax, [esp+0x14]
        push    eax
        push    ecx
        call    FUN_0075dffe
        cmp     eax, -0x1
        jz      L5
        lea     edx, [esp+0xc]
        push    offset g_007761b4
        push    edx
        mov     byte ptr [esp+eax+0x14], 0x0
        call    dword ptr [g_0076b298]
        mov     ebx, eax
        add     esp, 0x8
        test    ebx, ebx
        jnz     L1
        pop     edi
        pop     esi
        mov     eax, 0x5
        pop     ebx
        add     esp, 0x140
        ret
L1:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_007761b4
        repne scasb
        not     ecx
        dec     ecx
        push    0x6
        add     ebx, ecx
        push    ebx
        lea     eax, [esi+0x2c]
        push    0x6
        push    eax
        call    FUN_0050dab0
        lea     ecx, [esp+0x11c]
        push    ecx
        push    0x6
        push    ebx
        call    FUN_0050da00
        mov     ebx, dword ptr [g_0076b420]
        lea     edx, [esp+0x128]
        push    edx
        push    offset g_00773040
        lea     eax, [esi+0x4c]
        push    eax
        lea     ecx, [esp+0x34]
        push    offset g_00776170
        push    ecx
        call    ebx
        add     esp, 0x30
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp+0xc]
        repne scasb
        mov     eax, dword ptr [esi+0x88]
        push    0x0
        not     ecx
        dec     ecx
        push    ecx
        lea     edx, [esp+0x14]
        push    edx
        push    eax
        call    FUN_0075dff2
        cmp     eax, -0x1
        jz      L5
        test    eax, eax
        jz      L5
        lea     ecx, [esi+0xc]
        push    ecx
        lea     edx, [esp+0x10]
        push    offset g_00776154
        push    edx
        call    ebx
        add     esp, 0xc
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp+0xc]
        repne scasb
        not     ecx
        push    0x0
        dec     ecx
        push    ecx
        mov     ecx, dword ptr [esi+0x88]
        lea     eax, [esp+0x14]
        push    eax
        push    ecx
        call    FUN_0075dff2
        cmp     eax, -0x1
        jz      L5
        test    eax, eax
        jz      L5
        push    0x1
        push    esi
        call    FUN_004ff5e0
        add     esp, 0x8
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x140
        ret
L5:
        pop     edi
        pop     esi
        mov     eax, 0x3
        pop     ebx
        add     esp, 0x140
        ret
    }
}
