/*
 * FUN_00620af0 (231 B) — __thiscall (ECX = this, saved but unused), no stack
 * params, RET 0.
 *
 * Iterates over a table at DAT_0080d974 (entries of 8 bytes each), building
 * two formatted strings via sprintf (function pointer at 0x0076b420) and
 * concatenating them with repne scasb / rep movsd / rep movsb, then calls
 * FUN_0061fc80 (thiscall) with the result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_80d980;                 /* DAT_0080d980 */
extern int g_80d974;                 /* DAT_0080d974 */
extern int g_76b420;                 /* sprintf function pointer */
extern void __stdcall FUN_0061fc80(void *p);   /* __thiscall: ECX=this, __stdcall cleanup */

__declspec(naked) void __stdcall FUN_00620af0(void)
{
    __asm {
        sub     esp, 0x454
        mov     eax, dword ptr [g_80d980]
        push    ebx
        xor     ebx, ebx
        inc     eax
        cdq
        sub     eax, edx
        sar     eax, 0x1
        test    eax, eax
        mov     dword ptr [esp + 0x8], ecx
        jle     L_B0CF
        push    ebp
        mov     ebp, dword ptr [g_76b420]
        push    esi
        push    edi
        mov     dword ptr [esp + 0x10], 0x1
L_B021:
        mov     ecx, dword ptr [g_80d974]
        mov     eax, dword ptr [ecx + ebx*0x8]
        lea     edx, [eax + 0x4]
        mov     eax, dword ptr [eax]
        push    edx
        push    eax
        lea     ecx, [esp + 0x84]
        push    0x78cbb0
        push    ecx
        call    ebp
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [g_80d980]
        add     esp, 0x10
        cmp     edx, eax
        jge     L_B09C
        mov     eax, dword ptr [g_80d974]
        mov     eax, dword ptr [eax + ebx*0x8 + 0x4]
        mov     edx, dword ptr [eax]
        lea     ecx, [eax + 0x4]
        push    ecx
        push    edx
        lea     eax, [esp + 0x20]
        push    0x78cbb0
        push    eax
        call    ebp
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0x10
        lea     edi, [esp + 0x18]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp + 0x7c]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
L_B09C:
        mov     ecx, dword ptr [esp + 0x14]
        lea     eax, [esp + 0x7c]
        push    eax
        call    FUN_0061fc80
        mov     ecx, dword ptr [g_80d980]
        mov     edi, dword ptr [esp + 0x10]
        lea     eax, [ecx + 0x1]
        cdq
        sub     eax, edx
        inc     ebx
        add     edi, 0x2
        sar     eax, 0x1
        cmp     ebx, eax
        mov     dword ptr [esp + 0x10], edi
        jl      L_B021
        pop     edi
        pop     esi
        pop     ebp
L_B0CF:
        pop     ebx
        add     esp, 0x454
        ret
    }
}
