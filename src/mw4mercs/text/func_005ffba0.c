/*
 * FUN_005ffba0 (293 B) — __fastcall (ECX=this). Weapon/mech render update:
 * walks a linked list at [this+0x2250], checks flags, calls FUN_00415230 /
 * FUN_005471a0, and dispatches FUN_005ffcd0 per entry; also a final
 * FUN_00629290/FUN_00697870 cleanup path. Uses obfuscated global pointers
 * (0x007dab44 ^ 0x007dab40) and 0x007f1f84.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern int g_007f1f84;

extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_005ffcd0(void);
extern void __cdecl FUN_005471a0(void);
extern void __cdecl FUN_00629290(void);
extern void __cdecl FUN_00697870(void);

__declspec(naked) void FUN_005ffba0(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     eax, dword ptr [ecx+0x2c]
        xor     eax, 0x85739531
        push    esi
        push    edi
        jz      LFBEB
        mov     esi, dword ptr [eax+0x384]
        test    esi, esi
        jz      LFBEB
        mov     eax, dword ptr [g_007f1f84]
        mov     ecx, dword ptr [esi+0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     LFBEB
        mov     edx, dword ptr [esi+0x4cc]
        push    0x0
        push    edx
        push    esi
        mov     ecx, ebx
        call    FUN_005ffcd0
LFBEB:
        mov     edi, dword ptr [ebx+0x2250]
LFBF1:
        test    edi, edi
        jz      LFC87
        mov     eax, dword ptr [edi]
        test    eax, eax
        mov     edi, dword ptr [edi+0x4]
        jz      LFC87
        mov     esi, dword ptr [eax+0x170]
        test    esi, esi
        jz      LFBF1
        mov     eax, dword ptr [esi+0x10]
        shr     eax, 0x13
        test    al, 0x1
        jnz     LFBF1
        mov     eax, dword ptr [g_007f1f84]
        mov     ecx, dword ptr [esi+0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     LFBF1
        call    FUN_005471a0
        cmp     eax, 0x1
        jz      LFBF1
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx+0xc]
        xor     ecx, 0x85739531
        xor     eax, eax
        lea     edx, [ecx+0x205d30]
LFC55:
        cmp     dword ptr [edx], esi
        jz      LFC65
        inc     eax
        add     edx, 0x22ac
        cmp     eax, 0x18
        jl      LFC55
LFC65:
        imul    eax, eax, 0x22ac
        mov     al, byte ptr [eax+ecx+0x207fcc]
        mov     ecx, dword ptr [esi+0x4cc]
        push    eax
        push    ecx
        push    esi
        mov     ecx, ebx
        call    FUN_005ffcd0
        jmp     LFBF1
LFC87:
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     esi, dword ptr [eax+0x40]
        xor     esi, 0x85739531
        jz      LFCC1
        push    0xe
        mov     ecx, esi
        call    FUN_00629290
        test    eax, eax
        jz      LFCC1
        push    0xe
        mov     ecx, esi
        call    FUN_00629290
        test    eax, eax
        jz      LFCC1
        mov     ecx, eax
        call    FUN_00697870
LFCC1:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
