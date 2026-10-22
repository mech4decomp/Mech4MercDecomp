/*
 * FUN_0051DCB0 (475 B) — __cdecl, RET 0xc. Object/entity data loader.
 *
 * Reads a config object (via XOR-obfuscated globals 0x7dab40/0x7dab44),
 * allocates a 0x9c-byte object (malloc FUN_004084d0), copies string data
 * into a buffer (FUN_006f3c80), copies a set of fields out to caller
 * pointers, and frees a string (FUN_006f4230 / FUN_004084e0). Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_7dab40;
extern int   g_7dab44;

extern void __cdecl FUN_00595b60(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004084d0(void);   /* malloc */
extern void __cdecl FUN_00592a70(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_004084e0(void);   /* free */
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void FUN_0051DCB0(void)
{
    __asm {
        sub     esp, 0x68
        mov     eax, dword ptr [esp + 0x74]
        mov     ecx, dword ptr [eax + 8]
        mov     edx, dword ptr [eax + 0xc]
        __emit 0x89          /* MOV [ESP],ECX (89 4C 24 00) -- MSVC6 drops the 00 disp byte for [esp+0] */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        mov     ecx, dword ptr [eax + 0x10]
        mov     dword ptr [esp + 4], edx
        mov     edx, dword ptr [eax + 0x14]
        mov     dword ptr [esp + 8], ecx
        mov     ecx, dword ptr [eax + 0x18]
        mov     dword ptr [esp + 0xc], edx
        mov     edx, dword ptr [eax + 0x1c]
        push    ebx
        mov     ebx, dword ptr [g_7dab40]
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [eax + 0x20]
        push    ebp
        mov     ebp, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x1c], edx
        mov     edx, dword ptr [eax + 0x24]
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, dword ptr [eax + 0x28]
        push    esi
        mov     dword ptr [esp + 0x28], edx
        mov     edx, dword ptr [g_7dab44]
        mov     dword ptr [esp + 0x2c], ecx
        mov     ecx, dword ptr [edx]
        push    edi
        mov     edi, dword ptr [eax + 4]
        mov     eax, dword ptr [eax]
        mov     edx, dword ptr [eax]
        xor     ecx, ebx
        mov     eax, dword ptr [ecx + 0x44]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x34]
        push    edx
        call    FUN_00595b60
        mov     esi, eax
        push    1
        lea     ecx, [esi + 0x34]
        push    ecx
        lea     ecx, [esp + 0x3c]
        call    FUN_004d1f80
        push    0x9c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_51dd57
        lea     edx, [esp + 0x34]
        push    edx
        mov     ecx, eax
        call    FUN_00592a70
        mov     ebx, eax
        jmp     L_51dd59
L_51dd57:
        xor     ebx, ebx
L_51dd59:
        mov     eax, dword ptr [esi + 0x50]
        mov     dword ptr [ebx + 0x40], eax
        mov     eax, dword ptr [edi]
        test    eax, eax
        je      L_51dd71
        push    eax
        call    FUN_006f4230
        mov     dword ptr [edi], 0
L_51dd71:
        push    0
        push    0x80
        call    FUN_006f3c80
        mov     edx, dword ptr [ebx + 0x8c]
        test    edx, edx
        mov     dword ptr [esp + 0x84], eax
        mov     dword ptr [edi], eax
        je      L_51dd93
        inc     byte ptr [edx - 1]
L_51dd93:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x84]
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        test    edx, edx
        rep movsb
        je      L_51ddce
        mov     al, byte ptr [edx - 1]
        dec     edx
        dec     al
        mov     byte ptr [edx], al
        jne     L_51ddce
        push    edx
        call    FUN_004084e0
        add     esp, 4
L_51ddce:
        mov     ecx, dword ptr [ebx + 0x5c]
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ebx + 0x60]
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [ebx + 0x64]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [ebx + 0x68]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [ebx + 0x6c]
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [ebx + 0x70]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [ebx + 0x74]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [ebx + 0x78]
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [ebx + 0x7c]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [esp + 0x30]
        mov     dword ptr [eax], edx
        mov     eax, dword ptr [ebp]
        test    eax, eax
        je      L_51de33
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebp], 0
L_51de33:
        push    0
        push    0x80
        call    FUN_006f3c80
        mov     edi, dword ptr [ebx + 0x98]
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     dword ptr [ebp], edx
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        test    ebx, ebx
        rep movsb
        je      L_51de73
        mov     edx, dword ptr [ebx]
        push    1
        mov     ecx, ebx
        call    dword ptr [edx]
L_51de73:
        lea     ecx, [esp + 0x34]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x68
        ret     0xc
    }
}
