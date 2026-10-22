/*
 * FUN_00624530 (203 B) - __thiscall (ECX = this), RET 0x4 (one stack param).
 *
 * ABL interpreter region. Appends a NUL-terminated string (param_1) to a
 * growable string buffer on `this` (offsets 0x2dc/0x2e0), growing via
 * memmove (IAT 0x0076b28c) or FUN_005cbf80. Then calls FUN_00628e20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_007dab44;
extern unsigned int g_007dab40;
extern void *g_0076b28c;
extern void __cdecl FUN_005cbf80(void);
extern void __cdecl FUN_00628e20(void);

__declspec(naked) void FUN_00624530(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        mov     ebp, dword ptr [ecx + 0x2e0]
        push    esi
        lea     esi, [ecx + 0x2dc]
        xor     eax, eax
        push    edi
        or      ecx, 0xffffffff
        mov     edi, ebx
        repne   scasb
        mov     edi, dword ptr [esi]
        not     ecx
        dec     ecx
        mov     edx, ecx
        add     edx, ebx
        mov     eax, edx
        sub     eax, ebx
        sub     ebp, edi
        cmp     eax, ebp
        mov     dword ptr [esp + 0x10], esi
        ja      L_6245a5
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, ebx
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ecx]
        lea     esi, [edx + eax]
        mov     eax, dword ptr [ecx + 0x4]
        cmp     esi, eax
        jz      L_6245c9
        mov     edi, eax
        sub     edi, eax
        lea     ecx, [edi + 0x1]
        push    ecx
        push    eax
        push    esi
        call    dword ptr [g_0076b28c]
        mov     edx, dword ptr [esp + 0x1c]
        add     esp, 0xc
        add     edi, esi
        mov     dword ptr [edx + 0x4], edi
        jmp     L_6245c9
L_6245a5:
        mov     ecx, ebp
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, ebx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    edx
        add     ebp, ebx
        push    ebp
        call    FUN_005cbf80
L_6245c9:
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x40]
        add     eax, 0x40
        xor     ecx, 0x85739531
        jz      L_6245f3
        mov     ecx, dword ptr [eax]
        push    ebx
        xor     ecx, 0x85739531
        call    FUN_00628e20
L_6245f3:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
