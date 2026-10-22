/*
 * FUN_006e7010 (249 B) — Dialog control setup loop.
 *
 * Sends WM_SETREDRAW (0x184) to two dialog items, then iterates a
 * table at 0x00841770 sending WM_SETTEXT (0x181) / WM_ENABLE (0x19a)
 * messages via GetDlgItem/SendMessageA. __cdecl, no return value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b5a4;   /* GetDlgItem (IAT) */
extern void *g_76b560;   /* SendMessageA (IAT) */
extern int   g_841768;   /* DAT_00841768 */
extern char  g_841770;   /* DAT_00841770 (table base) */
extern char  g_84181c;   /* DAT_0084181c (table end) */

extern void __cdecl FUN_0072d830(void);
extern void __cdecl FUN_006e7110(void);

__declspec(naked) void __cdecl FUN_006e7010(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [g_76b5a4]
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1C]
        xor     esi, esi
        push    esi
        push    esi
        push    0x184
        push    0x4B8
        push    edi
        call    ebx
        mov     ebp, dword ptr [g_76b560]
        push    eax
        call    ebp
        push    esi
        push    esi
        push    0x184
        push    0x4BA
        push    edi
        call    ebx
        push    eax
        call    ebp
        mov     dword ptr [esp + 0x1C], esi
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x14], offset g_841770
L_705d:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [g_841768]
        test    ecx, ecx
        lea     ecx, [esi + 0x1194]
        push    ecx
        push    edx
        jz      L_70a9
        call    FUN_0072d830
        push    eax
        mov     eax, dword ptr [esp + 0x20]
        push    eax
        push    0x181
        push    0x4B8
        push    edi
        call    ebx
        push    eax
        call    ebp
        mov     ecx, dword ptr [esp + 0x1C]
        push    esi
        mov     eax, ecx
        push    eax
        inc     ecx
        push    0x19A
        mov     dword ptr [esp + 0x28], ecx
        push    0x4B8
        jmp     L_70db
L_70a9:
        call    FUN_0072d830
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        push    0x181
        push    0x4BA
        push    edi
        call    ebx
        push    eax
        call    ebp
        mov     ecx, dword ptr [esp + 0x10]
        push    esi
        mov     eax, ecx
        push    eax
        inc     ecx
        push    0x19A
        mov     dword ptr [esp + 0x1C], ecx
        push    0x4BA
L_70db:
        push    edi
        call    ebx
        push    eax
        call    ebp
        mov     eax, dword ptr [esp + 0x14]
        add     eax, 4
        inc     esi
        cmp     eax, offset g_84181c
        mov     dword ptr [esp + 0x14], eax
        jle     L_705d
        push    edi
        call    FUN_006e7110
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret
    }
}
