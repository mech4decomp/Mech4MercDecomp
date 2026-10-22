/*
 * FUN_006fb440 (412 B) — File-mapping cache. Looks up a file by name in a
 * linked list (g_8566f8); if not found, opens it (CreateFileA), maps it
 * (CreateFileMappingA / MapViewOfFile) and links a new node. Returns the
 * node; fills *param_2 (base ptr) and *param_3 (size).
 *
 * __cdecl, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_849308;
extern int g_8566f8;
extern int g_8566f4;
extern int g_896c88;

extern int *g_76b2ac;   /* IAT: _stricmp */
extern int *g_76b0e8;   /* IAT: CreateFileA */
extern int *g_76b420;   /* IAT: sprintf */
extern int *g_76b15c;   /* IAT: GetFileSize */
extern int *g_76b178;   /* IAT: CreateFileMappingA */
extern int *g_76b174;   /* IAT: MapViewOfFile */

extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_006fbc60(void);
extern void __cdecl FUN_006f91d0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_0072d830(void);
extern void __cdecl FUN_006f4230(void);

__declspec(naked) void __stdcall FUN_006fb440(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x100
        mov     eax, dword ptr [g_849308]
        push    ebx
        push    esi
        push    edi
        push    eax
        push    0x120
        call    FUN_006f3c80
        mov     ebx, dword ptr [ebp + 0x8]
        mov     esi, eax
        lea     eax, [esi + 0x1c]
        push    ebx
        push    eax
        call    FUN_006fbc60
        mov     edi, dword ptr [g_8566f8]
        test    edi, edi
        jz      L6FB495
    L6FB475:
        lea     eax, [esi + 0x1c]
        push    eax
        lea     ecx, [edi + 0x1c]
        push    ecx
        call    dword ptr [g_76b2ac]
        add     esp, 0x8
        test    eax, eax
        jz      L6FB5B4
        mov     edi, dword ptr [edi + 0x4]
        test    edi, edi
        jnz     L6FB475
    L6FB495:
        mov     edi, dword ptr [g_76b0e8]
    L6FB49B:
        push    0x0
        push    0x0
        push    0x3
        push    0x0
        push    0x1
        push    0x80000000
        push    ebx
        call    edi
        cmp     eax, -0x1
        mov     dword ptr [esi + 0x8], eax
        jnz     L6FB4ED
        mov     eax, dword ptr [g_896c88]
        push    ebx
        push    0x274d
        push    eax
        call    FUN_0072d830
        push    eax
        lea     ecx, [ebp - 0x100]
        push    ecx
        call    dword ptr [g_76b420]
        add     esp, 0xc
        lea     edx, [ebp - 0x100]
        push    edx
        push    0x982
        call    FUN_006f91d0
        test    eax, eax
        jz      L6FB4ED
        int     3
    L6FB4ED:
        mov     eax, dword ptr [esi + 0x8]
        cmp     eax, -0x1
        jz      L6FB49B
        mov     edi, eax
        push    0x0
        push    edi
        call    dword ptr [g_76b15c]
        push    0x0
        push    0x0
        push    0x0
        push    0x2
        push    0x0
        push    edi
        mov     dword ptr [esi + 0x14], eax
        call    dword ptr [g_76b178]
        test    eax, eax
        mov     dword ptr [esi + 0xc], eax
        jnz     L6FB53A
        mov     eax, dword ptr [g_896c88]
        push    ebx
        push    0x274e
        push    eax
        call    FUN_0072d830
        push    eax
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L6FB53A
        int     3
    L6FB53A:
        mov     ecx, dword ptr [esi + 0xc]
        push    0x0
        push    0x0
        push    0x0
        push    0x4
        push    ecx
        call    dword ptr [g_76b174]
        test    eax, eax
        mov     dword ptr [esi + 0x10], eax
        jnz     L6FB573
        mov     edx, dword ptr [g_896c88]
        push    ebx
        push    0x274e
        push    edx
        call    FUN_0072d830
        push    eax
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L6FB573
        int     3
    L6FB573:
        mov     eax, dword ptr [g_8566f8]
        mov     ecx, dword ptr [esi + 0x10]
        mov     edx, dword ptr [ebp + 0xc]
        mov     dword ptr [esi + 0x4], eax
        mov     eax, dword ptr [esi + 0x14]
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [ebp + 0x10]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [g_8566f4]
        inc     eax
        pop     edi
        mov     dword ptr [g_8566f4], eax
        mov     dword ptr [esi], 0x23aa7812
        mov     dword ptr [esi + 0x18], 0x1
        mov     dword ptr [g_8566f8], esi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    L6FB5B4:
        push    esi
        call    FUN_006f4230
        mov     eax, dword ptr [edi + 0x18]
        mov     edx, dword ptr [edi + 0x14]
        mov     ecx, dword ptr [edi + 0x10]
        inc     eax
        mov     dword ptr [edi + 0x18], eax
        mov     eax, dword ptr [ebp + 0x10]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, edi
        pop     edi
        pop     esi
        mov     dword ptr [edx], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
