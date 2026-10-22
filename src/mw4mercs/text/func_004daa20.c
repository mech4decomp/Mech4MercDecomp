/*
 * FUN_004daa20 (301 B) — __thiscall. MLR/Adept node update. Calls
 * FUN_004da580, then either reconfigures a stream (vtable+0x10) and
 * copies a 3-vector, or (when the node id matches) looks up a node via
 * FUN_004e27b0 and copies a 3x3 matrix (rep movsd) into the stream.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_007dab44;
extern int   g_007dab40;
extern void __cdecl FUN_004da580(void);
extern void __cdecl FUN_00419460(void);
extern int  __cdecl FUN_004e27b0(void);

__declspec(naked) void FUN_004daa20(void)
{
    __asm {
        sub     esp, 0x3c
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        call    FUN_004da580
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [g_007dab40]
        mov     esi, dword ptr [ebx+0xc4]
        xor     edx, ecx
        mov     edx, dword ptr [edx+0x1c]
        xor     edx, 0x85739531
        cmp     esi, edx
        jz      L_aa87
        mov     esi, dword ptr [ebx+0xd8]
        mov     eax, dword ptr [esi+0x18]
        mov     edx, dword ptr [esi]
        and     eax, 0xfffffffe
        or      eax, 0x4
        mov     ecx, esi
        mov     dword ptr [esi+0x18], eax
        call    dword ptr [edx+0x10]
        mov     eax, dword ptr [esp+0x4c]
        push    eax
        lea     ecx, [esi+0x20]
        call    FUN_00419460
        mov     eax, dword ptr [ebx+0x10]
        pop     edi
        or      eax, 0x20
        pop     esi
        mov     dword ptr [ebx+0x10], eax
        pop     ebx
        add     esp, 0x3c
        ret     0x4
L_aa87:
        mov     esi, dword ptr [esp+0x4c]
        mov     edx, dword ptr [esi+0xc]
        mov     dword ptr [esp+0xc], edx
        mov     edx, dword ptr [esi+0x1c]
        mov     dword ptr [esp+0x10], edx
        mov     edx, dword ptr [esi+0x2c]
        mov     dword ptr [esp+0x14], edx
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        lea     ecx, [esp+0xc]
        push    ecx
        mov     ecx, dword ptr [eax+0x1c]
        xor     ecx, 0x85739531
        call    FUN_004e27b0
        cmp     eax, -0x1
        jnz     L_ab16
        mov     ecx, 0xc
        lea     edi, [esp+0x18]
        rep movsd
        mov     esi, dword ptr [ebx+0xd8]
        mov     ecx, dword ptr [esi+0x18]
        mov     edx, dword ptr [esi+0x8c]
        mov     eax, dword ptr [esi+0xac]
        and     ecx, 0xfffffffe
        or      ecx, 0x4
        mov     dword ptr [esp+0x24], edx
        mov     edx, dword ptr [esi]
        mov     dword ptr [esi+0x18], ecx
        mov     ecx, esi
        mov     dword ptr [esp+0x44], eax
        call    dword ptr [edx+0x10]
        mov     eax, dword ptr [ebx+0x10]
        lea     edi, [esi+0x20]
        mov     ecx, 0xc
        lea     esi, [esp+0x18]
        rep movsd
        pop     edi
        or      eax, 0x400020
        pop     esi
        mov     dword ptr [ebx+0x10], eax
        pop     ebx
        add     esp, 0x3c
        ret     0x4
L_ab16:
        mov     edi, dword ptr [ebx+0xd8]
        mov     eax, dword ptr [edi+0x18]
        mov     edx, dword ptr [edi]
        and     eax, 0xfffffffe
        or      eax, 0x4
        mov     ecx, edi
        mov     dword ptr [edi+0x18], eax
        call    dword ptr [edx+0x10]
        mov     eax, dword ptr [ebx+0x10]
        add     edi, 0x20
        mov     ecx, 0xc
        rep movsd
        pop     edi
        or      eax, 0x260
        pop     esi
        mov     dword ptr [ebx+0x10], eax
        pop     ebx
        add     esp, 0x3c
        ret     0x4
    }
}
