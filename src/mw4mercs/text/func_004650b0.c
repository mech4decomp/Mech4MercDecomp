/*
 * FUN_004650b0 (230 B) — MLR_I_DeT_PMesh constructor (__thiscall, RET 0xc).
 * Calls base ctor FUN_0047a4c0, initializes sub-objects, sets vtable
 * 0x76ef40, allocates 4 dwords through the stream vtable (+0x20), and
 * sets up render-state flags.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b9580;

extern void __cdecl FUN_0047a4c0(void);
extern void __cdecl FUN_004911e0(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00491440(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004650b0(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    ebx
        mov     ebx, dword ptr [esp+0xc]
        push    ebp
        mov     ebp, dword ptr [esp+0x14]
        push    esi
        push    edi
        push    ebp
        push    ebx
        mov     esi, ecx
        push    eax
        call    FUN_0047a4c0
        lea     ecx, [esi+0x6c]
        call    FUN_004911e0
        lea     edi, [esi+0x74]
        mov     ecx, edi
        call    FUN_00491280
        mov     ecx, dword ptr [g_007b9580]
        push    ecx
        mov     dword ptr [esi], 0x76ef40
        call    FUN_006f4950
        push    ebp
        push    ebx
        mov     ecx, edi
        call    FUN_00491440
        call    FUN_006f49a0
        mov     edx, dword ptr [ebx]
        push    4
        lea     eax, [esi+0x90]
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [eax]
        push    4
        lea     ecx, [esi+0x94]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [eax]
        push    4
        lea     ebx, [esi+0x98]
        push    ebx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [eax]
        push    4
        lea     ecx, [esi+0x9c]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        fld     dword ptr [ebx]
        mov     ecx, dword ptr [edi]
        fadd    st(0), st(0)
        mov     eax, dword ptr [edi+8]
        mov     ebp, dword ptr [esi+0x3c]
        mov     ebx, dword ptr [esi+0x30]
        fstp    dword ptr [esi+0x8c]
        and     ecx, 0xfbffffff
        mov     dword ptr [edi], ecx
        or      eax, 0x4000000
        mov     ecx, 0xf
        or      ebp, ecx
        mov     dword ptr [edi+8], eax
        mov     dword ptr [esi+0x3c], ebp
        mov     edx, dword ptr [edi+0x10]
        mov     eax, 0xfffffff0
        and     ebx, eax
        mov     dword ptr [esi+0x30], ebx
        or      edx, ecx
        mov     ecx, dword ptr [edi+4]
        and     ecx, eax
        mov     dword ptr [edi+0x10], edx
        mov     dword ptr [edi+4], ecx
        pop     edi
        mov     byte ptr [esi+0x68], 1
        mov     byte ptr [esi+0x11], 2
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
