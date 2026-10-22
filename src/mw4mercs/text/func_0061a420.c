/*
 * FUN_0061a420 (226 B) — Destructor. Sets vtable ptr, decrements
 * reference counts on 7 sub-objects (freeing when count hits 0),
 * calls FUN_00415380, and optionally frees this.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: flags byte).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void __stdcall FUN_0061a420(void *flags)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x78c524

        mov     eax, dword ptr [esi + 0x88]
        test    eax, eax
        jz      L_88
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_88
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_88:
        mov     eax, dword ptr [esi + 0x80]
        test    eax, eax
        jz      L_80
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_80
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_80:
        mov     eax, dword ptr [esi + 0x6c]
        test    eax, eax
        jz      L_6c
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_6c
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_6c:
        mov     eax, dword ptr [esi + 0x68]
        test    eax, eax
        jz      L_68
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_68
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_68:
        mov     eax, dword ptr [esi + 0x64]
        test    eax, eax
        jz      L_64
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_64
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_64:
        mov     eax, dword ptr [esi + 0x60]
        test    eax, eax
        jz      L_60
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_60
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_60:
        mov     eax, dword ptr [esi + 0x5c]
        test    eax, eax
        jz      L_5c
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_5c
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_5c:
        mov     ecx, esi
        call    FUN_00415380
        test    byte ptr [esp + 8], 1
        jz      L_done
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
