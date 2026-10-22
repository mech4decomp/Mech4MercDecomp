/*
 * FUN_10033b10 (243 B) — __thiscall, RET 0x14.
 * Builds a packed vertex/index buffer from a list of sub-buffers.
 */

extern void FUN_10033ad0(void);
extern void __stdcall FUN_100339c0(void);
extern void FUN_10033ce0(void);

__declspec(naked) void FUN_10033b10(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0x8]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x20]
        test    ebp, ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        mov     ebx, ecx
        mov     dword ptr [esp + 0x20], edi
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [eax], 0
        mov     si, di
        jle     loc_10033b4f
        mov     ecx, dword ptr [esp + 0x24]
        lea     eax, [ecx + 0x8]
        mov     ecx, ebp
    loc_10033b41:
        add     si, word ptr [eax]
        add     eax, 0xC
        dec     ecx
        jnz     loc_10033b41
        mov     word ptr [esp + 0x20], si
    loc_10033b4f:
        mov     ecx, ebx
        call    FUN_10033ad0
        test    eax, eax
        jnz     loc_10033b6d
        mov     edx, dword ptr [esp + 0x20]
        push    eax
        push    edx
        call    FUN_100339c0
        test    eax, eax
        jl      loc_10033bfb
    loc_10033b6d:
        mov     ecx, ebx
        call    FUN_10033ce0
        cmp     si, ax
        jbe     loc_10033b86
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80004005
        pop     ebx
        pop     ecx
        ret     0x14
    loc_10033b86:
        test    ebp, ebp
        mov     eax, dword ptr [ebx + 0x10]
        mov     cx, word ptr [esp + 0x1C]
        mov     word ptr [eax], cx
        jle     loc_10033be8
        mov     edx, dword ptr [esp + 0x24]
        add     edx, 0x4
        mov     dword ptr [esp + 0x1C], ebp
    loc_10033ba0:
        mov     esi, dword ptr [edx]
        test    esi, esi
        movzx   ecx, word ptr [edx - 0x4]
        mov     ax, word ptr [edx + 0x4]
        mov     ebp, dword ptr [ebx + 0x10]
        mov     word ptr [ecx + ebp], ax
        jz      loc_10033bd4
        mov     ebp, dword ptr [ebx + 0x10]
        xor     ecx, ecx
        mov     cx, ax
        movzx   edi, di
        add     edi, ebp
        mov     ebp, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, ebp
        and     ecx, 0x3
        rep movsb
        mov     edi, dword ptr [esp + 0x10]
    loc_10033bd4:
        add     edi, eax
        mov     eax, dword ptr [esp + 0x1C]
        add     edx, 0xC
        dec     eax
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esp + 0x1C], eax
        jnz     loc_10033ba0
    loc_10033be8:
        mov     edx, dword ptr [ebx + 0x10]
        mov     eax, dword ptr [esp + 0x18]
        xor     ecx, ecx
        mov     cx, di
        mov     dword ptr [eax], edx
        add     dword ptr [ebx + 0x10], ecx
        xor     eax, eax
    loc_10033bfb:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x14
    }
}
