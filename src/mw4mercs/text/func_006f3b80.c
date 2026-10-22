/*
 * FUN_006f3b80 (252 B) — Resource cleanup / teardown.
 *
 * If the active flag (0x00858abc) is set and the busy flag
 * (0x00849eb8) is clear, releases a set of resources via
 * FUN_006f4850, drains a table via FUN_006f4b80, and clears
 * the active flag. __cdecl, no return value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_858abc;   /* DAT_00858abc (active flag) */
extern int  g_849eb8;   /* DAT_00849eb8 (busy flag) */
extern int  g_849310;   /* DAT_00849310 */
extern int  g_849324;   /* DAT_00849324 */
extern int  g_849320;   /* DAT_00849320 */
extern int  g_84931c;   /* DAT_0084931c */
extern int  g_849318;   /* DAT_00849318 */
extern int  g_849308;   /* DAT_00849308 */
extern int  g_849300;   /* DAT_00849300 */
extern int  g_849304;   /* DAT_00849304 */
extern int  g_84932c;   /* DAT_0084932c */
extern char g_849298;   /* DAT_00849298 (table base) */
extern char g_8492e0;   /* DAT_008492e0 (table end) */

extern void __cdecl FUN_006f4850(void);
extern void __cdecl FUN_006f4b80(void);

__declspec(naked) void __cdecl FUN_006f3b80(void)
{
    __asm {
        mov     al, byte ptr [g_858abc]
        push    ebx
        xor     ebx, ebx
        cmp     al, bl
        jz      L_3c7a
        cmp     dword ptr [g_849eb8], ebx
        jnz     L_3c7a
        mov     eax, dword ptr [g_849310]
        cmp     eax, ebx
        jz      L_3bb3
        push    1
        push    eax
        call    FUN_006f4850
        mov     dword ptr [g_849310], ebx
L_3bb3:
        mov     eax, dword ptr [g_849324]
        cmp     eax, ebx
        jz      L_3bca
        push    1
        push    eax
        call    FUN_006f4850
        mov     dword ptr [g_849324], ebx
L_3bca:
        mov     eax, dword ptr [g_849320]
        cmp     eax, ebx
        jz      L_3be1
        push    1
        push    eax
        call    FUN_006f4850
        mov     dword ptr [g_849320], ebx
L_3be1:
        mov     eax, dword ptr [g_84931c]
        cmp     eax, ebx
        jz      L_3bf8
        push    1
        push    eax
        call    FUN_006f4850
        mov     dword ptr [g_84931c], ebx
L_3bf8:
        mov     eax, dword ptr [g_849318]
        cmp     eax, ebx
        jz      L_3c0f
        push    1
        push    eax
        call    FUN_006f4850
        mov     dword ptr [g_849318], ebx
L_3c0f:
        mov     eax, dword ptr [g_849308]
        cmp     eax, ebx
        jz      L_3c26
        push    1
        push    eax
        call    FUN_006f4850
        mov     dword ptr [g_849308], ebx
L_3c26:
        mov     eax, dword ptr [g_849300]
        cmp     eax, ebx
        jz      L_3c3d
        push    1
        push    eax
        call    FUN_006f4850
        mov     dword ptr [g_849300], ebx
L_3c3d:
        mov     eax, dword ptr [g_849304]
        cmp     eax, ebx
        jz      L_3c54
        push    1
        push    eax
        call    FUN_006f4850
        mov     dword ptr [g_849304], ebx
L_3c54:
        push    esi
        mov     esi, offset g_849298
L_3c5a:
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_006f4b80
        add     esi, 4
        cmp     esi, offset g_8492e0
        jl      L_3c5a
        mov     dword ptr [g_84932c], ebx
        mov     byte ptr [g_858abc], bl
        pop     esi
L_3c7a:
        pop     ebx
        ret
    }
}
