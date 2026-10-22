/*
 * FUN_005fd320 (215 B) — __thiscall. Iterates a list of objects
 * (this+0x28c), refcounting each via FUN_00416b60/FUN_00416a90 and
 * freeing when the count drops to zero (FUN_004084e0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void FUN_005fd320(void)
{
    __asm {
        sub     esp, 0x14
        add     ecx, 0x28c
        push    esi
        push    ecx
        lea     ecx, [esp+8]
        call    FUN_00416bc0
        lea     ecx, [esp+4]
        mov     dword ptr [esp+4], 0x774218
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jz      L_3e7
        mov     eax, dword ptr [esp+0x1c]
        push    ebx
        push    ebp
        push    edi
        lea     ebp, [eax+0x58]
L_359:
        mov     edi, dword ptr [esi+0x44]
        mov     eax, edi
        test    eax, eax
        mov     dword ptr [esp+0x28], eax
        jz      L_369
        inc     byte ptr [eax-1]
L_369:
        lea     ecx, [esp+0x28]
        push    ecx
        mov     ecx, ebp
        call    FUN_00416b60
        mov     ebx, eax
        mov     eax, dword ptr [esp+0x28]
        neg     ebx
        sbb     bl, bl
        inc     bl
        test    eax, eax
        jz      L_398
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_398
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_398:
        test    bl, bl
        jz      L_3d1
        mov     eax, edi
        test    eax, eax
        mov     dword ptr [esp+0x28], eax
        jz      L_3a9
        inc     byte ptr [eax-1]
L_3a9:
        lea     edx, [esp+0x28]
        push    edx
        push    esi
        mov     ecx, ebp
        call    FUN_00416a90
        mov     eax, dword ptr [esp+0x28]
        test    eax, eax
        jz      L_3d1
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_3d1
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_3d1:
        lea     ecx, [esp+0x10]
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jnz     L_359
        pop     edi
        pop     ebp
        pop     ebx
L_3e7:
        lea     ecx, [esp+4]
        call    FUN_00416c60
        pop     esi
        add     esp, 0x14
        ret     4
    }
}
