/*
 * FUN_005a0810 (435 B) — Door/lift joint animation update (add variant).
 * Similar to FUN_005a0650 but uses FADD instead of FSUBR.
 * Updates joint positions based on a time delta (double param).
 *
 * __thiscall (ECX = this), RET 8 (one double param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00419460(void *dst);
extern void __stdcall FUN_004daa20(void *param);

__declspec(naked) void __fastcall FUN_005a0810(int this)
{
    

extern int DAT_007f201c;
extern int DAT_0076c5b0;
extern int DAT_00783a64;
extern int DAT_00783a6c;
extern int DAT_00783a68;
__asm {
sub     esp, 0x30
        push    ebx
        mov     ebx, ecx

        mov     al, byte ptr [ebx + 0x55c]
        xor     ecx, ecx
        cmp     al, cl
        jz      done

        fld dword ptr [DAT_007f201c]

        fdivr   qword ptr [esp + 0x38]
        fadd    dword ptr [ebx + 0x540]

        fcom dword ptr [DAT_0076c5b0]

        fst     dword ptr [ebx + 0x540]

        fnstsw  ax
        test    ah, 1
        jz      check_max1
        fstp    st(0)
        mov     dword ptr [ebx + 0x540], ecx
        jmp     done_phase1

check_max1:
        fcomp dword ptr [DAT_00783a64]

        fnstsw  ax
        test    ah, 0x41
        jnz     done_phase1

        mov eax, dword ptr [DAT_00783a64]

        mov     dword ptr [ebx + 0x540], eax

done_phase1:
        fld dword ptr [DAT_00783a6c]

        fdivr   qword ptr [esp + 0x38]
        fadd    dword ptr [ebx + 0x544]

        fcom dword ptr [DAT_0076c5b0]

        fst     dword ptr [ebx + 0x544]

        fnstsw  ax
        test    ah, 1
        jz      check_max2
        fstp    st(0)
        jmp     store_phase2

check_max2:
        fcomp dword ptr [DAT_00783a68]

        fnstsw  ax
        test    ah, 0x41
        jnz     after_store2

        mov ecx, dword ptr [DAT_00783a68]

store_phase2:
        mov     dword ptr [ebx + 0x544], ecx

after_store2:
        push    esi
        mov     esi, dword ptr [ebx + 0x548]
        mov     edx, dword ptr [esi + 0xd8]
        push    edi
        add     edx, 0x50
        push    edx
        lea     ecx, [esp + 0x10]
        call    FUN_00419460

        fld     dword ptr [ebx + 0x560]
        fadd    dword ptr [ebx + 0x540]
        lea     eax, [esp + 0x0c]
        push    eax
        mov     ecx, esi
        fstp    dword ptr [esp + 0x1c]
        call    FUN_004daa20

        mov     eax, dword ptr [ebx + 0x54c]
        fld     dword ptr [ebx + 0x564]
        mov     esi, dword ptr [eax + 0xd8]
        fsub    dword ptr [ebx + 0x540]
        add     esi, 0x50
        mov     ecx, 0x0c
        lea     edi, [esp + 0x0c]
        rep movsd
        fstp    dword ptr [esp + 0x18]
        lea     ecx, [esp + 0x0c]
        push    ecx
        mov     ecx, eax
        call    FUN_004daa20

        mov     eax, dword ptr [ebx + 0x550]
        mov     esi, dword ptr [eax + 0xd8]
        fld     dword ptr [ebx + 0x568]
        fadd    dword ptr [ebx + 0x540]
        add     esi, 0x50
        mov     ecx, 0x0c
        lea     edi, [esp + 0x0c]
        rep movsd
        fstp    dword ptr [esp + 0x18]
        lea     edx, [esp + 0x0c]
        push    edx
        mov     ecx, eax
        call    FUN_004daa20

        mov     eax, dword ptr [ebx + 0x554]
        mov     esi, dword ptr [eax + 0xd8]
        fld     dword ptr [ebx + 0x56c]
        fsub    dword ptr [ebx + 0x540]
        add     esi, 0x50
        mov     ecx, 0x0c
        lea     edi, [esp + 0x0c]
        rep movsd
        fstp    dword ptr [esp + 0x18]
        lea     ecx, [esp + 0x0c]
        push    ecx
        mov     ecx, eax
        call    FUN_004daa20

        mov     eax, dword ptr [ebx + 0x558]
        mov     esi, dword ptr [eax + 0xd8]
        fld     dword ptr [ebx + 0x570]
        fsub    dword ptr [ebx + 0x544]
        add     esi, 0x50
        mov     ecx, 0x0c
        lea     edi, [esp + 0x0c]
        rep movsd
        fstp    dword ptr [esp + 0x28]
        lea     edx, [esp + 0x0c]
        push    edx
        mov     ecx, eax
        call    FUN_004daa20

        pop     edi
        pop     esi

done:
        pop     ebx
        add     esp, 0x30
        ret     8
    }


}
