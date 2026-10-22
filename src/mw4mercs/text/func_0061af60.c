/*
 * FUN_0061af60 (201 B) — __thiscall constructor: zeroes fields, runs a
 * 0xff-iteration cleanup loop over a sub-object array (calling FUN_0061ae40
 * and freeing non-null entries), releases two vtable objects, copies global
 * state, and initializes a sub-object via FUN_00412780.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8d8c;
extern int g_007b8d88;
extern int g_007b8d90;
extern void FUN_0061ae40(void);
extern void FUN_004084e0(void);
extern void FUN_00412780(void);

__declspec(naked) void FUN_0061af60(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        xor     ebx, ebx
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esi+0x10], ebx
        mov     dword ptr [esi+0x14], ebx
        mov     dword ptr [esi+0x28], ebx
        mov     dword ptr [esi+0x24], ebx
        mov     dword ptr [esi+0x20], ebx
        mov     dword ptr [esi+0x18], ebx
        lea     edi, [esi+0x57e0]
        lea     ebp, [esi+0x38]
        mov     dword ptr [esp+0x10], 0xff
L8c:
        mov     ecx, ebp
        call    FUN_0061ae40
        mov     eax, dword ptr [edi]
        cmp     eax, ebx
        jz      La4
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi], ebx
La4:
        mov     eax, dword ptr [esp+0x10]
        add     edi, 4
        add     ebp, 0x58
        dec     eax
        mov     dword ptr [esp+0x10], eax
        jnz     L8c
        mov     ecx, dword ptr [esi+0x30]
        cmp     ecx, ebx
        jz      Lc5
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        mov     dword ptr [esi+0x30], ebx
Lc5:
        mov     ecx, dword ptr [esi+0x34]
        cmp     ecx, ebx
        jz      Ld5
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov     dword ptr [esi+0x34], ebx
Ld5:
        mov     ecx, dword ptr [g_007b8d8c]
        mov     eax, dword ptr [g_007b8d88]
        mov     edx, dword ptr [g_007b8d90]
        mov     dword ptr [esi+0x5be4], ecx
        mov     dword ptr [esi+0x5bf0], ecx
        mov     dword ptr [esi+0x5be0], eax
        mov     dword ptr [esi+0x5be8], edx
        push    0x76ba64
        lea     ecx, [esi+0x5bdc]
        mov     dword ptr [esi+0x5bec], eax
        mov     dword ptr [esi+0x5bf4], edx
        call    FUN_00412780
        pop     edi
        mov     byte ptr [esi+0x2c], bl
        mov     dword ptr [esi+0x1c], ebx
        mov     byte ptr [esi+0x2d], bl
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
