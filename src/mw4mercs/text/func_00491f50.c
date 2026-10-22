/*
 * FUN_00491f50 (779 B) — MLR __thiscall (RET 0x4): grows/reallocates
 * the object's pointer arrays (buffer at +0x40, string table at +0x48),
 * then (version-dependent) builds a list of child objects either by
 * direct construction or by name lookup + insertion into a sorted
 * linked list.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da920;

extern void __cdecl FUN_006f4950(void);
extern int __cdecl FUN_004933d0(void);
extern void *__cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004925c0(void);
extern int __cdecl FUN_00493910(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_004128e0(void);
extern void *__cdecl FUN_00492cf0(void);
extern void *__cdecl FUN_004926e0(void);
extern void __cdecl FUN_004925b0(void);
extern void *__cdecl FUN_00492650(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_00492740(void);

__declspec(naked) void FUN_00491f50(void)
{
    __asm {
        sub     esp, 0x2c
        mov     eax, dword ptr [g_007da920]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        push    eax
        mov     dword ptr [esp+0x28], ebx
        call    FUN_006f4950
        mov     esi, dword ptr [esp+0x40]
        push    esi
        call    FUN_004933d0
        mov     ebp, dword ptr [ebx+0x44]
        mov     edx, dword ptr [esi]
        add     esp, 0x4
        mov     dword ptr [esp+0x20], eax
        push    0x4
        lea     eax, [esp+0x18]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp+0x18], ebp
        call    dword ptr [edx+0x20]
        mov     eax, dword ptr [esp+0x14]
        lea     esi, [eax+ebp*1]
        mov     edi, ebp
        cmp     esi, edi
        jz      L_49200a
        test    esi, esi
        jbe     L_491ff0
        lea     ecx, [esi*4]
        push    ecx
        call    FUN_004084d0
        mov     edx, dword ptr [ebx+0x40]
        add     esp, 0x4
        test    edx, edx
        mov     ebp, eax
        jz      L_491fe7
        cmp     esi, edi
        mov     ecx, esi
        jc      L_491fc0
        mov     ecx, edi
L_491fc0:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_491fdb
        lea     eax, [ebp+ecx*4]
        sub     edx, ebp
        inc     ecx
L_491fce:
        mov     edi, dword ptr [edx+eax*1]
        mov     dword ptr [eax], edi
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_491fce
L_491fdb:
        mov     eax, dword ptr [ebx+0x40]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_491fe7:
        mov     dword ptr [ebx+0x40], ebp
        mov     ebp, dword ptr [esp+0x10]
        jmp     L_492003
L_491ff0:
        mov     ecx, dword ptr [ebx+0x40]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx+0x40], 0x0
L_492003:
        mov     eax, dword ptr [esp+0x14]
        mov     dword ptr [ebx+0x44], esi
L_49200a:
        mov     edi, dword ptr [ebx+0x4c]
        add     ebp, eax
        cmp     ebp, edi
        jz      L_4920b2
        xor     esi, esi
        cmp     ebp, esi
        jbe     L_49209a
        lea     edx, [ebp*4+0x4]
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, esi
        jz      L_492044
        push    offset FUN_00492740
        push    ebp
        lea     esi, [eax+0x4]
        push    0x4
        push    esi
        mov     dword ptr [eax], ebp
        call    FUN_00406c90
L_492044:
        mov     eax, dword ptr [ebx+0x48]
        test    eax, eax
        mov     dword ptr [esp+0x18], esi
        jz      L_49208d
        cmp     ebp, edi
        jnc     L_492055
        mov     edi, ebp
L_492055:
        mov     ecx, edi
        dec     edi
        test    ecx, ecx
        jz      L_49207f
        mov     ecx, dword ptr [esp+0x18]
        mov     ebx, eax
        lea     esi, [ecx+edi*4]
        sub     ebx, ecx
        inc     edi
L_492068:
        lea     edx, [ebx+esi*1]
        push    edx
        mov     ecx, esi
        call    FUN_00412740
        dec     edi
        sub     esi, 0x4
        test    edi, edi
        ja      L_492068
        mov     ebx, dword ptr [esp+0x24]
L_49207f:
        mov     ecx, dword ptr [ebx+0x48]
        test    ecx, ecx
        jz      L_49208d
        push    0x3
        call    FUN_004925c0
L_49208d:
        mov     eax, dword ptr [esp+0x18]
        mov     dword ptr [ebx+0x48], eax
        mov     eax, dword ptr [esp+0x14]
        jmp     L_4920af
L_49209a:
        mov     ecx, dword ptr [ebx+0x48]
        cmp     ecx, esi
        jz      L_4920ac
        push    0x3
        call    FUN_004925c0
        mov     eax, dword ptr [esp+0x14]
L_4920ac:
        mov     dword ptr [ebx+0x48], esi
L_4920af:
        mov     dword ptr [ebx+0x4c], ebp
L_4920b2:
        cmp     dword ptr [esp+0x20], 0x15
        jge     L_492117
        xor     edi, edi
        test    eax, eax
        jbe     L_49224c
        mov     eax, dword ptr [ebx+0x40]
        mov     ecx, dword ptr [esp+0x10]
        mov     ebx, dword ptr [ebx+0x48]
        lea     esi, [eax+ecx*4]
        sub     ebx, eax
L_4920d2:
        mov     edx, dword ptr [esp+0x20]
        mov     eax, dword ptr [esp+0x40]
        push    edx
        push    eax
        call    FUN_00493910
        mov     ecx, dword ptr [esp+0x18]
        lea     edx, [edi+ecx*1]
        mov     dword ptr [esi], eax
        mov     dword ptr [eax+0x8], edx
        add     esp, 0x8
        add     eax, 0x4
        push    eax
        lea     ecx, [ebx+esi*1]
        call    FUN_00412740
        mov     eax, dword ptr [esp+0x14]
        inc     edi
        add     esi, 0x4
        cmp     edi, eax
        jc      L_4920d2
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x2c
        ret     0x4
L_492117:
        test    eax, eax
        mov     dword ptr [esp+0x24], 0x0
        jbe     L_492210
        mov     eax, dword ptr [esp+0x10]
        lea     ecx, [eax*4]
        mov     dword ptr [esp+0x1c], ecx
L_492136:
        mov     edx, dword ptr [ebx+0x48]
        mov     eax, dword ptr [esp+0x1c]
        mov     ecx, dword ptr [esp+0x40]
        lea     edi, [eax+edx*1]
        push    edi
        push    ecx
        call    FUN_00412a00
        add     esp, 0x8
        mov     ecx, edi
        call    FUN_004128e0
        push    edi
        lea     edx, [esp+0x30]
        lea     esi, [ebx+0x50]
        push    edx
        mov     ecx, esi
        call    FUN_00492cf0
        mov     ebp, dword ptr [eax]
        cmp     ebp, dword ptr [esi]
        mov     dword ptr [esp+0x18], ebp
        jz      L_4921a1
        mov     esi, dword ptr [ebp+0x10]
        mov     ecx, dword ptr [edi]
L_492174:
        mov     al, byte ptr [ecx]
        mov     dl, al
        cmp     al, byte ptr [esi]
        jnz     L_492198
        test    dl, dl
        jz      L_492194
        mov     al, byte ptr [ecx+0x1]
        mov     dl, al
        cmp     al, byte ptr [esi+0x1]
        jnz     L_492198
        add     ecx, 0x2
        add     esi, 0x2
        test    dl, dl
        jnz     L_492174
L_492194:
        xor     ecx, ecx
        jmp     L_49219d
L_492198:
        sbb     ecx, ecx
        sbb     ecx, -0x1
L_49219d:
        test    ecx, ecx
        jge     L_4921e6
L_4921a1:
        lea     ecx, [esp+0x28]
        push    ecx
        push    edi
        lea     ecx, [esp+0x3c]
        mov     dword ptr [esp+0x30], 0x0
        call    FUN_004926e0
        push    eax
        push    ecx
        lea     edx, [esp+0x20]
        mov     ecx, esp
        push    edx
        call    FUN_004925b0
        lea     eax, [esp+0x38]
        push    eax
        lea     ecx, [ebx+0x50]
        call    FUN_00492650
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp+0x18], ecx
        lea     ecx, [esp+0x34]
        call    FUN_0040d9b0
        mov     ebp, dword ptr [esp+0x18]
L_4921e6:
        mov     ecx, dword ptr [esp+0x24]
        mov     edx, dword ptr [esp+0x10]
        mov     esi, dword ptr [esp+0x1c]
        lea     eax, [ecx+edx*1]
        mov     dword ptr [ebp+0x14], eax
        mov     eax, dword ptr [esp+0x14]
        inc     ecx
        add     esi, 0x4
        cmp     ecx, eax
        mov     dword ptr [esp+0x24], ecx
        mov     dword ptr [esp+0x1c], esi
        jc      L_492136
L_492210:
        xor     edi, edi
        test    eax, eax
        jbe     L_49224c
        mov     ecx, dword ptr [ebx+0x40]
        mov     edx, dword ptr [esp+0x10]
        lea     esi, [ecx+edx*4]
L_492220:
        mov     eax, dword ptr [esp+0x20]
        mov     ecx, dword ptr [esp+0x40]
        push    eax
        push    ecx
        call    FUN_00493910
        mov     edx, dword ptr [esp+0x18]
        mov     dword ptr [esi], eax
        mov     ecx, dword ptr [esi]
        lea     eax, [edi+edx*1]
        add     esp, 0x8
        mov     dword ptr [ecx+0x8], eax
        mov     eax, dword ptr [esp+0x14]
        inc     edi
        add     esi, 0x4
        cmp     edi, eax
        jc      L_492220
L_49224c:
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x2c
        ret     0x4
    }
}
