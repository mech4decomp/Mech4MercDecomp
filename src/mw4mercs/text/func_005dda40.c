/*
 * FUN_005dda40 (125 B) — __thiscall, RET 8 (two stack params).
 *
 * Builds a growable string buffer object at `this` (ESI = ECX) from
 * param_1 (string) and param_2 (first char). Allocates a copy via
 * FUN_004084d0 and memmove (indirect call [0x0076b28c]).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004084d0(void);

__declspec(naked) void __cdecl func_005dda40(void)
{
    

extern int DAT_0076b28c;
__asm {
mov     eax, dword ptr [esp + 0x8]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        mov     esi, ecx
        mov     cl, byte ptr [eax]
        xor     edx, edx
        push    edi
        mov     dword ptr [esi], edx
        mov     byte ptr [esi + 0x8], cl
        xor     eax, eax
        mov     edi, ebp
        or      ecx, 0xffffffff
        repne   scasb
        not     ecx
        dec     ecx
        mov     ebx, ecx
        add     ebx, ebp
        mov     ecx, ebx
        sub     ecx, ebp
        lea     edi, [ecx + 0x1]
        cmp     edi, -0x2
        mov     dword ptr [esi + 0x4], edx
        mov     dword ptr [esi + 0x8], edx
        mov     dword ptr [esp + 0x18], ecx
        ja      L9C
        cmp     edi, edx
        jz      L90
        push    edi
        call    FUN_004084d0
        mov     ecx, dword ptr [esp + 0x1c]
        add     esp, 0x4
        jmp     L92
L90:
        xor     eax, eax
L92:
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x4], eax
        add     eax, edi
        mov     dword ptr [esi + 0x8], eax
L9C:
        mov     edi, dword ptr [esi]
        push    ecx
        push    ebp
        push    edi
        call dword ptr [DAT_0076b28c]
        sub     edi, ebp
        add     edi, ebx
        add     esp, 0xc
        mov     dword ptr [esi + 0x4], edi
        mov     byte ptr [edi], 0x0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    }


}
