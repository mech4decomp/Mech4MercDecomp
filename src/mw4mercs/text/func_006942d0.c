/*
 * FUN_006942D0 (370 B) — string/vector append helper.
 *
 * Appends the NUL-terminated string at (param_1+0x18) into the growable
 * buffer described by param_2 (struct { char *begin; char *end; char *cap; }),
 * growing/reallocating as needed.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_iat_76b28c;   /* memmove */
extern void *__cdecl FUN_005db560(void *p);
extern void *__cdecl FUN_005ddec0(void *a, void *b, void *c);
extern void __cdecl FUN_00547c60(void *a, int b);

__declspec(naked) void func_006942d0(void)
{
    __asm {
        sub     esp, 0x8
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [eax + 0x18]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        or      ecx, 0xffffffff
        xor     eax, eax
        push    esi
        push    edi
        mov     edi, edx
        repne   scasb
        mov     edi, dword ptr [ebp]
        not     ecx
        dec     ecx
        mov     ebx, ecx
        mov     ecx, dword ptr [ebp + 0x4]
        add     ebx, edx
        mov     eax, ebx
        sub     ecx, edi
        sub     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esp + 0x1c], ecx
        ja      L_694349
        mov     ecx, eax
        mov     esi, edx
        mov     edx, ecx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [ebp]
        lea     esi, [ecx + eax*0x1]
        mov     eax, dword ptr [ebp + 0x4]
        cmp     esi, eax
        jz      L_69443a
        mov     edi, eax
        sub     edi, eax
        lea     ecx, [edi + 0x1]
        push    ecx
        push    eax
        push    esi
        call    dword ptr [g_iat_76b28c]
        add     esp, 0xc
        add     edi, esi
        mov     dword ptr [ebp + 0x4], edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret
L_694349:
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x1c]
        lea     edi, [ecx + edx*0x1]
        cmp     edi, ebx
        jz      L_69443a
        mov     edx, dword ptr [ebp]
        mov     eax, dword ptr [ebp + 0x8]
        sub     eax, edx
        mov     esi, ebx
        sub     esi, edi
        mov     dword ptr [esp + 0x14], eax
        lea     edx, [esi + ecx*0x1]
        dec     eax
        cmp     edx, eax
        mov     dword ptr [esp + 0x20], ecx
        mov     dword ptr [esp + 0x10], esi
        jbe     L_694415
        cmp     ecx, esi
        mov     dword ptr [esp + 0x1c], esi
        lea     eax, [esp + 0x1c]
        jc      L_69439c
        lea     eax, [esp + 0x20]
L_69439c:
        mov     eax, dword ptr [eax]
        lea     eax, [eax + ecx*0x1 + 0x1]
        test    eax, eax
        mov     dword ptr [esp + 0x20], eax
        jz      L_6943b9
        push    eax
        call    FUN_005db560
        add     esp, 0x4
        mov     dword ptr [esp + 0x1c], eax
        jmp     L_6943c1
L_6943b9:
        mov     dword ptr [esp + 0x1c], 0x0
L_6943c1:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [ebp + 0x4]
        push    ecx
        push    eax
        mov     eax, dword ptr [ebp]
        push    eax
        call    FUN_005ddec0
        mov     edx, dword ptr [esp + 0x1c]
        push    edx
        mov     esi, eax
        push    edi
        push    esi
        call    dword ptr [g_iat_76b28c]
        mov     eax, dword ptr [esp + 0x2c]
        push    eax
        mov     eax, dword ptr [ebp]
        sub     ebx, edi
        add     esi, ebx
        push    eax
        mov     byte ptr [esi], 0x0
        call    FUN_00547c60
        mov     eax, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x40]
        add     esp, 0x20
        pop     edi
        mov     dword ptr [ebp], eax
        mov     dword ptr [ebp + 0x4], esi
        add     eax, ecx
        pop     esi
        mov     dword ptr [ebp + 0x8], eax
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret
L_694415:
        lea     eax, [edi + 0x1]
        sub     ebx, eax
        push    ebx
        push    eax
        mov     eax, dword ptr [ebp + 0x4]
        inc     eax
        push    eax
        call    dword ptr [g_iat_76b28c]
        mov     eax, dword ptr [ebp + 0x4]
        lea     ecx, [eax + esi*0x1]
        mov     byte ptr [ecx], 0x0
        mov     dl, byte ptr [edi]
        add     esp, 0xc
        mov     byte ptr [eax], dl
        mov     dword ptr [ebp + 0x4], ecx
L_69443a:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret
    }
}
