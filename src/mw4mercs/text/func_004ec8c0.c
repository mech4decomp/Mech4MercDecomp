/*
 * FUN_004ec8c0 (121 B) — __thiscall, RET 0x4. MLR/Adept object method:
 * decrements a counter, calls a sub-object method, and conditionally resets
 * fields + invokes a virtual method or copies a sub-object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004154d0(void);
extern void __cdecl FUN_00724a00(void);
extern void __cdecl FUN_004179b0(void);

__declspec(naked) void FUN_004ec8c0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     edx, dword ptr [esi+0xa0]
        push    edi
        mov     edi, dword ptr [esp+0xc]
        lea     eax, [esi+0x84]
        dec     edx
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi+0xa0], edx
        call    FUN_004154d0
        mov     al, byte ptr [esi+0x80]
        test    al, al
        jnz     L_928
        mov     eax, dword ptr [esi+0x94]
        test    eax, eax
        jnz     L_928
        mov     ecx, dword ptr [edi+0x18]
        push    0
        mov     dword ptr [edi+0x28], 0
        push    ecx
        mov     dword ptr [edi+0x2c], 0
        mov     dword ptr [edi+0x10], 0
        call    FUN_00724a00
        test    esi, esi
        jz      L_934
        mov     edx, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [edx]
        pop     edi
        pop     esi
        ret     4
    L_928:
        push    edi
        lea     ecx, [esi+0x8c]
        call    FUN_004179b0
    L_934:
        pop     edi
        pop     esi
        ret     4
    }
}
