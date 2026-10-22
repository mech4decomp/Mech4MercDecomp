/*
 * FUN_0061ed60 (256 B) — __thiscall (ECX = this), RET 8 (two stack params).
 *
 * Vector resize/fill helper: grows the internal buffer via FUN_0061eeb0 /
 * FUN_0061ef30, or fills existing capacity with a repeated value, using
 * rep stosd for the bulk fill.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0061eeb0(void *a, void *b);
extern void __cdecl FUN_0061ef30(void *a, void *b);
extern void __cdecl FUN_0061ebb0(void);

__declspec(naked) void __stdcall FUN_0061ed60(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     ebx, dword ptr [ebp]
        mov     eax, dword ptr [ebp + 0x8]
        sub     eax, ebx
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        sar     eax, 0x2
        cmp     esi, eax
        push    edi
        jbe     label_0061ede4
        mov     cl, byte ptr [ebp + 0x8]
        lea     edx, [esp + 0x20]
        push    edx
        mov     byte ptr [esp + 0x24], cl
        push    esi
        lea     ecx, [esp + 0x18]
        call    FUN_0061eeb0
        test    esi, esi
        mov     edi, dword ptr [esp + 0x10]
        jbe     label_0061edae

    label_0061ed9a:
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        push    edi
        call    FUN_0061ef30
        add     esp, 0x8
        add     edi, 0x4
        dec     esi
        jnz     label_0061ed9a

    label_0061edae:
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [ebp], eax
        mov     ecx, dword ptr [ebp + 0x4]
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [ebp + 0x4], edi
        mov     edx, dword ptr [ebp + 0x8]
        mov     dword ptr [esp + 0x14], ecx
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [ebp + 0x8], eax
        call    FUN_0061ebb0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x8

    label_0061ede4:
        mov     edx, dword ptr [ebp + 0x4]
        mov     ecx, edx
        sub     ecx, ebx
        sar     ecx, 0x2
        cmp     esi, ecx
        jbe     label_0061ee26
        mov     eax, ebx
        cmp     eax, edx
        mov     ebx, dword ptr [esp + 0x24]
        jz      label_0061ee07
        mov     edi, dword ptr [ebx]

    label_0061edfe:
        mov     dword ptr [eax], edi
        add     eax, 0x4
        cmp     eax, edx
        jnz     label_0061edfe

    label_0061ee07:
        sub     esi, ecx
        jz      label_0061ee19

    label_0061ee0b:
        test    edx, edx
        jz      label_0061ee13
        mov     eax, dword ptr [ebx]
        mov     dword ptr [edx], eax

    label_0061ee13:
        add     edx, 0x4
        dec     esi
        jnz     label_0061ee0b

    label_0061ee19:
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 0x4], edx
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x8

    label_0061ee26:
        test    esi, esi
        jbe     label_0061ee39
        mov     eax, dword ptr [esp + 0x24]
        mov     eax, dword ptr [eax]
        mov     edi, ebx
        mov     ecx, esi
        rep     stosd
        lea     ebx, [ebx + esi*0x4]

    label_0061ee39:
        mov     eax, edx
        sub     eax, edx
        sar     eax, 0x2
        test    eax, eax
        mov     ecx, ebx
        jle     label_0061ee53
        sub     edx, ebx

    label_0061ee48:
        mov     esi, dword ptr [edx + ecx*0x1]
        mov     dword ptr [ecx], esi
        add     ecx, 0x4
        dec     eax
        jnz     label_0061ee48

    label_0061ee53:
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 0x4], ecx
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x8
    }
}
