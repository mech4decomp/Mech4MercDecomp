/*
 * FUN_006d3b90 (404 B) — Feature loader. Reads a feature record from a
 * stream object (vtable dispatch at +0x20), fills the destination struct
 * (this/ESI) with width/height/name/texture fields, and resolves the
 * feature via FUN_006e0d00 / FUN_006e0de0.
 *
 * __thiscall (ECX = this), RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_004128e0(void);
extern void __cdecl FUN_00412ab0(void);
extern void __cdecl FUN_006e0d00(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_006e0de0(void);
extern void __cdecl FUN_006d3160(void);
extern void __cdecl FUN_004084e0(void);
extern int g_84004c;

__declspec(naked) void __stdcall FUN_006d3b90(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        mov     esi, ecx
        push    0x4
        lea     ecx, [ebp - 0x4]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        mov     ebx, dword ptr [ebp + 0x10]
        cmp     ebx, 0x5
        mov     dword ptr [ebp + 0x8], 0x0
        jle     L3BF4
        mov     eax, dword ptr [ebp - 0x4]
        test    eax, eax
        jle     L3BE7
        lea     edx, [ebp + 0x8]
        push    edx
        push    edi
        call    FUN_00412a00
        add     esp, 0x8
        lea     ecx, [ebp + 0x8]
        call    FUN_004128e0
        mov     eax, dword ptr [ebp + 0x8]
        push    eax
        call    FUN_00412ab0
        add     esp, 0x4
        mov     dword ptr [ebp - 0x4], eax
        jmp     L3BF4
    L3BE7:
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [ebp - 0x4]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
    L3BF4:
        mov     edx, dword ptr [edi]
        push    0x2
        lea     eax, [ebp - 0x8]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x2
        lea     ecx, [ebp - 0xc]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0xc]
        and     edx, 0xffff
        and     eax, 0xffff
        cmp     ebx, 0x1
        mov     dword ptr [esi + 0x8], edx
        mov     dword ptr [esi + 0xc], eax
        jle     L3C43
        mov     edx, dword ptr [edi]
        push    0x1
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x1
        lea     ecx, [esi + 0x1]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        jmp     L3C4A
    L3C43:
        mov     byte ptr [esi], 0x0
        mov     byte ptr [esi + 0x1], 0x0
    L3C4A:
        cmp     ebx, 0x2
        jle     L3C6B
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esi + 0x10]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esi + 0x14]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        jmp     L3C73
    L3C6B:
        xor     eax, eax
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi + 0x10], eax
    L3C73:
        mov     edx, dword ptr [ebp - 0x4]
        mov     ebx, dword ptr [ebp + 0xc]
        push    edx
        mov     ecx, ebx
        call    FUN_006e0d00
        test    eax, eax
        mov     dword ptr [esi + 0x4], eax
        jnz     L3C9E
        mov     eax, dword ptr [ebp + 0x8]
        push    eax
        push    0x79ea88
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L3C9E
        int     3
    L3C9E:
        mov     edi, dword ptr [esi + 0x4]
        push    edi
        mov     ecx, ebx
        call    FUN_006e0de0
        mov     dword ptr [esi + 0x18], eax
        mov     eax, dword ptr [edi + 0x24]
        test    eax, eax
        jnz     L3CC9
        mov     ecx, dword ptr [ebp + 0x8]
        push    ecx
        push    0x79ea58
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L3CC9
        int     3
    L3CC9:
        mov     esi, dword ptr [esi + 0x4]
        mov     edx, dword ptr [esi + 0x24]
        mov     ecx, dword ptr [g_84004c]
        push    edx
        call    FUN_006d3160
        mov     eax, dword ptr [esi + 0x28]
        test    eax, eax
        jz      L3CEE
        mov     ecx, dword ptr [g_84004c]
        push    eax
        call    FUN_006d3160
    L3CEE:
        mov     esi, dword ptr [esi + 0x2c]
        test    esi, esi
        jz      L3D01
        mov     ecx, dword ptr [g_84004c]
        push    esi
        call    FUN_006d3160
    L3D01:
        mov     eax, dword ptr [ebp + 0x8]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebx
        jz      L3D1E
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L3D1E
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L3D1E:
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
