/*
 * FUN_006852C0 (663 B) — __thiscall object initializer.
 *
 * Calls virtual method 0x20 repeatedly to read fields into the object,
 * then builds/refreshes two dynamic arrays (0x44 and 0x50) using the
 * 0x687xxx helper family.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00687960(void);
extern void __cdecl FUN_00685680(void);
extern void __cdecl FUN_00687cd0(void);
extern void __cdecl FUN_00687ce0(void);
extern void __cdecl FUN_00687d70(void);
extern void __cdecl FUN_006876d0(void);
extern void __cdecl FUN_00687df0(void);
extern void __cdecl FUN_00687f80(void);
extern void __cdecl FUN_00687e40(void);
extern void __cdecl FUN_00687800(void);
extern void __cdecl FUN_006855a0(void);

__declspec(naked) void FUN_006852c0(void)
{
    __asm {
        sub     esp, 0x40
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x50]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x1
        lea     ecx, [edi + 0x3e]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    0xc
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esi]
        push    0xc
        lea     ecx, [edi + 0xc]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [edi + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x3c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x3d]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [esp + 0x58]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     al, byte ptr [esp + 0x54]
        xor     ebx, ebx
        test    al, al
        mov     dword ptr [edi + 0x2c], ebx
        jz      L_35e
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [edi + 0x34]
        mov     edx, dword ptr [ecx + 0x1c]
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [edx + eax*4]
        mov     dword ptr [edi + 0x2c], ecx
L_35e:
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [esp + 0x58]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     al, byte ptr [esp + 0x54]
        test    al, al
        mov     dword ptr [edi + 0x30], ebx
        jz      L_395
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [edi + 0x34]
        mov     edx, dword ptr [ecx + 0x1c]
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [edx + eax*4]
        mov     dword ptr [edi + 0x30], ecx
L_395:
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x5c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x1c]
        mov     dword ptr [edi + 0x68], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esp + 0x18]
        lea     ecx, [esp + 0x2c]
        push    ecx
        lea     ebp, [edi + 0x44]
        push    edx
        mov     ecx, ebp
        mov     dword ptr [esp + 0x34], ebx
        mov     dword ptr [esp + 0x38], ebx
        mov     dword ptr [esp + 0x3c], ebx
        call    FUN_00687960
        cmp     dword ptr [esp + 0x18], ebx
        jle     L_420
        mov     ebp, dword ptr [ebp]
L_40a:
        push    esi
        mov     ecx, ebp
        call    FUN_00685680
        mov     eax, dword ptr [esp + 0x18]
        inc     ebx
        add     ebp, 0xc
        cmp     ebx, eax
        jl      L_40a
        xor     ebx, ebx
L_420:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edi + 0x58]
        lea     ebp, [edi + 0x50]
        mov     dword ptr [esp + 0x44], ebx
        mov     ebx, dword ptr [ebp]
        mov     dword ptr [esp + 0x1c], eax
        sub     ecx, ebx
        mov     eax, 0x2aaaaaab
        imul    ecx
        mov     eax, dword ptr [esp + 0x14]
        sar     edx, 0x2
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        cmp     eax, edx
        mov     dword ptr [esp + 0x38], 0xbf800000
        mov     dword ptr [esp + 0x3c], 0xbf800000
        mov     dword ptr [esp + 0x40], 0xbf800000
        mov     byte ptr [esp + 0x48], 0
        jbe     L_4a2
        lea     edx, [esp + 0x13]
        push    edx
        mov     ecx, ebp
        call    FUN_00687cd0
        mov     ecx, dword ptr [esp + 0x1c]
        push    eax
        lea     eax, [esp + 0x3c]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x38]
        call    FUN_00687ce0
        push    ebp
        lea     ecx, [esp + 0x30]
        call    FUN_00687d70
        lea     ecx, [esp + 0x2c]
        call    FUN_006876d0
        jmp     L_50e
L_4a2:
        mov     ecx, dword ptr [ebp + 0x4]
        mov     edx, ecx
        sub     edx, ebx
        mov     eax, 0x2aaaaaab
        imul    edx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, edx
        mov     dword ptr [esp + 0x24], edx
        jbe     L_4f6
        lea     edx, [esp + 0x38]
        push    edx
        push    ecx
        push    ebx
        call    FUN_00687df0
        mov     eax, dword ptr [esp + 0x60]
        push    eax
        mov     eax, dword ptr [esp + 0x2c]
        lea     ecx, [esp + 0x48]
        push    ecx
        sub     eax, dword ptr [esp + 0x38]
        push    eax
        mov     eax, dword ptr [ebp + 0x4]
        push    eax
        call    FUN_00687f80
        add     esp, 0x1c
        mov     dword ptr [ebp + 0x4], eax
        jmp     L_50e
L_4f6:
        push    ecx
        lea     edx, [esp + 0x3c]
        push    edx
        push    eax
        push    ebx
        call    FUN_00687e40
        add     esp, 0xc
        push    eax
        mov     ecx, ebp
        call    FUN_00687800
L_50e:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        mov     dword ptr [esp + 0x1c], 0
        jle     L_53d
        mov     ebx, dword ptr [ebp]
L_521:
        push    esi
        mov     ecx, ebx
        call    FUN_006855a0
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x14]
        inc     eax
        add     ebx, 0x18
        cmp     eax, ecx
        mov     dword ptr [esp + 0x1c], eax
        jl      L_521
L_53d:
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [ebp]
        lea     eax, [eax + eax*2]
        lea     edx, [ecx + eax*8]
        mov     dword ptr [edi + 0x60], edx
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x40
        ret     4
    }
}
