/*
 * FUN_005acdb0 (70 B) — __thiscall (ECX = this), returns AL.
 *
 * If this->0x60 != 0 and this->0x62 != 1: optionally call FUN_00559be0(8),
 * set this->0x62=1, add 0x0076de20 to this->0x74 (double), return 1.
 * Otherwise return 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00559be0(int param);

__declspec(naked) void __fastcall FUN_005acdb0(void)
{
    

extern int DAT_0076de20;
__asm {
push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x60]
        test    al, al
        jz      L_f2
        cmp     byte ptr [esi + 0x62], 1
        jz      L_f2
        mov     eax, dword ptr [esi + 0xa0]
        mov     ecx, dword ptr [eax + 0x3b0]
        test    ecx, ecx
        jz      L_de
        mov     al, byte ptr [esi + 0x10]
        test    al, al
        jnz     L_de
        push    8
        call    FUN_00559be0
L_de:
        fld     qword ptr [esi + 0x74]
        mov     byte ptr [esi + 0x62], 1
        fadd qword ptr [DAT_0076de20]
        mov     al, 1
        fstp    qword ptr [esi + 0x74]
        pop     esi
        ret
L_f2:
        xor     al, al
        pop     esi
        ret
    }


}
