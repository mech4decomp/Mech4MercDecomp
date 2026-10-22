/*
 * FUN_0071F230 (145 B) — returns a username string in global 0x0087D434.
 *
 * Calls GetUserNameA(&DAT_0087d434, &local_4=0x101). On failure, calls
 * FUN_00708A60("Network\Logon","username",0) and uses its result if
 * non-empty; otherwise falls back to the string at 0x0079E7F8. Copies the
 * chosen string into 0x0087D434 and returns its address.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* IAT entry: GetUserNameA (0x0076B000) */
extern void *g_iat_76b000;

extern void __stdcall FUN_00708a60(void);

__declspec(naked) void func_0071f230(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        lea     eax, [esp + 0x8]
        push    eax
        push    0x87d434
        mov     dword ptr [esp + 0x10], 0x101
        call    dword ptr [g_iat_76b000]
        test    eax, eax
        jnz     L_f2b8
        push    eax
        push    0x7a4988
        push    0x7a4978
        call    FUN_00708a60
        test    eax, eax
        jz      L_f293
        cmp     byte ptr [eax], 0x0
        jz      L_f293
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, 0x87d434
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        pop     edi
        mov     eax, 0x87d434
        pop     esi
        pop     ecx
        ret
L_f293:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x79e7f8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, 0x87d434
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
L_f2b8:
        pop     edi
        mov     eax, 0x87d434
        pop     esi
        pop     ecx
        ret
    }
}
