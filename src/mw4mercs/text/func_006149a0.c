/*
 * FUN_006149a0 (224 B) — __thiscall: copies a string out of a collection
 * entry (virtual method vtable+0x24), builds a string from a constant
 * (0x76b768), and appends/inserts it into the object's string members.
 * Frees refcounted buffers on exit.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412570(void *);
extern void __cdecl FUN_00412740(void *);
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_00412a50(void *, void *);

__declspec(naked) void FUN_006149a0(void)
{
    __asm {
        sub     esp, 0x8
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x14]
        mov     eax, dword ptr [edi]
        mov     esi, ecx
        push    0x1
        lea     ecx, [esi+0x14]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax+0x24]
        push    0x76b768
        lea     ecx, [esp+0xc]
        call    FUN_00412570
        mov     eax, dword ptr [esi+0x10]
        test    eax, eax
        jz      lbl_614a04
        mov     eax, dword ptr [eax+0x10]
        test    eax, eax
        mov     dword ptr [esp+0xc], eax
        jz      lbl_6149db
        inc     byte ptr [eax-1]
lbl_6149db:
        lea     edx, [esp+0xc]
        push    edx
        lea     ecx, [esp+0xc]
        call    FUN_00412740
        mov     eax, dword ptr [esp+0xc]
        test    eax, eax
        jz      lbl_614a04
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_614a04
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_614a04:
        lea     eax, [esp+0x8]
        push    eax
        push    edi
        call    FUN_00412a50
        add     esp, 0x8
        push    0x76b768
        lea     ecx, [esp+0x18]
        call    FUN_00412570
        mov     esi, dword ptr [esi+0x18]
        test    esi, esi
        jz      lbl_614a34
        add     esi, 0x10
        push    esi
        lea     ecx, [esp+0x18]
        call    FUN_00412740
lbl_614a34:
        lea     ecx, [esp+0x14]
        push    ecx
        push    edi
        call    FUN_00412a50
        mov     eax, dword ptr [esp+0x1c]
        add     esp, 0x8
        test    eax, eax
        pop     edi
        pop     esi
        jz      lbl_614a5f
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_614a5f
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_614a5f:
        __emit 0x8B   /* __emit: MSVC6 drops the 00 disp byte for [esp+0] (encodes 8B 04 24); ref needs 8B 44 24 00 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        test    eax, eax
        jz      lbl_614a7a
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_614a7a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_614a7a:
        add     esp, 0x8
        ret     0x4
    }
}
