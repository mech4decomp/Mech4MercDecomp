/*
 * FUN_004922d0 (521 B) — MLR __thiscall (RET 0x4): resizes the object's
 * pointer arrays. Releases child objects above the new count, then
 * reallocates/copies the buffer at +0x40 and the string table at +0x48
 * (with per-element destructor calls), updating the count fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da920;

extern void __cdecl FUN_006f4950(void);
extern void *__cdecl FUN_00492c20(void);
extern void __cdecl FUN_00492590(void);
extern void __cdecl FUN_00412780(void);
extern void *__cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004922d0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_007da920]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     ebx, ecx
        call    FUN_006f4950
        mov     eax, dword ptr [esp+0x18]
        cmp     eax, dword ptr [ebx+0x44]
        mov     ebp, eax
        jnc     L_492354
        mov     edi, dword ptr [ebx+0x40]
L_4922f0:
        mov     ecx, dword ptr [edi+ebp*4]
        test    ecx, ecx
        lea     esi, [ebp*4]
        jz      L_49234c
        mov     edx, dword ptr [ebx+0x48]
        mov     eax, esi
        add     eax, edx
        push    eax
        lea     ecx, [esp+0x14]
        lea     edi, [ebx+0x50]
        push    ecx
        mov     ecx, edi
        call    FUN_00492c20
        mov     eax, dword ptr [eax]
        push    ecx
        mov     ecx, esp
        mov     dword ptr [ecx], eax
        mov     ecx, edi
        call    FUN_00492590
        mov     edi, dword ptr [ebx+0x40]
        mov     ecx, dword ptr [edi+esi*1]
        test    ecx, ecx
        jz      L_492333
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
L_492333:
        mov     eax, dword ptr [ebx+0x48]
        mov     ecx, esi
        push    0x0
        add     ecx, eax
        mov     dword ptr [edi+esi], 0x0
        call    FUN_00412780
        mov     eax, dword ptr [esp+0x18]
L_49234c:
        mov     ecx, dword ptr [ebx+0x44]
        inc     ebp
        cmp     ebp, ecx
        jc      L_4922f0
L_492354:
        mov     ebp, dword ptr [ebx+0x44]
        cmp     eax, ebp
        jz      L_4923c4
        test    eax, eax
        jbe     L_4923a8
        shl     eax, 0x2
        push    eax
        call    FUN_004084d0
        mov     edi, dword ptr [ebx+0x40]
        add     esp, 0x4
        test    edi, edi
        mov     esi, eax
        jz      L_4923a3
        mov     ecx, dword ptr [esp+0x18]
        cmp     ecx, ebp
        jc      L_49237e
        mov     ecx, ebp
L_49237e:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        jz      L_49239a
        mov     edx, edi
        lea     eax, [esi+ecx*4]
        sub     edx, esi
        inc     ecx
L_49238d:
        mov     ebp, dword ptr [edx+eax*1]
        mov     dword ptr [eax], ebp
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_49238d
L_49239a:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_4923a3:
        mov     dword ptr [ebx+0x40], esi
        jmp     L_4923bb
L_4923a8:
        mov     eax, dword ptr [ebx+0x40]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx+0x40], 0x0
L_4923bb:
        mov     ecx, dword ptr [esp+0x18]
        mov     dword ptr [ebx+0x44], ecx
        mov     eax, ecx
L_4923c4:
        mov     ebp, dword ptr [ebx+0x4c]
        cmp     eax, ebp
        jz      L_4924cc
        test    eax, eax
        jbe     L_492492
        lea     edx, [eax*4+0x4]
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_49240a
        mov     esi, dword ptr [esp+0x18]
        mov     dword ptr [eax], esi
        lea     edx, [eax+0x4]
        lea     eax, [esi-0x1]
        test    eax, eax
        jl      L_492404
        lea     ecx, [eax+0x1]
        xor     eax, eax
        mov     edi, edx
        rep     stosd
L_492404:
        mov     dword ptr [esp+0x10], edx
        jmp     L_492416
L_49240a:
        mov     esi, dword ptr [esp+0x18]
        mov     dword ptr [esp+0x10], 0x0
L_492416:
        mov     eax, dword ptr [ebx+0x48]
        test    eax, eax
        jz      L_492477
        cmp     esi, ebp
        mov     edi, esi
        jc      L_492425
        mov     edi, ebp
L_492425:
        mov     ecx, edi
        dec     edi
        test    ecx, ecx
        jz      L_49244b
        mov     ecx, dword ptr [esp+0x10]
        mov     ebp, eax
        lea     esi, [ecx+edi*4]
        sub     ebp, ecx
        inc     edi
L_492438:
        lea     edx, [esi+ebp*1]
        push    edx
        mov     ecx, esi
        call    FUN_00412740
        dec     edi
        sub     esi, 0x4
        test    edi, edi
        ja      L_492438
L_49244b:
        mov     ecx, dword ptr [ebx+0x48]
        test    ecx, ecx
        jz      L_492477
        mov     eax, dword ptr [ecx-0x4]
        lea     ebp, [ecx-0x4]
        lea     esi, [ecx+eax*4]
        dec     eax
        js      L_49246e
        lea     edi, [eax+0x1]
L_492461:
        sub     esi, 0x4
        mov     ecx, esi
        call    FUN_0040d9b0
        dec     edi
        jnz     L_492461
L_49246e:
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
L_492477:
        mov     eax, dword ptr [esp+0x10]
        mov     dword ptr [ebx+0x48], eax
        mov     eax, dword ptr [esp+0x18]
        mov     dword ptr [ebx+0x4c], eax
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
L_492492:
        mov     ecx, dword ptr [ebx+0x48]
        test    ecx, ecx
        jz      L_4924c2
        mov     eax, dword ptr [ecx-0x4]
        lea     ebp, [ecx-0x4]
        lea     esi, [ecx+eax*4]
        dec     eax
        js      L_4924b5
        lea     edi, [eax+0x1]
L_4924a8:
        sub     esi, 0x4
        mov     ecx, esi
        call    FUN_0040d9b0
        dec     edi
        jnz     L_4924a8
L_4924b5:
        push    ebp
        call    FUN_004084e0
        mov     eax, dword ptr [esp+0x1c]
        add     esp, 0x4
L_4924c2:
        mov     dword ptr [ebx+0x48], 0x0
        mov     dword ptr [ebx+0x4c], eax
L_4924cc:
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
