/*
 * FUN_005aab90 (143 B) — __thiscall, RET 4.
 *
 * Guarded update of this->0x17c (a countdown). Reads two globals
 * (0x007dab44 / 0x007dab40), XORs to form a pointer, checks a flag at
 * +0x17fc, then conditionally calls FUN_005f07c0 / FUN_00559be0 based on
 * a virtual method result, and finally decrements this->0x17c by the arg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005f07c0(void);
extern void __fastcall FUN_00559be0(void);

__declspec(naked) void FUN_005aab90(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        push    esi
        mov     esi, ecx
        mov     ecx, [eax]
        xor     ecx, edx
        mov     edx, [ecx + 0x14]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx + 0x17fc]
        test    al, al
        jz      L_done
        cmp     dword ptr [esi + 0x17c], -1
        jz      L_done
        mov     ecx, esi
        call    FUN_005f07c0
        mov     ecx, [eax + 0x3b0]
        test    ecx, ecx
        jz      L_abfd
        mov     eax, [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 0x4]
        mov     eax, [eax + 0x30]
        sub     eax, 0x84
        jz      L_abe9
        dec     eax
        jnz     L_abfd
        push    0x13
        jmp     L_abeb
L_abe9:
        push    0x12
L_abeb:
        mov     ecx, esi
        call    FUN_005f07c0
        mov     ecx, [eax + 0x3b0]
        call    FUN_00559be0
L_abfd:
        mov     eax, [esi + 0x17c]
        mov     ecx, [esp + 0x8]
        sub     eax, ecx
        mov     [esi + 0x17c], eax
        jns     L_done
        mov     dword ptr [esi + 0x17c], 0
L_done:
        pop     esi
        ret     0x4
    }


}
