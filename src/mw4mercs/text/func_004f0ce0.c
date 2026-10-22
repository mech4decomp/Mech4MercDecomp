/*
 * FUN_004f0ce0 (302 B) — MLR/Adept component factory/init chain.
 * __thiscall; sets vtable 0x774dc8, initializes a sub-object via
 * virtual calls, copies 0x30 bytes, and registers with the global
 * allocator (g_007daa38).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007daa38;
extern void __cdecl FUN_004f21b0(void);
extern void __cdecl FUN_00416110(void);
extern int  __cdecl FUN_004af200(void *);
extern void __cdecl FUN_004b83e0(void);
extern void __cdecl FUN_004c8a50(void *);
extern void __cdecl FUN_00416130(void *);

__declspec(naked) void FUN_004f0ce0(void)
{
    __asm {
        sub     esp, 0x34
        mov     eax, dword ptr [esp+0x40]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp+0x44]
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp+0x48]
        push    eax
        push    ebp
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp+0x1c], esi
        call    FUN_004f21b0
        mov     ebx, dword ptr [esp+0x54]
        mov     edx, dword ptr [ebp]
        push    0x30
        lea     eax, [esp+0x18]
        push    eax
        mov     ecx, ebp
        mov     dword ptr [esi], 0x774dc8
        mov     dword ptr [esi+0x24], ebx
        call    dword ptr [edx+0x20]
        mov     ecx, dword ptr [ebx+0x18]
        mov     edx, dword ptr [ebx]
        and     ecx, 0xfffffffe
        or      ecx, 0x4
        mov     dword ptr [ebx+0x18], ecx
        mov     ecx, ebx
        call    dword ptr [edx+0x10]
        mov     eax, dword ptr [ebp]
        lea     edi, [ebx+0x20]
        mov     ecx, 0xc
        lea     esi, [esp+0x14]
        rep movsd
        push    0x4
        lea     ecx, [esp+0x54]
        push    ecx
        mov     ecx, ebp
        call    dword ptr [eax+0x20]
        mov     eax, dword ptr [esp+0x50]
        test    eax, eax
        jz      L_0dab
        mov     edx, dword ptr [ebp]
        push    0x4
        lea     eax, [esp+0x50]
        push    eax
        mov     ecx, ebp
        call    dword ptr [edx+0x20]
        mov     eax, dword ptr [esp+0x50]
        mov     edx, dword ptr [ebx+0x18]
        mov     ecx, eax
        not     ecx
        and     ecx, edx
        mov     edx, dword ptr [esp+0x4c]
        and     edx, eax
        or      ecx, edx
        mov     dword ptr [ebx+0x18], ecx
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax+0x10]
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx+0x14]
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax+0x40]
        test    byte ptr [esp+0x50], 0x20
        jz      L_0dab
        mov     edx, dword ptr [ebp]
        push    0x40
        lea     eax, [ebx+0xb0]
        push    eax
        mov     ecx, ebp
        call    dword ptr [edx+0x20]
L_0dab:
        mov     ecx, dword ptr [g_007daa38]
        call    FUN_00416110
        mov     esi, eax
        test    esi, esi
        jz      L_0dd0
        push    ebp
        call    FUN_004af200
        add     esp, 0x4
        push    eax
        push    ebp
        mov     ecx, esi
        call    FUN_004b83e0
        jmp     L_0dd2
L_0dd0:
        xor     eax, eax
L_0dd2:
        mov     ecx, dword ptr [eax+0x10]
        or      ecx, dword ptr [eax+0x8]
        jz      L_0df0
        push    eax
        mov     ecx, ebx
        call    FUN_004c8a50
        mov     eax, dword ptr [esp+0x10]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret     0x10
L_0df0:
        test    eax, eax
        jz      L_0e00
        mov     ecx, dword ptr [g_007daa38]
        push    eax
        call    FUN_00416130
L_0e00:
        mov     eax, dword ptr [esp+0x10]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret     0x10
    }
}
