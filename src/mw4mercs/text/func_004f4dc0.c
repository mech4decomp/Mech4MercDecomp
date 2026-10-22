/*
 * FUN_004f4dc0 (199 B) — MLR/Adept object constructor (variant of
 * FUN_004f4c50). __thiscall (ECX=this), RET 0x8 (2 args). Calls
 * FUN_004faa50, a virtual method, then dispatches on a member value
 * (switch 1/2/3) to FUN_0041acb0 / FUN_00419f30 / FUN_0041a070.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da88c;
extern int g_007da888;

extern void FUN_004faa50(void);
extern void FUN_00419f30(void);
extern void FUN_0041acb0(void);
extern void FUN_0041a070(void);

__declspec(naked) void FUN_004f4dc0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x8]
        sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp+0x20]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_004faa50
        mov     edx, dword ptr [esi+0x78]
        lea     ecx, [esi+0x78]
        call    dword ptr [edx+0x4]
        mov     ebp, eax
        mov     cl, byte ptr [ebp+0x50]
        xor     eax, eax
        cmp     cl, al
        mov     ecx, dword ptr [esi+0xe0]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [esi+0x254], eax
        mov     byte ptr [esi+0x250], al
        push    eax
        jz      L4e07
        push    0x6
        jmp     L4e09
L4e07:
        push    0x4
L4e09:
        call    dword ptr [edx+0x4]
        mov     eax, dword ptr [ebp+0x74]
        dec     eax
        lea     ebx, [esi+0x220]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        mov     edi, ebx
        rep     movsd
        jz      L4e50
        dec     eax
        jz      L4e39
        dec     eax
        jnz     L4e6b
        lea     eax, [ebp+0x60]
        push    eax
        mov     ecx, ebx
        call    FUN_00419f30
        jmp     L4e6b
L4e39:
        mov     ecx, dword ptr [g_007da88c]
        push    ecx
        lea     ecx, [esp+0x14]
        call    FUN_0041acb0
        lea     edx, [esp+0x10]
        push    edx
        jmp     L4e64
L4e50:
        mov     eax, dword ptr [g_007da888]
        push    eax
        lea     ecx, [esp+0x14]
        call    FUN_0041acb0
        lea     ecx, [esp+0x10]
        push    ecx
L4e64:
        mov     ecx, ebx
        call    FUN_0041a070
L4e6b:
        mov     edx, dword ptr [ebp+0x54]
        mov     eax, dword ptr [ebp+0x58]
        mov     ecx, dword ptr [ebp+0x5c]
        pop     edi
        mov     dword ptr [ebx+0xc], edx
        pop     esi
        mov     dword ptr [ebx+0x1c], eax
        pop     ebp
        mov     dword ptr [ebx+0x2c], ecx
        pop     ebx
        add     esp, 0xc
        ret     0x8
    }
}
