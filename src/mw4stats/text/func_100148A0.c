/*
 * FUN_100148A0 (456 B, __fastcall, 1 param) - Destructor. Installs an
 * SEH frame, frees each of the 8 buffer descriptors (ptr at +0xNN,
 * len at +0xNN+0x10, cap at +0xNN+0xc) if non-null, then destroys the
 * sub-object at +0x20 via FUN_100067d0, sets the vtable to 0x10021688,
 * and restores the SEH frame.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100067d0(void);
extern void *g_100210ec;   /* IAT: free */

__declspec(naked) void __cdecl FUN_100148A0(void)
{
    __asm {
        push    -1
        push    0x1001fe98
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    ebx
        mov     ebx, dword ptr [g_100210ec]
        push    esi
        mov     esi, ecx
        push    edi
        xor     edi, edi
        mov     eax, dword ptr [esi + 0x508]
        mov     dword ptr [esp + 0xc], esi
        cmp     eax, edi
        jbe     L_148e1
        mov     eax, dword ptr [esi + 0x4fc]
        cmp     eax, edi
        jz      L_148e1
        push    eax
        call    ebx
        add     esp, 4
    L_148e1:
        mov     dword ptr [esi + 0x4fc], edi
        mov     dword ptr [esi + 0x50c], edi
        mov     dword ptr [esi + 0x508], edi
        mov     eax, dword ptr [esi + 0x470]
        cmp     eax, edi
        jbe     L_1490d
        mov     eax, dword ptr [esi + 0x464]
        cmp     eax, edi
        jz      L_1490d
        push    eax
        call    ebx
        add     esp, 4
    L_1490d:
        mov     dword ptr [esi + 0x464], edi
        mov     dword ptr [esi + 0x474], edi
        mov     dword ptr [esi + 0x470], edi
        mov     eax, dword ptr [esi + 0x3d8]
        cmp     eax, edi
        jbe     L_14939
        mov     eax, dword ptr [esi + 0x3cc]
        cmp     eax, edi
        jz      L_14939
        push    eax
        call    ebx
        add     esp, 4
    L_14939:
        mov     dword ptr [esi + 0x3cc], edi
        mov     dword ptr [esi + 0x3dc], edi
        mov     dword ptr [esi + 0x3d8], edi
        mov     eax, dword ptr [esi + 0x340]
        cmp     eax, edi
        jbe     L_14965
        mov     eax, dword ptr [esi + 0x334]
        cmp     eax, edi
        jz      L_14965
        push    eax
        call    ebx
        add     esp, 4
    L_14965:
        mov     dword ptr [esi + 0x334], edi
        mov     dword ptr [esi + 0x344], edi
        mov     dword ptr [esi + 0x340], edi
        mov     eax, dword ptr [esi + 0x2a8]
        cmp     eax, edi
        jbe     L_14991
        mov     eax, dword ptr [esi + 0x29c]
        cmp     eax, edi
        jz      L_14991
        push    eax
        call    ebx
        add     esp, 4
    L_14991:
        mov     dword ptr [esi + 0x29c], edi
        mov     dword ptr [esi + 0x2ac], edi
        mov     dword ptr [esi + 0x2a8], edi
        mov     eax, dword ptr [esi + 0x210]
        cmp     eax, edi
        jbe     L_149bd
        mov     eax, dword ptr [esi + 0x204]
        cmp     eax, edi
        jz      L_149bd
        push    eax
        call    ebx
        add     esp, 4
    L_149bd:
        mov     dword ptr [esi + 0x204], edi
        mov     dword ptr [esi + 0x214], edi
        mov     dword ptr [esi + 0x210], edi
        mov     eax, dword ptr [esi + 0x178]
        cmp     eax, edi
        jbe     L_149e9
        mov     eax, dword ptr [esi + 0x16c]
        cmp     eax, edi
        jz      L_149e9
        push    eax
        call    ebx
        add     esp, 4
    L_149e9:
        mov     dword ptr [esi + 0x16c], edi
        mov     dword ptr [esi + 0x17c], edi
        mov     dword ptr [esi + 0x178], edi
        mov     eax, dword ptr [esi + 0xe0]
        cmp     eax, edi
        jbe     L_14a15
        mov     eax, dword ptr [esi + 0xd4]
        cmp     eax, edi
        jz      L_14a15
        push    eax
        call    ebx
        add     esp, 4
    L_14a15:
        mov     dword ptr [esi + 0xd4], edi
        mov     dword ptr [esi + 0xe4], edi
        mov     dword ptr [esi + 0xe0], edi
        mov     eax, dword ptr [esi + 0x48]
        mov     dword ptr [esp + 0x18], edi
        cmp     eax, edi
        jbe     L_14a3f
        mov     eax, dword ptr [esi + 0x3c]
        cmp     eax, edi
        jz      L_14a3f
        push    eax
        call    ebx
        add     esp, 4
    L_14a3f:
        lea     ecx, [esi + 0x20]
        mov     dword ptr [esi + 0x3c], edi
        mov     dword ptr [esi + 0x4c], edi
        mov     dword ptr [esi + 0x48], edi
        call    FUN_100067d0
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esi], 0x10021688
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
