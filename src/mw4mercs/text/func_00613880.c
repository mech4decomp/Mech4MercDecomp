/*
 * FUN_00613880 (162 B) — cdecl, 2 params. Animation-related: builds a
 * string via FUN_004d2000/FUN_00412570/FUN_00412a50, makes a virtual
 * call, then conditionally frees two buffers (refcount decrement via
 * FUN_004084e0) and tears down via FUN_004d21c0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void FUN_00613880(void)
{
    __asm {
        sub     esp, 0x48
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x54]
        mov     esi, dword ptr [edi+0x18]
        push    0
        push    esi
        lea     ecx, [esp+0x14]
        call    FUN_004d2000
        push    esi
        lea     ecx, [esp+0x0c]
        call    FUN_00412570
        mov     esi, dword ptr [esp+0x58]
        lea     eax, [esp+0x08]
        push    eax
        push    esi
        call    FUN_00412a50
        mov     edx, dword ptr [esi]
        add     esp, 8
        push    4
        lea     eax, [esp+0x50]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        mov     ecx, dword ptr [edi+0x14]
        push    ecx
        lea     ecx, [esp+0x58]
        call    FUN_00412570
        lea     edx, [esp+0x54]
        push    edx
        push    esi
        call    FUN_00412a50
        mov     eax, dword ptr [esp+0x5c]
        add     esp, 8
        test    eax, eax
        pop     edi
        pop     esi
        jz      L1
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L1
        push    eax
        call    FUN_004084e0
        add     esp, 4
L1:
        __emit 0x8B   /* __emit: MSVC6 drops the 00 disp byte for [esp+0] */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        test    eax, eax
        jz      L2
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L2
        push    eax
        call    FUN_004084e0
        add     esp, 4
L2:
        lea     ecx, [esp+4]
        call    FUN_004d21c0
        add     esp, 0x48
        ret
    }
}
