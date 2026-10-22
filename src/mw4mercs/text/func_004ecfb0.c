/*
 * FUN_004ecfb0 (106 B) — __thiscall (ECX=this, RET 0xc). Allocates a
 * 0x1c-byte object, constructs it via FUN_004ecbc0, then appends a
 * string/object to a list at this+0x18 via FUN_00416a90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004ecbc0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004ecfb0(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        push    0x1c
        mov     ebx, ecx
        call    FUN_004084d0
        mov     edi, dword ptr [esp + 0x14]
        add     esp, 0x4
        test    eax, eax
        jz      L1
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    edi
        mov     ecx, eax
        call    FUN_004ecbc0
        mov     esi, eax
        jmp     L2
L1:
        xor     esi, esi
L2:
        push    edi
        lea     ecx, [esp + 0x14]
        call    FUN_00412570
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        lea     ecx, [ebx + 0x18]
        call    FUN_00416a90
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L3
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L3:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0xc
    }
}
