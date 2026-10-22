/*
 * FUN_00560CFF (291 B @ 0x560cff) - __thiscall, RET 8. Parses a string into a
 * numeric value using a lookup table at 0x7b4750, then converts to float via
 * FUN_0075db4a.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00560c10(void);
extern void __cdecl FUN_0075db4a(void);
extern float g_007ddd84;
extern float g_007ddd80;

__declspec(naked) void FUN_00560CFF(void)
{
    __asm {
        nop
        sub     esp, 8
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    edi
        call    dword ptr [eax + 8]
        push    eax
        mov     ecx, esi
        call    FUN_00560c10
        mov     edx, eax
        inc     edx
        jns     L_560d1f
        xor     edx, edx
        jmp     L_560d29
L_560d1f:
        cmp     edx, 0xd
        jle     L_560d29
        mov     edx, 0xd
L_560d29:
        mov     ecx, dword ptr [esp + 0x20]
        mov     ebx, dword ptr [esp + 0x1c]
        mov     dword ptr [ecx], 0
        or      ecx, 0xffffffff
        lea     ebp, [esi + 4]
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        dec     ecx
        test    ecx, ecx
        mov     dword ptr [ebx], 0
        mov     dword ptr [esp + 0x10], ecx
        jle     L_560ddc
        mov     eax, 0xfffffffc
        sub     eax, esi
        mov     dword ptr [esp + 0x1c], eax
L_560d63:
        mov     al, byte ptr [ebp]
        cmp     al, 0x20
        jne     L_560d76
        lea     ecx, [edx + edx*4]
        lea     esi, [edx + ecx*2]
        xor     eax, eax
        mov     edi, esi
        jmp     L_560d99
L_560d76:
        cmp     al, 0x6d
        jne     L_560d8a
        lea     ecx, [edx + edx*4]
        lea     esi, [edx + ecx*2]
        mov     eax, 0xa
        lea     edi, [esi + 0xa]
        jmp     L_560d99
L_560d8a:
        movsx   eax, al
        lea     ecx, [edx + edx*4]
        sub     eax, 0x30
        lea     esi, [edx + ecx*2]
        lea     edi, [esi + eax]
L_560d99:
        shl     edi, 4
        mov     ecx, dword ptr [edi + 0x7b4758]
        sub     ecx, dword ptr [edi + 0x7b4750]
        mov     edi, dword ptr [ebx]
        add     eax, esi
        add     edi, ecx
        shl     eax, 4
        mov     esi, dword ptr [eax + 0x7b475c]
        mov     dword ptr [ebx], edi
        mov     edi, dword ptr [eax + 0x7b4754]
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [eax]
        sub     esi, edi
        cmp     esi, ecx
        jbe     L_560dcd
        mov     dword ptr [eax], esi
L_560dcd:
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x10]
        inc     ebp
        add     eax, ebp
        cmp     eax, ecx
        jl      L_560d63
L_560ddc:
        mov     ecx, dword ptr [ebx]
        xor     edi, edi
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], edi
        fild    qword ptr [esp + 0x10]
        fdiv    dword ptr [g_007ddd84]
        call    FUN_0075db4a
        mov     esi, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], edi
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [ebx], eax
        fdiv    dword ptr [g_007ddd80]
        call    FUN_0075db4a
        pop     edi
        mov     dword ptr [esi], eax
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     8
    }
}
