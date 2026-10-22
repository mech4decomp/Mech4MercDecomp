/*
 * FUN_006fcf00 (684 B) — gundll.dll loader/initializer. Loads "gundll.dll"
 * (falling back to "Assets\\Binaries\\gundll.dll") via LoadLibraryA (IAT
 * 0x76b0c0), resolves a set of exported function pointers through
 * FUN_006fcdd0 and virtual dispatch, stores them into the object at
 * param_1+8..0x20, converts two strings with mbstowcs (IAT 0x76b3e8), and
 * calls a virtual method on the object at g_00856860+8. On any failure it
 * FreeLibrary's (IAT 0x76b0b8) and returns an HRESULT-style error
 * (0x80070000 | GetLastError()).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * g_0076b0c0;   /* LoadLibraryA IAT */
extern void * g_0076b1f8;   /* GetLastError IAT */
extern void * g_0076b0b8;   /* FreeLibrary IAT */
extern void * g_0076b3e8;   /* mbstowcs IAT */
extern int g_00858924;
extern int g_00856860;
extern int __cdecl FUN_006fcdd0(void);

__declspec(naked) void FUN_006fcf00(void)
{
    __asm {
        sub     esp, 0xe4
        push    ebx
        mov     ebx, dword ptr [g_0076b0c0]
        push    ebp
        push    esi
        push    edi
        xor     edi, edi
        push    0x7a0bf0
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x28], edi
        mov     dword ptr [esp + 0x20], edi
        mov     dword ptr [esp + 0x2c], edi
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [esp + 0x24], edi
        call    ebx
        cmp     eax, edi
        mov     esi, dword ptr [esp + 0xf8]
        mov     dword ptr [esi + 0x28], eax
        jnz     L_cf9a
        push    0x7a0bd4
        call    ebx
        cmp     eax, edi
        mov     dword ptr [esi + 0x28], eax
        jnz     L_cf9a
        mov     dword ptr [esi + 0x8], edi
        mov     dword ptr [esi + 0xc], edi
        mov     dword ptr [esi + 0x10], edi
        mov     dword ptr [esi + 0x14], edi
        mov     dword ptr [esi + 0x18], edi
        mov     dword ptr [esi + 0x1c], edi
        mov     dword ptr [esi + 0x20], edi
        mov     esi, dword ptr [g_0076b1f8]
        call    esi
        test    eax, eax
        jz      L_cf8b
        call    esi
        pop     edi
        pop     esi
        and     eax, 0xffff
        pop     ebp
        or      eax, 0x80070000
        pop     ebx
        add     esp, 0xe4
        ret     0x4
L_cf8b:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0xe4
        ret     0x4
L_cf9a:
        mov     ebx, dword ptr [esi + 0x28]
        lea     eax, [esp + 0x10]
        push    eax
        push    0x7b6f88
        push    0x7b6f78
        push    ebx
        call    FUN_006fcdd0
        mov     ebp, eax
        cmp     ebp, edi
        jge     L_cfd1
        push    ebx
        call    dword ptr [g_0076b0b8]
        mov     dword ptr [esi + 0x28], edi
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0xe4
        ret     0x4
L_cfd1:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x24]
        push    edx
        push    0x7b6f68
        push    eax
        call    dword ptr [ecx]
        mov     ebp, eax
        cmp     ebp, edi
        jge     L_d003
        push    ebx
        call    dword ptr [g_0076b0b8]
        mov     dword ptr [esi + 0x28], edi
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0xe4
        ret     0x4
L_d003:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x1c]
        push    edx
        push    0x7b6f58
        push    eax
        call    dword ptr [ecx]
        mov     ebp, eax
        cmp     ebp, edi
        jge     L_d035
        push    ebx
        call    dword ptr [g_0076b0b8]
        mov     dword ptr [esi + 0x28], edi
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0xe4
        ret     0x4
L_d035:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x28]
        push    edx
        push    0x7b6f48
        push    eax
        call    dword ptr [ecx]
        mov     ebp, eax
        cmp     ebp, edi
        jge     L_d067
        push    ebx
        call    dword ptr [g_0076b0b8]
        mov     dword ptr [esi + 0x28], edi
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0xe4
        ret     0x4
L_d067:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x14]
        push    edx
        push    0x7b6f38
        push    eax
        call    dword ptr [ecx]
        mov     ebp, eax
        cmp     ebp, edi
        jge     L_d099
        push    ebx
        call    dword ptr [g_0076b0b8]
        mov     dword ptr [esi + 0x28], edi
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0xe4
        ret     0x4
L_d099:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x18]
        push    edx
        push    0x7b6f28
        push    eax
        call    dword ptr [ecx]
        mov     ebp, eax
        cmp     ebp, edi
        jge     L_d0cb
        push    ebx
        call    dword ptr [g_0076b0b8]
        mov     dword ptr [esi + 0x28], edi
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0xe4
        ret     0x4
L_d0cb:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x20]
        push    edx
        push    0x7b6f18
        push    eax
        call    dword ptr [ecx]
        mov     ebp, eax
        cmp     ebp, edi
        jge     L_d0fd
        push    ebx
        call    dword ptr [g_0076b0b8]
        mov     dword ptr [esi + 0x28], edi
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0xe4
        ret     0x4
L_d0fd:
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x10]
        mov     ebp, dword ptr [g_0076b3e8]
        mov     dword ptr [esi + 0xc], ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x10], edx
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x8], eax
        mov     eax, dword ptr [esp + 0x28]
        mov     dword ptr [esi + 0x18], ecx
        mov     ecx, dword ptr [g_00858924]
        push    0x14
        mov     dword ptr [esi + 0x1c], edx
        mov     dword ptr [esi + 0x14], eax
        mov     eax, dword ptr [esp + 0x24]
        push    ecx
        lea     edx, [esp + 0x34]
        push    edx
        mov     dword ptr [esi + 0x20], eax
        call    ebp
        mov     eax, dword ptr [g_00858924]
        push    0x50
        push    eax
        lea     ecx, [esp + 0x68]
        push    ecx
        call    ebp
        mov     edx, dword ptr [g_00856860]
        mov     eax, dword ptr [edx + 0x8]
        mov     ecx, dword ptr [eax]
        add     esp, 0x18
        lea     edx, [esp + 0x54]
        push    edx
        push    edi
        lea     edx, [esp + 0x34]
        push    edx
        push    0x8589a4
        push    eax
        call    dword ptr [ecx + 0xc]
        mov     ebp, eax
        cmp     ebp, edi
        jge     L_d194
        push    ebx
        call    dword ptr [g_0076b0b8]
        mov     dword ptr [esi + 0x28], edi
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0xe4
        ret     0x4
L_d194:
        mov     eax, dword ptr [g_00856860]
        pop     edi
        pop     esi
        mov     byte ptr [eax + 0x24], 0x1
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0xe4
        ret     0x4
    }
}
