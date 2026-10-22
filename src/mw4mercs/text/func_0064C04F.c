/*
 * FUN_0064C04F (136 B) — __thiscall (this in ECX), RET 0x8 (2 params).
 * Iterates a list (g_0080d970) of objects, calling FUN_0064FF50 and a
 * callback (g_0076b304) per element until one succeeds.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0080d970;
extern void *g_0076b304;   /* callback fn ptr */

extern void __cdecl FUN_0064FF50(void);

__declspec(naked) void FUN_0064C04F(void)
{
    __asm {
        nop
        mov     eax, dword ptr [ecx + 0x20]
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    ebp
        push    esi
        lea     esi, [eax + eax*4]
        mov     eax, dword ptr [g_0080d970]
        shl     esi, 3
        mov     ecx, dword ptr [esi + eax + 4]
        mov     edx, dword ptr [ecx + 0x30]
        push    edi
        push    edx
        push    ebx
        call    FUN_0064FF50
        add     esp, 8
        test    eax, eax
        jne     L64c0d0
        mov     cl, byte ptr [esp + 0x18]
        test    cl, cl
        je      L64c0d0
        mov     ecx, dword ptr [g_0080d970]
        mov     edx, dword ptr [esi + ecx + 0x10]
        xor     edi, edi
        test    edx, edx
        jle     L64c0d0
        mov     ebp, dword ptr [g_0076b304]
    L64c099:
        mov     eax, dword ptr [esi + ecx + 0x14]
        mov     edx, dword ptr [eax + edi*4]
        mov     eax, dword ptr [edx + 0x20]
        lea     eax, [eax + eax*4]
        mov     ecx, dword ptr [ecx + eax*8 + 4]
        mov     edx, dword ptr [ecx + 0x30]
        push    edx
        push    ebx
        call    ebp
        add     esp, 4
        push    eax
        call    FUN_0064FF50
        add     esp, 8
        test    eax, eax
        jne     L64c0d0
        mov     ecx, dword ptr [g_0080d970]
        mov     edx, dword ptr [esi + ecx + 0x10]
        inc     edi
        cmp     edi, edx
        jl      L64c099
    L64c0d0:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    }
}
