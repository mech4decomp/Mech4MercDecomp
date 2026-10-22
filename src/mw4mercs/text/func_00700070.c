/*
 * FUN_00700070 (188 B) — __stdcall (RET 0x4, 1 arg) server-query init.
 *
 * Checks a global state object (DAT_00856860+0x20); if active, queries
 * server state via FUN_006fd260/FUN_006fd230, and if in state 2 enters
 * a critical section (DAT_008aaa20) to run FUN_006ffd60, setting error
 * globals on failure. Returns 1 in AL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_856860;   /* DAT_00856860 */
extern char g_856804;  /* DAT_00856804 */
extern int g_8567f8;   /* DAT_008567f8 */
extern char g_856829;  /* DAT_00856829 */
extern int g_85683c;   /* DAT_0085683c */
extern int g_856844;   /* DAT_00856844 */
extern char g_85685e;  /* DAT_0085685e */

extern void (__stdcall *g_76b110)(void);  /* IAT EnterCriticalSection */
extern void (__stdcall *g_76b100)(void);  /* IAT LeaveCriticalSection */

extern void __cdecl FUN_006fd260(void);
extern int __cdecl FUN_006fd230(void);
extern char __cdecl FUN_006ffd60(void);
extern int __cdecl FUN_006fabf0(void);

__declspec(naked) int __stdcall FUN_00700070(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [g_856860]
        mov     eax, dword ptr [ecx + 0x20]
        test    eax, eax
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        mov     byte ptr [esi + 0x20], 0x0
        jz      call_virtual
        call    FUN_006fd260
        mov     ecx, dword ptr [g_856860]
        call    FUN_006fd230
        cmp     eax, 0x2
        jnz     chk_state1
        mov     al, byte ptr [g_856804]
        test    al, al
        jnz     call_virtual
        push    0x8aaa20
        call    dword ptr [g_76b110]
        push    0x8567f8
        mov     dword ptr [g_8567f8], 0x0
        mov     byte ptr [g_856829], 0x1
        call    FUN_006ffd60
        test    al, al
        jnz     leave_cs
        push    0x7a1064
        mov     dword ptr [g_85683c], 0xfffffff8
        mov     dword ptr [g_856844], 0x80004005
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      leave_cs
        int     3
leave_cs:
        push    0x8aaa20
        mov     byte ptr [g_85685e], 0x0
        call    dword ptr [g_76b100]
        mov     al, 0x1
        pop     esi
        pop     ebp
        ret     0x4
chk_state1:
        cmp     eax, 0x1
        jz      set_flag
call_virtual:
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 0x4]
set_flag:
        mov     byte ptr [g_85685e], 0x1
        mov     al, 0x1
        pop     esi
        pop     ebp
        ret     0x4
    }
}
