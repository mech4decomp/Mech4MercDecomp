/*
 * FUN_00467EF0 (336 B, __stdcall ret 4) — Rebuilds a data array on an object.
 * Calls FUN_0046bf00, then via a virtual call (vtable+0xb0) fetches a count
 * into a local; if the object's array (esi+0x28) needs resizing, allocates a
 * new buffer (FUN_004084d0), copies the old entries in reverse (12-byte
 * stride), frees the old buffer (FUN_004084e0), and stores the new pointer.
 * Finally copies the array out (rep movsd/movsb) and issues a virtual call
 * (vtable+0xac). Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0046bf00(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) int FUN_00467EF0(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        mov     ebx, ecx
        push    esi
        mov     dword ptr [esp + 0x18], ebx
        call    FUN_0046bf00
        mov     eax, dword ptr [esi + 0xc]
        xor     ebp, ebp
        cmp     eax, ebp
        je      L_800d
        cmp     dword ptr [eax + 0x2c], ebp
        jbe     L_800d
        mov     eax, dword ptr [esi]
        push    edi
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        mov     ecx, esi
        call    dword ptr [eax + 0xb0]
        mov     esi, dword ptr [ebx + 0xc]
        mov     eax, dword ptr [esp + 0x24]
        mov     edi, dword ptr [esi + 0x2c]
        cmp     eax, edi
        mov     dword ptr [esp + 0x14], eax
        je      L_7fd4
        cmp     eax, ebp
        jbe     L_7fba
        mov     ebx, eax
        lea     eax, [eax + eax*2]
        shl     eax, 2
        push    eax
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        je      L_7f67
        dec     ebx
        mov     dword ptr [esp + 0x1c], ebx
        mov     ebp, eax
L_7f67:
        mov     ebx, dword ptr [esi + 0x28]
        test    ebx, ebx
        je      L_7fb1
        mov     edx, dword ptr [esp + 0x14]
        cmp     edx, edi
        jb      L_7f78
        mov     edx, edi
L_7f78:
        mov     ecx, edx
        dec     edx
        test    ecx, ecx
        je      L_7fa8
        lea     ecx, [edx + edx*2]
        shl     ecx, 2
        lea     eax, [ecx + ebx]
        lea     ecx, [ecx + ebp + 8]
        inc     edx
L_7f8d:
        mov     edi, dword ptr [eax]
        mov     dword ptr [ecx - 8], edi
        mov     edi, dword ptr [eax + 4]
        mov     dword ptr [ecx - 4], edi
        mov     edi, dword ptr [eax + 8]
        mov     dword ptr [ecx], edi
        dec     edx
        sub     eax, 0xc
        sub     ecx, 0xc
        test    edx, edx
        ja      L_7f8d
L_7fa8:
        push    ebx
        call    FUN_004084e0
        add     esp, 4
L_7fb1:
        mov     ebx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x28], ebp
        jmp     L_7fc9
L_7fba:
        mov     edx, dword ptr [esi + 0x28]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi + 0x28], ebp
L_7fc9:
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x2c], eax
        mov     eax, dword ptr [esp + 0x24]
L_7fd4:
        mov     edx, dword ptr [esi + 0x28]
        mov     esi, dword ptr [esp + 0x10]
        lea     ecx, [eax + eax*2]
        shl     ecx, 2
        mov     eax, ecx
        shr     ecx, 2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        mov     eax, dword ptr [ebx]
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x24]
        push    ecx
        push    edx
        mov     ecx, ebx
        call    dword ptr [eax + 0xac]
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x10
        ret     4
L_800d:
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0xb0]
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [ebx]
        push    eax
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0xac]
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x10
        ret     4
    }
}
