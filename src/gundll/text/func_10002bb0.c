/*
 * FUN_10002BB0 (456 B) - __stdcall, RET 0x14.
 * HTTP request setup helper. Guards a critical section (Enter/Leave
 * CriticalSection), allocates a 0x20-byte request object, duplicates two
 * strings (arg2/arg3) via FUN_10001d50, invokes a vtable method on the
 * caller's object, and issues an HTTP request via IAT 0x1004907c with a
 * callback (0x10002d80). On failure frees partial allocations via
 * FUN_10001d60 / InternetCloseHandle and returns an HRESULT.
 *
 * CFLAGS: /O1
 */

extern void *g_10049068;              /* IAT: EnterCriticalSection */
extern void *g_10049064;              /* IAT: LeaveCriticalSection */
extern void *g_1004907c;              /* IAT: HTTP request fn */
extern void (__stdcall *g_InternetCloseHandle)(void);  /* IAT 0x100491f0 */
extern void __cdecl FUN_10001d50(void);   /* rel32 call (alloc) */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_10002BB0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        xor     ebx, ebx
        cmp     ebp, ebx
        push    esi
        push    edi
        mov     dword ptr [esp + 0x10], ebx
        jne     L_2bd0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80004003
        pop     ebx
        pop     ecx
        ret     0x14
    L_2bd0:
        mov     edi, dword ptr [esp + 0x18]
        lea     esi, [edi + 0x6c]
        push    esi
        call    dword ptr [g_10049068]
        cmp     byte ptr [edi + 0x94], bl
        push    esi
        je      L_2bfa
        call    dword ptr [g_10049064]
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80004005
        pop     ebx
        pop     ecx
        ret     0x14
    L_2bfa:
        mov     byte ptr [edi + 0x94], 1
        call    dword ptr [g_10049064]
        push    0x20
        call    FUN_10001d50
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, ebx
        je      L_2c56
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi + 4], ebx
        mov     word ptr [esi + 8], bx
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi + 0x10], ebx
        mov     dword ptr [esi + 0x14], ebx
        mov     dword ptr [esi + 0x18], ebx
        mov     dword ptr [esi + 0x1c], ebx
        mov     edi, ebp
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_10001d50
        add     esp, 0x4
        cmp     eax, ebx
        mov     dword ptr [esi], eax
        jne     L_2c65
        mov     dword ptr [esp + 0x10], 0x8007000e
        jmp     L_2cfc
    L_2c56:
        xor     esi, esi
        mov     dword ptr [esp + 0x10], 0x8007000e
        jmp     L_2cfc
    L_2c65:
        mov     edi, dword ptr [esp + 0x20]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_10001d50
        add     esp, 0x4
        cmp     eax, ebx
        mov     dword ptr [esi + 4], eax
        jne     L_2c8c
        mov     dword ptr [esp + 0x10], 0x8007000e
        jmp     L_2cfc
    L_2c8c:
        mov     edx, dword ptr [esi]
        mov     ecx, ebp
    L_2c90:
        mov     al, byte ptr [ecx]
        inc     ecx
        mov     byte ptr [edx], al
        inc     edx
        cmp     al, bl
        jne     L_2c90
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esi + 4]
    L_2ca1:
        mov     al, byte ptr [ecx]
        inc     ecx
        mov     byte ptr [edx], al
        inc     edx
        cmp     al, bl
        jne     L_2ca1
        mov     edx, dword ptr [esp + 0x18]
        mov     ax, word ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x28]
        lea     edi, [edx - 4]
        mov     word ptr [esi + 8], ax
        mov     dword ptr [esi + 0xc], ecx
        mov     eax, dword ptr [edi]
        push    edi
        call    dword ptr [eax + 4]
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    ebx
        push    esi
        push    0x10002d80
        push    0x1000
        push    ebx
        mov     dword ptr [esi + 0x10], edi
        call    dword ptr [g_1004907c]
        test    eax, eax
        jne     L_2d6c
        mov     dword ptr [esi + 0x10], ebx
        mov     edx, dword ptr [edi]
        push    edi
        call    dword ptr [edx + 8]
        mov     dword ptr [esp + 0x10], 0x80004005
    L_2cfc:
        cmp     esi, ebx
        mov     eax, dword ptr [esp + 0x18]
        mov     byte ptr [eax + 0x94], bl
        je      L_2d6c
        mov     ecx, dword ptr [esi]
        push    ecx
        call    FUN_10001d60
        mov     edx, dword ptr [esi + 4]
        push    edx
        call    FUN_10001d60
        mov     eax, dword ptr [esi + 0x1c]
        mov     edi, dword ptr [g_InternetCloseHandle]
        add     esp, 0x8
        cmp     eax, ebx
        je      L_2d2e
        push    eax
        call    edi
    L_2d2e:
        mov     eax, dword ptr [esi + 0x18]
        cmp     eax, ebx
        je      L_2d38
        push    eax
        call    edi
    L_2d38:
        mov     eax, dword ptr [esi + 0x14]
        cmp     eax, ebx
        je      L_2d42
        push    eax
        call    edi
    L_2d42:
        mov     eax, dword ptr [esi + 0x10]
        cmp     eax, ebx
        je      L_2d4f
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 8]
    L_2d4f:
        mov     edx, dword ptr [esi + 4]
        push    edx
        mov     dword ptr [esi + 0x10], ebx
        call    FUN_10001d60
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_10001d60
        push    esi
        call    FUN_10001d60
        add     esp, 0xc
    L_2d6c:
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x14
    }
}
