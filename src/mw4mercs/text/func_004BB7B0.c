/*
 * 409 B block containing three __thiscall methods:
 *   FUN_004BB7B0 — RET 0xC. Initializes a local struct (FUN_0048bcd0),
 *     copies 6 dwords, calls FUN_004c28d0, then FUN_0048dd20.
 *   FUN_004BB850 — RET 0xC. Similar: FUN_00491280 / FUN_00491670 /
 *     FUN_004c8460 / FUN_0048bcd0 / FUN_004c28d0 / FUN_0048dd20.
 *   FUN_004BB940 — RET 4. mov eax,[ecx+0x174]; ret 4 (getter).
 *
 * All __thiscall (ECX = this). No obfuscation junk; 4 NOPs pad between
 * FUN_004BB850 and FUN_004BB940.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0048bcd0(void);
extern void __cdecl FUN_004c28d0(void);
extern void __cdecl FUN_0048dd20(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_00491670(void);
extern void __cdecl FUN_004c8460(void);

__declspec(naked) void FUN_004BB7B0(void)
{
    __asm {
        sub     esp, 0x58
        push    ebx
        push    esi
        mov     ebx, ecx
        push    edi
        lea     ecx, [esp + 0x2c]
        call    FUN_0048bcd0
        mov     eax, dword ptr [ebx + 0x174]
        mov     ecx, dword ptr [esp + 0x70]
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, dword ptr [esp + 0x6c]
        and     ecx, 0x3f
        mov     esi, eax
        mov     dword ptr [esp + 0x48], ecx
        add     eax, 0x18
        lea     edx, [ebx + 0x80]
        push    eax
        mov     dword ptr [esp + 0x50], edx
        mov     dword ptr [esp + 0x54], 0
        mov     ecx, 6
        lea     edi, [esp + 0x34]
        lea     eax, [esp + 0x10]
        rep     movsd
        push    eax
        mov     ecx, ebx
        call    FUN_004c28d0
        xor     ecx, ecx
        test    eax, eax
        setle   cl
        lea     edx, [esp + 0xc]
        mov     dword ptr [esp + 0x58], eax
        lea     eax, [ebx + 0x178]
        add     ebx, 0x184
        mov     dword ptr [esp + 0x60], eax
        mov     dword ptr [esp + 0x5c], ebx
        dec     ecx
        and     ecx, edx
        mov     edx, dword ptr [esp + 0x68]
        mov     dword ptr [esp + 0x54], ecx
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     ecx, dword ptr [edx + 0x26c]
        call    FUN_0048dd20
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x58
        ret     0xc
        sub     esp, 0x90
        push    ebx
        push    esi
        mov     ebx, ecx
        push    edi
        lea     ecx, [esp + 0x44]
        call    FUN_00491280
        mov     esi, dword ptr [ebx + 0x140]
        mov     edi, dword ptr [esp + 0xa4]
        push    esi
        push    edi
        lea     ecx, [esp + 0x4c]
        mov     dword ptr [esp + 0x64], 0
        call    FUN_00491670
        add     esi, 0x18
        push    esi
        add     edi, 0x18
        lea     eax, [esp + 0x60]
        push    edi
        push    eax
        call    FUN_004c8460
        add     esp, 0xc
        lea     ecx, [esp + 0xc]
        call    FUN_0048bcd0
        mov     ecx, dword ptr [ebx + 0x174]
        mov     edx, dword ptr [esp + 0xa8]
        mov     dword ptr [esp + 0xc], ecx
        and     edx, 0x3f
        lea     eax, [ebx + 0x80]
        mov     dword ptr [esp + 0x28], edx
        mov     dword ptr [esp + 0x2c], eax
        mov     dword ptr [esp + 0x30], 0
        mov     ecx, 6
        lea     esi, [esp + 0x44]
        lea     edi, [esp + 0x10]
        rep     movsd
        lea     ecx, [esp + 0x5c]
        push    ecx
        lea     edx, [esp + 0x80]
        push    edx
        mov     ecx, ebx
        call    FUN_004c28d0
        xor     ecx, ecx
        test    eax, eax
        setle   cl
        lea     edx, [esp + 0x7c]
        mov     dword ptr [esp + 0x38], eax
        lea     eax, [ebx + 0x178]
        add     ebx, 0x184
        mov     dword ptr [esp + 0x40], eax
        mov     dword ptr [esp + 0x3c], ebx
        dec     ecx
        and     ecx, edx
        mov     edx, dword ptr [esp + 0xa0]
        mov     dword ptr [esp + 0x34], ecx
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, dword ptr [edx + 0x26c]
        call    FUN_0048dd20
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x90
        ret     0xc
        nop
        nop
        nop
        nop
        mov     eax, dword ptr [ecx + 0x174]
        ret     4
    }
}
