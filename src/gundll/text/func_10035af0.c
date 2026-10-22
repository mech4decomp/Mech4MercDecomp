/*
 * FUN_10035AF0 (429 B) - __stdcall, RET 0x8.  COM-style object builder.
 * Allocates an object via a virtual call on arg0 (either a sized alloc
 * through arg0->+0x10 vtable[4] or a 4-byte alloc), creates a COM object
 * via CoCreateInstance (IAT 0x10049234), queries it, and registers it into
 * arg0's array at +0x24/+0x28.  Compares a 16-byte GUID against
 * 0x1005502c (repe cmpsd); on mismatch writes a 0x10-byte blob via vtable
 * call, else formats an IP string via wsprintfW (IAT 0x100491d0) and
 * lstrlenW (IAT 0x100490b8).  Frees via FUN_10001d60 on failure.
 * Returns an HRESULT.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049234;   /* IAT: CoCreateInstance */
extern void *g_100491d0;   /* IAT: wsprintfW */
extern void *g_100490b8;   /* IAT: lstrlenW */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_10035AF0(void)
{
    __asm {
        sub     esp, 0x28
        mov     eax, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [eax + 0x24]
        test    edx, edx
        push    ebx
        push    ebp
        push    esi
        mov     dword ptr [esp + 0xc], 0
        je      L_1
        mov     ecx, dword ptr [eax + 0x10]
        mov     eax, dword ptr [eax + 0x28]
        mov     esi, dword ptr [ecx]
        lea     eax, [eax*4 + 4]
        push    eax
        push    edx
        push    ecx
        call    dword ptr [esi + 0x10]
        jmp     L_2
    L_1:
        mov     eax, dword ptr [eax + 0x10]
        mov     ecx, dword ptr [eax]
        push    4
        push    eax
        call    dword ptr [ecx + 0xc]
    L_2:
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        jne     L_3
        pop     esi
        pop     ebp
        mov     eax, 0x8007000e
        pop     ebx
        add     esp, 0x28
        ret     0x8
    L_3:
        lea     edx, [esp + 0xc]
        push    edx
        push    0x1004ae8c
        push    0x17
        push    0
        push    0x1004ae9c
        call    dword ptr [g_10049234]
        mov     ebx, eax
        test    ebx, ebx
        jl      L_4
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        push    0x1004addc
        push    eax
        call    dword ptr [ecx + 0x34]
        mov     ebx, eax
        test    ebx, ebx
        jl      L_4
        mov     ebp, dword ptr [esp + 0x3c]
        mov     ax, word ptr [ebp + 0x104]
        test    ax, ax
        mov     ebx, 0x80004005
        je      L_5
        xor     edx, edx
        mov     dx, ax
        mov     eax, dword ptr [esp + 0xc]
        push    2
        push    4
        mov     dword ptr [esp + 0x44], edx
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x44]
        push    edx
        push    0x1005155c
        push    eax
        call    dword ptr [ecx + 0x48]
        mov     ebx, eax
        test    ebx, ebx
        jl      L_4
    L_5:
        push    edi
        lea     eax, [ebp + 0x108]
        mov     ecx, 4
        mov     edi, 0x1005502c
        mov     esi, eax
        xor     edx, edx
        repe    cmpsd
        pop     edi
        je      L_6
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [ecx]
        push    3
        push    0x10
        push    eax
        push    0x10051588
        push    ecx
        call    dword ptr [edx + 0x48]
    L_9:
        mov     ebx, eax
        test    ebx, ebx
        jge     L_7
    L_4:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    FUN_10001d60
        add     esp, 4
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x28
        ret     0x8
    L_6:
        mov     al, byte ptr [ebp + 0x100]
        test    al, al
        je      L_8
        movzx   ecx, byte ptr [ebp + 0x103]
        movzx   edx, byte ptr [ebp + 0x102]
        push    ecx
        movzx   ecx, byte ptr [ebp + 0x101]
        push    edx
        xor     edx, edx
        mov     dl, al
        push    ecx
        lea     eax, [esp + 0x20]
        push    edx
        push    0x10051568
        push    eax
        call    dword ptr [g_100491d0]
        mov     ecx, dword ptr [esp + 0x24]
        mov     esi, dword ptr [ecx]
        add     esp, 0x18
        push    1
        lea     edx, [esp + 0x18]
        push    edx
        call    dword ptr [g_100490b8]
        mov     edx, dword ptr [esp + 0x10]
        lea     eax, [eax + eax + 2]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    0x10051548
        push    edx
        call    dword ptr [esi + 0x48]
        jmp     L_9
    L_8:
        test    ebx, ebx
        jl      L_4
    L_7:
        mov     eax, dword ptr [esp + 0x38]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [eax + 0x28]
        mov     esi, dword ptr [esp + 0xc]
        mov     dword ptr [eax + 0x24], ecx
        mov     dword ptr [ecx + edx*4], esi
        mov     ecx, dword ptr [eax + 0x28]
        pop     esi
        inc     ecx
        mov     dword ptr [eax + 0x28], ecx
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x28
        ret     0x8
    }
}
