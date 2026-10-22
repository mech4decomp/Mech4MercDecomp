/*
 * FUN_005ddac0 (276 B) — __thiscall, RET 4 (one stack param).
 *
 * Appends a string to a growable string buffer object at `this` (EBX =
 * ECX). Reallocates via FUN_004084d0 / FUN_005cc0f0 when capacity is
 * exceeded, then memmove (indirect call [0x0076b28c]).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005cc0f0(void);

__declspec(naked) void __cdecl func_005ddac0(void)
{
    

extern int DAT_0076b28c;
__asm {
sub     esp, 0x8
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        mov     ebx, ecx
        or      ecx, 0xffffffff
        push    edi
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        dec     ecx
        mov     esi, ecx
        add     esi, ebp
        cmp     ebp, esi
        jz      LBC8
        mov     edi, dword ptr [ebx + 0x4]
        mov     ecx, dword ptr [ebx]
        mov     edx, esi
        sub     edx, ebp
        mov     dword ptr [esp + 0x10], edx
        mov     edx, dword ptr [ebx + 0x8]
        mov     eax, edi
        sub     eax, ecx
        sub     edx, ecx
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x1c], eax
        dec     edx
        add     eax, ecx
        cmp     eax, edx
        jbe     LBA2
        mov     edx, dword ptr [esp + 0x1c]
        cmp     edx, ecx
        mov     dword ptr [esp + 0x14], ecx
        lea     eax, [esp + 0x14]
        jc      LBB22
        lea     eax, [esp + 0x1c]
LBB22:
        mov     ecx, dword ptr [eax]
        lea     eax, [ecx + edx + 0x1]
        test    eax, eax
        mov     dword ptr [esp + 0x14], eax
        jz      LBB3F
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x1c], eax
        jmp     LBB47
LBB3F:
        mov     dword ptr [esp + 0x1c], 0x0
LBB47:
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x1c]
        push    0x0
        push    edx
        push    eax
        mov     eax, dword ptr [ebx]
        push    edi
        push    eax
        call    FUN_005cc0f0
        mov     ecx, dword ptr [esp + 0x24]
        push    ecx
        mov     edi, eax
        push    ebp
        push    edi
        call dword ptr [DAT_0076b28c]
        mov     eax, dword ptr [ebx]
        sub     esi, ebp
        add     edi, esi
        add     esp, 0x20
        test    eax, eax
        mov     byte ptr [edi], 0x0
        jz      LBB84
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
LBB84:
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [ebx + 0x4], edi
        pop     edi
        mov     dword ptr [ebx], eax
        add     eax, edx
        pop     esi
        mov     dword ptr [ebx + 0x8], eax
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x8
        ret     4
LBA2:
        lea     eax, [ebp + 0x1]
        sub     esi, eax
        push    esi
        push    eax
        lea     eax, [edi + 0x1]
        push    eax
        call dword ptr [DAT_0076b28c]
        mov     ecx, dword ptr [esp + 0x1c]
        lea     eax, [edi + ecx]
        mov     byte ptr [eax], 0x0
        mov     dl, byte ptr [ebp]
        add     esp, 0xc
        mov     byte ptr [edi], dl
        mov     dword ptr [ebx + 0x4], eax
LBC8:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x8
        ret     4
    }


}
