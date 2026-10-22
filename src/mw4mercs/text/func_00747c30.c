/*
 * FUN_00747c30 (198 B) — Thread/event cleanup.
 *
 * If DAT_008b2954 is non-null, sets DAT_008b2970=1, calls the function
 * pointer DAT_008aacc8 on four globals, then WaitForSingleObject +
 * CloseHandle on three handles (via IAT pointers at 0x0076b0f4 /
 * 0x0076b0ec). Finally calls FUN_0075d7f0 and FUN_00746d80.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008b2954;   /* DAT_008b2954 */
extern int g_008b2964;   /* DAT_008b2964 */
extern int g_008b2960;   /* DAT_008b2960 */
extern int g_008b296c;   /* DAT_008b296c */
extern int g_008b2968;   /* DAT_008b2968 */
extern char g_008b2970;  /* DAT_008b2970 */
extern int g_008b2958;   /* DAT_008b2958 */
extern int g_008b295c;   /* DAT_008b295c */

extern void (__cdecl *g_008aacc8)(void *);                 /* DAT_008aacc8 fn ptr */
extern void * (__stdcall *g_0076b0ec)(void *);             /* CloseHandle IAT */
extern int    (__stdcall *g_0076b0f4)(void *, int);        /* WaitForSingleObject IAT */

extern void __cdecl FUN_0075d7f0(void);
extern void __cdecl FUN_00746d80(void);

__declspec(naked) void FUN_00747c30(void)
{
    __asm {
        mov     eax, dword ptr [g_008b2954]
        test    eax, eax
        push    esi
        jz      LEND
        mov     eax, dword ptr [g_008b2964]
        test    eax, eax
        mov     byte ptr [g_008b2970], 0x1
        jz      L55
        push    eax
        call    dword ptr [g_008aacc8]
L55:
        mov     eax, dword ptr [g_008b2960]
        test    eax, eax
        jz      L65
        push    eax
        call    dword ptr [g_008aacc8]
L65:
        mov     eax, dword ptr [g_008b296c]
        test    eax, eax
        jz      L75
        push    eax
        call    dword ptr [g_008aacc8]
L75:
        mov     eax, dword ptr [g_008b2968]
        test    eax, eax
        jz      L85
        push    eax
        call    dword ptr [g_008aacc8]
L85:
        mov     eax, dword ptr [g_008b2954]
        test    eax, eax
        mov     esi, dword ptr [g_0076b0ec]
        push    edi
        mov     edi, dword ptr [g_0076b0f4]
        jz      LB2
        push    -0x1
        push    eax
        call    edi
        mov     eax, dword ptr [g_008b2954]
        push    eax
        call    esi
        mov     dword ptr [g_008b2954], 0x0
LB2:
        mov     eax, dword ptr [g_008b2958]
        test    eax, eax
        jz      LD3
        push    -0x1
        push    eax
        call    edi
        mov     ecx, dword ptr [g_008b2958]
        push    ecx
        call    esi
        mov     dword ptr [g_008b2958], 0x0
LD3:
        mov     eax, dword ptr [g_008b295c]
        test    eax, eax
        pop     edi
        jz      LEND
        push    eax
        call    esi
        mov     dword ptr [g_008b295c], 0x0
LEND:
        call    FUN_0075d7f0
        call    FUN_00746d80
        pop     esi
        ret
    }
}
