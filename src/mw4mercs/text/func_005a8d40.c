/*
 * FUN_005a8d40 (431 B) — __thiscall, 5 stack args (RET 0x14). Weapon/mech
 * update handler: copies a param struct into `this`, constructs sub-objects,
 * dispatches a virtual method, and conditionally accumulates stats into a
 * hash-indexed table (0x7dab44 ^ 0x7dab40 base, XOR 0x85739531).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f1f84;
extern int g_007dab44;
extern int g_007dab40;
extern void FUN_0040c410(void);
extern void FUN_00421100(void);
extern void FUN_005f07c0(void);
extern void __cdecl FUN_00415230(void *p);
extern void __cdecl FUN_00544e30(int v);

__declspec(naked) void FUN_005a8d40(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esp+0x14]
        mov     cl, byte ptr [edi+0xc]
        mov     eax, dword ptr [edi+0x14]
        mov     edx, dword ptr [edi+0x10]
        mov     ebx, dword ptr [edi]
        mov     byte ptr [esi+0x1ec], cl
        lea     ebp, [esi+0x1f8]
        push    ebx
        mov     ecx, ebp
        mov     dword ptr [esi+0x1f4], eax
        mov     dword ptr [esi+0x1f0], edx
        call    FUN_0040c410
        lea     eax, [ebx+0xc]
        push    eax
        lea     ecx, [ebp+0xc]
        call    FUN_00421100
        mov     ecx, dword ptr [ebx+0x18]
        mov     edx, dword ptr [edi+0x4]
        mov     dword ptr [ebp+0x18], ecx
        push    edx
        lea     ecx, [esi+0x214]
        call    FUN_0040c410
        mov     ecx, dword ptr [esp+0x24]
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0xb8]
        test    al, al
        jz      L_ed4
        mov     edx, dword ptr [esi+0xe0]
        cmp     dword ptr [edx+0x14], 8
        jnz     L_ed4
        mov     ecx, esi
        call    FUN_005f07c0
        mov     edi, eax
        test    edi, edi
        jz      L_e98
        mov     eax, dword ptr [g_007f1f84]
        mov     ecx, dword ptr [edi+0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_e98
        mov     ebx, dword ptr [edi+0x5d0]
        cmp     ebx, -1
        jz      L_e3f
        mov     eax, dword ptr [g_007dab44]
        mov     edi, dword ptr [g_007dab40]
        mov     ebp, dword ptr [eax]
        mov     edx, dword ptr [esi+0x78]
        xor     ebp, edi
        lea     edi, [esi+0x78]
        mov     ecx, edi
        call    dword ptr [edx+0x4]
        mov     ecx, eax
        mov     ecx, dword ptr [ecx+0x30]
        lea     edx, [ebx+ebx*8]
        lea     eax, [ebx+edx*4]
        mov     edx, dword ptr [ebp+0xc]
        lea     eax, [eax+eax*2]
        lea     eax, [eax+eax*4]
        shl     eax, 2
        sub     eax, ebx
        add     ecx, eax
        mov     eax, dword ptr [edi]
        xor     edx, 0x85739531
        lea     ebx, [edx+ecx*4+0x206084]
        mov     ecx, edi
        call    dword ptr [eax+0x4]
        mov     ecx, dword ptr [eax+0x4c]
        add     dword ptr [ebx], ecx
        jmp     L_e98
L_e3f:
        mov     ecx, esi
        call    FUN_005f07c0
        mov     edx, dword ptr [g_007dab44]
        mov     edi, dword ptr [g_007dab40]
        mov     ebp, dword ptr [edx]
        xor     ebx, ebx
        mov     bl, byte ptr [eax+0x14]
        mov     eax, dword ptr [esi+0x78]
        xor     ebp, edi
        lea     edi, [esi+0x78]
        mov     ecx, edi
        call    dword ptr [eax+0x4]
        mov     edx, dword ptr [eax+0x30]
        mov     ecx, ebx
        shl     ecx, 7
        add     ecx, ebx
        shl     ecx, 3
        sub     ecx, ebx
        lea     eax, [edx+ecx*2]
        mov     ecx, dword ptr [ebp+0xc]
        mov     edx, dword ptr [edi]
        xor     ecx, 0x85739531
        lea     ebx, [ecx+eax*4+0x3618]
        mov     ecx, edi
        call    dword ptr [edx+0x4]
        mov     ecx, dword ptr [ebx]
        mov     eax, dword ptr [eax+0x4c]
        add     ecx, eax
        mov     dword ptr [ebx], ecx
L_e98:
        mov     ecx, esi
        call    FUN_005f07c0
        mov     cl, byte ptr [eax+0xdc]
        test    cl, cl
        jz      L_ed4
        mov     ecx, dword ptr [g_007dab44]
        mov     edi, dword ptr [ecx]
        mov     edx, dword ptr [g_007dab40]
        mov     ecx, esi
        xor     edi, edx
        call    FUN_005f07c0
        mov     ecx, dword ptr [edi+0xc]
        xor     edx, edx
        mov     dl, byte ptr [eax+0x14]
        xor     ecx, 0x85739531
        push    edx
        call    FUN_00544e30
L_ed4:
        mov     ecx, dword ptr [esi+0xe0]
        mov     eax, dword ptr [ecx]
        add     esi, 0x1e0
        push    esi
        push    6
        call    dword ptr [eax+0x4]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x14
    }
}
