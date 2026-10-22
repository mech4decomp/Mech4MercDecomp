/*
 * FUN_1001ee28 (171 B) - __stdcall (3 args, RET 0xc). CRT onexit/initterm
 * driver: manages the onexit table at 0x100275c0, calls _initterm over
 * [0x10024000,0x10024030), and runs registered exit handlers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_100275b0;          /* DAT_100275b0 */
extern int g_100275b4;          /* DAT_100275b4 */
extern void *g_100275c0;        /* DAT_100275c0 */
extern void *g_100275bc;        /* DAT_100275bc */
extern void *g_100210d4;        /* _adjust_fdiv */
extern void *g_100210f8;        /* IAT: malloc */
extern void *g_100210ec;        /* IAT: free */
extern char g_10024030;         /* end of initterm range */
extern char g_10024000;         /* start of initterm range */
extern void __cdecl FUN_1001f00e(void);

__declspec(naked) void __cdecl FUN_1001ee28(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        jnz     L_ee3e
        cmp     dword ptr [g_100275b0], eax
        jle     L_ee66
        dec     dword ptr [g_100275b0]
L_ee3e:
        mov     ecx, dword ptr [g_100210d4]
        cmp     eax, 0x1
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [g_100275b4], ecx
        jnz     L_ee90
        push    0x80
        call    dword ptr [g_100210f8]
        test    eax, eax
        pop     ecx
        mov     dword ptr [g_100275c0], eax
        jnz     L_ee6a
L_ee66:
        xor     eax, eax
        jmp     L_eed0
L_ee6a:
        and     dword ptr [eax], 0x0
        mov     eax, dword ptr [g_100275c0]
        push    offset g_10024030
        push    offset g_10024000
        mov     dword ptr [g_100275bc], eax
        call    FUN_1001f00e
        inc     dword ptr [g_100275b0]
        pop     ecx
        pop     ecx
        jmp     L_eecd
L_ee90:
        test    eax, eax
        jnz     L_eecd
        mov     eax, dword ptr [g_100275c0]
        test    eax, eax
        jz      L_eecd
        mov     ecx, dword ptr [g_100275bc]
        push    esi
        lea     esi, [ecx - 0x4]
L_eea7:
        cmp     esi, eax
        jc      L_eebd
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        jz      L_eeb8
        call    ecx
        mov     eax, dword ptr [g_100275c0]
L_eeb8:
        sub     esi, 0x4
        jmp     L_eea7
L_eebd:
        push    eax
        call    dword ptr [g_100210ec]
        and     dword ptr [g_100275c0], 0x0
        pop     ecx
        pop     esi
L_eecd:
        push    0x1
        pop     eax
L_eed0:
        ret     0xc
    }
}
