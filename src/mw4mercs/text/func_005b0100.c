/*
 * FUN_005b0100 (319 B) — __thiscall (ECX = this). Updates a float state at
 * this+0x5F4 and dispatches four sub-object updates through FUN_004daa20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00419460(void *arg);
extern void __stdcall FUN_004daa20(void *arg);

__declspec(naked) void __fastcall FUN_005b0100(void *this)
{
    

extern int DAT_00785d44;
extern int DAT_0076c5b0;
extern int DAT_00785d40;
__asm {
sub     esp, 0x30
        push    ebx
        mov     ebx, ecx
        mov     al, byte ptr [ebx + 0x609]
        test    al, al
        jz      L0238
        fld dword ptr [DAT_00785d44]
        fdivr   qword ptr [esp + 0x38]
        fadd    dword ptr [ebx + 0x5F4]
        fcom dword ptr [DAT_0076c5b0]
        fst     dword ptr [ebx + 0x5F4]
        fnstsw  ax
        test    ah, 0x1
        jz      L0145
        fstp    st(0)
        mov     dword ptr [ebx + 0x5F4], 0
        jmp     L015D
L0145:
        fcomp dword ptr [DAT_00785d40]
        fnstsw  ax
        test    ah, 0x41
        jnz     L015D
        mov eax, dword ptr [DAT_00785d40]
        mov     dword ptr [ebx + 0x5F4], eax
L015D:
        push    esi
        mov     esi, dword ptr [ebx + 0x5F8]
        mov     ecx, dword ptr [esi + 0xD8]
        add     ecx, 0x50
        push    edi
        push    ecx
        lea     ecx, [esp + 0x10]
        call    FUN_00419460
        fld     dword ptr [ebx + 0x60C]
        fsub    dword ptr [ebx + 0x5F4]
        lea     edx, [esp + 0xC]
        push    edx
        mov     ecx, esi
        fstp    dword ptr [esp + 0x3C]
        call    FUN_004daa20
        mov     eax, dword ptr [ebx + 0x5FC]
        fld     dword ptr [ebx + 0x610]
        mov     esi, dword ptr [eax + 0xD8]
        fsub    dword ptr [ebx + 0x5F4]
        add     esi, 0x50
        mov     ecx, 0xC
        lea     edi, [esp + 0xC]
        rep     movsd
        fstp    dword ptr [esp + 0x38]
        lea     ecx, [esp + 0xC]
        push    ecx
        mov     ecx, eax
        call    FUN_004daa20
        mov     eax, dword ptr [ebx + 0x600]
        mov     esi, dword ptr [eax + 0xD8]
        fld     dword ptr [ebx + 0x614]
        fadd    dword ptr [ebx + 0x5F4]
        add     esi, 0x50
        mov     ecx, 0xC
        lea     edi, [esp + 0xC]
        rep     movsd
        fstp    dword ptr [esp + 0x38]
        lea     edx, [esp + 0xC]
        push    edx
        mov     ecx, eax
        call    FUN_004daa20
        mov     eax, dword ptr [ebx + 0x604]
        mov     esi, dword ptr [eax + 0xD8]
        fld     dword ptr [ebx + 0x618]
        fadd    dword ptr [ebx + 0x5F4]
        add     esi, 0x50
        mov     ecx, 0xC
        lea     edi, [esp + 0xC]
        rep     movsd
        fstp    dword ptr [esp + 0x38]
        lea     ecx, [esp + 0xC]
        push    ecx
        mov     ecx, eax
        call    FUN_004daa20
        pop     edi
        pop     esi
L0238:
        pop     ebx
        add     esp, 0x30
        ret     8
    }


}
