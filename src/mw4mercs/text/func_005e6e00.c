/*
 * FUN_005e6e00 (340 B) — __thiscall method (RET 8, two stack params).
 *
 * ProjectileWeapon::ExecutionStateEngine update logic. Dispatches on the
 * state at [this+0xe0]+0x14 (6 or 7), performs FPU comparisons against
 * global constants, and calls several helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005ef720(void);
extern void FUN_005f07c0(void);
extern void FUN_00559be0(void);
extern void FUN_0041fd80(void);
extern void FUN_005bf9a0(void);
extern void FUN_004dad70(void);

__declspec(naked) void func_005e6e00(void)
{
    

extern int DAT_0076c5b0;
extern int DAT_00783768;
extern int DAT_0076d070;
__asm {
push    ecx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        push    edi
        call    dword ptr [eax + 4]
        mov     ecx, dword ptr [esi + 0xe0]
        mov     edi, eax
        mov     eax, dword ptr [ecx + 0x14]
        sub     eax, 6
        jz      loc_5E6F32
        dec     eax
        jnz     loc_5E6F3D

        fld     qword ptr [esp + 0x10]
        fsub    qword ptr [esi + 0xec]
        fsubr   dword ptr [edi + 0x6c]
        fst     dword ptr [esp + 8]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      loc_5E6E4F
        mov     dword ptr [esp + 8], 0

loc_5E6E4F:
        mov     edx, dword ptr [esp + 8]
        push    edx
        mov     ecx, esi
        call    FUN_005ef720
        fld     dword ptr [edi + 0x6c]
        fcomp dword ptr [DAT_00783768]
        fnstsw  ax
        test    ah, 0x41
        jnz     loc_5E6EE3
        mov     al, byte ptr [esi + 0x180]
        test    al, al
        jnz     loc_5E6EE3
        fld     qword ptr [esp + 0x10]
        fsub    qword ptr [esi + 0xec]
        fld     dword ptr [edi + 0x6c]
        fsub dword ptr [DAT_0076d070]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jz      loc_5E6EE3
        mov     ecx, esi
        call    FUN_005f07c0
        test    eax, eax
        jz      loc_5E6EDC
        mov     ecx, esi
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0x3b0]
        test    ecx, ecx
        jz      loc_5E6EDC
        mov     eax, dword ptr [edi + 0x30]
        cmp     eax, 0x10
        jz      loc_5E6EC8
        cmp     eax, 0xf
        jz      loc_5E6EC8
        cmp     eax, 0x79
        jz      loc_5E6EDC
        cmp     eax, 0x7a
        jz      loc_5E6EDC
        push    0x25
        jmp     loc_5E6ECA

loc_5E6EC8:
        push    0x26

loc_5E6ECA:
        mov     ecx, esi
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0x3b0]
        call    FUN_00559be0

loc_5E6EDC:
        mov     byte ptr [esi + 0x180], 1

loc_5E6EE3:
        fld     qword ptr [esp + 0x10]
        fsub    qword ptr [esi + 0xec]
        fcomp   dword ptr [edi + 0x6c]
        fnstsw  ax
        test    ah, 0x41
        jnz     loc_5E6F2C
        mov     ecx, dword ptr [esi + 0xe0]
        mov     eax, dword ptr [ecx]
        push    0
        push    1
        call    dword ptr [eax + 4]
        lea     edi, [esi + 0x1a4]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      loc_5E6F25
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, eax
        call    FUN_005bf9a0

loc_5E6F25:
        mov     byte ptr [esi + 0x180], 0

loc_5E6F2C:
        and     dword ptr [esi + 0x10], 0xffffffbf
        jmp     loc_5E6F3D

loc_5E6F32:
        or      dword ptr [esi + 0x10], 0x40
        mov     byte ptr [esi + 0x180], 0

loc_5E6F3D:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_004dad70
        pop     edi
        pop     esi
        pop     ecx
        ret     8
    }


}
