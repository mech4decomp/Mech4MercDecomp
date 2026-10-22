/*
 * FUN_0064D580 (528 B) — __cdecl. Bytecode interpreter: switch on
 * DAT_00805908 (jump table at 0x64d790, byte lookup at 0x64d7a8),
 * dispatching to handlers that consume DAT_00805918 and append to
 * DAT_0080592c. Uses FUN_0064edf0/0064d2a0/0064d3d0/0064db40/00563060
 * and recurses into itself (case 0x32).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_805908;
extern int g_805918;
extern int g_8058e0;
extern int g_80d9bc;
extern int g_80592c;
extern int g_805928;
extern int g_80d9b4;
extern int g_80d9b8;
extern char g_64d7a8;
extern void __cdecl FUN_0064edf0(void);
extern void __cdecl FUN_0064d2a0(void);
extern void __cdecl FUN_0064d3d0(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_0064d580(void);
extern void __cdecl FUN_0064db40(void);

__declspec(naked) void __cdecl FUN_0064d580(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [g_805908]
        xor     eax, eax
        dec     ecx
        cmp     ecx, 0x31
        push    esi
        push    edi
        ja      L_d78c
        xor     edx, edx
        mov     dl, byte ptr [ecx + g_64d7a8]
        __emit 0xFF   /* __emit: MSVC6 re-bases jmp [edx*4+imm32] via EBX; ref needs FF 24 95 */
        __emit 0x24
        __emit 0x95
        __emit 0x90
        __emit 0xD7
        __emit 0x64
        __emit 0x00
        mov     ecx, dword ptr [g_805918]
        mov     eax, dword ptr [ecx]
        add     ecx, 0x4
        mov     dword ptr [g_805918], ecx
        mov     ecx, dword ptr [eax + 0x18]
        cmp     ecx, 0x8
        jnz     L_d5d6
        mov     esi, dword ptr [g_8058e0]
        push    eax
        call    FUN_0064edf0
        add     esp, 0x4
        pop     edi
        mov     dword ptr [g_8058e0], esi
        pop     esi
        pop     ecx
        ret
L_d5d6:
        cmp     ecx, 0x1
        jnz     L_d5e8
        push    eax
        call    FUN_0064d2a0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ecx
        ret
L_d5e8:
        push    0x0
        push    eax
        call    FUN_0064d3d0
        add     esp, 0x8
        pop     edi
        pop     esi
        pop     ecx
        ret
        mov     ecx, dword ptr [g_805918]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [g_80d9bc]
        add     ecx, 0x4
        mov     dword ptr [g_805918], ecx
        mov     ecx, dword ptr [eax + 0x3c]
        cmp     ecx, edx
        jnz     L_d64d
        mov     esi, dword ptr [g_80592c]
        mov     edx, dword ptr [g_805928]
        mov     edi, dword ptr [eax + 0x1c]
        add     esi, 0x4
        add     edx, 0xa000
        cmp     esi, edx
        mov     dword ptr [g_80592c], esi
        jc      L_d641
        push    0x0
        call    FUN_00563060
        add     esp, 0x4
L_d641:
        mov     eax, dword ptr [g_80d9bc]
        mov     dword ptr [esi], edi
        jmp     L_d776
L_d64d:
        mov     esi, dword ptr [g_80592c]
        mov     ecx, dword ptr [g_805928]
        mov     eax, dword ptr [eax + 0x1c]
        add     esi, 0x4
        add     ecx, 0xa000
        cmp     esi, ecx
        mov     dword ptr [esp + 0x8], eax
        mov     dword ptr [g_80592c], esi
        jc      L_d67d
        push    0x0
        call    FUN_00563060
        add     esp, 0x4
L_d67d:
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [g_80d9b4]
        mov     dword ptr [esi], edx
        jmp     L_d776
        mov     eax, dword ptr [g_805918]
        mov     esi, dword ptr [eax]
        mov     edx, dword ptr [esi + 0x10]
        add     eax, 0x4
        or      ecx, 0xffffffff
        mov     dword ptr [g_805918], eax
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0x1
        push    ebx
        jle     L_d6e2
        mov     edi, dword ptr [g_80592c]
        mov     eax, dword ptr [g_805928]
        mov     ebx, dword ptr [esi + 0x14]
        add     edi, 0x4
        add     eax, 0xa000
        cmp     edi, eax
        mov     dword ptr [g_80592c], edi
        jc      L_d6db
        push    0x0
        call    FUN_00563060
        add     esp, 0x4
L_d6db:
        mov     eax, dword ptr [esi + 0x3c]
        mov     dword ptr [edi], ebx
        jmp     L_d714
L_d6e2:
        mov     esi, dword ptr [g_80592c]
        mov     ecx, dword ptr [g_805928]
        mov     bl, byte ptr [edx]
        add     esi, 0x4
        add     ecx, 0xa000
        cmp     esi, ecx
        mov     dword ptr [g_80592c], esi
        jc      L_d70d
        push    0x0
        call    FUN_00563060
        add     esp, 0x4
L_d70d:
        mov     eax, dword ptr [g_80d9b8]
        mov     byte ptr [esi], bl
L_d714:
        mov     ecx, dword ptr [g_805918]
        movsx   edx, byte ptr [ecx]
        pop     ebx
        inc     ecx
        pop     edi
        mov     dword ptr [g_805908], edx
        mov     dword ptr [g_805918], ecx
        pop     esi
        pop     ecx
        ret
        mov     eax, dword ptr [g_805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov     dword ptr [g_805908], ecx
        mov     dword ptr [g_805918], eax
        call    FUN_0064d580
        mov     ecx, dword ptr [g_80592c]
        mov     esi, dword ptr [ecx]
        mov     edx, 0x1
        sub     edx, esi
        pop     edi
        mov     dword ptr [ecx], edx
        pop     esi
        pop     ecx
        ret
        mov     eax, dword ptr [g_805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov     dword ptr [g_805908], ecx
        mov     dword ptr [g_805918], eax
        call    FUN_0064db40
L_d776:
        mov     ecx, dword ptr [g_805918]
        movsx   edx, byte ptr [ecx]
        inc     ecx
        mov     dword ptr [g_805908], edx
        mov     dword ptr [g_805918], ecx
L_d78c:
        pop     edi
        pop     esi
        pop     ecx
        ret
    }
}
