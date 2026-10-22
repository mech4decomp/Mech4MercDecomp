/*
 * FUN_004cc3c0 (1300 B) — MLR network subsystem constructor (__thiscall).
 * Initializes a large object (vtable 0x771ac0), allocates and constructs
 * a 0xd8dc-byte stats block with 0x12 sub-objects (FUN_004cc8e0), sets up
 * named counters via FUN_00412780, and registers network channels through
 * FUN_00701f20 / FUN_004ce9d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_007db088;
extern int  g_007db098;
extern int  g_007db090;
extern int  g_007db094;
extern int  g_007db078;
extern int  g_007db080;
extern int  g_007db07c;
extern int  g_007dab44;
extern int  g_007dab40;
extern int  g_0076b768;
extern void __cdecl FUN_004cc130(int, int);
extern void * __cdecl FUN_004084d0(int);
extern void __cdecl FUN_004cc8e0(void);
extern void __cdecl FUN_00412780(const char *);
extern int  __cdecl FUN_00414fd0(void);
extern int  __cdecl FUN_00701f20(int, int, int);
extern int  __cdecl FUN_004ce9d0(int, int, const char *);
extern void __cdecl FUN_004ccaa0(int);
extern void __cdecl FUN_004cdff0(void);

__declspec(naked) void FUN_004cc3c0(void)
{
    __asm {
        mov     eax, dword ptr [g_007db088]
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x1
        mov     ebp, ecx
        push    eax
        call    FUN_004cc130
        lea     eax, [ebp+0x14]
        mov     ecx, 0xff
    L3de:
        xor     edx, edx
        mov     dword ptr [eax], edx
        mov     dword ptr [eax+0x4], edx
        mov     dword ptr [eax+0x8], edx
        mov     dword ptr [eax+0xc], edx
        add     eax, 0x10
        dec     ecx
        jnz     L3de
        xor     ebx, ebx
        mov     dword ptr [ebp+0x180c], ebx
        mov     dword ptr [ebp+0x1810], ebx
        mov     dword ptr [ebp], 0x771ac0
        call    FUN_00414fd0
        push    0xd8dc
        mov     dword ptr [ebp+0x1804], eax
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L44c
        mov     dword ptr [eax], 0x12
        add     eax, 0x4
        mov     dword ptr [esp+0x14], eax
        mov     edi, eax
        mov     esi, 0x12
    L436:
        mov     ecx, edi
        call    FUN_004cc8e0
        add     edi, 0xc0c
        dec     esi
        jnz     L436
        mov     esi, dword ptr [esp+0x14]
        jmp     L44e
    L44c:
        xor     esi, esi
    L44e:
        push    0x771ab8
        lea     ecx, [esi+0xa8ac]
        mov     dword ptr [ebp+0x1814], esi
        mov     byte ptr [esi+0xa8a8], 0x1
        call    FUN_00412780
        push    0x771ab0
        lea     ecx, [esi+0xb4b8]
        mov     byte ptr [esi+0xb4b4], 0x1
        call    FUN_00412780
        push    0x771aa8
        lea     ecx, [esi+0xc0c4]
        mov     byte ptr [esi+0xc0c0], 0x1
        call    FUN_00412780
        push    0x771aa0
        lea     ecx, [esi+0xccd0]
        mov     byte ptr [esi+0xcccc], 0x1
        call    FUN_00412780
        push    0x771a94
        lea     ecx, [esi+0x4]
        mov     byte ptr [esi], 0x1
        call    FUN_00412780
        push    0x771a88
        lea     ecx, [esi+0xc10]
        mov     byte ptr [esi+0xc0c], 0x1
        call    FUN_00412780
        push    0x771a7c
        lea     ecx, [esi+0x181c]
        mov     byte ptr [esi+0x1818], 0x1
        call    FUN_00412780
        push    0x771a70
        lea     ecx, [esi+0x2428]
        mov     byte ptr [esi+0x2424], 0x1
        call    FUN_00412780
        push    0x771a64
        lea     ecx, [esi+0x3034]
        mov     byte ptr [esi+0x3030], 0x1
        call    FUN_00412780
        push    0x771a58
        lea     ecx, [esi+0x3c40]
        mov     byte ptr [esi+0x3c3c], 0x1
        call    FUN_00412780
        push    0x771a4c
        lea     ecx, [esi+0x484c]
        mov     byte ptr [esi+0x4848], 0x1
        call    FUN_00412780
        push    0x771a40
        lea     ecx, [esi+0x5458]
        mov     byte ptr [esi+0x5454], 0x1
        call    FUN_00412780
        push    0x771a34
        lea     ecx, [esi+0x6064]
        mov     byte ptr [esi+0x6060], 0x1
        call    FUN_00412780
        push    0x771a28
        lea     ecx, [esi+0x6c70]
        mov     byte ptr [esi+0x6c6c], 0x1
        call    FUN_00412780
        push    0x771a1c
        lea     ecx, [esi+0x787c]
        mov     byte ptr [esi+0x7878], 0x1
        call    FUN_00412780
        push    0x771a10
        lea     ecx, [esi+0x8488]
        mov     byte ptr [esi+0x8484], 0x1
        call    FUN_00412780
        push    0x771a04
        lea     ecx, [esi+0x9094]
        mov     byte ptr [esi+0x9090], 0x1
        call    FUN_00412780
        push    0x7719f8
        lea     ecx, [esi+0x9ca0]
        mov     byte ptr [esi+0x9c9c], 0x1
        call    FUN_00412780
        lea     eax, [ebp+0x18]
        lea     ecx, [ebp+0x1400]
        mov     edx, 0xff
    L5f9:
        mov     dword ptr [ecx+0xfffffc04], ebx
        mov     dword ptr [ecx], ebx
        mov     dword ptr [eax-0x4], ebx
        mov     dword ptr [eax], 0xffffffff
        mov     dword ptr [eax+0x4], ebx
        mov     dword ptr [eax+0x8], ebx
        add     ecx, 0x4
        add     eax, 0x10
        dec     edx
        jnz     L5f9
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax+0x40]
        lea     edx, [ebp+0x1818]
        push    ebx
        xor     eax, eax
        mov     edi, edx
        mov     ecx, 0xff
        rep stosd
        mov     ecx, dword ptr [g_007db098]
        push    ebx
        push    ebx
        mov     dword ptr [edx], ecx
        call    FUN_00701f20
        test    eax, eax
        jnz     L6e4
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     byte ptr [ebp+0x1c14], al
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        mov     byte ptr [ebp+0x17fc], 0x1
        call    dword ptr [edx+0x30]
        push    0x2048
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L6a9
        push    0x76b768
        push    ebx
        push    0x1
        mov     ecx, eax
        call    FUN_004ce9d0
        jmp     L6ab
    L6a9:
        xor     eax, eax
    L6ab:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx+0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    eax
        push    0x1
        mov     dword ptr [g_007db090], eax
        mov     dword ptr [g_007db094], eax
        mov     dword ptr [ebp+0x181c], eax
        call    dword ptr [edx+0x38]
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret
    L6e4:
        push    ebx
        push    ebx
        push    0x2
        mov     byte ptr [ebp+0x1c14], 0x1
        call    FUN_00701f20
        push    ebx
        push    ebx
        mov     esi, eax
        push    0x4
        mov     dword ptr [esp+0x20], esi
        call    FUN_00701f20
        push    ebx
        push    ebx
        push    0x6
        mov     dword ptr [g_007db078], eax
        call    FUN_00701f20
        push    ebx
        push    ebx
        push    0x5
        mov     dword ptr [g_007db080], eax
        call    FUN_00701f20
        push    ebx
        push    ebx
        push    0x1
        mov     dword ptr [g_007db07c], eax
        mov     dword ptr [ebp+0x1808], 0x2
        mov     dword ptr [ebp+0x1800], ebx
        call    FUN_00701f20
        test    eax, eax
        jz      L856
        cmp     esi, 0x1
        mov     byte ptr [esp+0x10], 0x1
        jc      L8a2
        mov     ebx, dword ptr [esp+0x10]
        mov     edi, 0x1
    L75c:
        push    0x0
        lea     esi, [edi-0x1]
        push    esi
        push    0x7
        call    FUN_00701f20
        push    0x0
        push    esi
        push    0x8
        mov     dword ptr [esp+0x24], eax
        call    FUN_00701f20
        mov     esi, eax
        push    0x2048
        mov     dword ptr [esp+0x20], esi
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L7a0
        mov     ecx, dword ptr [esp+0x18]
        push    ecx
        push    esi
        push    ebx
        mov     ecx, eax
        call    FUN_004ce9d0
        mov     esi, eax
        jmp     L7a2
    L7a0:
        xor     esi, esi
    L7a2:
        mov     edx, dword ptr [esp+0x1c]
        cmp     edx, dword ptr [g_007db078]
        jnz     L7c0
        mov     dword ptr [g_007db090], esi
        mov     dword ptr [g_007db094], esi
        mov     byte ptr [esi+0x28], 0x1
        jmp     L7f4
    L7c0:
        mov     ebx, dword ptr [g_007dab40]
        xor     eax, eax
        mov     al, byte ptr [ebp+0x1808]
        mov     byte ptr [esi+0x28], al
        and     eax, 0xff
        push    eax
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, ebx
        mov     ecx, dword ptr [ecx+0x14]
        xor     ecx, 0x85739531
        call    FUN_004ccaa0
        inc     dword ptr [ebp+0x1808]
    L7f4:
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax+0xc]
        xor     eax, eax
        mov     al, byte ptr [esi+0x28]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    esi
        mov     dword ptr [ebp+edi*4+0x1818], esi
        push    eax
        call    dword ptr [edx+0x38]
        mov     dl, byte ptr [esp+0x10]
        mov     eax, dword ptr [esp+0x14]
        inc     dl
        mov     byte ptr [esp+0x10], dl
        mov     ebx, dword ptr [esp+0x10]
        mov     edi, ebx
        and     edi, 0xff
        cmp     edi, eax
        jbe     L75c
        mov     esi, eax
    L842:
        and     ebx, 0xff
        mov     dword ptr [ebp+0x1808], ebx
        mov     dword ptr [ebp+0x1800], esi
        xor     ebx, ebx
    L856:
        push    ebx
        push    ebx
        push    0x1
        call    FUN_00701f20
        test    eax, eax
        jz      L8a8
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax+0x30]
        mov     ecx, dword ptr [g_007db090]
        mov     dword ptr [g_007db094], ecx
        mov     ecx, ebp
        mov     byte ptr [ebp+0x17fc], 0x1
        call    FUN_004cdff0
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret
    L8a2:
        mov     ebx, dword ptr [esp+0x10]
        jmp     L842
    L8a8:
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx+0x28]
        pop     edi
        pop     esi
        mov     byte ptr [ebp+0x17fc], 0x0
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret
    }
}
