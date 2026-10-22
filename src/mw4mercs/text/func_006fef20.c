/*
 * FUN_006fef20 (253 B) — State-machine driver / device control.
 *
 * Dispatches on a state variable (0x0085683c), calling into a
 * device object (0x00856860) via its vtable. __stdcall, RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_85683c;   /* DAT_0085683c (state) */
extern char g_85685e;   /* DAT_0085685e */
extern char g_85685f;   /* DAT_0085685f */
extern int  g_856860;   /* DAT_00856860 (device object) */
extern int  g_856840;   /* DAT_00856840 */
extern int  g_856844;   /* DAT_00856844 */
extern int  g_8589cc;   /* DAT_008589cc */

extern void __cdecl FUN_006fd260(void);
extern void __cdecl FUN_006fd230(void);

__declspec(naked) void __stdcall FUN_006fef20(void)
{
    __asm {
        mov     eax, dword ptr [g_85683c]
        push    ebx
        xor     ebx, ebx
        cmp     eax, 1
        jz      L_fefb9
        cmp     eax, 0x40
        jnz     L_fef46
        cmp     byte ptr [g_85685e], bl
        jnz     L_fefb9
        cmp     byte ptr [g_85685f], bl
        jnz     L_fefb9
L_fef46:
        mov     ecx, dword ptr [g_856860]
        cmp     dword ptr [ecx + 8], ebx
        jz      L_ff017
        call    FUN_006fd260
        mov     ecx, dword ptr [g_856860]
        call    FUN_006fd230
        cmp     eax, 1
        jz      L_ff017
        cmp     eax, 2
        jnz     L_fef83
        mov     dword ptr [g_85683c], 0x80
        xor     eax, eax
        pop     ebx
        ret     4
L_fef83:
        and     dword ptr [g_856840], 0xFFFFFFF9
        mov     eax, dword ptr [g_856860]
        mov     eax, dword ptr [eax + 8]
        mov     ecx, dword ptr [eax]
        push    eax
        mov     byte ptr [g_85685e], bl
        mov     byte ptr [g_85685f], bl
        mov     dword ptr [g_85683c], 0xFFFFFFFC
        call    dword ptr [ecx + 0x1C]
        mov     dword ptr [g_856844], eax
        xor     eax, eax
        pop     ebx
        ret     4
L_fefb9:
        mov     edx, dword ptr [g_856860]
        mov     eax, dword ptr [edx + 8]
        mov     edx, dword ptr [g_8589cc]
        mov     ecx, dword ptr [eax]
        push    0x8FC
        push    edx
        push    eax
        mov     dword ptr [g_85683c], 2
        call    dword ptr [ecx + 0x10]
        cmp     eax, 0x8000000A
        jz      L_ff00d
        mov     dword ptr [g_856844], eax
        and     dword ptr [g_856840], 0xFFFFFFF9
        mov     byte ptr [g_85685e], bl
        mov     byte ptr [g_85685f], bl
        mov     dword ptr [g_85683c], 0xFFFFFFFE
        xor     eax, eax
        pop     ebx
        ret     4
L_ff00d:
        mov     dword ptr [g_85683c], 4
L_ff017:
        xor     eax, eax
        pop     ebx
        ret     4
    }
}
