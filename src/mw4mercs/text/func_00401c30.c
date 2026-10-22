/*
 * FUN_00401c30 (222 B) — builds a "m4c" + ".m4c" filename on the stack,
 * opens it via FUN_006fc400, reads it via FUN_006fc620, and calls
 * FUN_00401d10. __cdecl, 1 param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fc400(void);
extern void __cdecl FUN_006fc620(void);
extern void __cdecl FUN_006fc580(void);
extern void __cdecl FUN_00401d10(void);

extern char g_m4c[];      /* 0x76b78c "m4c" */
extern char g_dotm4c[];   /* 0x76b784 ".m4c" */

__declspec(naked) void __cdecl FUN_00401c30(int param_1)
{
    __asm {
        sub     esp, 0x104
        or      ecx, -1
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor     eax, eax
        mov     edi, offset g_m4c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     ebp, dword ptr [esp + 0x118]
        lea     edx, [esp + 0x14]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        or      ecx, -1
        xor     eax, eax
        lea     ebx, [ebp + 0xd9]
        mov     edi, ebx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp + 0x14]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, -1
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        or      ecx, -1
        mov     edi, offset g_dotm4c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp + 0x14]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, -1
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        mov     dword ptr [esp + 0x10], eax
        push    0x1
        lea     eax, [esp + 0x18]
        rep     movsb
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        call    FUN_006fc400
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L1CF7
        push    0x30c
        push    ebp
        push    eax
        call    FUN_006fc620
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        call    FUN_006fc580
L1CF7:
        push    0x1
        push    ebx
        push    ebp
        call    FUN_00401d10
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x104
        ret
    }
}
