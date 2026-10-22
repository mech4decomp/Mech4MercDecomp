/*
 * FUN_006212f0 (422 B) — ABL interpreter __thiscall. Initializes a large
 * member array (0x36 entries of 0xc bytes), builds several string buffers,
 * and performs a string copy into a growable buffer (rep movsd/movsb) with
 * a fallback path. Uses virtual call [eax+0x34] and IAT/global data.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_007dab44;
extern int  g_007dab40;
extern void __cdecl FUN_00624850(void);
extern void __cdecl FUN_00624780(void);
extern void __cdecl FUN_006248b0(void);
extern void __cdecl FUN_00624970(void);
extern void __cdecl FUN_00624990(void);
extern void __cdecl FUN_00624ac0(void);
extern void __cdecl FUN_00547ba0(void);
extern void __cdecl FUN_005634e0(void);
extern void __cdecl FUN_00625110(void);
extern void __cdecl FUN_005cbf80(void);

__declspec(naked) void FUN_006212f0(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        push    edi
        lea     eax, [esp+0x12]
        mov     ebp, ecx
        push    eax
        call    FUN_00624850
        lea     ecx, [esp+0x12]
        push    ecx
        lea     ecx, [ebp+0xc]
        call    FUN_00624850
        lea     esi, [ebp+0x18]
        mov     edi, 0x36
L_621318:
        lea     edx, [esp+0x12]
        push    edx
        mov     ecx, esi
        call    FUN_00624780
        add     esi, 0xc
        dec     edi
        jnz     L_621318
        lea     eax, [esp+0x12]
        push    eax
        lea     ecx, [esp+0x17]
        push    ecx
        lea     ecx, [ebp+0x2a0]
        call    FUN_006248b0
        lea     edx, [esp+0x13]
        push    edx
        lea     ecx, [ebp+0x2ac]
        call    FUN_00624850
        lea     eax, [esp+0x13]
        push    eax
        lea     ecx, [ebp+0x2b8]
        call    FUN_00624970
        lea     ecx, [esp+0x13]
        push    ecx
        lea     ecx, [ebp+0x2c4]
        call    FUN_00624990
        lea     edx, [esp+0x14]
        xor     esi, esi
        push    edx
        lea     eax, [esp+0x17]
        push    eax
        lea     ecx, [ebp+0x2d8]
        mov     dword ptr [ebp+0x2d0], esi
        mov     dword ptr [ebp+0x2d4], esi
        mov     dword ptr [esp+0x1c], esi
        call    FUN_00624ac0
        lea     ecx, [esp+0x14]
        lea     ebx, [ebp+0x2dc]
        push    ecx
        lea     edx, [esp+0x17]
        push    edx
        lea     ecx, [ebx+0x8]
        mov     dword ptr [ebx], esi
        mov     dword ptr [ebx+0x4], esi
        mov     dword ptr [esp+0x1c], esi
        call    FUN_00547ba0
        push    0x8
        mov     ecx, ebx
        call    FUN_005634e0
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        mov     edi, dword ptr [g_007dab40]
        mov     eax, dword ptr [ebx+0x4]
        xor     edx, edi
        mov     ecx, dword ptr [edx+0xc]
        xor     ecx, 0x85739531
        mov     byte ptr [eax], 0x0
        mov     eax, dword ptr [ecx]
        push    0x33e
        mov     byte ptr [ebp+0x2f4], 0x0
        mov     dword ptr [ebp+0x2e8], esi
        mov     byte ptr [ebp+0x2ec], 0x0
        call    dword ptr [eax+0x34]
        mov     edx, eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        mov     edi, dword ptr [ebx]
        not     ecx
        dec     ecx
        add     ecx, edx
        mov     eax, ecx
        mov     dword ptr [esp+0x14], ecx
        mov     ecx, dword ptr [ebx+0x4]
        sub     ecx, edi
        sub     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esp+0x18], ecx
        ja      L_62145a
        mov     ecx, eax
        mov     esi, edx
        mov     edx, ecx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [ebx+0x4]
        push    ecx
        mov     ecx, dword ptr [ebx]
        add     ecx, eax
        push    ecx
        mov     ecx, ebx
        call    FUN_00625110
        pop     edi
        pop     esi
        mov     dword ptr [ebp+0x2f0], 0x0
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
L_62145a:
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edx
        rep     movsd
        mov     ecx, eax
        mov     eax, dword ptr [esp+0x14]
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [esp+0x18]
        push    ecx
        mov     ecx, dword ptr [esp+0x1c]
        add     ecx, edx
        push    eax
        push    ecx
        mov     ecx, ebx
        call    FUN_005cbf80
        pop     edi
        pop     esi
        mov     dword ptr [ebp+0x2f0], 0x0
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
    }
}
