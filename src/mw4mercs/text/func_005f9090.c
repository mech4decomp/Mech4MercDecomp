/*
 * FUN_005f9090 (257 B) — __fastcall. Builds two local list objects, then
 * iterates a list of nodes; for each node resolves a target via FUN_005f8fa0,
 * wires up a new entry (FUN_00416b60), dispatches a virtual method, and
 * destroys the locals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00416bc0(void);
extern void FUN_00416cc0(void);
extern void FUN_00416b60(void);
extern void FUN_00416c60(void);
extern void FUN_005f8fa0(void);
extern void FUN_004e6470(void);

__declspec(naked) void FUN_005f9090(void)
{
    __asm {
        sub     esp, 0x28
        push    ebx
        mov     ebx, ecx
        push    esi
        lea     eax, [ebx+0x370]
        push    eax
        lea     ecx, [esp+0xc]
        call    FUN_00416bc0
        lea     eax, [ebx+0x384]
        push    eax
        lea     ecx, [esp+0x20]
        mov     dword ptr [esp+0xc], 0x783ec4
        call    FUN_00416bc0
        lea     ecx, [esp+0x8]
        mov     dword ptr [esp+0x1c], 0x783f04
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jz      L_9179
        push    ebp
        push    edi
L_90dc:
        mov     ecx, dword ptr [esi+0x30]
        push    ecx
        mov     ecx, ebx
        call    FUN_005f8fa0
        mov     ebp, eax
        test    ebp, ebp
        jz      L_912d
        lea     edx, [esi+0x2c]
        push    edx
        lea     ecx, [ebx+0x384]
        call    FUN_00416b60
        mov     edi, eax
        mov     eax, dword ptr [edi+0x40]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [esi+0x28], edi
        call    FUN_005f8fa0
        lea     ecx, [edi+0x34]
        push    ecx
        lea     ecx, [ebx+0x384]
        mov     dword ptr [edi+0x2c], eax
        call    FUN_00416b60
        mov     edx, dword ptr [ebp]
        push    esi
        mov     ecx, ebp
        mov     dword ptr [edi+0x30], eax
        call    dword ptr [edx+0x7c]
        push    ebp
        jmp     L_915d
L_912d:
        lea     eax, [esi+0x2c]
        lea     ebp, [ebx+0x384]
        push    eax
        mov     ecx, ebp
        call    FUN_00416b60
        mov     edi, eax
        lea     ecx, [edi+0x34]
        push    ecx
        mov     ecx, ebp
        mov     dword ptr [esi+0x28], edi
        mov     dword ptr [edi+0x2c], ebx
        call    FUN_00416b60
        mov     edx, dword ptr [ebx]
        push    esi
        mov     ecx, ebx
        mov     dword ptr [edi+0x30], eax
        call    dword ptr [edx+0x7c]
        push    ebx
L_915d:
        mov     ecx, esi
        call    FUN_004e6470
        lea     ecx, [esp+0x10]
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jnz     L_90dc
        pop     edi
        pop     ebp
L_9179:
        lea     ecx, [esp+0x1c]
        call    FUN_00416c60
        lea     ecx, [esp+0x8]
        call    FUN_00416c60
        pop     esi
        pop     ebx
        add     esp, 0x28
        ret
    }
}
