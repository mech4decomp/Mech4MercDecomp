/*
 * FUN_00678F80 (extent 0x678F80-0x67918F, 527 bytes) - GAMEPLAY in-.text block.
 * __thiscall-style (ecx = this), ret 4. Transcribed from capstone disasm.
 */
#pragma warning(disable : 4035 4793)

extern int *g_0076b420;

extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_00411d10(void);
extern void __cdecl FUN_00411dc0(void);
extern void __cdecl FUN_00501d90(void);

__declspec(naked) void func_00678F80(void)
{
    __asm {
        sub     esp, 0x204
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x210]
        push    esi
        push    edi
        mov     ebx, ecx
        push    ebp
        call    FUN_00501d90
        mov     eax, dword ptr [ebx + 0x170]
        mov     ecx, dword ptr [eax + 0x2c]
        push    ecx
        push    0x797eec
        mov     ecx, ebp
        call    FUN_00411c40
        mov     edx, dword ptr [ebx + 0x16c]
        push    edx
        push    0x776fcc
        mov     ecx, ebp
        call    FUN_00411d10
        mov     eax, dword ptr [ebx + 0x2d8]
        mov     ecx, dword ptr [ebx + 0x2d4]
        sub     eax, ecx
        je      L_9051
        test    eax, eax
        mov     edx, eax
        jl      L_8fe3
        mov     eax, ecx
L_8fda:
        cmp     byte ptr [eax + edx], 0x5c
        je      L_8fe3
        dec     edx
        jns     L_8fda
L_8fe3:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x797f04
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     esi, [esp + 0x14]
        mov     dword ptr [esp + 0x10], esi
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x10]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     edi, dword ptr [ebx + 0x2d4]
        or      ecx, 0xffffffff
        add     edi, edx
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp + 0x14]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        lea     eax, [esp + 0x14]
        push    eax
        rep     movsb
        push    0x797ee4
        mov     ecx, ebp
        call    FUN_00411c40
L_9051:
        mov     ecx, dword ptr [ebx + 0x17c]
        push    ecx
        push    0x788718
        mov     ecx, ebp
        call    FUN_00411d10
        mov     edx, dword ptr [ebx + 0x180]
        push    edx
        push    0x788710
        mov     ecx, ebp
        call    FUN_00411d10
        mov     eax, dword ptr [ebx + 0x184]
        push    eax
        push    0x788708
        mov     ecx, ebp
        call    FUN_00411d10
        mov     ecx, dword ptr [ebx + 0x188]
        push    ecx
        push    0x788700
        mov     ecx, ebp
        call    FUN_00411d10
        mov     edx, dword ptr [ebx + 0x18c]
        push    edx
        push    0x7818b4
        mov     ecx, ebp
        call    FUN_00411d10
        mov     eax, dword ptr [ebx + 0x190]
        push    eax
        push    0x786cf4
        mov     ecx, ebp
        call    FUN_00411d10
        mov     ecx, dword ptr [ebx + 0x194]
        push    ecx
        push    0x797ed4
        mov     ecx, ebp
        call    FUN_00411d10
        mov     edx, dword ptr [ebx + 0x198]
        push    edx
        push    0x7886e8
        mov     ecx, ebp
        call    FUN_00411d10
        mov     eax, dword ptr [ebx + 0x19c]
        push    eax
        push    0x7886dc
        mov     ecx, ebp
        call    FUN_00411d10
        mov     ecx, dword ptr [ebx + 0x1a4]
        push    ecx
        push    0x7886bc
        mov     ecx, ebp
        call    FUN_00411d10
        mov     edx, dword ptr [ebx + 0x1a0]
        push    edx
        push    0x7886cc
        mov     ecx, ebp
        call    FUN_00411d10
        mov     eax, dword ptr [ebx + 0x1a8]
        push    eax
        push    0x7886ac
        mov     ecx, ebp
        call    FUN_00411d10
        lea     edi, [ebx + 0x1e4]
        mov     ebx, dword ptr [g_0076b420]
        xor     esi, esi
L_9143:
        push    esi
        lea     ecx, [esp + 0x118]
        push    0x797ecc
        push    ecx
        call    ebx
        mov     edx, dword ptr [edi]
        add     esp, 0xc
        push    edx
        lea     eax, [esp + 0x118]
        push    eax
        mov     ecx, ebp
        call    FUN_00411dc0
        inc     esi
        add     edi, 4
        cmp     esi, 0xa
        jl      L_9143
        push    0x76b768
        push    0x797ef4
        mov     ecx, ebp
        call    FUN_00411c40
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x204
        ret     4
    }
}
