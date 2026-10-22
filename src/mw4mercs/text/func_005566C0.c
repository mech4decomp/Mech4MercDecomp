/*
 * FUN_005566C0 (246 B) — Checks state flags and capability, calls
 * FUN_005BA2A0 for a float value, then conditionally updates a float
 * field at [obj+0x50] based on comparison.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_0061acf0(int);
extern int __stdcall FUN_0061ad20(int);
extern float __stdcall FUN_005ba2a0(void);
extern void __stdcall FUN_00559be0(int);
extern int __stdcall FUN_00629290(int);

__declspec(naked) void __stdcall FUN_005566C0(int param1)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x384]
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        jnz     loc_ret
        mov     al, byte ptr [edi + 0x589]
        test    al, al
        jnz     loc_ret
        mov     al, byte ptr [edi + 0x5ac]
        test    al, al
        jnz     loc_ret
        push    0x8000
        call    FUN_0061acf0
        mov     ecx, eax
        call    FUN_0061ad20
        test    al, al
        jz      loc_ret
        mov     ecx, dword ptr [esp + 0xC]
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jle     loc_ret
        mov     al, byte ptr [esi + 0x2F8]
        test    al, al
        jnz     loc_ret
        mov edx, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x40]
        xor     ecx, 0x85739531
        jz      loc_ret
        mov     esi, dword ptr [esi + 0x3D4]
        test    esi, esi
        jz      loc_ret
        mov     ecx, esi
        call    FUN_005ba2a0
        fstp dword ptr [esp+0xC]
        push    0xE
        mov     ecx, edi
        call    FUN_00559be0
        mov edx, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x40]
        push    0xC
        xor     ecx, 0x85739531
        call    FUN_00629290
        mov     edi, eax
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x64]
        test    eax, eax
        jnz     loc_ret
        fld     dword ptr [edi + 0x50]
        fcomp   dword ptr [esp + 0xC]
        fnstsw  ax
        test    ah, 0x40
        jz      loc_store
        mov     dword ptr [edi + 0x50], 0x43C80000
        pop     edi
        pop     esi
        ret     0x4
loc_store:
        mov     ecx, dword ptr [esp + 0xC]
        mov     dword ptr [edi + 0x50], ecx
loc_ret:
        pop     edi
        pop     esi
        ret     0x4
    }


}
