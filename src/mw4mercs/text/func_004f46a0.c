/*
 * FUN_004f46a0 (202 B) — MLR/Adept app core init (variant of FUN_004f4580).
 * __thiscall (ECX=this), RET 0x4 (1 arg). Calls FUN_004d96e0, initializes
 * members, and conditionally calls FUN_004f4780 / FUN_004d6490 /
 * FUN_004f3b00 based on FPU comparison and a member value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007db090;
extern float g_0076c5b0;
extern int g_007dab44;
extern int g_007dab40;

extern void FUN_004d96e0(void);
extern void FUN_004f4780(void);
extern void FUN_004d6490(void);
extern void FUN_004f3b00(void);

__declspec(naked) void FUN_004f46a0(void)
{
    __asm {
        sub     esp, 0x60
        push    ebx
        push    esi
        mov     esi, dword ptr [esp+0x6c]
        push    edi
        mov     ebx, ecx
        push    esi
        call    FUN_004d96e0
        mov     edi, dword ptr [ebx+0x10]
        mov     eax, dword ptr [ebx+0x18]
        mov     edx, dword ptr [g_007db090]
        mov     ecx, dword ptr [esi+0x60]
        or      edi, 0x40
        cmp     eax, edx
        mov     byte ptr [ebx+0x168], 0x0
        mov     dword ptr [ebx+0x10], edi
        mov     dword ptr [ebx+0x16c], ecx
        jnz     end
        fld     dword ptr [esi+0x50]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L470c
        mov     ecx, dword ptr [ebx+0x170]
        mov     edx, dword ptr [ecx+0xd8]
        add     edx, 0x20
        push    edx
        mov     ecx, ebx
        call    FUN_004f4780
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x60
        ret     0x4
L470c:
        cmp     ecx, -1
        jz      end
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_007dab40]
        push    ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_004d6490
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        lea     edi, [esp+0xc]
        rep     movsd
        lea     ecx, [esp+0x3c]
        push    ecx
        mov     ecx, eax
        call    FUN_004f3b00
        mov     esi, eax
        mov     ecx, 0xc
        lea     edi, [esp+0xc]
        lea     edx, [esp+0xc]
        rep     movsd
        push    edx
        mov     ecx, ebx
        call    FUN_004f4780
end:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x60
        ret     0x4
    }
}
