/*
 * FUN_006c62f0 (432 B) — Texture/format node constructor. Initializes the
 * object (this/EBP), searches an existing node list (g_83a208) for a
 * matching name, else allocates a new node (FUN_006f3c80), copies the
 * name, and classifies the format by scanning the pixel data.
 *
 * __thiscall (ECX = this), RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_83a208;
extern int g_82e220;
extern int *g_76b2ac;   /* IAT: _stricmp */

extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_006c8550(void);
extern void __cdecl FUN_006c8670(void);
extern void __cdecl FUN_006c8660(void);
extern void __cdecl FUN_006c8280(void);
extern void __cdecl FUN_006c7680(void);
extern void __cdecl FUN_006c85a0(void);

__declspec(naked) void __stdcall FUN_006c62f0(void)
{
    __asm {
        push    ebx
        mov     bl, byte ptr [esp + 0x10]
        push    ebp
        mov     ebp, ecx
        push    esi
        xor     esi, esi
        push    edi
        mov     edi, dword ptr [g_83a208]
        cmp     edi, esi
        mov     eax, 0x3f800000
        mov     dword ptr [ebp + 0x20], esi
        mov     dword ptr [ebp + 0x1c], esi
        mov     dword ptr [ebp + 0x18], esi
        mov     dword ptr [ebp + 0x2c], esi
        mov     dword ptr [ebp + 0x28], esi
        mov     dword ptr [ebp + 0x24], esi
        mov     dword ptr [ebp + 0x38], esi
        mov     dword ptr [ebp + 0x34], esi
        mov     dword ptr [ebp + 0x30], esi
        mov     dword ptr [ebp + 0x14], eax
        mov     dword ptr [ebp + 0x10], eax
        mov     dword ptr [ebp + 0x8], 0xffffffff
        mov     dword ptr [ebp + 0xc], 0x1
        mov     byte ptr [ebp + 0x48], bl
        mov     dword ptr [ebp + 0x3c], esi
        mov     dword ptr [ebp + 0x40], esi
        mov     dword ptr [ebp + 0x44], esi
        jz      L6C637D
    L6C6346:
        test    bl, bl
        jnz     L6C636E
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, -0x1
        jz      L6C6358
        cmp     eax, dword ptr [edi + 0x8]
        jnz     L6C636E
    L6C6358:
        mov     ecx, dword ptr [esp + 0x14]
        lea     eax, [edi + 0x20]
        push    eax
        push    ecx
        call    dword ptr [g_76b2ac]
        add     esp, 0x8
        test    eax, eax
        jz      L6C6377
    L6C636E:
        mov     edi, dword ptr [edi + 0x1c]
        cmp     edi, esi
        jnz     L6C6346
        jmp     L6C637D
    L6C6377:
        inc     dword ptr [edi + 0x18]
        mov     dword ptr [ebp + 0x44], edi
    L6C637D:
        cmp     dword ptr [ebp + 0x44], esi
        jnz     L6C6497
        mov     edi, dword ptr [esp + 0x14]
        mov     edx, dword ptr [g_82e220]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        push    edx
        add     ecx, 0x24
        push    ecx
        call    FUN_006f3c80
        mov     ecx, dword ptr [esp + 0x14]
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        lea     edi, [ebx + 0xc]
        push    edi
        push    ecx
        mov     dword ptr [ebp + 0x44], ebx
        call    FUN_006c8550
        mov     edx, dword ptr [edi]
        push    edx
        call    FUN_006c8670
        mov     dword ptr [ebx + 0x10], eax
        mov     eax, dword ptr [edi]
        push    eax
        call    FUN_006c8660
        mov     ecx, dword ptr [esp + 0x18]
        mov     edi, dword ptr [esp + 0x14]
        mov     dword ptr [ebx + 0x14], eax
        mov     dword ptr [ebx + 0x8], ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     dword ptr [ebx], esi
        mov     eax, ecx
        mov     dword ptr [ebx + 0x18], 0x1
        mov     dword ptr [ebx + 0x4], esi
        shr     ecx, 0x2
        mov     esi, edi
        lea     edx, [ebx + 0x20]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     eax, dword ptr [ebx + 0x8]
        or      esi, 0xffffffff
        cmp     eax, esi
        jnz     L6C6464
        mov     eax, dword ptr [ebx + 0xc]
        mov     edi, dword ptr [eax + 0x8]
        imul    edi, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax + 0x14]
        add     ecx, 0x3
        xor     edx, edx
        test    edi, edi
        jle     L6C6458
    L6C6428:
        mov     al, byte ptr [ecx]
        cmp     al, 0xff
        jz      L6C6432
        test    al, al
        jnz     L6C6451
    L6C6432:
        test    al, al
        jnz     L6C643D
        mov     dword ptr [ebx + 0x8], 0x2
    L6C643D:
        mov     eax, dword ptr [ebx + 0xc]
        mov     edi, dword ptr [eax + 0x8]
        imul    edi, dword ptr [eax + 0x4]
        add     ecx, 0x4
        inc     edx
        cmp     edx, edi
        jl      L6C6428
        jmp     L6C6458
    L6C6451:
        mov     dword ptr [ebx + 0x8], 0x1
    L6C6458:
        cmp     dword ptr [ebx + 0x8], esi
        jnz     L6C6464
        mov     dword ptr [ebx + 0x8], 0x0
    L6C6464:
        mov     ecx, ebp
        call    FUN_006c8280
        mov     ecx, dword ptr [g_83a208]
        mov     eax, dword ptr [ebp + 0x44]
        mov     dword ptr [eax + 0x1c], ecx
        mov     ecx, ebp
        mov     dword ptr [g_83a208], eax
        call    FUN_006c7680
        mov     al, byte ptr [esp + 0x1c]
        test    al, al
        jnz     L6C6497
        mov     edx, dword ptr [ebp + 0x44]
        add     edx, 0xc
        push    edx
        call    FUN_006c85a0
    L6C6497:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
