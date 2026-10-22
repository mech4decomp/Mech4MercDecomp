/*
 * FUN_006AFF40 (518 B) — __thiscall (ECX = this), RET 8. Enters a lock
 * (FUN_006f4950), walks a vector of objects, filters by pointer identity,
 * and appends entries to a growable vector. Uses FUN_0040c410 (vector
 * ctor), FUN_00687ae0/00687ca0/00687c70 (vector push), FUN_00587830/
 * 005d6fa0/005d6fc0 (vector ops), FUN_006aeff0, FUN_006ae5e0,
 * FUN_006b0310.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f2464;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00687ca0(void);
extern void __cdecl FUN_00687ae0(void);
extern void __cdecl FUN_00587830(void);
extern void __cdecl FUN_005d6fa0(void);
extern void __cdecl FUN_005d6fc0(void);
extern void __cdecl FUN_00687c70(void);
extern void __cdecl FUN_006aeff0(void);
extern void __cdecl FUN_006ae5e0(void);
extern void __cdecl FUN_006b0310(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void __fastcall FUN_006aff40(void)
{
    __asm {
        mov     eax, dword ptr [g_7f2464]
        sub     esp, 0x48
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     ebx, ecx
        call    FUN_006f4950
        mov     eax, dword ptr [esp + 0x5c]
        mov     ebp, dword ptr [eax]
        mov     ecx, dword ptr [eax + 0x4]
        mov     esi, dword ptr [ebp + 0x4]
        cmp     esi, ecx
        jnz     L_aff67
        mov     esi, dword ptr [ebp + 0x8]
L_aff67:
        mov     ecx, dword ptr [esi + 0x8]
        mov     edx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esi + 0x10]
        mov     dword ptr [esp + 0x1c], ecx
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x28], eax
        call    FUN_0040c410
        mov     edi, dword ptr [ebp]
        lea     edx, [esp + 0x10]
        push    edx
        lea     ecx, [esp + 0x44]
        call    FUN_0040c410
        mov     eax, dword ptr [ebx + 0x58]
        mov     dword ptr [esp + 0x54], edi
        lea     edi, [ebx + 0x50]
        mov     ebx, dword ptr [edi + 0x4]
        cmp     ebx, eax
        mov     dword ptr [esp + 0x4c], 0x10
        mov     byte ptr [esp + 0x50], 0x0
        jz      L_affd1
        test    ebx, ebx
        jz      L_affc9
        lea     eax, [esp + 0x40]
        push    eax
        mov     ecx, ebx
        call    FUN_00687ca0
L_affc9:
        add     ebx, 0x18
        mov     dword ptr [edi + 0x4], ebx
        jmp     L_affe0
L_affd1:
        push    0x1
        lea     ecx, [esp + 0x44]
        push    ecx
        push    ebx
        mov     ecx, edi
        call    FUN_00687ae0
L_affe0:
        mov     ecx, dword ptr [esi + 0x14]
        mov     eax, dword ptr [esi + 0x18]
        sub     eax, ecx
        sar     eax, 0x2
        xor     ecx, ecx
        test    eax, eax
        jle     L_b0004
        mov     edx, dword ptr [esi + 0x14]
L_afff4:
        cmp     dword ptr [edx], ebp
        jz      L_b0080
        inc     ecx
        add     edx, 0x4
        cmp     ecx, eax
        jl      L_afff4
L_b0004:
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea     ecx, [esp + 0x40]
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x44]
        call    FUN_005d6fa0
L_b0026:
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_005d6fc0
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_0040c410
        mov     esi, dword ptr [ebp]
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esp + 0x44]
        call    FUN_0040c410
        mov     eax, dword ptr [edi + 0x8]
        mov     dword ptr [esp + 0x54], esi
        mov     esi, dword ptr [edi + 0x4]
        cmp     esi, eax
        mov     dword ptr [esp + 0x4c], 0x10
        mov     byte ptr [esp + 0x50], 0x1
        jz      L_b008f
        lea     edx, [esp + 0x40]
        push    edx
        push    esi
        call    FUN_00687c70
        add     esp, 0x8
        add     esi, 0x18
        mov     dword ptr [edi + 0x4], esi
        jmp     L_b009e
L_b0080:
        push    ecx
        lea     edx, [esp + 0x2c]
        push    edx
        mov     ecx, esi
        call    FUN_006aeff0
        jmp     L_b0026
L_b008f:
        push    0x1
        lea     eax, [esp + 0x44]
        push    eax
        push    esi
        mov     ecx, edi
        call    FUN_00687ae0
L_b009e:
        mov     ecx, dword ptr [esp + 0x5c]
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [edx + 0x14]
        mov     eax, dword ptr [edx + 0x18]
        sub     eax, ecx
        sar     eax, 0x2
        xor     ecx, ecx
        test    eax, eax
        jle     L_b00c5
        mov     edx, dword ptr [edx + 0x14]
L_b00b9:
        cmp     dword ptr [edx], ebp
        jz      L_b0132
        inc     ecx
        add     edx, 0x4
        cmp     ecx, eax
        jl      L_b00b9
L_b00c5:
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea     ecx, [esp + 0x40]
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_005d6fa0
L_b00e7:
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_005d6fc0
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x14]
        call    FUN_0040c410
        mov     ebp, dword ptr [ebp]
        mov     edx, dword ptr [esp + 0x5c]
        mov     eax, dword ptr [edx + 0x8]
        push    ebp
        push    0x1
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x50]
        call    FUN_006ae5e0
        push    eax
        mov     ecx, edi
        call    FUN_006b0310
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x48
        ret     8
L_b0132:
        mov     eax, dword ptr [esp + 0x5c]
        push    ecx
        mov     ecx, dword ptr [eax + 0x4]
        lea     edx, [esp + 0x44]
        push    edx
        call    FUN_006aeff0
        jmp     L_b00e7
    }
}
