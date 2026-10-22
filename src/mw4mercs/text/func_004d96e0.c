/*
 * FUN_004d96e0 (465 B) — __thiscall: object/renderer setup variant.
 * Computes flag bits, resolves a handle, copies blocks, and registers
 * sub-objects (vtable dispatch).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004dc460(int);
extern void __cdecl FUN_00707e70(int);
extern void __cdecl FUN_004d64d0(int, int);
extern void __cdecl FUN_004dd1a0(int);
extern void __cdecl FUN_004da550(void);
extern void __cdecl FUN_004da580(void);
extern void __cdecl FUN_004084e0(int);
extern void __cdecl FUN_004f1750(void);
extern void __cdecl FUN_004db210(void);

extern int g_007db098;
extern int g_007dab40;
extern int *g_007dab44;
extern int g_007db090;
extern unsigned short g_007dc696;
extern unsigned char g_007dc694;

__declspec(naked) void FUN_004d96e0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        push    ebx
        call    FUN_004dc460
        xor     esi, esi
        push    esi
        call    FUN_00707e70
        fst     qword ptr [ebp + 0xe4]
        mov     edx, dword ptr [ebp + 0x10]
        fld     dword ptr [ebx + 0x50]
        mov     eax, dword ptr [ebx + 0x14]
        fsubr   st(0), st(1)
        mov     edi, dword ptr [ebx + 0x14]
        xor     eax, edx
        and     eax, 0x6f980
        fstp    qword ptr [ebp + 0xec]
        xor     eax, edi
        mov     ecx, eax
        fstp    st(0)
        shr     ecx, 0xb
        test    cl, 0x1
        mov     dword ptr [ebp + 0x1c], esi
        mov     dword ptr [ebp + 0x28], esi
        mov     dword ptr [ebp + 0x10], eax
        jz      L_9742
        mov     edx, eax
        shr     edx, 0xa
        test    dl, 0x1
        jz      L_9742
        and     eax, 0xfffff7ff
        mov     dword ptr [ebp + 0x10], eax
L_9742:
        mov     ecx, dword ptr [ebp + 0x18]
        cmp     ecx, dword ptr [g_007db098]
        mov     esi, dword ptr [g_007dab40]
        mov     edi, dword ptr [g_007dab44]
        jz      L_97af
        mov     edx, dword ptr [edi]
        mov     eax, dword ptr [ebp + 0x10]
        xor     edx, esi
        mov     edx, dword ptr [edx + 0x14]
        xor     edx, 0x85739531
        and     eax, 0xfffffff8
        cmp     byte ptr [edx + 0x17fc], 0x0
        mov     edx, dword ptr [g_007db090]
        mov     dword ptr [ebp + 0x10], eax
        jz      L_978e
        cmp     ecx, edx
        jz      L_97af
        test    al, 0x7
        jnz     L_97af
        and     eax, 0xfffffffd
        or      eax, 0x5
        jmp     L_97ac
L_978e:
        cmp     ecx, edx
        jnz     L_97a2
        test    al, 0x7
        jnz     L_979e
        and     eax, 0xfffffffc
        or      eax, 0x4
        jmp     L_97ac
L_979e:
        cmp     ecx, edx
        jz      L_97af
L_97a2:
        test    al, 0x7
        jnz     L_97af
        and     eax, 0xfffffffb
        or      eax, 0x3
L_97ac:
        mov     dword ptr [ebp + 0x10], eax
L_97af:
        mov     eax, dword ptr [ebp + 0x164]
        cmp     eax, -0x1
        jz      L_97ce
        push    eax
        mov     eax, dword ptr [edi]
        xor     eax, esi
        mov     ecx, dword ptr [eax]
        push    0
        xor     ecx, 0x85739531
        call    FUN_004d64d0
L_97ce:
        add     ebx, 0x1c
        lea     edi, [ebp + 0xf4]
        mov     ecx, 0xc
        mov     esi, ebx
        rep movsd
        mov     esi, dword ptr [ebp + 0xd8]
        mov     ecx, dword ptr [esi + 0x18]
        mov     edx, dword ptr [esi]
        and     ecx, 0xfffffffe
        or      ecx, 0x4
        mov     dword ptr [esi + 0x18], ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x10]
        lea     edi, [esi + 0x20]
        mov     ecx, 0xc
        mov     esi, ebx
        rep movsd
        or      dword ptr [ebp + 0x10], 0x20
        mov     ecx, dword ptr [ebp + 0xe0]
        xor     edi, edi
        cmp     ecx, edi
        jz      L_9822
        mov     eax, dword ptr [esp + 0x14]
        add     eax, 0x4c
        push    eax
        call    FUN_004dd1a0
L_9822:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [ecx + 0x58]
        mov     ecx, ebp
        mov     dword ptr [ebp + 0x140], edx
        mov     dword ptr [ebp + 0x154], edi
        mov     dword ptr [ebp + 0x158], edi
        call    FUN_004da550
        mov     ecx, ebp
        call    FUN_004da580
        mov     esi, dword ptr [ebp + 0x12c]
        cmp     esi, edi
        jz      L_9871
        mov     eax, dword ptr [esi]
        cmp     eax, edi
        jz      L_9862
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_9862:
        push    esi
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebp + 0x12c], edi
L_9871:
        mov     cx, word ptr [g_007dc696]
        mov     al, byte ptr [g_007dc694]
        mov     byte ptr [ebp + 0x15c], al
        mov     word ptr [ebp + 0x15e], cx
        mov     dword ptr [ebp + 0x160], 0xffffffff
        mov     ecx, dword ptr [ebp + 0xd0]
        cmp     ecx, edi
        jz      L_98a3
        call    FUN_004f1750
L_98a3:
        mov     ecx, ebp
        call    FUN_004db210
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
