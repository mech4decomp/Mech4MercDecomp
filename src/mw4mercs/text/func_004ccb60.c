/*
 * FUN_004ccb60 (344 B) — __thiscall destructor for the MLR network
 * object (vtable 0x771ac0). Releases registered channels (virtual calls),
 * frees the stats block and its sub-objects, then calls base destructors
 * FUN_00417980 / FUN_004cc150.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_007dab44;
extern int  g_007dab40;
extern int  g_007db098;
extern int  g_007db090;
extern int  g_007db094;
extern void __cdecl FUN_00405ee0(void);
extern void __cdecl FUN_004ceb20(void);
extern void __cdecl FUN_004084e0(int);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_004cc150(void);

__declspec(naked) void FUN_004ccb60(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_007dab44]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [g_007dab40]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, ebp
        mov     ecx, dword ptr [ecx]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    edi
        mov     dword ptr [esp+0x10], esi
        mov     dword ptr [esi], 0x771ac0
        call    dword ptr [edx+0x34]
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx+0x2c]
        mov     al, byte ptr [esi+0x1c14]
        test    al, al
        jz      Lbb6
        call    FUN_00405ee0
    Lbb6:
        mov     ecx, dword ptr [g_007db098]
        call    FUN_004ceb20
        lea     ebx, [esi+0x181c]
        mov     ebp, 0x1
        add     esi, 0x30
    Lbcf:
        mov     dword ptr [esi-0xc], 0
        mov     dword ptr [esi-0x8], 0xffffffff
        mov     dword ptr [esi-0x4], 0
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        jz      Lbf6
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
        mov     dword ptr [esi], 0
    Lbf6:
        mov     edi, dword ptr [ebx]
        test    edi, edi
        jz      Lc2c
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx+0xc]
        mov     edx, dword ptr [g_007db090]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    edx
        push    ebp
        call    dword ptr [eax+0x3c]
        test    edi, edi
        jz      Lc2c
        mov     eax, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [eax]
    Lc2c:
        inc     ebp
        add     ebx, 0x4
        add     esi, 0x10
        cmp     ebp, 0xff
        jc      Lbcf
        mov     ebp, dword ptr [esp+0x10]
        mov     edx, dword ptr [ebp+0x1814]
        xor     eax, eax
        cmp     edx, eax
        mov     dword ptr [g_007db090], eax
        mov     dword ptr [g_007db094], eax
        jz      Lca0
        mov     ecx, dword ptr [edx-0x4]
        lea     edi, [edx-0x4]
        mov     eax, ecx
        shl     eax, 0x8
        add     eax, ecx
        dec     ecx
        lea     eax, [eax+eax*2]
        lea     eax, [edx+eax*4]
        js      Lc97
        lea     esi, [eax+0x4]
        lea     ebx, [ecx+0x1]
    Lc71:
        mov     eax, dword ptr [esi+0xfffff3f4]
        sub     esi, 0xc0c
        test    eax, eax
        jz      Lc94
        mov     cl, byte ptr [eax-0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     Lc94
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    Lc94:
        dec     ebx
        jnz     Lc71
    Lc97:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    Lca0:
        lea     ecx, [ebp+0x180c]
        call    FUN_00417980
        mov     ecx, ebp
        call    FUN_004cc150
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
