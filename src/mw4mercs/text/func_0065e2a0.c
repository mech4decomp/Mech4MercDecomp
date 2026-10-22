/*
 * FUN_0065E2A0 (304 B) — String assign/insert method (std::string-like).
 *
 * __thiscall (ECX = this), RET 0xC (three stack params).
 * Copies/inserts a range into the string, growing the buffer as needed.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_0076b28c;                                   /* IAT: memmove */
extern void *__cdecl FUN_004084d0(void);                   /* heap alloc */
extern void *__cdecl FUN_005cc0f0(void *dst, void *src, void *mid, void *end, int c);
extern int __stdcall FUN_00547c60(int a, int b);           /* heap free */

__declspec(naked) void __fastcall FUN_0065e2a0(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     ebx, dword ptr [esi]
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        cmp     edi, ecx
        jz      L_ce
        mov     ebp, dword ptr [esi + 4]
        cmp     ebx, ebp
        jz      L_ca
    L_ba:
        mov     al, byte ptr [edi]
        inc     edi
        mov     byte ptr [ebx], al
        inc     ebx
        cmp     edi, ecx
        /* __emit: backward jnz rel8; MSVC6 miscomputes disp (75 F6 vs ref 75 F2) */
        __emit 0x75
        __emit 0xF2
        jmp     L_ce
    L_ca:
        cmp     edi, ecx
        jnz     L_fd
    L_ce:
        mov     eax, dword ptr [esi + 4]
        cmp     ebx, eax
        jz      L_c4
        mov     edi, eax
        sub     edi, eax
        lea     ecx, [edi + 1]
        push    ecx
        push    eax
        push    ebx
        call    dword ptr [DAT_0076b28c]
        add     esp, 0xc
        add     edi, ebx
        mov     dword ptr [esi + 4], edi
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0xc
    L_fd:
        mov     edx, dword ptr [esi]
        mov     ebx, ecx
        mov     ecx, dword ptr [esi + 8]
        sub     ecx, edx
        mov     eax, ebp
        sub     eax, edx
        sub     ebx, edi
        mov     dword ptr [esp + 0x14], ecx
        lea     edx, [ebx + eax*1]
        dec     ecx
        cmp     edx, ecx
        mov     dword ptr [esp + 0x10], eax
        jbe     L_9a
        cmp     eax, ebx
        mov     dword ptr [esp + 0x1c], ebx
        lea     ecx, [esp + 0x1c]
        jc      L_2c
        lea     ecx, [esp + 0x10]
    L_2c:
        mov     ecx, dword ptr [ecx]
        lea     eax, [ecx + eax*1 + 1]
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        jz      L_47
        push    eax
        call    FUN_004084d0
        add     esp, 4
        mov     ebx, eax
        jmp     L_49
    L_47:
        xor     ebx, ebx
    L_49:
        mov     edx, dword ptr [esp + 0x20]
        push    0
        push    edx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esi]
        push    ebp
        call    FUN_005cc0f0
        mov     ecx, dword ptr [esp + 0x34]
        mov     edx, dword ptr [esp + 0x34]
        push    0
        push    ecx
        push    eax
        push    edx
        push    edi
        call    FUN_005cc0f0
        mov     edi, eax
        mov     eax, dword ptr [esp + 0x3c]
        push    eax
        push    ebp
        mov     byte ptr [edi], 0
        call    FUN_00547c60
        mov     ecx, dword ptr [esp + 0x4c]
        add     esp, 0x30
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi + 4], edi
        add     ebx, ecx
        pop     edi
        mov     dword ptr [esi + 8], ebx
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0xc
    L_9a:
        mov     edx, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x20]
        push    0
        push    edx
        lea     eax, [ebp + 1]
        push    eax
        push    ecx
        lea     edx, [edi + 1]
        push    edx
        call    FUN_005cc0f0
        lea     eax, [ebx + ebp*1]
        mov     byte ptr [eax], 0
        mov     cl, byte ptr [edi]
        add     esp, 0x14
        mov     byte ptr [ebp], cl
        mov     dword ptr [esi + 4], eax
    L_c4:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0xc
    }
}
