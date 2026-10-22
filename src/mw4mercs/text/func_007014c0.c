/*
 * FUN_007014c0 (80 B) — Teardown/reset helper. If a global object is
 * present, optionally invokes a virtual method, then calls two
 * cleanup functions and nulls the global. Clears three more globals
 * and returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_007011a0(void *obj);
extern void __cdecl FUN_004084e0(void *obj);

extern void *g_856870;   /* DAT_00856870 */
extern unsigned int g_856864;   /* DAT_00856864 */
extern unsigned int g_856868;   /* DAT_00856868 */
extern unsigned int g_85686c;   /* DAT_0085686c */

__declspec(naked) unsigned int FUN_007014c0(void)
{
    __asm {
        mov     eax, dword ptr [g_856870]
        push    ebx
        xor     ebx, ebx
        cmp     eax, ebx
        jz      L_7014fa
        cmp     byte ptr [eax + 0xC], bl
        jz      L_7014df
        mov     eax, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     eax, dword ptr [g_856870]
L_7014df:
        push    eax
        call    FUN_007011a0
        mov     edx, dword ptr [g_856870]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [g_856870], ebx
L_7014fa:
        mov     dword ptr [g_856864], ebx
        mov     dword ptr [g_856868], ebx
        mov     dword ptr [g_85686c], ebx
        xor     eax, eax
        pop     ebx
        ret
    }
}
