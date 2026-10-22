/*
 * FUN_00701a10 (340 B) — Initializes a worker-thread subsystem. Zeroes a
 * block of globals, allocates a 0x600 buffer, and (if g_8589a1 is set)
 * registers two callback pairs via FUN_00740d10, creates two critical
 * sections and two event pairs, and spawns two worker threads
 * (FUN_00740a80 / FUN_00740950) via _beginthreadex, setting thread
 * priority 2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_8aaac8;   /* 0x008aaac8 */
extern unsigned int g_8aaacc;   /* 0x008aaacc */
extern unsigned char g_8aaac2;  /* 0x008aaac2 */
extern unsigned int g_8aaad0;   /* 0x008aaad0 */
extern unsigned int g_8aaae0;   /* 0x008aaae0 */
extern unsigned char g_8aaac1;  /* 0x008aaac1 */
extern unsigned char g_8aaac0;  /* 0x008aaac0 */
extern unsigned int g_8aaabc;   /* 0x008aaabc */
extern unsigned int g_8aab0c;   /* 0x008aab0c */
extern unsigned int g_8aab1c;   /* 0x008aab1c */
extern unsigned int g_8aab18;   /* 0x008aab18 */
extern unsigned int g_8aaa60;   /* 0x008aaa60 */
extern unsigned int g_8aaa10;   /* 0x008aaa10 */
extern unsigned int g_8aaa0c;   /* 0x008aaa0c */
extern unsigned int g_8aaa08;   /* 0x008aaa08 */
extern unsigned int g_8aab10;   /* 0x008aab10 */
extern unsigned char g_8589a1;  /* 0x008589a1 */
extern unsigned int g_8aab14;   /* 0x008aab14 */
extern unsigned int g_8aaa40;   /* 0x008aaa40 */
extern unsigned int g_8aaa3c;   /* 0x008aaa3c */
extern unsigned int g_8aaa18;   /* 0x008aaa18 */
extern unsigned int g_8aaa14;   /* 0x008aaa14 */
extern unsigned int g_8aaa38;   /* 0x008aaa38 */
extern void *g_76b294;          /* 0x0076b294 malloc IAT */
extern unsigned int g_76b108;   /* 0x0076b108 InitializeCriticalSection */
extern unsigned int g_76b16c;   /* 0x0076b16c CreateEventA */
extern unsigned int g_76b388;   /* 0x0076b388 _beginthreadex */
extern unsigned int g_76b1fc;   /* 0x0076b1fc SetThreadPriority */
extern void __cdecl FUN_00701970(void);
extern void __cdecl FUN_00740d10(int, int, int, int, int);
extern void __cdecl FUN_00740030(void);

__declspec(naked) void FUN_00701a10(void)
{
    __asm {
        push    ebx
        xor     ebx, ebx
        mov     dword ptr [g_8aaac8], 0x0
        mov     dword ptr [g_8aaacc], 0x0
        mov     byte ptr [g_8aaac2], bl
        mov     dword ptr [g_8aaad0], ebx
        mov     dword ptr [g_8aaae0], ebx
        mov     byte ptr [g_8aaac1], bl
        mov     byte ptr [g_8aaac0], bl
        mov     dword ptr [g_8aaabc], ebx
        mov     dword ptr [g_8aab0c], ebx
        mov     dword ptr [g_8aab1c], ebx
        mov     dword ptr [g_8aab18], ebx
        mov     dword ptr [g_8aaa60], ebx
        mov     dword ptr [g_8aaa10], ebx
        mov     dword ptr [g_8aaa0c], ebx
        mov     dword ptr [g_8aaa08], ebx
        call    FUN_00701970
        push    0x600
        call    dword ptr [g_76b294]
        mov     dword ptr [g_8aab10], eax
        mov     al, byte ptr [g_8589a1]
        add     esp, 0x4
        cmp     al, bl
        mov     dword ptr [g_8aab14], 0x600
        jz      L_1b62
        push    ebp
        push    esi
        push    edi
        push    0x8aaae8
        push    0x7a2ec0
        push    0x1
        push    ebx
        push    0x7a2ed0
        call    FUN_00740d10
        push    0x8aaae4
        push    0x7a2e00
        push    0x1
        push    ebx
        push    0x7a2e10
        call    FUN_00740d10
        mov     edi, dword ptr [g_76b108]
        push    0x8aaa48
        call    edi
        mov     esi, dword ptr [g_76b16c]
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        call    esi
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        mov     dword ptr [g_8aaa40], eax
        call    esi
        mov     ebp, dword ptr [g_76b388]
        push    0x8aab20
        push    ebx
        push    ebx
        push    0x740a80
        push    ebx
        push    ebx
        mov     dword ptr [g_8aaa3c], eax
        call    ebp
        add     esp, 0x18
        push    0x2
        push    eax
        mov     dword ptr [g_8aaa60], eax
        call    dword ptr [g_76b1fc]
        push    0x8aaa20
        call    edi
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        call    esi
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        mov     dword ptr [g_8aaa18], eax
        call    esi
        push    0x8aab24
        push    ebx
        push    ebx
        push    0x740950
        push    ebx
        push    ebx
        mov     dword ptr [g_8aaa14], eax
        call    ebp
        add     esp, 0x18
        mov     dword ptr [g_8aaa38], eax
        call    FUN_00740030
        pop     edi
        pop     esi
        pop     ebp
L_1b62:
        pop     ebx
        ret
    }
}
