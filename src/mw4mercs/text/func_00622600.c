/*
 * FUN_00622600 (133 B) — __fastcall (ECX = param_1).
 *
 * If a global flag (via XOR-obfuscated pointer at 0x7DAB44/0x7DAB40) and
 * this+0x2EC are both set, compares a float and possibly updates a global
 * flag and this+0x2E8/0x2EC.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007dab44;
extern int DAT_007dab40;
extern float DAT_0078cf74;
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void __fastcall FUN_00622600(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [DAT_007dab40]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0xc]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx + 0x16]
        test    al, al
        jz      L_622682
        mov     al, byte ptr [esi + 0x2ec]
        test    al, al
        jz      L_622682
        fld     dword ptr [DAT_0078cf74]
        push    0x0
        fadd    dword ptr [esi + 0x2e8]
        fstp    dword ptr [esp + 0x8]
        call    FUN_00707e70
        fcomp   dword ptr [esp + 0x4]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_622682
        mov     eax, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x20]
        xor     edx, 0x85739531
        push    0x0
        mov     byte ptr [edx + 0x1b0], 0x1
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x2e8]
        mov     byte ptr [esi + 0x2ec], 0x0
L_622682:
        pop     esi
        pop     ecx
        ret
    }
}
