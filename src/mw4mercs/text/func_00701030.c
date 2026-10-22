/*
 * FUN_00701030 (354 B) — __stdcall. Loads "gundll.dll" (falling back to
 * "Assets\\Binaries\\gundll.dll"), resolves an interface via
 * FUN_006fcdd0, calls a virtual method to obtain a codec/format handle,
 * converts a string via mbstowcs, and invokes a final virtual method.
 * On any failure, frees the library and returns the error code.
 *
 * __stdcall, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b0c0;          /* 0x0076b0c0 LoadLibraryA IAT */
extern void *g_76b1f8;          /* 0x0076b1f8 GetLastError IAT */
extern void *g_76b0b8;          /* 0x0076b0b8 FreeLibrary IAT */
extern void *g_76b3e8;          /* 0x0076b3e8 mbstowcs IAT */
extern unsigned int g_858924;   /* 0x00858924 */
extern int __cdecl FUN_006fcdd0(int, int, int, int);

__declspec(naked) int __stdcall FUN_00701030(int param_1)
{
    __asm {
        sub     esp, 0xd0
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [g_76b0c0]
        xor     ebp, ebp
        push    0x7a0bf0
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x18], ebp
        call    edi
        cmp     eax, ebp
        mov     esi, dword ptr [esp + 0xe4]
        mov     dword ptr [esi + 0x10], eax
        jnz     L_10a7
        push    0x7a0bd4
        call    edi
        cmp     eax, ebp
        mov     dword ptr [esi + 0x10], eax
        jnz     L_10a7
        mov     dword ptr [esi + 0x4], ebp
        mov     dword ptr [esi + 0x8], ebp
        mov     esi, dword ptr [g_76b1f8]
        call    esi
        test    eax, eax
        jz      L_1098
        call    esi
        pop     edi
        pop     esi
        and     eax, 0xffff
        pop     ebp
        or      eax, 0x80070000
        pop     ebx
        add     esp, 0xd0
        ret     0x4
L_1098:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0xd0
        ret     0x4
L_10a7:
        mov     ebx, dword ptr [esi + 0x10]
        lea     eax, [esp + 0x10]
        push    eax
        push    0x7b6f88
        push    0x7b6f78
        push    ebx
        call    FUN_006fcdd0
        mov     edi, eax
        cmp     edi, ebp
        jge     L_10de
        push    ebx
        call    dword ptr [g_76b0b8]
        mov     eax, edi
        pop     edi
        mov     dword ptr [esi + 0x10], ebp
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xd0
        ret     0x4
L_10de:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x14]
        push    edx
        push    0x7b6f68
        push    eax
        call    dword ptr [ecx]
        mov     edi, eax
        cmp     edi, ebp
        jge     L_1110
        push    ebx
        call    dword ptr [g_76b0b8]
        mov     eax, edi
        pop     edi
        mov     dword ptr [esi + 0x10], ebp
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xd0
        ret     0x4
L_1110:
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [g_858924]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edi, dword ptr [g_76b3e8]
        push    0x14
        mov     dword ptr [esi + 0x4], eax
        push    edx
        lea     eax, [esp + 0x20]
        push    eax
        mov     dword ptr [esi + 0x8], ecx
        call    edi
        mov     ecx, dword ptr [g_858924]
        push    0x50
        push    ecx
        lea     edx, [esp + 0x54]
        push    edx
        call    edi
        mov     eax, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [eax]
        add     esp, 0x18
        lea     edx, [esp + 0x40]
        push    edx
        push    ebp
        lea     edx, [esp + 0x20]
        push    edx
        push    0x8589a4
        push    eax
        call    dword ptr [ecx + 0xc]
        mov     edi, eax
        cmp     edi, ebp
        jge     L_117f
        push    ebx
        call    dword ptr [g_76b0b8]
        mov     eax, edi
        pop     edi
        mov     dword ptr [esi + 0x10], ebp
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xd0
        ret     0x4
L_117f:
        mov     eax, edi
        pop     edi
        mov     byte ptr [esi + 0xc], 0x1
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xd0
        ret     0x4
    }
}
