/*
 * FUN_00532120 (900 B) — Decal texture path resolution function
 * Called with __thiscall (ECX = this pointer).
 * Resolves a decal index to a full texture path string.
 * Handles stock decals (index < 0x42) and custom decals.
 * Returns pointer to a static buffer (0x007DD310) with the path.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00532120(void)
{
    

extern int DAT_0076b420;
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004129C0(void);
extern void __cdecl FUN_100412540(void);
extern void __cdecl FUN_100412742(void);
extern void __cdecl FUN_10041258f(void);
extern void __cdecl FUN_1004126e5(void);
extern void __cdecl FUN_10040d94c(void);
extern void __cdecl FUN_10040d943(void);
extern void __cdecl FUN_100416ade(void);
extern void __cdecl FUN_1004124e1(void);
extern void __cdecl FUN_10041268b(void);
extern void __cdecl FUN_100412802(void);
extern int DAT_0076b298;
extern void __cdecl FUN_1004128b7(void);
extern void __cdecl FUN_10041283e(void);
extern void __cdecl FUN_100412660(void);
extern void __cdecl FUN_1004124ad(void);
extern void __cdecl FUN_100412603(void);
extern void __cdecl FUN_10040d86a(void);
extern void __cdecl FUN_100412860(void);
extern void __cdecl FUN_1004127e7(void);
extern void __cdecl FUN_100412609(void);
extern void __cdecl FUN_100412456(void);
extern void __cdecl FUN_1004125ac(void);
extern void __cdecl FUN_10040d813(void);
extern void __cdecl FUN_10040d80a(void);
extern void __cdecl FUN_10040d801(void);
extern void __cdecl FUN_100412710(void);
extern void __cdecl FUN_1004127c1(void);
extern void __cdecl FUN_100412748(void);
extern void __cdecl FUN_10041256a(void);
extern void __cdecl FUN_1004123b7(void);
extern void __cdecl FUN_10041250d(void);
extern void __cdecl FUN_100408295(void);
extern void __cdecl FUN_1004126c9(void);
extern void __cdecl FUN_1004124eb(void);
extern void __cdecl FUN_100412338(void);
extern void __cdecl FUN_10041248e(void);
extern void __cdecl FUN_100408216(void);
extern void __cdecl FUN_1004081fb(void);
extern void __cdecl FUN_1004081e0(void);
extern void __cdecl FUN_10041246d(void);
extern void __cdecl FUN_1004081b5(void);
extern void __cdecl FUN_100408174(void);
__asm {
sub     esp, 0x18
        mov     eax, dword ptr [esp + 0x1C]
        cmp     eax, 0x42
        push    esi
        push    edi
        mov     esi, ecx
        mov     dword ptr [esp + 0x08], 0x00000000
        jge     ge_42

        push    eax
        lea     eax, [esp + 0x1C]
        push    0x0077B35C
        push    eax
        call dword ptr [DAT_0076b420]
        add     esp, 0x0C
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [esp + 0x18]
        call FUN_100412540
        push    0x0077B348
        lea     ecx, [esp + 0x0C]
        call FUN_00412780
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x08]
        push    edx
        push    eax
        lea     ecx, [esp + 0x18]
        call FUN_10041258f
        push    eax
        lea     ecx, [esp + 0x0C]
        call FUN_1004126e5
        lea     ecx, [esp + 0x10]
        call FUN_10040d94c
        lea     ecx, [esp + 0x14]
        call FUN_10040d943
        jmp     final_path_copy

ge_42:
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     ecx, [esi + 0xD8]
        call FUN_100416ade
        push    0x00
        lea     ecx, [esp + 0x10]
        mov     edi, eax
        call FUN_1004124e1
        mov     edx, dword ptr [esi + 0xA0]
        mov     ecx, dword ptr [esi + 0x9C]
        mov     eax, dword ptr [esp + 0x24]
        sub     edx, ecx
        sar     edx, 0x02
        cmp     eax, edx
        jnc     skip_index_lookup
        lea     edx, [ecx + eax*4]
        push    edx
        lea     ecx, [esp + 0x10]
        call FUN_10041268b

skip_index_lookup:
        test    edi, edi
        jz      no_custom_decal

        mov     esi, dword ptr [edi + 0x18]
        test    esi, esi
        jz      no_custom_decal

        mov     eax, esi
        test    eax, eax
        mov     dword ptr [esp + 0x14], eax
        jz      skip_ref1
        inc     byte ptr [eax - 0x01]

skip_ref1:
        lea     ecx, [esp + 0x14]
        call FUN_100412802
        mov     eax, dword ptr [esp + 0x14]
        push    0x0077B330
        push    eax
        call dword ptr [DAT_0076b298]
        add     esp, 0x08
        test    eax, eax
        jz      no_transfer_prefix

        test    esi, esi
        mov     dword ptr [esp + 0x10], esi
        jz      skip_ref2
        inc     byte ptr [esi - 0x01]

skip_ref2:
        lea     ecx, [esp + 0x10]
        call FUN_1004128b7
        lea     ecx, [esp + 0x10]
        call FUN_10041283e
        push    0x0077B330
        lea     ecx, [esp + 0x0C]
        call FUN_100412660
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x08]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x20]
        call FUN_1004124ad
        push    eax
        lea     ecx, [esp + 0x0C]
        call FUN_100412603
        lea     ecx, [esp + 0x18]
        call FUN_10040d86a
        lea     ecx, [esp + 0x10]
        jmp     cleanup_after_transfer

no_transfer_prefix:
        test    esi, esi
        mov     dword ptr [esp + 0x10], esi
        jz      skip_ref3
        inc     byte ptr [esi - 0x01]

skip_ref3:
        lea     ecx, [esp + 0x10]
        call FUN_100412860
        lea     ecx, [esp + 0x10]
        call FUN_1004127e7
        push    0x0077B320
        lea     ecx, [esp + 0x0C]
        call FUN_100412609
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x08]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x20]
        call FUN_100412456
        push    eax
        lea     ecx, [esp + 0x0C]
        call FUN_1004125ac
        lea     ecx, [esp + 0x18]
        call FUN_10040d813
        lea     ecx, [esp + 0x10]

cleanup_after_transfer:
        call FUN_10040d80a
        lea     ecx, [esp + 0x14]
        call FUN_10040d801
        jmp     done_custom_decal

no_custom_decal:
        mov     eax, dword ptr [esp + 0x0C]
        test    eax, eax
        jz      use_default_decal

        mov     dword ptr [esp + 0x14], eax
        inc     byte ptr [eax - 0x01]
        lea     ecx, [esp + 0x14]
        call FUN_100412710
        mov     edx, dword ptr [esp + 0x14]
        push    0x0077B330
        push    edx
        call dword ptr [DAT_0076b298]
        add     esp, 0x08
        test    eax, eax
        mov     eax, dword ptr [esp + 0x0C]
        jz      no_custom_transfer

        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        jz      skip_ref4
        inc     byte ptr [eax - 0x01]

skip_ref4:
        lea     ecx, [esp + 0x10]
        call FUN_1004127c1
        lea     ecx, [esp + 0x10]
        call FUN_100412748
        push    0x0077B330
        lea     ecx, [esp + 0x0C]
        call FUN_00412780
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x08]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x20]
        call FUN_1004123b7
        push    eax
        lea     ecx, [esp + 0x0C]
        call FUN_10041250d
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      skip_free_a
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free_a
        push    eax
        call FUN_100408295
        add     esp, 0x04

skip_free_a:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      skip_free_b
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free_b
        jmp     do_free_b

no_custom_transfer:
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        jz      skip_ref5
        inc     byte ptr [eax - 0x01]

skip_ref5:
        lea     ecx, [esp + 0x10]
        call FUN_004129C0
        lea     ecx, [esp + 0x10]
        call FUN_1004126c9
        push    0x0077B320
        lea     ecx, [esp + 0x0C]
        call FUN_1004124eb
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x08]
        push    edx
        push    eax
        lea     ecx, [esp + 0x20]
        call FUN_100412338
        push    eax
        lea     ecx, [esp + 0x0C]
        call FUN_10041248e
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      skip_free_c
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free_c
        push    eax
        call FUN_100408216
        add     esp, 0x04

skip_free_c:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      skip_free_b
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free_b

do_free_b:
        push    eax
        call FUN_1004081fb
        add     esp, 0x04

skip_free_b:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      done_custom_decal
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     done_custom_decal
        push    eax
        call FUN_1004081e0
        add     esp, 0x04
        jmp     done_custom_decal

use_default_decal:
        push    0x0077B308
        lea     ecx, [esp + 0x0C]
        call FUN_10041246d

done_custom_decal:
        mov     eax, dword ptr [esp + 0x0C]
        test    eax, eax
        jz      final_path_copy
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     final_path_copy
        push    eax
        call FUN_1004081b5
        add     esp, 0x04

final_path_copy:
        mov     edx, dword ptr [esp + 0x08]
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x02
        mov     edi, 0x007DD310
        rep movsd
        mov     ecx, eax
        and     ecx, 0x03
        test    edx, edx
        rep movsb
        pop     edi
        pop     esi
        jz      skip_final_free
        mov     cl, byte ptr [edx - 0x01]
        lea     eax, [edx - 0x01]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_final_free
        push    eax
        call FUN_100408174
        add     esp, 0x04

skip_final_free:
        mov     eax, 0x007DD310
        add     esp, 0x18
        ret     0x04
    }


}
