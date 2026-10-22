/*
 * FUN_00408330 (219 B) — engine init: strncpy a command-line string into a
 * global buffer, lowercase it, strstr for "-win32dedicated", and dispatch to
 * one of two init paths. __stdcall RET 0x10 (4 params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_007b82b4;   /* DAT_007b82b4 */
extern char  g_007b82b3;   /* DAT_007b82b3 */
extern char  g_007ddd21;   /* DAT_007ddd21 (dedicated flag) */
extern int   g_00859278;   /* DAT_00859278 */
extern int   g_007b8804;   /* DAT_007b8804 */
extern int  *g_0076b320;   /* IAT: strncpy */
extern int  *g_0076b29c;   /* IAT: tolower */
extern int  *g_0076b298;   /* IAT: strstr */
extern int  *g_0076b594;   /* IAT: GetDesktopWindow */
extern void __cdecl FUN_00708ae0(void);
extern void __cdecl FUN_006e5650(void);
extern void __cdecl FUN_00708b00(void);

__declspec(naked) void FUN_00408330(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        mov     ebp, dword ptr [esp + 0x0c]
        push    esi
        push    edi
        push    0x400
        push    ebx
        push    0x7b7eb4
        mov     dword ptr [g_007b82b4], ebp
        call    dword ptr [g_0076b320]
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0x0c
        mov     edi, 0x7b7eb4
        mov     byte ptr [g_007b82b3], 0
        repne   scasb
        not     ecx
        dec     ecx
        test    ecx, ecx
        mov     esi, 0x7b7eb4
        jle     L_40838a
    L_408377:
        mov     edi, ecx
        movsx   eax, byte ptr [esi]
        push    eax
        call    dword ptr [g_0076b29c]
        add     esp, 0x4
        mov     byte ptr [esi], al
        inc     esi
        dec     edi
        /* __emit: MSVC6 miscomputes backward jnz rel8 (off-by-2) because the
           FF 15 call-reloc inside the loop is sized as 5 bytes, not 6 */
        __emit 0x75
        __emit 0xED
    L_40838a:
        push    0x76cb90
        push    0x7b7eb4
        call    dword ptr [g_0076b298]
        add     esp, 0x8
        test    eax, eax
        setnz   al
        test    al, al
        mov     byte ptr [g_007ddd21], al
        jz      L_4083e7
        push    ebx
        mov     dword ptr [g_00859278], 1
        mov     dword ptr [g_007b8804], 0x406d00
        call    dword ptr [g_0076b594]
        push    eax
        push    ebp
        call    FUN_00708ae0
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x18]
        push    ecx
        push    ebx
        push    edx
        push    ebp
        call    FUN_006e5650
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0x10
    L_4083e7:
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ebx
        push    ecx
        push    ebp
        mov     dword ptr [g_00859278], 0
        call    FUN_00708b00
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0x10
    }
}
