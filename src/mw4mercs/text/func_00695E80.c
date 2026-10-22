/*
 * FUN_00695E80 (212 B) — in-.text data block function (block 0x695B13).
 * Dispatches on a byte flag; builds strings from 0x76d170/0x76d834 and
 * calls FUN_00695a20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00696b20(void);
extern void __cdecl FUN_005cb1c0(void);
extern void __cdecl FUN_00563480(void);
extern void __cdecl FUN_00547ba0(void);
extern void __cdecl FUN_005480c0(void);
extern void __cdecl FUN_00695a20(void);
extern void __cdecl FUN_004084e0(void);

extern char g_76d170[];   /* string @ 0x76d170 */
extern char g_76d834[];   /* string @ 0x76d834 */

__declspec(naked) void FUN_00695E80(void)
{
    __asm {
        sub     esp, 0x14
        push    esi
        mov     esi, ecx
        call    FUN_00696b20
        test    al, al
        je      L5F4D
        mov     eax, dword ptr [esp + 0x20]
        cmp     byte ptr [eax], 1
        push    edi
        jne     L5ED6
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     ecx, [esp + 0x14]
        call    FUN_005cb1c0
        mov     edx, dword ptr [esp + 0x24]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_76d170
        repne scasb
        not     ecx
        dec     ecx
        push    edx
        add     ecx, offset g_76d170
        push    ecx
        push    offset g_76d170
        lea     ecx, [esp + 0x1c]
        call    FUN_00563480
        jmp     L5F25
L5ED6:
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0xf]
        push    ecx
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x18], 0
        mov     dword ptr [esp + 0x1c], 0
        mov     dword ptr [esp + 0x14], 0
        call    FUN_00547ba0
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_76d834
        repne scasb
        not     ecx
        dec     ecx
        add     ecx, offset g_76d834
        push    ecx
        push    offset g_76d834
        lea     ecx, [esp + 0x18]
        call    FUN_005480c0
L5F25:
        mov     edx, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x20]
        push    edx
        lea     eax, [esp + 0x14]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00695a20
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        pop     edi
        je      L5F4D
        push    eax
        call    FUN_004084e0
        add     esp, 4
L5F4D:
        pop     esi
        add     esp, 0x14
        ret     0xc
    }
}
