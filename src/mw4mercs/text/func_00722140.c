/*
 * FUN_00722140 (125 B per CSV; actual body extends through the SEH
 * handler at 0x00722199) — __stdcall (RET 0x4, 1 param).
 *
 * SEH-guarded init: sets up an exception frame, sets global 0x849ea8=1,
 * calls FUN_0071f310/FUN_00719b10/FUN_00722130/FUN_00721280(param,0x200),
 * then tears down the frame and clears 0x849ea8. The SEH handler
 * (0x00722199) copies a string from 0x7a53b4 into the object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0071f310(void);
extern void __cdecl FUN_00719b10(void);
extern void __cdecl FUN_00722130(void);
extern void __cdecl FUN_00721280(void);

extern int g_849ea8;

__declspec(naked) void __stdcall FUN_00722140(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -0x1
        push    0x7a53d8
        push    0x75ded2
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x10
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x18], esp
        mov     dword ptr [g_849ea8], 0x1
        mov     dword ptr [ebp - 0x4], 0x0
        mov     esi, dword ptr [ebp + 0x8]
        push    esi
        call    FUN_0071f310
        push    esi
        call    FUN_00719b10
        push    esi
        call    FUN_00722130
        push    0x200
        push    esi
        call    FUN_00721280
        jmp     L_7221fe
        /* --- SEH handler (0x00722199) --- */
        mov     eax, 0x1
        ret
        mov     esp, dword ptr [ebp - 0x18]
        mov     eax, 0x7a53b4
        test    eax, eax
        jz      L_7221fe
        mov     edi, eax
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        inc     eax
        mov     edx, dword ptr [ebp + 0x8]
        mov     esi, dword ptr [edx + 0x4]
        mov     ecx, dword ptr [edx]
        lea     edi, [esi + eax]
        cmp     edi, ecx
        jle     L_7221cc
        sub     ecx, esi
        mov     eax, ecx
L_7221cc:
        mov     edi, dword ptr [edx + 0x8]
        mov     dword ptr [ebp - 0x20], edi
        mov     ebx, dword ptr [edx + 0x4]
        mov     ecx, eax
        mov     esi, 0x7a53b4
        add     edi, ebx
        mov     ebx, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [edx + 0x4]
        lea     eax, [ecx + eax - 0x1]
        mov     dword ptr [edx + 0x4], eax
        mov     ecx, dword ptr [ebp - 0x20]
        mov     byte ptr [eax + ecx], 0x0
L_7221fe:
        mov     dword ptr [ebp - 0x4], 0xffffffff
        mov     dword ptr [g_849ea8], 0x0
        mov     ecx, dword ptr [ebp - 0x10]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
