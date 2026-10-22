/*
 * FUN_00413360 (277 B) — __thiscall string-table node constructor
 * (RET 0x10). Like FUN_00413260 but with an extra param; reuses the
 * source node's buffer when sizes match, else copies with rep movsd/movsb,
 * then links the node into two hash chains (mod 0x3fd).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fbd50(void);
extern void __cdecl FUN_004084c0(void);

__declspec(naked) void FUN_00413360(void)
{
    __asm {
        mov     dl, byte ptr [esp + 0xc]
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [ebx]
        push    ebp
        push    esi
        mov     esi, dword ptr [ebx + 0x14]
        mov     ebp, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    edi
        mov     edi, dword ptr [eax]
        mov     ax, word ptr [ebx + 0x4]
        mov     dword ptr [esp + 0x14], edi
        mov     word ptr [ebp + 0x24], ax
        mov     dword ptr [ebp + 0x14], ecx
        mov     byte ptr [ebp + 0x27], dl
        mov     dword ptr [ebp + 0x1c], esi
        call    FUN_006fbd50
        test    esi, esi
        mov     dword ptr [ebp], eax
        mov     dword ptr [ebp + 0x4], edx
        jbe     L1
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [eax + 0x8]
        cmp     ecx, dword ptr [ebx + 0x18]
        jnz     L2
        mov     dword ptr [ebp + 0x8], ecx
        mov     cl, byte ptr [eax + 0x26]
        mov     byte ptr [ebp + 0x26], cl
        mov     byte ptr [eax + 0x26], 0x0
        jmp     L3
L2:
        mov     eax, dword ptr [ebx]
        mov     edx, dword ptr [eax + 0x24]
        push    edx
        push    esi
        call    FUN_004084c0
        mov     ecx, dword ptr [ebp + 0x1c]
        mov     esi, dword ptr [ebx + 0x18]
        mov     dword ptr [ebp + 0x8], eax
        mov     edi, eax
        mov     eax, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, eax
        add     esp, 0x8
        and     ecx, 0x3
        rep movsb
        mov     edi, dword ptr [esp + 0x14]
        mov     byte ptr [ebp + 0x26], 0x1
        jmp     L3
L1:
        mov     byte ptr [ebp + 0x26], 0x0
        mov     dword ptr [ebp + 0x8], 0x0
L3:
        mov     ecx, dword ptr [ebp + 0x1c]
        xor     eax, eax
        mov     ax, word ptr [ebp + 0x24]
        mov     dword ptr [ebp + 0x18], ecx
        mov     ecx, 0x3fd
        mov     ebx, dword ptr [ebx + 0x8]
        mov     dword ptr [ebp + 0x20], 0xffffffff
        cdq
        idiv    ecx
        test    ebx, ebx
        mov     eax, dword ptr [edi + edx*4 + 0x18]
        mov     dword ptr [ebp + 0xc], eax
        mov     dword ptr [edi + edx*4 + 0x18], ebp
        jz      L4
        mov     ecx, dword ptr [esp + 0x1c]
        and     ecx, 0xff
        inc     ecx
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, ebx
        lea     edi, [ebp + 0x28]
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     edi, dword ptr [esp + 0x14]
        jmp     L5
L4:
        mov     byte ptr [ebp + 0x28], 0x0
L5:
        mov     eax, dword ptr [esp + 0x18]
        xor     edx, edx
        mov     ecx, 0x3fd
        div     ecx
        mov     eax, dword ptr [edi + edx*4 + 0x100c]
        mov     dword ptr [edi + edx*4 + 0x100c], ebp
        inc     word ptr [edi + 0x14]
        pop     edi
        mov     dword ptr [ebp + 0x10], eax
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     0x10
    }
}
