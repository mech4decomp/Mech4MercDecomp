/*
 * FUN_005ddbf0 (356 B) — __thiscall, RET 8 (two stack params).
 *
 * Inserts a string range into a growable string buffer at `this` (EBP =
 * ECX). Copies via rep movsd/movsb, reallocates via FUN_004084d0 /
 * FUN_005cc0f0 when needed, and memmove (indirect call [0x0076b28c]).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005cc0f0(void);

__declspec(naked) void __cdecl func_005ddbf0(void)
{
    

extern int DAT_0076b28c;
__asm {
push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     ebp, ecx
        mov     edx, dword ptr [ebp + 0x4]
        push    edi
        mov     edi, dword ptr [ebp]
        mov     eax, ebx
        sub     eax, esi
        sub     edx, edi
        cmp     eax, edx
        ja      LDC52
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [ebp]
        lea     esi, [ecx + eax]
        mov     eax, dword ptr [ebp + 0x4]
        cmp     esi, eax
        jz      LDD4A
        mov     edi, eax
        sub     edi, eax
        lea     ecx, [edi + 0x1]
        push    ecx
        push    eax
        push    esi
        call dword ptr [DAT_0076b28c]
        add     esp, 0xc
        add     edi, esi
        mov     dword ptr [ebp + 0x4], edi
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret     8
LDC52:
        mov     ecx, edx
        mov     eax, ecx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x18]
        lea     esi, [edx + ecx]
        cmp     esi, ebx
        jz      LDD4A
        mov     ecx, dword ptr [ebp]
        mov     eax, dword ptr [ebp + 0x8]
        mov     edi, ebx
        sub     edi, esi
        sub     eax, ecx
        dec     eax
        lea     ecx, [edi + edx]
        cmp     ecx, eax
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [esp + 0x10], edi
        jbe     LDD25
        cmp     edx, edi
        mov     dword ptr [esp + 0x18], edi
        lea     eax, [esp + 0x18]
        jc      LDCA1
        lea     eax, [esp + 0x1c]
LDCA1:
        mov     eax, dword ptr [eax]
        lea     eax, [eax + edx + 0x1]
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        jz      LDCBE
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x18], eax
        jmp     LDCC6
LDCBE:
        mov     dword ptr [esp + 0x18], 0x0
LDCC6:
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [ebp + 0x4]
        push    0x0
        push    ecx
        push    edx
        push    eax
        mov     eax, dword ptr [ebp]
        push    eax
        call    FUN_005cc0f0
        mov     edi, eax
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        push    esi
        push    edi
        call dword ptr [DAT_0076b28c]
        mov     eax, dword ptr [ebp]
        sub     ebx, esi
        add     edi, ebx
        add     esp, 0x20
        test    eax, eax
        mov     byte ptr [edi], 0x0
        jz      LDD08
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
LDD08:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [ebp], eax
        mov     dword ptr [ebp + 0x4], edi
        pop     edi
        add     eax, ecx
        mov     dword ptr [ebp + 0x8], eax
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret     8
LDD25:
        lea     eax, [esi + 0x1]
        sub     ebx, eax
        push    ebx
        push    eax
        mov     eax, dword ptr [ebp + 0x4]
        inc     eax
        push    eax
        call dword ptr [DAT_0076b28c]
        mov     eax, dword ptr [ebp + 0x4]
        lea     ecx, [eax + edi]
        mov     byte ptr [ecx], 0x0
        mov     dl, byte ptr [esi]
        add     esp, 0xc
        mov     byte ptr [eax], dl
        mov     dword ptr [ebp + 0x4], ecx
LDD4A:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret     8
    }


}
