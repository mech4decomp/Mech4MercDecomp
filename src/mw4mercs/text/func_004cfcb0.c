/*
 * FUN_004CFCB0 (386 B) — __stdcall, RET 0xC (3 params). Uses IAT calls
 * (0x76b2e0 / 0x76b2b0 / 0x76b2a0) and string constants 0x7723b4 /
 * 0x7723a8, copies strings through the 0x7b8de8 buffer, and calls several
 * helpers (0x4d2000, 0x4d2310, 0x4d2350, 0x4d21c0, 0x6fc4d0, 0x6f4950,
 * 0x6faca0, 0x6f49a0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_7db0a0;
extern char  g_7723b4[];
extern char  g_7723a8[];
extern char  g_7b8de8[];
extern int   g_7b8eec;
extern char  g_7b8ef0;
extern void *g_76b2e0;
extern void *g_76b2b0;
extern void *g_76b2a0;

extern void __cdecl FUN_004D2000(void);
extern void __cdecl FUN_004D2310(void);
extern void __cdecl FUN_004D2350(void);
extern void __cdecl FUN_004D21C0(void);
extern void __cdecl FUN_006FC4D0(void);
extern void __cdecl FUN_006F4950(void);
extern void __cdecl FUN_006FACA0(void);
extern void __cdecl FUN_006F49A0(void);

__declspec(naked) void FUN_004CFCB0(void)
{
    __asm {
        sub     esp, 0x44
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x50]
        push    esi
        mov     esi, dword ptr [g_7db0a0]
        push    edi
        push    4
        push    offset g_7723b4
        push    ebp
        call    dword ptr [g_76b2e0]
        add     esp, 0xc
        test    eax, eax
        jne     L_fd1d
        push    eax
        add     ebp, 4
        push    ebp
        lea     ecx, [esp + 0x18]
        call    FUN_004D2000
        lea     ecx, [esp + 0x10]
        call    FUN_004D2310
        mov     ecx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x5c]
        mov     edx, dword ptr [esp + 0x60]
        mov     dword ptr [eax], ecx
        mov     eax, dword ptr [esp + 0x2c]
        lea     ecx, [esp + 0x10]
        mov     dword ptr [edx], eax
        call    FUN_004D2350
        lea     ecx, [esp + 0x10]
        call    FUN_004D21C0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x44
        ret     0xc
L_fd1d:
        push    8
        push    offset g_7723a8
        push    ebp
        call    dword ptr [g_76b2b0]
        add     esp, 0xc
        test    eax, eax
        je      L_fe01
        mov     ecx, dword ptr [esi + 8]
        mov     edx, dword ptr [esi + 4]
        mov     edi, dword ptr [edx + ecx*4]
        or      ecx, -1
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, offset g_7b8de8
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
L_fd5f:
        push    0x5c
        push    offset g_7b8de8
        call    dword ptr [g_76b2a0]
        mov     ebx, eax
        add     esp, 8
        test    ebx, ebx
        je      L_fd94
        or      ecx, -1
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        lea     edx, [ebx + 1]
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        jmp     L_fdb1
L_fd94:
        or      ecx, -1
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, offset g_7b8de8
        rep     movsd
        mov     ecx, edx
L_fdb1:
        and     ecx, 3
        push    offset g_7b8de8
        rep     movsb
        call    FUN_006FC4D0
        test    al, al
        jne     L_fdcc
        test    ebx, ebx
        je      L_fe01
        mov     byte ptr [ebx], al
        jmp     L_fd5f
L_fdcc:
        mov     eax, dword ptr [g_7b8eec]
        push    eax
        mov     byte ptr [g_7b8ef0], 1
        call    FUN_006F4950
        mov     ecx, dword ptr [esp + 0x60]
        mov     edx, dword ptr [esp + 0x5c]
        push    ecx
        push    edx
        push    offset g_7b8de8
        call    FUN_006FACA0
        call    FUN_006F49A0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x44
        ret     0xc
L_fe01:
        mov     eax, dword ptr [g_7b8eec]
        push    eax
        mov     byte ptr [g_7b8ef0], 0
        call    FUN_006F4950
        mov     ecx, dword ptr [esp + 0x60]
        mov     edx, dword ptr [esp + 0x5c]
        push    ecx
        push    edx
        push    ebp
        call    FUN_006FACA0
        call    FUN_006F49A0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x44
        ret     0xc
    }
}
