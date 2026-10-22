/*
 * FUN_004802a0 (463 B) — __thiscall MLRIndexedPrimitiveBase buffer
 * resize/init. Grows several member arrays ([EBX+0]=verts, [EBX+8]=norms,
 * [EBX+0x10]=indices) to fixed 0x20 capacity, initializes a normal array
 * to -1.0f, then calls two per-element initializers. Stack arg = index
 * count (<<5).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int);
extern void  __cdecl FUN_004084e0(void *);
extern void  __cdecl FUN_0042bb10(void);
extern void  __cdecl FUN_00406c90(void);
extern void  __cdecl FUN_004811a0(void);
extern void  __cdecl FUN_00429930(void);

__declspec(naked) void FUN_004802a0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebx, ecx
        push    esi
        mov     esi, dword ptr [ebx+4]
        cmp     esi, 0x20
        push    edi
        mov     dword ptr [esp+0x10], ebx
        jz      L_8031b
        push    0x200
        call    FUN_004084d0
        mov     edi, dword ptr [ebx]
        add     esp, 4
        test    edi, edi
        mov     ebp, eax
        jz      L_80312
        cmp     esi, 0x20
        mov     edx, 0x20
        ja      L_802d4
        mov     edx, esi
    L_802d4:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_80309
        mov     ecx, edx
        shl     ecx, 4
        lea     eax, [ecx+edi]
        lea     ecx, [ecx+ebp+8]
        inc     edx
    L_802e8:
        mov     esi, dword ptr [eax]
        mov     dword ptr [ecx-8], esi
        mov     esi, dword ptr [eax+4]
        mov     dword ptr [ecx-4], esi
        mov     esi, dword ptr [eax+8]
        mov     dword ptr [ecx], esi
        mov     esi, dword ptr [eax+0xc]
        mov     dword ptr [ecx+4], esi
        dec     edx
        sub     eax, 0x10
        sub     ecx, 0x10
        test    edx, edx
        ja      L_802e8
    L_80309:
        push    edi
        call    FUN_004084e0
        add     esp, 4
    L_80312:
        mov     dword ptr [ebx], ebp
        mov     dword ptr [ebx+4], 0x20
    L_8031b:
        mov     edi, dword ptr [ebx+0xc]
        cmp     edi, 0x20
        jz      L_803b1
        push    0x200
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_8035a
        lea     ecx, [eax+4]
        mov     esi, 0x20
        mov     edx, 0xbf800000
    L_80345:
        mov     dword ptr [ecx+4], edx
        mov     dword ptr [ecx], edx
        mov     dword ptr [ecx-4], edx
        mov     dword ptr [ecx+8], edx
        add     ecx, 0x10
        dec     esi
        jnz     L_80345
        mov     ebp, eax
        jmp     L_8035c
    L_8035a:
        xor     ebp, ebp
    L_8035c:
        mov     ecx, dword ptr [ebx+8]
        test    ecx, ecx
        jz      L_803a7
        cmp     edi, 0x20
        mov     eax, 0x20
        ja      L_8036f
        mov     eax, edi
    L_8036f:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_8039b
        mov     esi, eax
        shl     esi, 4
        mov     ebx, ecx
        add     esi, ebp
        sub     ebx, ebp
        lea     edi, [eax+1]
    L_80384:
        lea     eax, [ebx+esi]
        push    eax
        mov     ecx, esi
        call    FUN_0042bb10
        dec     edi
        sub     esi, 0x10
        test    edi, edi
        ja      L_80384
        mov     ebx, dword ptr [esp+0x10]
    L_8039b:
        mov     eax, dword ptr [ebx+8]
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_803a7:
        mov     dword ptr [ebx+8], ebp
        mov     dword ptr [ebx+0xc], 0x20
    L_803b1:
        mov     esi, dword ptr [esp+0x18]
        mov     ebp, dword ptr [ebx+0x14]
        shl     esi, 5
        cmp     esi, ebp
        jz      L_80446
        test    esi, esi
        jbe     L_80430
        lea     ecx, [esi*8]
        push    ecx
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        test    edi, edi
        jz      L_803ed
        push    0x423b70
        push    esi
        push    8
        push    edi
        call    FUN_00406c90
        jmp     L_803ef
    L_803ed:
        xor     edi, edi
    L_803ef:
        mov     ecx, dword ptr [ebx+0x10]
        test    ecx, ecx
        jz      L_8042b
        cmp     esi, ebp
        mov     edx, esi
        jc      L_803fe
        mov     edx, ebp
    L_803fe:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_8041f
        lea     eax, [edi+edx*8]
        sub     ecx, edi
        inc     edx
    L_8040b:
        mov     ebp, dword ptr [eax+ecx]
        mov     dword ptr [eax], ebp
        mov     ebp, dword ptr [eax+ecx+4]
        mov     dword ptr [eax+4], ebp
        dec     edx
        sub     eax, 8
        test    edx, edx
        ja      L_8040b
    L_8041f:
        mov     eax, dword ptr [ebx+0x10]
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_8042b:
        mov     dword ptr [ebx+0x10], edi
        jmp     L_80443
    L_80430:
        mov     ecx, dword ptr [ebx+0x10]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx+0x10], 0
    L_80443:
        mov     dword ptr [ebx+0x14], esi
    L_80446:
        push    0x20
        lea     ecx, [ebx+0x18]
        call    FUN_004811a0
        lea     esi, [ebx+0x20]
        mov     edi, 2
    L_80458:
        push    0x20
        mov     ecx, esi
        call    FUN_00429930
        add     esi, 8
        dec     edi
        jnz     L_80458
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     4
    }
}
